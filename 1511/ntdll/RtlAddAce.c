/*
 * XREFs of RtlAddAce @ 0x180065620
 * Callers:
 *     RtlCreateAndSetSD @ 0x180065340 (RtlCreateAndSetSD.c)
 * Callees:
 *     RtlFirstFreeAce @ 0x180019670 (RtlFirstFreeAce.c)
 *     RtlValidAcl @ 0x1800196D0 (RtlValidAcl.c)
 */

NTSTATUS __cdecl RtlAddAce(PACL Acl, ULONG AceRevision, ULONG StartingAceIndex, PVOID AceList, ULONG AceListLength)
{
  unsigned __int8 AclRevision; // r15
  char *v10; // rcx
  __int64 v11; // r11
  __int16 v12; // r12
  char *v13; // rdx
  unsigned __int8 v14; // al
  ULONG v15; // ecx
  PACL i; // rdx
  int v17; // r8d
  __int64 v18; // r10
  char *v19; // rsi
  NTSTATUS result; // eax
  __int64 v21; // r9
  bool v22; // cf
  PVOID FirstFree; // [rsp+20h] [rbp-28h] BYREF

  if ( !RtlValidAcl(Acl) || !RtlFirstFreeAce(Acl, &FirstFree) )
    return -1073741811;
  AclRevision = Acl->AclRevision;
  v10 = (char *)AceList;
  v11 = AceListLength;
  if ( (unsigned __int8)AceRevision > Acl->AclRevision )
    AclRevision = AceRevision;
  v12 = 0;
  v13 = (char *)AceList + AceListLength;
  if ( AceList < v13 )
  {
    do
    {
      v14 = *v10;
      if ( (unsigned __int8)*v10 > 3u )
      {
        if ( v14 <= 4u )
        {
          v22 = AceRevision < 3;
        }
        else
        {
          if ( v14 > 8u )
            goto LABEL_7;
          v22 = AceRevision < 4;
        }
        if ( v22 )
          return -1073741811;
      }
LABEL_7:
      ++v12;
      v10 += *((unsigned __int16 *)v10 + 1);
    }
    while ( v10 < v13 );
  }
  if ( v10 > v13 )
    return -1073741811;
  if ( !FirstFree || (char *)FirstFree + AceListLength > (char *)Acl + Acl->AclSize )
    return -1073741789;
  v15 = 0;
  for ( i = Acl + 1; v15 < StartingAceIndex; i = (PACL)((char *)i + i->AclSize) )
  {
    if ( v15 >= Acl->AceCount )
      break;
    ++v15;
  }
  v17 = (_DWORD)FirstFree - (_DWORD)i - 1;
  v18 = v17;
  if ( v17 >= 0 )
  {
    v21 = v17 + AceListLength;
    do
    {
      *(&i->AclRevision + v21) = *(&i->AclRevision + v18);
      v21 = (unsigned int)(v21 - 1);
      --v18;
    }
    while ( v18 >= 0 );
  }
  if ( AceListLength )
  {
    v19 = (char *)((_BYTE *)AceList - (_BYTE *)i);
    do
    {
      i->AclRevision = *(&i->AclRevision + (_QWORD)v19);
      i = (PACL)((char *)i + 1);
      --v11;
    }
    while ( v11 );
  }
  Acl->AceCount += v12;
  result = 0;
  Acl->AclRevision = AclRevision;
  return result;
}

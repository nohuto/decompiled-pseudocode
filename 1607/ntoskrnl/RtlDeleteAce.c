/*
 * XREFs of RtlDeleteAce @ 0x14047C02C
 * Callers:
 *     SepRemoveAceFromTokenDefaultDacl @ 0x140080AD4 (SepRemoveAceFromTokenDefaultDacl.c)
 * Callees:
 *     memset @ 0x140171AC0 (memset.c)
 *     RtlFirstFreeAce @ 0x14041F930 (RtlFirstFreeAce.c)
 *     RtlValidAcl @ 0x140420800 (RtlValidAcl.c)
 */

NTSTATUS __stdcall RtlDeleteAce(PACL Acl, ULONG AceIndex)
{
  PACL v4; // rdx
  __int64 v5; // rcx
  __int64 AclSize; // r9
  unsigned int v7; // r10d
  unsigned int v8; // r8d
  UCHAR *v10; // r11
  UCHAR v11; // al
  __int64 v12; // rcx
  PACE Ace; // [rsp+40h] [rbp+18h] BYREF

  if ( !RtlValidAcl(Acl) || AceIndex >= Acl->AceCount || !RtlFirstFreeAce(Acl, &Ace) )
    return -1073741811;
  v4 = Acl + 1;
  if ( AceIndex )
  {
    v5 = AceIndex;
    do
    {
      v4 = (PACL)((char *)v4 + v4->AclSize);
      --v5;
    }
    while ( v5 );
  }
  AclSize = v4->AclSize;
  v7 = v4->AclSize;
  v8 = (_DWORD)Ace - (_DWORD)v4;
  if ( (unsigned int)AclSize < (int)Ace - (int)v4 )
  {
    v10 = (UCHAR *)v4 + AclSize;
    do
    {
      v11 = *v10;
      v12 = v7 - (unsigned int)AclSize;
      ++v7;
      ++v10;
      *(&v4->AclRevision + v12) = v11;
    }
    while ( v7 < v8 );
  }
  if ( v8 >= (unsigned int)AclSize )
    memset((char *)v4 + v8 - (unsigned int)AclSize, 0, (unsigned int)AclSize);
  --Acl->AceCount;
  return 0;
}

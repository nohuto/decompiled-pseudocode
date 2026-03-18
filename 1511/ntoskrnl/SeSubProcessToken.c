/*
 * XREFs of SeSubProcessToken @ 0x14044C430
 * Callers:
 *     PspInitializeProcessSecurity @ 0x14044F884 (PspInitializeProcessSecurity.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     SepDeleteAccessState @ 0x1400432D0 (SepDeleteAccessState.c)
 *     SepCreateAccessStateFromSubjectContext @ 0x140043450 (SepCreateAccessStateFromSubjectContext.c)
 *     SepMandatorySubProcessToken @ 0x140092DB0 (SepMandatorySubProcessToken.c)
 *     SepSetTrustLevelForProcessToken @ 0x140092F38 (SepSetTrustLevelForProcessToken.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     SepSetTokenLowboxNumber @ 0x1403BED94 (SepSetTokenLowboxNumber.c)
 *     SepSetProcessUniqueAttribute @ 0x1403C5684 (SepSetProcessUniqueAttribute.c)
 *     SepDereferenceLowBoxNumberEntry @ 0x1403C91FC (SepDereferenceLowBoxNumberEntry.c)
 *     SepAppendAceToTokenObjectAcl @ 0x140420AE0 (SepAppendAceToTokenObjectAcl.c)
 *     SeDeleteAccessState @ 0x140435480 (SeDeleteAccessState.c)
 *     ObInsertObject @ 0x14044E94C (ObInsertObject.c)
 *     SeCreateAccessState @ 0x1404704A0 (SeCreateAccessState.c)
 *     SeSinglePrivilegeCheck @ 0x140471360 (SeSinglePrivilegeCheck.c)
 *     SepDuplicateToken @ 0x140477C00 (SepDuplicateToken.c)
 *     SepSetTokenSessionById @ 0x140653D2C (SepSetTokenSessionById.c)
 */

__int64 __fastcall SeSubProcessToken(__int64 a1, _DWORD *a2, _QWORD *a3, char a4, int a5, char a6, char *a7)
{
  _DWORD *v9; // r14
  char v10; // r12
  KPROCESSOR_MODE PreviousMode; // dl
  int inserted; // edi
  _QWORD *v13; // rbx
  unsigned int v14; // ecx
  int v15; // esi
  _QWORD *v16; // rax
  char *v17; // rcx
  char v19[8]; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v20; // [rsp+48h] [rbp-B8h] BYREF
  PVOID Object; // [rsp+50h] [rbp-B0h] BYREF
  char *v22; // [rsp+58h] [rbp-A8h]
  _QWORD *v23; // [rsp+60h] [rbp-A0h]
  __int128 v24; // [rsp+68h] [rbp-98h] BYREF
  _QWORD *v25; // [rsp+78h] [rbp-88h]
  struct _LIST_ENTRY *Blink; // [rsp+80h] [rbp-80h]
  int v27; // [rsp+88h] [rbp-78h] BYREF
  __int64 v28; // [rsp+90h] [rbp-70h]
  __int64 v29; // [rsp+98h] [rbp-68h]
  int v30; // [rsp+A0h] [rbp-60h]
  __int128 v31; // [rsp+A8h] [rbp-58h]
  struct _ACCESS_STATE PassedAccessState; // [rsp+C0h] [rbp-40h] BYREF
  _QWORD v33[28]; // [rsp+160h] [rbp+60h] BYREF

  v23 = a3;
  *a3 = 0LL;
  v9 = a2;
  v22 = a7;
  v19[0] = 0;
  v10 = 0;
  v20 = 0LL;
  *a7 = 0;
  if ( (a2[50] & 0x80000) != 0 )
  {
    PreviousMode = KeGetCurrentThread()->PreviousMode;
    if ( (a6 & 2) == 0 || !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
      return (unsigned int)-1073741790;
  }
  v27 = 48;
  v28 = 0LL;
  v30 = 0;
  v29 = 0LL;
  v31 = 0LL;
  inserted = SepDuplicateToken((_DWORD)v9, (unsigned int)&v27, 0, 1, 0, 0, 1, (__int64)&Object);
  if ( inserted < 0 )
    goto LABEL_6;
  v13 = Object;
  if ( (*((_DWORD *)Object + 50) & 0x4000) != 0 )
  {
    v14 = *((_DWORD *)Object + 30);
    if ( v14 != a5 )
    {
      SepDereferenceLowBoxNumberEntry(v14, *((_QWORD *)Object + 135));
      v13[135] = 0LL;
      SepSetTokenSessionById((_DWORD)v13, a5, 0, 0, 0LL);
      inserted = SepSetTokenLowboxNumber((__int64)v13, v13[98]);
      if ( inserted < 0 )
        goto LABEL_28;
    }
  }
  SepSetTokenSessionById((_DWORD)v13, a5, 0, 0, 0LL);
  if ( (a6 & 1) != 0 )
    *((_DWORD *)v13 + 50) |= 0x80000u;
  if ( (a4 & 2) != 0 )
  {
    v15 = 1;
  }
  else
  {
    v15 = 0;
    v9 = 0LL;
  }
  inserted = SepMandatorySubProcessToken(v9, (__int64)v13, a1, &v20);
  if ( inserted < 0 )
    goto LABEL_28;
  inserted = SepSetTrustLevelForProcessToken((__int64)v13, a1, v19);
  if ( inserted < 0 )
    goto LABEL_28;
  if ( (SepTokenSingletonAttributesConfig & 3) == 3 )
  {
    inserted = SepSetProcessUniqueAttribute((__int64)v13);
    if ( inserted < 0 )
      goto LABEL_28;
  }
  if ( !v15 || v20 )
    v19[0] = 1;
  if ( v19[0] )
  {
    v25 = v13;
    *(_QWORD *)&v24 = 0LL;
    DWORD2(v24) = 0;
    Blink = KeGetCurrentThread()->ApcState.Process[1].Header.WaitListHead.Blink;
    SepCreateAccessStateFromSubjectContext(&v24, &PassedAccessState, v33, 0, 0LL);
    v13 = Object;
  }
  else
  {
    SeCreateAccessState(&PassedAccessState, v33, 0LL, 0LL);
  }
  v10 = 1;
  inserted = ObInsertObject(v13, &PassedAccessState, 0, 0, 0LL, 0LL);
  if ( inserted < 0 )
  {
LABEL_6:
    v13 = 0LL;
  }
  else
  {
    SepAppendAceToTokenObjectAcl((__int64)v13, 8, SeAliasAdminsSid);
    v16 = v23;
    v17 = v22;
    *((_BYTE *)v13 + 204) = a4 & 1;
    *v16 = v13;
    *v17 = v19[0];
  }
  if ( inserted < 0 )
  {
LABEL_28:
    if ( v13 )
      ObfDereferenceObject(v13);
  }
  if ( v10 )
  {
    if ( v19[0] )
      SepDeleteAccessState((__int64)&PassedAccessState);
    else
      SeDeleteAccessState((struct _SECURITY_SUBJECT_CONTEXT *)&PassedAccessState);
  }
  return (unsigned int)inserted;
}

/*
 * XREFs of SeSubProcessToken @ 0x14046A560
 * Callers:
 *     PspInitializeProcessSecurity @ 0x14046A2E8 (PspInitializeProcessSecurity.c)
 * Callees:
 *     SepMandatorySubProcessToken @ 0x14002B81C (SepMandatorySubProcessToken.c)
 *     SepSetTrustLevelForProcessToken @ 0x14002B9A4 (SepSetTrustLevelForProcessToken.c)
 *     SepDeleteAccessState @ 0x14004E240 (SepDeleteAccessState.c)
 *     SepCreateAccessStateFromSubjectContext @ 0x14004E2C0 (SepCreateAccessStateFromSubjectContext.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     SepSetTokenLowboxNumber @ 0x140411728 (SepSetTokenLowboxNumber.c)
 *     SepDuplicateToken @ 0x140435D60 (SepDuplicateToken.c)
 *     SepSetProcessUniqueAttribute @ 0x14046A840 (SepSetProcessUniqueAttribute.c)
 *     ObInsertObject @ 0x140471094 (ObInsertObject.c)
 *     SeDeleteAccessState @ 0x1404CDBC4 (SeDeleteAccessState.c)
 *     SeCreateAccessState @ 0x1404CDC7C (SeCreateAccessState.c)
 *     SepAppendAceToTokenObjectAcl @ 0x1404CF990 (SepAppendAceToTokenObjectAcl.c)
 *     SepDereferenceLowBoxNumberEntry @ 0x140528180 (SepDereferenceLowBoxNumberEntry.c)
 *     SepSetTokenSessionById @ 0x1406D5BD8 (SepSetTokenSessionById.c)
 */

__int64 __fastcall SeSubProcessToken(__int64 a1, __int64 a2, __int64 **a3, char a4, int a5, char *a6)
{
  _DWORD *v6; // r12
  char v8; // si
  char v9; // r13
  int inserted; // edi
  __int64 *v11; // rbx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  int v15; // r14d
  __int64 **v16; // rax
  char v18[8]; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v19; // [rsp+48h] [rbp-B8h]
  __int64 v20; // [rsp+50h] [rbp-B0h] BYREF
  PVOID Object; // [rsp+58h] [rbp-A8h] BYREF
  __int64 **v22; // [rsp+60h] [rbp-A0h]
  char *v23; // [rsp+68h] [rbp-98h]
  __int128 v24; // [rsp+70h] [rbp-90h] BYREF
  __int64 *v25; // [rsp+80h] [rbp-80h]
  struct _LIST_ENTRY *Blink; // [rsp+88h] [rbp-78h]
  int v27; // [rsp+90h] [rbp-70h] BYREF
  __int64 v28; // [rsp+98h] [rbp-68h]
  __int64 v29; // [rsp+A0h] [rbp-60h]
  int v30; // [rsp+A8h] [rbp-58h]
  __int128 v31; // [rsp+B0h] [rbp-50h]
  struct _ACCESS_STATE PassedAccessState; // [rsp+C0h] [rbp-40h] BYREF
  _QWORD v33[28]; // [rsp+160h] [rbp+60h] BYREF

  v19 = a1;
  v6 = (_DWORD *)a2;
  *a3 = 0LL;
  v22 = a3;
  *a6 = 0;
  v23 = a6;
  v8 = 0;
  v18[0] = 0;
  v9 = 0;
  v20 = 0LL;
  v27 = 48;
  v28 = 0LL;
  v30 = 0;
  v29 = 0LL;
  v31 = 0LL;
  inserted = SepDuplicateToken(a2, (int)&v27, 0, 1, 0, 0, 1, &Object);
  if ( inserted < 0 )
    goto LABEL_2;
  v11 = (__int64 *)Object;
  if ( (*((_DWORD *)Object + 50) & 0x4000) == 0
    || (v12 = *((unsigned int *)Object + 30), (_DWORD)v12 == a5)
    || (SepDereferenceLowBoxNumberEntry(v12, *((_QWORD *)Object + 135)),
        v11[135] = 0LL,
        SepSetTokenSessionById((_DWORD)v11, a5, 0, 0LL),
        inserted = SepSetTokenLowboxNumber((__int64)v11, v11[98], v13, v14),
        inserted >= 0) )
  {
    SepSetTokenSessionById((_DWORD)v11, a5, 0, 0LL);
    if ( (a4 & 2) != 0 )
    {
      v15 = 1;
    }
    else
    {
      v15 = 0;
      v6 = 0LL;
    }
    inserted = SepMandatorySubProcessToken(v6, (__int64)v11, v19, &v20);
    if ( inserted >= 0 )
    {
      inserted = SepSetTrustLevelForProcessToken((__int64)v11, v19, v18);
      if ( inserted >= 0 )
      {
        if ( (SepTokenSingletonAttributesConfig & 3) != 3
          || (inserted = SepSetProcessUniqueAttribute(v11), inserted >= 0) )
        {
          if ( !v15 || v20 )
          {
            v8 = 1;
            v18[0] = 1;
          }
          else
          {
            v8 = v18[0];
          }
          if ( v8 )
          {
            v25 = v11;
            *(_QWORD *)&v24 = 0LL;
            DWORD2(v24) = 0;
            Blink = KeGetCurrentThread()->ApcState.Process[1].Header.WaitListHead.Blink;
            SepCreateAccessStateFromSubjectContext(&v24, &PassedAccessState, v33, 0, 0LL);
            v8 = v18[0];
            v11 = (__int64 *)Object;
          }
          else
          {
            SeCreateAccessState(&PassedAccessState, v33, 0LL, 0LL);
          }
          v9 = 1;
          inserted = ObInsertObject(v11, &PassedAccessState, 0, 0, 0LL, 0LL);
          if ( inserted >= 0 )
          {
            SepAppendAceToTokenObjectAcl(v11, 8LL, SeAliasAdminsSid);
            v16 = v22;
            *((_BYTE *)v11 + 204) = a4 & 1;
            *v16 = v11;
            *v23 = v8;
LABEL_22:
            if ( inserted >= 0 )
              goto LABEL_27;
            goto LABEL_25;
          }
LABEL_2:
          v11 = 0LL;
          goto LABEL_22;
        }
      }
      v8 = v18[0];
    }
  }
LABEL_25:
  if ( v11 )
    ObfDereferenceObject(v11);
LABEL_27:
  if ( v9 )
  {
    if ( v8 )
      SepDeleteAccessState((__int64)&PassedAccessState);
    else
      SeDeleteAccessState(&PassedAccessState);
  }
  return (unsigned int)inserted;
}

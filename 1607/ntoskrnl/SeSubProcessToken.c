/*
 * XREFs of SeSubProcessToken @ 0x14046D918
 * Callers:
 *     PspInitializeProcessSecurity @ 0x1404711C8 (PspInitializeProcessSecurity.c)
 * Callees:
 *     ObFastDereferenceObject @ 0x14000F210 (ObFastDereferenceObject.c)
 *     SepDeleteAccessState @ 0x14000F260 (SepDeleteAccessState.c)
 *     SepCreateAccessStateFromSubjectContext @ 0x14000F3E0 (SepCreateAccessStateFromSubjectContext.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     SeTokenIsNoChildProcessRestricted @ 0x14007BFAC (SeTokenIsNoChildProcessRestricted.c)
 *     SepDesktopAppxSubProcessToken @ 0x14007BFB8 (SepDesktopAppxSubProcessToken.c)
 *     SepMandatorySubProcessToken @ 0x14007C0DC (SepMandatorySubProcessToken.c)
 *     SepSetTrustLevelForProcessToken @ 0x14007C264 (SepSetTrustLevelForProcessToken.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     SepSetTokenAllApplicationPackagesPolicy @ 0x14021A57C (SepSetTokenAllApplicationPackagesPolicy.c)
 *     SeDeleteAccessState @ 0x140404CC8 (SeDeleteAccessState.c)
 *     SeCreateAccessState @ 0x140405270 (SeCreateAccessState.c)
 *     SepAppendAceToTokenObjectAcl @ 0x140405960 (SepAppendAceToTokenObjectAcl.c)
 *     PsReferenceEffectiveToken @ 0x140411380 (PsReferenceEffectiveToken.c)
 *     SepDuplicateToken @ 0x140411A90 (SepDuplicateToken.c)
 *     SepSetProcessUniqueAttribute @ 0x14046D098 (SepSetProcessUniqueAttribute.c)
 *     ObInsertObject @ 0x1404702F4 (ObInsertObject.c)
 *     SepSetTokenLowboxNumber @ 0x140475934 (SepSetTokenLowboxNumber.c)
 *     SepDereferenceLowBoxNumberEntry @ 0x14051AB98 (SepDereferenceLowBoxNumberEntry.c)
 *     SepAddTokenOriginClaim @ 0x140692CFC (SepAddTokenOriginClaim.c)
 *     SepSetTokenSessionById @ 0x140693194 (SepSetTokenSessionById.c)
 */

__int64 __fastcall SeSubProcessToken(
        __int64 a1,
        __int64 a2,
        _QWORD *a3,
        int a4,
        int a5,
        int *a6,
        unsigned int a7,
        __int64 a8,
        unsigned int a9,
        __int64 a10)
{
  _DWORD *v10; // rbx
  int inserted; // edi
  void *v14; // rax
  void *v15; // rdx
  char v16; // si
  __int64 v17; // rcx
  int v18; // r8d
  char v19; // r14
  int v20; // esi
  _KPROCESS *Process; // rcx
  _QWORD *v22; // rax
  char v24; // [rsp+41h] [rbp-BFh] BYREF
  char v25; // [rsp+42h] [rbp-BEh] BYREF
  _BYTE v26[9]; // [rsp+43h] [rbp-BDh] BYREF
  int v27; // [rsp+4Ch] [rbp-B4h] BYREF
  int v28; // [rsp+50h] [rbp-B0h]
  __int64 v29; // [rsp+58h] [rbp-A8h] BYREF
  PVOID Object; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD *v31; // [rsp+68h] [rbp-98h]
  __int128 v32; // [rsp+70h] [rbp-90h] BYREF
  _DWORD *v33; // [rsp+80h] [rbp-80h]
  struct _LIST_ENTRY *Blink; // [rsp+88h] [rbp-78h]
  int v35; // [rsp+90h] [rbp-70h] BYREF
  __int64 v36; // [rsp+98h] [rbp-68h]
  __int64 v37; // [rsp+A0h] [rbp-60h]
  int v38; // [rsp+A8h] [rbp-58h]
  __int128 v39; // [rsp+B0h] [rbp-50h]
  struct _ACCESS_STATE PassedAccessState; // [rsp+C0h] [rbp-40h] BYREF
  _QWORD v41[28]; // [rsp+160h] [rbp+60h] BYREF

  v10 = 0LL;
  *a3 = 0LL;
  v28 = a4;
  v31 = a3;
  *(_WORD *)a10 = 0;
  *(_BYTE *)(a10 + 2) = 0;
  v24 = 0;
  v25 = 0;
  v26[0] = 0;
  v29 = 0LL;
  if ( SeTokenIsNoChildProcessRestricted(a2) )
  {
    inserted = -1073740643;
    if ( a6[2] == 1 )
      inserted = 0;
    if ( (*a6 & 2) != 0 )
    {
      v14 = PsReferenceEffectiveToken((__int64)KeGetCurrentThread(), &v26[5], &v26[1], &v27, 0LL);
      v15 = v14;
      if ( *(_DWORD *)&v26[5] == 2 && v27 < 2
        || (inserted = SeTokenIsNoChildProcessRestricted((__int64)v14) ? inserted : 0, *(_DWORD *)&v26[5] != 1) )
      {
        if ( v15 )
          ObfDereferenceObject(v15);
      }
      else
      {
        ObFastDereferenceObject(
          (signed __int64 *)&KeGetCurrentThread()->ApcState.Process[1].Affinity.Bitmap[5],
          (unsigned __int64)v15);
      }
    }
    if ( a6[1] == 1 )
      inserted = 0;
    if ( inserted < 0 )
      goto LABEL_14;
  }
  v35 = 48;
  v36 = 0LL;
  v38 = 0;
  v37 = 0LL;
  v39 = 0LL;
  inserted = SepDuplicateToken(a2, (int)&v35, 0, 1, 0, 0, 1, (char **)&Object);
  if ( inserted < 0 )
  {
LABEL_14:
    v16 = 0;
    goto LABEL_41;
  }
  v10 = Object;
  if ( (*((_DWORD *)Object + 50) & 0x4000) == 0
    || (v17 = *((unsigned int *)Object + 30), (_DWORD)v17 == a5)
    || (SepDereferenceLowBoxNumberEntry(v17, *((_QWORD *)Object + 135)),
        *((_QWORD *)v10 + 135) = 0LL,
        SepSetTokenSessionById((_DWORD)v10, a5, 0, 0LL),
        inserted = SepSetTokenLowboxNumber(v10, *((_QWORD *)v10 + 98)),
        inserted >= 0) )
  {
    SepSetTokenSessionById((_DWORD)v10, a5, 0, 0LL);
    v18 = *a6;
    if ( (*a6 & 1) != 0 && !a6[2] )
      v10[50] |= 0x80000u;
    v19 = v28;
    v20 = ((unsigned __int8)v28 >> 1) & 1;
    inserted = SepDesktopAppxSubProcessToken((__int64)v10, a1, v18, &v25, v26);
    if ( inserted >= 0 )
    {
      inserted = SepMandatorySubProcessToken((_DWORD *)(a2 & -(__int64)(v20 != 0)), (__int64)v10, a1, &v29);
      if ( inserted >= 0 )
      {
        inserted = SepSetTrustLevelForProcessToken((__int64)v10, a1, &v24);
        if ( inserted >= 0 )
        {
          if ( (SepTokenSingletonAttributesConfig & 3) != 3
            || (inserted = SepSetProcessUniqueAttribute((__int64)v10), inserted >= 0) )
          {
            if ( (v10[50] & 0x4000) == 0
              || (a7 & 1) == 0
              || (inserted = SepSetTokenAllApplicationPackagesPolicy((__int64)v10, a7), inserted >= 0) )
            {
              if ( a8 )
                SepAddTokenOriginClaim(a8, a9, v10);
              if ( !v20 || v29 )
                v24 = 1;
              if ( v24 )
              {
                *(_QWORD *)&v32 = 0LL;
                DWORD2(v32) = 0;
                Process = KeGetCurrentThread()->ApcState.Process;
                v33 = v10;
                Blink = Process[1].Header.WaitListHead.Blink;
                SepCreateAccessStateFromSubjectContext(&v32, &PassedAccessState, v41, 0, 0LL);
                v10 = Object;
              }
              else
              {
                SeCreateAccessState(&PassedAccessState, v41, 0, 0LL);
              }
              v16 = 1;
              inserted = ObInsertObject(v10, &PassedAccessState, 0, 0, 0LL, 0LL);
              if ( inserted >= 0 )
              {
                SepAppendAceToTokenObjectAcl((__int64)v10, 8, SeAliasAdminsSid);
                v22 = v31;
                *((_BYTE *)v10 + 204) = v19 & 1;
                *v22 = v10;
                *(_BYTE *)a10 = v24;
                *(_BYTE *)(a10 + 1) = v25;
                *(_BYTE *)(a10 + 2) = v26[0];
              }
              else
              {
                v10 = 0LL;
              }
LABEL_41:
              if ( inserted >= 0 )
                goto LABEL_46;
              goto LABEL_44;
            }
          }
        }
      }
    }
  }
  v16 = 0;
LABEL_44:
  if ( v10 )
    ObfDereferenceObject(v10);
LABEL_46:
  if ( v16 )
  {
    if ( v24 )
      SepDeleteAccessState((__int64)&PassedAccessState);
    else
      SeDeleteAccessState((struct _SECURITY_SUBJECT_CONTEXT *)&PassedAccessState);
  }
  return (unsigned int)inserted;
}

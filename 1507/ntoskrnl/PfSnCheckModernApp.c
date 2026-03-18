/*
 * XREFs of PfSnCheckModernApp @ 0x140444420
 * Callers:
 *     PfSnBeginAppLaunch @ 0x14044404C (PfSnBeginAppLaunch.c)
 * Callees:
 *     RtlQueryPackageIdentity @ 0x14001AD60 (RtlQueryPackageIdentity.c)
 *     ObFastDereferenceObject @ 0x14004E3E0 (ObFastDereferenceObject.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     PsReferencePrimaryToken @ 0x14050D730 (PsReferencePrimaryToken.c)
 */

__int64 __fastcall PfSnCheckModernApp(_DWORD *a1, _DWORD *a2)
{
  int v4; // esi
  unsigned __int8 v5; // bl
  _KPROCESS *Process; // rbp
  PACCESS_TOKEN v7; // r14
  int PackageIdentity; // eax
  unsigned int v9; // edi
  unsigned __int8 *v11; // r11
  unsigned __int64 v12; // r10
  __int64 v13; // r8
  __int64 v14; // r9
  unsigned __int64 v15; // rdi
  __int64 v16; // rcx
  __int64 v17; // rax
  int v18; // r10d
  int v19; // r10d
  unsigned __int8 *v20; // r11
  unsigned __int64 v21; // r10
  unsigned __int64 v22; // rdi
  __int64 v23; // rcx
  __int64 v24; // rax
  int v25; // r10d
  int v26; // r10d
  int v27; // r10d
  int v28; // r10d
  int v29; // r10d
  int v30; // r10d
  int v31; // r10d
  int v32; // r10d
  int v33; // r10d
  int v34; // r10d
  __int64 v35; // [rsp+30h] [rbp-1D8h] BYREF
  __int64 v36; // [rsp+38h] [rbp-1D0h] BYREF
  _BYTE v37[144]; // [rsp+40h] [rbp-1C8h] BYREF
  _BYTE v38[256]; // [rsp+D0h] [rbp-138h] BYREF

  v4 = 0;
  v5 = 0;
  Process = KeGetCurrentThread()->ApcState.Process;
  v7 = PsReferencePrimaryToken(Process);
  v36 = 256LL;
  v35 = 130LL;
  PackageIdentity = RtlQueryPackageIdentity((__int64)v7, (__int64)v38, (__int64)&v36, (__int64)v37, (__int64)&v35, 0LL);
  v9 = PackageIdentity;
  if ( PackageIdentity >= 0 )
  {
    v11 = v38;
    v12 = v36 - 2;
    v13 = 314159LL;
    v5 = 1;
    v14 = 314159LL;
    if ( v36 - 2 >= 8 )
    {
      v15 = v12 >> 3;
      v12 -= 8 * (v12 >> 3);
      do
      {
        v16 = v11[6]
            + 37 * (v11[5] + 37 * (v11[4] + 37 * (v11[3] + 37 * (v11[2] + 37 * (v11[1] + 37 * (*v11 + 37 * v14))))));
        v17 = v11[7];
        v11 += 8;
        v14 = v17 + 37 * v16;
        --v15;
      }
      while ( v15 );
    }
    if ( v12 - 1 <= 6 )
    {
      v18 = v12 - 1;
      if ( !v18 )
      {
LABEL_12:
        LODWORD(v14) = *v11 + 37 * v14;
        goto LABEL_13;
      }
      v19 = v18 - 1;
      if ( !v19 )
      {
LABEL_11:
        LODWORD(v14) = *v11++ + 37 * v14;
        goto LABEL_12;
      }
      v27 = v19 - 1;
      if ( !v27 )
      {
LABEL_29:
        LODWORD(v14) = *v11++ + 37 * v14;
        goto LABEL_11;
      }
      v28 = v27 - 1;
      if ( !v28 )
      {
LABEL_28:
        LODWORD(v14) = *v11++ + 37 * v14;
        goto LABEL_29;
      }
      v29 = v28 - 1;
      if ( !v29 )
      {
LABEL_27:
        LODWORD(v14) = *v11++ + 37 * v14;
        goto LABEL_28;
      }
      v30 = v29 - 1;
      if ( !v30 )
      {
LABEL_26:
        LODWORD(v14) = *v11++ + 37 * v14;
        goto LABEL_27;
      }
      if ( v30 == 1 )
      {
        LODWORD(v14) = *v11++ + 37 * v14;
        goto LABEL_26;
      }
    }
LABEL_13:
    v20 = v37;
    v21 = v35 - 2;
    if ( v35 - 2 >= 8 )
    {
      v22 = v21 >> 3;
      v21 -= 8 * (v21 >> 3);
      do
      {
        v23 = v20[6]
            + 37 * (v20[5] + 37 * (v20[4] + 37 * (v20[3] + 37 * (v20[2] + 37 * (v20[1] + 37 * (*v20 + 37 * v13))))));
        v24 = v20[7];
        v20 += 8;
        v13 = v24 + 37 * v23;
        --v22;
      }
      while ( v22 );
    }
    if ( v21 - 1 > 6 )
      goto LABEL_21;
    v25 = v21 - 1;
    if ( v25 )
    {
      v26 = v25 - 1;
      if ( v26 )
      {
        v31 = v26 - 1;
        if ( v31 )
        {
          v32 = v31 - 1;
          if ( v32 )
          {
            v33 = v32 - 1;
            if ( v33 )
            {
              v34 = v33 - 1;
              if ( v34 )
              {
                if ( v34 != 1 )
                  goto LABEL_21;
                LODWORD(v13) = *v20++ + 37 * v13;
              }
              LODWORD(v13) = *v20++ + 37 * v13;
            }
            LODWORD(v13) = *v20++ + 37 * v13;
          }
          LODWORD(v13) = *v20++ + 37 * v13;
        }
        LODWORD(v13) = *v20++ + 37 * v13;
      }
      LODWORD(v13) = *v20++ + 37 * v13;
    }
    LODWORD(v13) = *v20 + 37 * v13;
LABEL_21:
    v4 = v13 + v14;
    goto LABEL_3;
  }
  if ( PackageIdentity == -1073741275 )
  {
LABEL_3:
    v9 = 0;
    *a2 = v4;
    *a1 = v5;
  }
  ObFastDereferenceObject((signed __int64 *)&Process[1].Affinity.Bitmap[5], (unsigned __int64)v7);
  return v9;
}

/*
 * XREFs of PfSnCheckModernApp @ 0x1404D71B4
 * Callers:
 *     PfSnBeginAppLaunch @ 0x1404D64B4 (PfSnBeginAppLaunch.c)
 * Callees:
 *     ObFastDereferenceObject @ 0x140043280 (ObFastDereferenceObject.c)
 *     RtlQueryPackageIdentity @ 0x1400FB154 (RtlQueryPackageIdentity.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     PsReferencePrimaryToken @ 0x140412C90 (PsReferencePrimaryToken.c)
 */

__int64 __fastcall PfSnCheckModernApp(_DWORD *a1, _DWORD *a2)
{
  int v4; // esi
  unsigned __int8 v5; // bl
  _KPROCESS *Process; // rbp
  PACCESS_TOKEN v7; // r14
  NTSTATUS v8; // eax
  unsigned int v9; // edi
  unsigned __int8 *v11; // r11
  signed __int64 v12; // r10
  __int64 v13; // r8
  __int64 v14; // r9
  unsigned __int64 v15; // rdi
  __int64 v16; // rcx
  __int64 v17; // rax
  unsigned __int8 *v18; // r11
  ULONG_PTR v19; // r10
  ULONG_PTR v20; // rdi
  __int64 v21; // rcx
  __int64 v22; // rax
  int v23; // r10d
  int v24; // r10d
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
  ULONG_PTR AppIdSize; // [rsp+30h] [rbp-1D8h] BYREF
  ULONG_PTR PackageSize; // [rsp+38h] [rbp-1D0h] BYREF
  WCHAR AppId[72]; // [rsp+40h] [rbp-1C8h] BYREF
  WCHAR PackageFullName[128]; // [rsp+D0h] [rbp-138h] BYREF

  v4 = 0;
  v5 = 0;
  Process = KeGetCurrentThread()->ApcState.Process;
  v7 = PsReferencePrimaryToken(Process);
  PackageSize = 256LL;
  AppIdSize = 130LL;
  v8 = RtlQueryPackageIdentity(v7, PackageFullName, &PackageSize, AppId, &AppIdSize, 0LL);
  v9 = v8;
  if ( v8 >= 0 )
  {
    v11 = (unsigned __int8 *)PackageFullName;
    v12 = PackageSize - 2;
    v13 = 314159LL;
    v5 = 1;
    v14 = 314159LL;
    if ( (__int64)(PackageSize - 2) >= 8 )
    {
      v15 = (unsigned __int64)v12 >> 3;
      v12 -= 8 * ((unsigned __int64)v12 >> 3);
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
    if ( v12 >= 1 && v12 <= 7 )
    {
      v25 = v12 - 1;
      if ( !v25 )
      {
LABEL_26:
        LODWORD(v14) = *v11 + 37 * v14;
        goto LABEL_9;
      }
      v26 = v25 - 1;
      if ( !v26 )
      {
LABEL_25:
        LODWORD(v14) = *v11++ + 37 * v14;
        goto LABEL_26;
      }
      v27 = v26 - 1;
      if ( !v27 )
      {
LABEL_24:
        LODWORD(v14) = *v11++ + 37 * v14;
        goto LABEL_25;
      }
      v28 = v27 - 1;
      if ( !v28 )
      {
LABEL_23:
        LODWORD(v14) = *v11++ + 37 * v14;
        goto LABEL_24;
      }
      v33 = v28 - 1;
      if ( !v33 )
      {
LABEL_38:
        LODWORD(v14) = *v11++ + 37 * v14;
        goto LABEL_23;
      }
      v34 = v33 - 1;
      if ( !v34 )
      {
LABEL_37:
        LODWORD(v14) = *v11++ + 37 * v14;
        goto LABEL_38;
      }
      if ( v34 == 1 )
      {
        LODWORD(v14) = *v11++ + 37 * v14;
        goto LABEL_37;
      }
    }
LABEL_9:
    v18 = (unsigned __int8 *)AppId;
    v19 = AppIdSize - 2;
    if ( (__int64)(AppIdSize - 2) >= 8 )
    {
      v20 = v19 >> 3;
      v19 -= 8 * (v19 >> 3);
      do
      {
        v21 = v18[6]
            + 37 * (v18[5] + 37 * (v18[4] + 37 * (v18[3] + 37 * (v18[2] + 37 * (v18[1] + 37 * (*v18 + 37 * v13))))));
        v22 = v18[7];
        v18 += 8;
        v13 = v22 + 37 * v21;
        --v20;
      }
      while ( v20 );
    }
    if ( v19 - 1 > 6 )
      goto LABEL_17;
    v23 = v19 - 1;
    if ( v23 )
    {
      v24 = v23 - 1;
      if ( v24 )
      {
        v29 = v24 - 1;
        if ( v29 )
        {
          v30 = v29 - 1;
          if ( v30 )
          {
            v31 = v30 - 1;
            if ( v31 )
            {
              v32 = v31 - 1;
              if ( v32 )
              {
                if ( v32 != 1 )
                  goto LABEL_17;
                LODWORD(v13) = *v18++ + 37 * v13;
              }
              LODWORD(v13) = *v18++ + 37 * v13;
            }
            LODWORD(v13) = *v18++ + 37 * v13;
          }
          LODWORD(v13) = *v18++ + 37 * v13;
        }
        LODWORD(v13) = *v18++ + 37 * v13;
      }
      LODWORD(v13) = *v18++ + 37 * v13;
    }
    LODWORD(v13) = *v18 + 37 * v13;
LABEL_17:
    v4 = v13 + v14;
    goto LABEL_3;
  }
  if ( v8 == -1073741275 )
  {
LABEL_3:
    v9 = 0;
    *a2 = v4;
    *a1 = v5;
  }
  ObFastDereferenceObject((signed __int64 *)&Process[1].Affinity.Bitmap[5], (unsigned __int64)v7);
  return v9;
}

/*
 * XREFs of PfSnCheckModernApp @ 0x1403E8948
 * Callers:
 *     PfSnBeginAppLaunch @ 0x1403E7AD0 (PfSnBeginAppLaunch.c)
 * Callees:
 *     RtlQueryPackageIdentity @ 0x14000C818 (RtlQueryPackageIdentity.c)
 *     ObFastDereferenceObject @ 0x14000F210 (ObFastDereferenceObject.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     PsReferencePrimaryToken @ 0x140417AE0 (PsReferencePrimaryToken.c)
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
  ULONG_PTR v12; // r10
  __int64 v13; // r8
  __int64 v14; // r9
  ULONG_PTR v15; // rdi
  __int64 v16; // rcx
  __int64 v17; // rax
  int v18; // r10d
  int v19; // r10d
  int v20; // r10d
  int v21; // r10d
  unsigned __int8 *v22; // r11
  ULONG_PTR v23; // r10
  ULONG_PTR v24; // rdi
  __int64 v25; // rcx
  __int64 v26; // rax
  int v27; // r10d
  int v28; // r10d
  int v29; // r10d
  int v30; // r10d
  int v31; // r10d
  int v32; // r10d
  int v33; // r10d
  int v34; // r10d
  ULONG_PTR PackageSize; // [rsp+30h] [rbp-1D8h] BYREF
  ULONG_PTR AppIdSize; // [rsp+38h] [rbp-1D0h] BYREF
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
LABEL_16:
        LODWORD(v14) = *v11 + 37 * v14;
        goto LABEL_17;
      }
      v19 = v18 - 1;
      if ( !v19 )
      {
LABEL_15:
        LODWORD(v14) = *v11++ + 37 * v14;
        goto LABEL_16;
      }
      v20 = v19 - 1;
      if ( !v20 )
      {
LABEL_14:
        LODWORD(v14) = *v11++ + 37 * v14;
        goto LABEL_15;
      }
      v21 = v20 - 1;
      if ( !v21 )
      {
LABEL_13:
        LODWORD(v14) = *v11++ + 37 * v14;
        goto LABEL_14;
      }
      v29 = v21 - 1;
      if ( !v29 )
      {
LABEL_29:
        LODWORD(v14) = *v11++ + 37 * v14;
        goto LABEL_13;
      }
      v30 = v29 - 1;
      if ( !v30 )
      {
LABEL_28:
        LODWORD(v14) = *v11++ + 37 * v14;
        goto LABEL_29;
      }
      if ( v30 == 1 )
      {
        LODWORD(v14) = *v11++ + 37 * v14;
        goto LABEL_28;
      }
    }
LABEL_17:
    v22 = (unsigned __int8 *)AppId;
    v23 = AppIdSize - 2;
    if ( (__int64)(AppIdSize - 2) >= 8 )
    {
      v24 = v23 >> 3;
      v23 -= 8 * (v23 >> 3);
      do
      {
        v25 = v22[6]
            + 37 * (v22[5] + 37 * (v22[4] + 37 * (v22[3] + 37 * (v22[2] + 37 * (v22[1] + 37 * (*v22 + 37 * v13))))));
        v26 = v22[7];
        v22 += 8;
        v13 = v26 + 37 * v25;
        --v24;
      }
      while ( v24 );
    }
    if ( v23 - 1 > 6 )
      goto LABEL_25;
    v27 = v23 - 1;
    if ( v27 )
    {
      v28 = v27 - 1;
      if ( v28 )
      {
        v31 = v28 - 1;
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
                  goto LABEL_25;
                LODWORD(v13) = *v22++ + 37 * v13;
              }
              LODWORD(v13) = *v22++ + 37 * v13;
            }
            LODWORD(v13) = *v22++ + 37 * v13;
          }
          LODWORD(v13) = *v22++ + 37 * v13;
        }
        LODWORD(v13) = *v22++ + 37 * v13;
      }
      LODWORD(v13) = *v22++ + 37 * v13;
    }
    LODWORD(v13) = *v22 + 37 * v13;
LABEL_25:
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

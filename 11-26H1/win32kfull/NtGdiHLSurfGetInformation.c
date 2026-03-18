/*
 * XREFs of NtGdiHLSurfGetInformation @ 0x14001BE10
 * Callers:
 *     <none>
 * Callees:
 *     GreSfmGetDirtyRgn @ 0x14001D1F8 (GreSfmGetDirtyRgn.c)
 *     GreDwmGetSurfaceData @ 0x1400A54E0 (GreDwmGetSurfaceData.c)
 *     GreDwmGetRedirectionStyle @ 0x140344F94 (GreDwmGetRedirectionStyle.c)
 */

__int64 __fastcall NtGdiHLSurfGetInformation(HLSURF a1, int a2, void *a3, void *a4)
{
  NTSTATUS v8; // ebx
  unsigned int v9; // esi
  int v10; // edi
  int v11; // edi
  NTSTATUS SurfaceData; // eax
  ULONG v14; // eax
  int v15; // edi
  __int64 HDEV; // rax
  HDEV v17; // rax
  unsigned int v18; // [rsp+50h] [rbp-68h] BYREF
  __int128 v19; // [rsp+58h] [rbp-60h] BYREF
  __int128 v20; // [rsp+68h] [rbp-50h] BYREF
  __int128 v21; // [rsp+78h] [rbp-40h] BYREF
  __int64 v22; // [rsp+88h] [rbp-30h] BYREF
  unsigned int v23; // [rsp+C8h] [rbp+10h] BYREF

  v8 = -1073741811;
  v19 = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  v22 = 0LL;
  v23 = 0;
  if ( a2 >= 11 )
    goto LABEL_18;
  v9 = 1;
  GreProbeAndReadFromUntrustedVa(&v23, 4uLL, a4, 4uLL, 1uLL);
  switch ( a2 )
  {
    case 3:
      if ( !a3 )
        goto LABEL_19;
      if ( v23 < 0x30 )
        goto LABEL_30;
      v23 = 48;
      break;
    case 4:
      goto LABEL_6;
    case 6:
      if ( !a3 )
        goto LABEL_19;
      if ( v23 < 0x20 )
        goto LABEL_30;
      v23 = 32;
      break;
    case 9:
LABEL_6:
      if ( !a3 )
      {
LABEL_19:
        v9 = 0;
        v14 = RtlNtStatusToDosError(v8);
        EngSetLastError(v14);
        return v9;
      }
      if ( v23 >= 0x38 )
      {
        v23 = 56;
        GreProbeAndReadFromUntrustedVa(&v19, 0x38uLL, a3, 0x38uLL, 1uLL);
        break;
      }
LABEL_30:
      v8 = -1073741306;
      goto LABEL_19;
    default:
LABEL_18:
      v8 = -1073741821;
      goto LABEL_19;
  }
  v10 = a2 - 3;
  if ( !v10 )
  {
    HDEV = UserGetHDEV();
    SurfaceData = GreDwmGetSurfaceData(HDEV, a1, &v19);
    goto LABEL_12;
  }
  v11 = v10 - 1;
  if ( !v11 )
  {
    SurfaceData = GreSfmGetDirtyRgn(a1, v19, (char *)&v19 + 8, &v20, 0LL, 0LL, 0LL, &v22, (char *)&v22 + 4);
LABEL_12:
    v8 = SurfaceData;
    goto LABEL_13;
  }
  v15 = v11 - 2;
  if ( !v15 )
  {
    v17 = (HDEV)UserGetHDEV();
    SurfaceData = GreDwmGetRedirectionStyle(v17, a1, (enum _HLSURF_REDIRECTIONSTYLE *)&v19);
    goto LABEL_12;
  }
  if ( v15 == 3 )
  {
    SurfaceData = GreSfmGetDirtyRgn(
                    a1,
                    v19,
                    (char *)&v19 + 8,
                    &v20,
                    (char *)&v20 + 8,
                    &v21,
                    (char *)&v21 + 8,
                    &v22,
                    (char *)&v22 + 4);
    goto LABEL_12;
  }
LABEL_13:
  if ( v8 < 0 )
    goto LABEL_19;
  if ( v23 )
    GreProbeAndWriteToUntrustedVa(a3, v23, &v19, v23, 1uLL);
  v18 = v23;
  GreProbeAndWriteToUntrustedVa(a4, 4uLL, &v18, 4uLL, 1uLL);
  return v9;
}

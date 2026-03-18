/*
 * XREFs of NtGdiHLSurfSetInformation @ 0x1C007E9B0
 * Callers:
 *     <none>
 * Callees:
 *     GreSfmCloseCompositorRef @ 0x1C007E5E4 (GreSfmCloseCompositorRef.c)
 *     GreSfmOpenCompositorRef @ 0x1C007EC28 (GreSfmOpenCompositorRef.c)
 *     GreSetRedirectionSurfaceSignaling @ 0x1C007FA78 (GreSetRedirectionSurfaceSignaling.c)
 *     GreSfmRegisterLogicalSurfaceForSignaling @ 0x1C01020AC (GreSfmRegisterLogicalSurfaceForSignaling.c)
 *     GreHLsurfSetPresentFlags @ 0x1C02612F0 (GreHLsurfSetPresentFlags.c)
 *     GreHLsurfSetUpdateId @ 0x1C0261404 (GreHLsurfSetUpdateId.c)
 *     GreSfmGenerateMoveData @ 0x1C0293D8C (GreSfmGenerateMoveData.c)
 */

__int64 __fastcall NtGdiHLSurfSetInformation(HLSURF a1, int a2, unsigned __int64 a3, unsigned int a4)
{
  NTSTATUS v5; // ebx
  unsigned int v6; // edi
  int v7; // eax
  int v8; // edx
  int v9; // edx
  int v10; // edx
  int v11; // edx
  __int64 v12; // rcx
  NTSTATUS updated; // eax
  int v15; // edx
  HDEV v16; // rax
  int HDEV; // eax
  __int64 v18; // rcx
  __int64 v19; // rcx
  ULONG v20; // eax
  int v21[4]; // [rsp+38h] [rbp-40h]
  __int64 v22; // [rsp+48h] [rbp-30h]

  v5 = -1073741811;
  if ( a2 >= 11 )
  {
    v5 = -1073741821;
    v6 = 0;
    goto LABEL_66;
  }
  switch ( a2 )
  {
    case 1:
      v6 = 0;
      if ( !a3 )
        goto LABEL_51;
      if ( a4 < 4 )
      {
        v5 = -1073741306;
        goto LABEL_51;
      }
      if ( a3 >= W32UserProbeAddress )
        a3 = W32UserProbeAddress;
      v7 = *(_DWORD *)a3;
      break;
    case 2:
      v6 = 0;
      if ( !a3 )
        goto LABEL_51;
      if ( a4 < 8 )
      {
        v5 = -1073741306;
        goto LABEL_51;
      }
      if ( a3 >= W32UserProbeAddress )
        a3 = W32UserProbeAddress;
      *(_QWORD *)v21 = *(_QWORD *)a3;
      goto LABEL_45;
    case 5:
      v6 = 0;
      if ( !a3 )
        goto LABEL_51;
      if ( a4 < 0x18 )
      {
        v5 = -1073741306;
        goto LABEL_51;
      }
      if ( a3 >= W32UserProbeAddress )
        a3 = W32UserProbeAddress;
      *(_OWORD *)v21 = *(_OWORD *)a3;
      v22 = *(_QWORD *)(a3 + 16);
      goto LABEL_45;
    case 7:
      v6 = 0;
      if ( a3 )
        goto LABEL_51;
      if ( a4 )
      {
        v5 = -1073741306;
        goto LABEL_51;
      }
      goto LABEL_45;
    case 8:
      v6 = 0;
      if ( a3 )
        goto LABEL_51;
      if ( a4 )
      {
        v5 = -1073741306;
        goto LABEL_51;
      }
      goto LABEL_45;
    case 10:
      v6 = 0;
      if ( !a3 )
        goto LABEL_51;
      if ( a4 < 4 )
      {
        v5 = -1073741306;
        goto LABEL_51;
      }
      if ( a3 >= W32UserProbeAddress )
        a3 = W32UserProbeAddress;
      v7 = *(_DWORD *)a3;
      break;
    default:
      v5 = -1073741821;
      v6 = 0;
      goto LABEL_51;
  }
  v21[0] = v7;
LABEL_45:
  v8 = a2 - 1;
  if ( !v8 )
  {
    UserGetHDEV();
    updated = GreHLsurfSetPresentFlags(v19, a1, (unsigned int)v21[0]);
    goto LABEL_50;
  }
  v9 = v8 - 1;
  if ( !v9 )
  {
    UserGetHDEV();
    updated = GreHLsurfSetUpdateId(v18, a1, *(_QWORD *)v21);
    goto LABEL_50;
  }
  v10 = v9 - 3;
  if ( !v10 )
  {
    if ( v22 || v21[2] || v21[3] )
    {
      HDEV = UserGetHDEV();
      updated = GreSetRedirectionSurfaceSignaling(HDEV, (_DWORD)a1, v22, v21[2], v21[0]);
    }
    else
    {
      updated = GreSfmRegisterLogicalSurfaceForSignaling(a1, v21[0]);
    }
    goto LABEL_50;
  }
  v11 = v10 - 2;
  if ( !v11 )
  {
    UserGetHDEV();
    updated = GreSfmOpenCompositorRef(v12, a1);
LABEL_50:
    v5 = updated;
    goto LABEL_51;
  }
  v15 = v11 - 1;
  if ( !v15 )
  {
    v16 = (HDEV)UserGetHDEV();
    updated = GreSfmCloseCompositorRef(v16, a1);
    goto LABEL_50;
  }
  if ( v15 == 2 )
    GreSfmGenerateMoveData((unsigned int)v21[0]);
LABEL_51:
  if ( v5 < 0 )
  {
LABEL_66:
    v20 = RtlNtStatusToDosError(v5);
    EngSetLastError(v20);
    return v6;
  }
  return 1;
}

/*
 * XREFs of NtGdiHLSurfSetInformation @ 0x14009F480
 * Callers:
 *     <none>
 * Callees:
 *     GreSfmCloseCompositorRef @ 0x14009F798 (GreSfmCloseCompositorRef.c)
 *     GreSetRedirectionSurfaceSignaling @ 0x14009FBB8 (GreSetRedirectionSurfaceSignaling.c)
 *     GreSfmRegisterLogicalSurfaceForSignaling @ 0x14009FE38 (GreSfmRegisterLogicalSurfaceForSignaling.c)
 *     GreSfmOpenCompositorRef @ 0x1400A87F8 (GreSfmOpenCompositorRef.c)
 *     GreSfmGenerateMoveData @ 0x1403283D4 (GreSfmGenerateMoveData.c)
 *     GreHLsurfSetPresentFlags @ 0x140345248 (GreHLsurfSetPresentFlags.c)
 *     GreHLsurfSetUpdateId @ 0x14034534C (GreHLsurfSetUpdateId.c)
 */

__int64 __fastcall NtGdiHLSurfSetInformation(__int64 a1, int a2, const void *a3, unsigned int a4)
{
  NTSTATUS v6; // ebx
  unsigned int v7; // edi
  unsigned __int64 v8; // rdx
  int v9; // esi
  int v10; // esi
  int v11; // esi
  int v12; // esi
  int v13; // esi
  HDEV v14; // rax
  NTSTATUS updated; // eax
  __int64 v16; // rcx
  __int64 HDEV; // rax
  ULONG v19; // eax
  __int64 v20; // rcx
  __int64 v21; // rcx
  _OWORD v22[3]; // [rsp+38h] [rbp-40h] BYREF
  __int64 v23; // [rsp+68h] [rbp-10h]

  v6 = -1073741811;
  memset(v22, 0, sizeof(v22));
  v23 = 0LL;
  if ( a2 >= 11 )
  {
    v6 = -1073741821;
    goto LABEL_52;
  }
  switch ( a2 )
  {
    case 1:
      if ( !a3 )
      {
        v7 = 1;
        goto LABEL_44;
      }
      if ( a4 < 4 )
      {
        v6 = -1073741306;
        v7 = 1;
        goto LABEL_44;
      }
      break;
    case 2:
      if ( !a3 )
      {
        v7 = 1;
        goto LABEL_44;
      }
      v8 = 8LL;
      if ( a4 < 8 )
      {
        v6 = -1073741306;
        v7 = 1;
        goto LABEL_44;
      }
      goto LABEL_12;
    case 5:
      if ( !a3 )
      {
        v7 = 1;
        goto LABEL_44;
      }
      v8 = 24LL;
      if ( a4 < 0x18 )
      {
        v6 = -1073741306;
        v7 = 1;
        goto LABEL_44;
      }
      goto LABEL_12;
    case 7:
      if ( a3 )
      {
        v7 = 1;
        goto LABEL_44;
      }
      if ( a4 )
      {
        v6 = -1073741306;
        v7 = 1;
        goto LABEL_44;
      }
LABEL_9:
      v7 = 1;
      goto LABEL_36;
    case 8:
      if ( a3 )
      {
        v7 = 1;
        goto LABEL_44;
      }
      if ( a4 )
      {
        v6 = -1073741306;
        v7 = 1;
        goto LABEL_44;
      }
      goto LABEL_9;
    case 10:
      if ( !a3 )
      {
        v7 = 1;
        goto LABEL_44;
      }
      if ( a4 < 4 )
      {
        v6 = -1073741306;
        v7 = 1;
        goto LABEL_44;
      }
      break;
    default:
      v6 = -1073741821;
      v7 = 1;
      goto LABEL_44;
  }
  v8 = 4LL;
LABEL_12:
  v7 = 1;
  GreProbeAndReadFromUntrustedVa(v22, v8, a3, v8, 1uLL);
LABEL_36:
  v9 = a2 - 1;
  if ( !v9 )
  {
    UserGetHDEV();
    updated = GreHLsurfSetPresentFlags(v21, a1, LODWORD(v22[0]));
    goto LABEL_43;
  }
  v10 = v9 - 1;
  if ( !v10 )
  {
    UserGetHDEV();
    updated = GreHLsurfSetUpdateId(v20, a1, *(_QWORD *)&v22[0]);
    goto LABEL_43;
  }
  v11 = v10 - 3;
  if ( !v11 )
  {
    if ( *(_OWORD *)((char *)v22 + 8) == 0LL )
    {
      updated = GreSfmRegisterLogicalSurfaceForSignaling(a1, LODWORD(v22[0]));
    }
    else
    {
      HDEV = UserGetHDEV();
      updated = GreSetRedirectionSurfaceSignaling(HDEV, a1, *(_QWORD *)&v22[1], *((_QWORD *)&v22[0] + 1), v22[0]);
    }
    goto LABEL_43;
  }
  v12 = v11 - 2;
  if ( !v12 )
  {
    UserGetHDEV();
    updated = GreSfmOpenCompositorRef(v16, a1);
    goto LABEL_43;
  }
  v13 = v12 - 1;
  if ( !v13 )
  {
    v14 = (HDEV)UserGetHDEV();
    updated = GreSfmCloseCompositorRef(v14);
LABEL_43:
    v6 = updated;
    goto LABEL_44;
  }
  if ( v13 == 2 )
    GreSfmGenerateMoveData(LODWORD(v22[0]));
LABEL_44:
  if ( v6 < 0 )
  {
LABEL_52:
    v7 = 0;
    v19 = RtlNtStatusToDosError(v6);
    EngSetLastError(v19);
  }
  return v7;
}

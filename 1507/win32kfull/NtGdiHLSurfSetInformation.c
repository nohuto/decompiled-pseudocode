/*
 * XREFs of NtGdiHLSurfSetInformation @ 0x1C000C290
 * Callers:
 *     <none>
 * Callees:
 *     GreSfmRegisterLogicalSurfaceForSignaling @ 0x1C000B4CC (GreSfmRegisterLogicalSurfaceForSignaling.c)
 *     GreSetRedirectionSurfaceSignaling @ 0x1C000B994 (GreSetRedirectionSurfaceSignaling.c)
 *     GreSfmOpenCompositorRef @ 0x1C000C544 (GreSfmOpenCompositorRef.c)
 *     GreSfmCloseCompositorRef @ 0x1C000C7BC (GreSfmCloseCompositorRef.c)
 *     GreHLsurfSetPresentFlags @ 0x1C0262AE4 (GreHLsurfSetPresentFlags.c)
 *     GreHLsurfSetUpdateId @ 0x1C0262BEC (GreHLsurfSetUpdateId.c)
 *     GreSfmGenerateMoveData @ 0x1C0294284 (GreSfmGenerateMoveData.c)
 */

__int64 __fastcall NtGdiHLSurfSetInformation(HLSURF a1, int a2, int *a3, unsigned int a4)
{
  NTSTATUS v5; // ebx
  unsigned int v6; // edi
  int v7; // eax
  int v8; // edx
  int v9; // edx
  int v10; // edx
  int v11; // edx
  int v12; // edx
  HDEV HDEV; // rax
  NTSTATUS updated; // eax
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rcx
  ULONG v19; // eax
  __int128 v21; // [rsp+38h] [rbp-40h]
  __int64 v22; // [rsp+48h] [rbp-30h]

  v5 = -1073741811;
  if ( a2 >= 11 )
  {
    v5 = -1073741821;
    v6 = 0;
LABEL_60:
    v19 = RtlNtStatusToDosError(v5);
    EngSetLastError(v19);
    return v6;
  }
  switch ( a2 )
  {
    case 1:
      v6 = 0;
      if ( !a3 )
        goto LABEL_58;
      if ( a4 < 4 )
      {
        v5 = -1073741306;
        goto LABEL_58;
      }
      if ( (unsigned __int64)a3 >= W32UserProbeAddress )
        a3 = (int *)W32UserProbeAddress;
      v7 = *a3;
      goto LABEL_40;
    case 2:
      v6 = 0;
      if ( !a3 )
        goto LABEL_58;
      if ( a4 < 8 )
      {
        v5 = -1073741306;
        goto LABEL_58;
      }
      if ( (unsigned __int64)a3 >= W32UserProbeAddress )
        a3 = (int *)W32UserProbeAddress;
      *(_QWORD *)&v21 = *(_QWORD *)a3;
LABEL_41:
      v8 = a2 - 1;
      if ( v8 )
      {
        v9 = v8 - 1;
        if ( v9 )
        {
          v10 = v9 - 3;
          if ( v10 )
          {
            v11 = v10 - 2;
            if ( v11 )
            {
              v12 = v11 - 1;
              if ( v12 )
              {
                if ( v12 == 2 )
                  GreSfmGenerateMoveData((unsigned int)v21);
                goto LABEL_58;
              }
              HDEV = (HDEV)UserGetHDEV();
              updated = GreSfmCloseCompositorRef(HDEV);
            }
            else
            {
              UserGetHDEV();
              updated = GreSfmOpenCompositorRef(v15, a1);
            }
          }
          else if ( v22 || DWORD2(v21) || HIDWORD(v21) )
          {
            v16 = UserGetHDEV();
            updated = GreSetRedirectionSurfaceSignaling(v16, a1, v22, *((__int64 *)&v21 + 1), v21);
          }
          else
          {
            updated = GreSfmRegisterLogicalSurfaceForSignaling((__int64)a1, v21);
          }
        }
        else
        {
          UserGetHDEV();
          updated = GreHLsurfSetUpdateId(v17, a1, v21);
        }
      }
      else
      {
        UserGetHDEV();
        updated = GreHLsurfSetPresentFlags(v18, a1, (unsigned int)v21);
      }
      v5 = updated;
      goto LABEL_58;
    case 5:
      v6 = 0;
      if ( !a3 )
        goto LABEL_58;
      if ( a4 < 0x18 )
      {
        v5 = -1073741306;
        goto LABEL_58;
      }
      if ( (unsigned __int64)a3 >= W32UserProbeAddress )
        a3 = (int *)W32UserProbeAddress;
      v21 = *(_OWORD *)a3;
      v22 = *((_QWORD *)a3 + 2);
      goto LABEL_41;
    case 7:
      v6 = 0;
      if ( a3 )
        goto LABEL_58;
      if ( a4 )
      {
        v5 = -1073741306;
        goto LABEL_58;
      }
      goto LABEL_41;
    case 8:
      v6 = 0;
      if ( a3 )
        goto LABEL_58;
      if ( a4 )
      {
        v5 = -1073741306;
        goto LABEL_58;
      }
      goto LABEL_41;
  }
  if ( a2 != 10 )
  {
    v5 = -1073741821;
    v6 = 0;
    goto LABEL_58;
  }
  v6 = 0;
  if ( a3 )
  {
    if ( a4 < 4 )
    {
      v5 = -1073741306;
      goto LABEL_58;
    }
    if ( (unsigned __int64)a3 >= W32UserProbeAddress )
      a3 = (int *)W32UserProbeAddress;
    v7 = *a3;
LABEL_40:
    LODWORD(v21) = v7;
    goto LABEL_41;
  }
LABEL_58:
  if ( v5 < 0 )
    goto LABEL_60;
  return 1;
}

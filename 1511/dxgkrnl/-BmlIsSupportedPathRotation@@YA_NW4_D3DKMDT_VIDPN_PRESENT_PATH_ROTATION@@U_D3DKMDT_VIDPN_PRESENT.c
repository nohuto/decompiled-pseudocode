/*
 * XREFs of ?BmlIsSupportedPathRotation@@YA_NW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@U_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT@@@Z @ 0x1C00A0F70
 * Callers:
 *     sub_1C00A7D7C @ 0x1C00A7D7C (sub_1C00A7D7C.c)
 *     ??ROBTAIN_MODES_ON_SOURCE@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAIPEAUDXGK_STEREO_PARAMS@@01@Z @ 0x1C013E230 (--ROBTAIN_MODES_ON_SOURCE@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAIPEAUDXGK_STEREO_PARAMS@@01@Z.c)
 *     ??ROBTAIN_PREFERRED_MODES_ON_PATH@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI@Z @ 0x1C013EEBC (--ROBTAIN_PREFERRED_MODES_ON_PATH@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI@Z.c)
 * Callees:
 *     D3DKMDT_VPPR_GET_OFFSET_ROTATION @ 0x1C0009F58 (D3DKMDT_VPPR_GET_OFFSET_ROTATION.c)
 *     D3DKMDT_VPPR_GET_CONTENT_ROTATION @ 0x1C0009FA8 (D3DKMDT_VPPR_GET_CONTENT_ROTATION.c)
 */

bool __fastcall BmlIsSupportedPathRotation(
        D3DKMDT_VIDPN_PRESENT_PATH_ROTATION a1,
        struct _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT a2)
{
  __int64 v2; // rbx
  __int32 v3; // eax
  __int64 v4; // rcx
  char v5; // r10
  __int32 v6; // eax
  __int32 v7; // eax
  bool v8; // zf
  D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v9; // eax
  int v10; // r8d
  unsigned int v11; // r10d
  int v12; // eax
  unsigned int v13; // r10d
  __int64 v15; // rax
  int v16; // eax
  int v17; // eax

  v2 = a1;
  v3 = D3DKMDT_VPPR_GET_CONTENT_ROTATION(a1) - 1;
  if ( v3 )
  {
    v6 = v3 - 1;
    if ( v6 )
    {
      v7 = v6 - 1;
      if ( v7 )
      {
        if ( v7 != 1 )
          goto LABEL_15;
        v8 = (v5 & 8) == 0;
      }
      else
      {
        v8 = (v5 & 4) == 0;
      }
    }
    else
    {
      v8 = (v5 & 2) == 0;
    }
    if ( v8 )
    {
LABEL_11:
      LOBYTE(v10) = 0;
      return v10;
    }
  }
  else if ( (v5 & 1) == 0 )
  {
    goto LABEL_11;
  }
  v9 = D3DKMDT_VPPR_GET_OFFSET_ROTATION((D3DKMDT_VIDPN_PRESENT_PATH_ROTATION)v2);
  v12 = v9 - v10;
  if ( !v12 )
  {
    v13 = v11 >> 4;
    goto LABEL_8;
  }
  v16 = v12 - v10;
  if ( v16 )
  {
    v17 = v16 - v10;
    if ( v17 )
    {
      if ( v17 == v10 )
      {
        v13 = v11 >> 7;
        goto LABEL_8;
      }
LABEL_15:
      v15 = WdLogNewEntry5_WdAssertion(v4);
      *(_QWORD *)(v15 + 24) = v2;
      WdLogEvent5_WdAssertion(v15);
      goto LABEL_11;
    }
    v13 = v11 >> 6;
  }
  else
  {
    v13 = v11 >> 5;
  }
LABEL_8:
  if ( ((unsigned __int8)v10 & (unsigned __int8)v13) == 0 )
    goto LABEL_11;
  return v10;
}

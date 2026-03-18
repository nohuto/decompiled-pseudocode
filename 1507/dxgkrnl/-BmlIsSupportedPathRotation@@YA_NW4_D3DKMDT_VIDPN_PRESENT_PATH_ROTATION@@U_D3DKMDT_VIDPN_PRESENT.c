/*
 * XREFs of ?BmlIsSupportedPathRotation@@YA_NW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@U_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT@@@Z @ 0x1C009B430
 * Callers:
 *     BmlPinPathContentRotation @ 0x1C009B25C (BmlPinPathContentRotation.c)
 *     ??ROBTAIN_MODES_ON_SOURCE@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI01@Z @ 0x1C00D2CA4 (--ROBTAIN_MODES_ON_SOURCE@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI01@Z.c)
 *     ??ROBTAIN_PREFERRED_MODES_ON_PATH@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI@Z @ 0x1C0139878 (--ROBTAIN_PREFERRED_MODES_ON_PATH@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI@Z.c)
 * Callees:
 *     D3DKMDT_VPPR_GET_OFFSET_ROTATION @ 0x1C00085E0 (D3DKMDT_VPPR_GET_OFFSET_ROTATION.c)
 *     D3DKMDT_VPPR_GET_CONTENT_ROTATION @ 0x1C00085FC (D3DKMDT_VPPR_GET_CONTENT_ROTATION.c)
 */

bool __fastcall BmlIsSupportedPathRotation(
        D3DKMDT_VIDPN_PRESENT_PATH_ROTATION a1,
        struct _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT a2)
{
  __int64 v2; // rbx
  D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v3; // eax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r9
  char v7; // r10
  __int64 v8; // r8
  __int32 v9; // eax
  __int32 v10; // eax
  __int32 v11; // eax
  bool v12; // zf
  D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v13; // eax
  unsigned int v14; // r10d
  int v15; // eax
  unsigned int v16; // r10d
  __int64 v18; // rax
  int v19; // eax
  int v20; // eax

  v2 = a1;
  v3 = D3DKMDT_VPPR_GET_CONTENT_ROTATION(a1);
  v8 = 1LL;
  v9 = v3 - 1;
  if ( v9 )
  {
    v10 = v9 - 1;
    if ( v10 )
    {
      v11 = v10 - 1;
      if ( v11 )
      {
        if ( v11 != 1 )
          goto LABEL_15;
        v12 = (v7 & 8) == 0;
      }
      else
      {
        v12 = (v7 & 4) == 0;
      }
    }
    else
    {
      v12 = (v7 & 2) == 0;
    }
    if ( v12 )
    {
LABEL_11:
      LOBYTE(v8) = 0;
      return v8;
    }
  }
  else if ( (v7 & 1) == 0 )
  {
    goto LABEL_11;
  }
  v13 = D3DKMDT_VPPR_GET_OFFSET_ROTATION((D3DKMDT_VIDPN_PRESENT_PATH_ROTATION)v2);
  v15 = v13 - v8;
  if ( !v15 )
  {
    v16 = v14 >> 4;
    goto LABEL_8;
  }
  v19 = v15 - v8;
  if ( v19 )
  {
    v20 = v19 - v8;
    if ( v20 )
    {
      if ( v20 == (_DWORD)v8 )
      {
        v16 = v14 >> 7;
        goto LABEL_8;
      }
LABEL_15:
      v18 = WdLogNewEntry5_WdAssertion(v5, v4, v8, v6);
      *(_QWORD *)(v18 + 24) = v2;
      WdLogEvent5_WdAssertion(v18);
      goto LABEL_11;
    }
    v16 = v14 >> 6;
  }
  else
  {
    v16 = v14 >> 5;
  }
LABEL_8:
  if ( ((unsigned __int8)v8 & (unsigned __int8)v16) == 0 )
    goto LABEL_11;
  return v8;
}

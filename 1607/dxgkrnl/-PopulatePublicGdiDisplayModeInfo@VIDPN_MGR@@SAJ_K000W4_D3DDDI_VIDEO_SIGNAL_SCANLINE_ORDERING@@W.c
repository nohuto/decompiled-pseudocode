/*
 * XREFs of ?PopulatePublicGdiDisplayModeInfo@VIDPN_MGR@@SAJ_K000W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@QEAU_devicemodeW@@@Z @ 0x1C00BCA68
 * Callers:
 *     ?PopulateGdiDisplayModeFromPath@VIDPN_MGR@@SAJPEBVDMMVIDPNPRESENTPATH@@PEAU_CDD_DEVMODE@@@Z @ 0x1C00BC8C8 (-PopulateGdiDisplayModeFromPath@VIDPN_MGR@@SAJPEBVDMMVIDPNPRESENTPATH@@PEAU_CDD_DEVMODE@@@Z.c)
 * Callees:
 *     D3DKMDT_VPPR_GET_CONTENT_ROTATION @ 0x1C0005D54 (D3DKMDT_VPPR_GET_CONTENT_ROTATION.c)
 *     ConvertDMMScalingToGdiScaling @ 0x1C0082978 (ConvertDMMScalingToGdiScaling.c)
 */

__int64 __fastcall VIDPN_MGR::PopulatePublicGdiDisplayModeInfo(
        __int64 a1,
        DWORD a2,
        DWORD a3,
        DWORD a4,
        enum _D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING a5,
        D3DKMDT_VIDPN_PRESENT_PATH_ROTATION Rotation,
        enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING a7,
        struct _devicemodeW *const a8)
{
  DWORD v11; // ebp
  __int64 v12; // r8
  __int64 v13; // r9
  D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v14; // r10d
  __int64 v15; // rcx
  __int32 v16; // r10d
  DWORD v17; // eax
  __int64 v18; // rcx
  __int64 v20; // rax
  __int32 v21; // r10d
  __int32 v22; // r10d
  int v23; // r10d
  __int64 v24; // rax
  __int64 v25; // rax

  v11 = a1;
  if ( !a8 )
  {
    v20 = WdLogNewEntry5_WdAssertion(a1);
    WdLogEvent5_WdAssertion(v20);
  }
  *(_QWORD *)a8->dmDeviceName = 0x4400440043LL;
  *(_DWORD *)&a8->dmSpecVersion = 67175425;
  *(_DWORD *)&a8->dmSize = 1573084;
  a8->dmBitsPerPel = v11;
  v14 = D3DKMDT_VPPR_GET_CONTENT_ROTATION(Rotation);
  v15 = (unsigned int)(v14 - 1);
  if ( (v15 & 0xFFFFFFFD) != 0 )
  {
    a8->dmPelsHeight = a2;
    a8->dmPelsWidth = a3;
  }
  else
  {
    a8->dmPelsWidth = a2;
    a8->dmPelsHeight = a3;
  }
  v16 = v14 - 1;
  if ( !v16 )
    goto LABEL_6;
  v21 = v16 - 1;
  if ( v21 )
  {
    v22 = v21 - 1;
    if ( v22 )
    {
      v23 = v22 - 1;
      if ( v23 )
      {
        if ( v23 != 251 )
        {
          v24 = WdLogNewEntry5_WdError(v15);
          *(_QWORD *)(v24 + 24) = Rotation;
          WdLogEvent5_WdError(v24);
        }
LABEL_6:
        v17 = 0;
        goto LABEL_7;
      }
      v17 = 3;
    }
    else
    {
      v17 = 2;
    }
  }
  else
  {
    v17 = 1;
  }
LABEL_7:
  a8->dmDisplayOrientation = v17;
  ConvertDMMScalingToGdiScaling((unsigned int)a7, &a8->dmDisplayFixedOutput, v12, v13);
  a8->dmDisplayFrequency = a4;
  if ( a5 == D3DDDI_VSSLO_PROGRESSIVE )
  {
    a8->dmDisplayFlags = 0;
LABEL_9:
    a8->dmFields = 544997504;
    return 0LL;
  }
  if ( (unsigned int)(a5 - 2) <= 1 )
  {
    a8->dmDisplayFlags |= 2u;
    goto LABEL_9;
  }
  v25 = WdLogNewEntry5_WdError(v18);
  *(_QWORD *)(v25 + 24) = a5;
  WdLogEvent5_WdError(v25);
  return 3223192402LL;
}

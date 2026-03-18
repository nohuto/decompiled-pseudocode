/*
 * XREFs of ?PopulatePublicGdiDisplayModeInfo@VIDPN_MGR@@SAJ_K000W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@QEAU_devicemodeW@@@Z @ 0x1C009BC54
 * Callers:
 *     ?PopulateGdiDisplayModeFromPath@VIDPN_MGR@@SAJPEBVDMMVIDPNPRESENTPATH@@PEAU_CDD_DEVMODE@@@Z @ 0x1C009BD9C (-PopulateGdiDisplayModeFromPath@VIDPN_MGR@@SAJPEBVDMMVIDPNPRESENTPATH@@PEAU_CDD_DEVMODE@@@Z.c)
 * Callees:
 *     D3DKMDT_VPPR_GET_CONTENT_ROTATION @ 0x1C00085FC (D3DKMDT_VPPR_GET_CONTENT_ROTATION.c)
 *     ConvertDMMScalingToGdiScaling @ 0x1C009BD2C (ConvertDMMScalingToGdiScaling.c)
 */

__int64 __fastcall VIDPN_MGR::PopulatePublicGdiDisplayModeInfo(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        enum _D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING a5,
        D3DKMDT_VIDPN_PRESENT_PATH_ROTATION Rotation,
        enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING a7,
        struct _devicemodeW *const a8)
{
  DWORD v8; // r14d
  DWORD v9; // edi
  DWORD v10; // esi
  DWORD v11; // ebp
  D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v12; // r10d
  __int64 v13; // rcx
  __int32 v14; // r10d
  DWORD v15; // eax
  __int64 v16; // rcx
  __int64 v18; // rax
  __int32 v19; // r10d
  __int32 v20; // r10d
  int v21; // r10d
  __int64 v22; // rax
  __int64 v23; // rax

  v8 = a4;
  v9 = a3;
  v10 = a2;
  v11 = a1;
  if ( !a8 )
  {
    v18 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    WdLogEvent5_WdAssertion(v18);
  }
  *(_QWORD *)a8->dmDeviceName = 0x4400440043LL;
  *(_DWORD *)&a8->dmSpecVersion = 67175425;
  *(_DWORD *)&a8->dmSize = 1573084;
  a8->dmBitsPerPel = v11;
  v12 = D3DKMDT_VPPR_GET_CONTENT_ROTATION(Rotation);
  v13 = (unsigned int)(v12 - 1);
  if ( (v13 & 0xFFFFFFFD) != 0 )
  {
    a8->dmPelsHeight = v10;
    a8->dmPelsWidth = v9;
  }
  else
  {
    a8->dmPelsWidth = v10;
    a8->dmPelsHeight = v9;
  }
  v14 = v12 - 1;
  if ( !v14 )
    goto LABEL_6;
  v19 = v14 - 1;
  if ( v19 )
  {
    v20 = v19 - 1;
    if ( v20 )
    {
      v21 = v20 - 1;
      if ( v21 )
      {
        if ( v21 != 251 )
        {
          v22 = WdLogNewEntry5_WdError(v13);
          *(_QWORD *)(v22 + 24) = Rotation;
          WdLogEvent5_WdError(v22);
        }
LABEL_6:
        v15 = 0;
        goto LABEL_7;
      }
      v15 = 3;
    }
    else
    {
      v15 = 2;
    }
  }
  else
  {
    v15 = 1;
  }
LABEL_7:
  a8->dmDisplayOrientation = v15;
  ConvertDMMScalingToGdiScaling((unsigned int)a7, &a8->dmDisplayFixedOutput);
  a8->dmDisplayFrequency = v8;
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
  v23 = WdLogNewEntry5_WdError(v16);
  *(_QWORD *)(v23 + 24) = a5;
  WdLogEvent5_WdError(v23);
  return 3223192402LL;
}

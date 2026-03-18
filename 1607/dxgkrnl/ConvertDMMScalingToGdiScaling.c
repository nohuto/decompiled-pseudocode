/*
 * XREFs of ConvertDMMScalingToGdiScaling @ 0x1C0082978
 * Callers:
 *     _PopulateDisplayModeFromPresentPath @ 0x1C0082640 (_PopulateDisplayModeFromPresentPath.c)
 *     ?PopulatePublicGdiDisplayModeInfo@VIDPN_MGR@@SAJ_K000W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@QEAU_devicemodeW@@@Z @ 0x1C00BCA68 (-PopulatePublicGdiDisplayModeInfo@VIDPN_MGR@@SAJ_K000W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W.c)
 *     _BmlGetPathModalityForAdapter @ 0x1C00BCBF8 (_BmlGetPathModalityForAdapter.c)
 *     ?DmmCommitVidPnOnAdapter@@YAJPEAVDXGDEVICE@@PEAUD3DKMDT_HVIDPN__@@KPEAK22PEAEQEAJPEAVCOREDEVICEACCESS@@@Z @ 0x1C00D39F4 (-DmmCommitVidPnOnAdapter@@YAJPEAVDXGDEVICE@@PEAUD3DKMDT_HVIDPN__@@KPEAK22PEAEQEAJPEAVCOREDEVICEA.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ConvertDMMScalingToGdiScaling(__int64 a1, _DWORD *a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  __int64 result; // rax
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rax

  v4 = (int)a1;
  result = 1LL;
  switch ( (_DWORD)a1 )
  {
    case 1:
      goto LABEL_6;
    case 2:
      *a2 = 2;
      return result;
    case 3:
      *a2 = 1;
      return result;
  }
  if ( (int)a1 > 3 && ((int)a1 <= 5 || (_DWORD)a1 == 255) )
  {
LABEL_6:
    *a2 = 0;
    return result;
  }
  v7 = WdLogNewEntry5_WdWarning(a1, a2, a3, a4);
  *(_QWORD *)(v7 + 24) = v4;
  WdLogEvent5_WdWarning(v7);
  if ( (_DWORD)v4 == 253 )
  {
    v9 = WdLogNewEntry5_WdAssertion(v8);
    *(_QWORD *)(v9 + 24) = 164LL;
    WdLogEvent5_WdAssertion(v9);
  }
  *a2 = 0;
  return 0LL;
}

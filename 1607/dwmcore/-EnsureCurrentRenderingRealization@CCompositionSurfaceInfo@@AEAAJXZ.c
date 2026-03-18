/*
 * XREFs of ?EnsureCurrentRenderingRealization@CCompositionSurfaceInfo@@AEAAJXZ @ 0x180099168
 * Callers:
 *     ?GetRenderingRealizationNoRef@CCompositionSurfaceInfo@@QEAAPEAVCBitmapRealization@@XZ @ 0x180005F0C (-GetRenderingRealizationNoRef@CCompositionSurfaceInfo@@QEAAPEAVCBitmapRealization@@XZ.c)
 *     ?EnsureBitmapRealization@CCompositionSurfaceBitmap@@AEAA_N_N@Z @ 0x180093158 (-EnsureBitmapRealization@CCompositionSurfaceBitmap@@AEAA_N_N@Z.c)
 *     ?ForceUpdateRenderingRealization@CCompositionSurfaceInfo@@QEAAJ_K@Z @ 0x180151F10 (-ForceUpdateRenderingRealization@CCompositionSurfaceInfo@@QEAAJ_K@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?ProcessSurfaceUpdateInternal@CCompositionSurfaceInfo@@AEAAJAEBUCSM_SURFACE_UPDATE@@@Z @ 0x1800992FC (-ProcessSurfaceUpdateInternal@CCompositionSurfaceInfo@@AEAAJAEBUCSM_SURFACE_UPDATE@@@Z.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800BF66E (memset_0.c)
 */

__int64 __fastcall CCompositionSurfaceInfo::EnsureCurrentRenderingRealization(CCompositionSurfaceInfo *this)
{
  unsigned int v2; // ebx
  int CompositionSurfaceRenderingRealization; // eax
  int updated; // eax
  _DWORD v6[8]; // [rsp+30h] [rbp-E8h] BYREF
  HGDIOBJ ho; // [rsp+50h] [rbp-C8h]

  v2 = 0;
  memset_0(v6, 0, 0xC8uLL);
  CompositionSurfaceRenderingRealization = NtQueryCompositionSurfaceRenderingRealization(*((_QWORD *)this + 4), v6);
  if ( CompositionSurfaceRenderingRealization < 0 )
  {
    v2 = CompositionSurfaceRenderingRealization | 0x10000000;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, CompositionSurfaceRenderingRealization | 0x10000000, 0x1E1u);
  }
  else if ( v6[0] == 200 && v6[1] == *((_DWORD *)this + 10) && v6[2] == *((_DWORD *)this + 11) )
  {
    updated = CCompositionSurfaceInfo::ProcessSurfaceUpdateInternal(this, (const struct CSM_SURFACE_UPDATE *)v6);
    v2 = updated;
    if ( updated < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, updated, 0x1E9u);
  }
  if ( (unsigned __int64)ho >= 2 )
    DeleteObject(ho);
  return v2;
}

/*
 * XREFs of ?ProcessUpdateTargetBounds@CIndirectSwapchainRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INDIRECTSWAPCHAINRENDERTARGET_UPDATETARGETBOUNDS@@@Z @ 0x1800EE908
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18006A010 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?ReportSizeChangeMetaData@CIndirectSwapchainRenderTarget@@AEAAJXZ @ 0x1800EEB60 (-ReportSizeChangeMetaData@CIndirectSwapchainRenderTarget@@AEAAJXZ.c)
 */

__int64 __fastcall CIndirectSwapchainRenderTarget::ProcessUpdateTargetBounds(
        CIndirectSwapchainRenderTarget *this,
        struct CResourceTable *a2,
        const struct MILCMD_INDIRECTSWAPCHAINRENDERTARGET_UPDATETARGETBOUNDS *a3)
{
  unsigned int v3; // ebx
  int v6; // eax

  v3 = 0;
  if ( *((_DWORD *)this + 112) == *((_DWORD *)a3 + 4) && *((_DWORD *)this + 113) == *((_DWORD *)a3 + 5)
    || (v6 = CIndirectSwapchainRenderTarget::ReportSizeChangeMetaData(this), v3 = v6, v6 >= 0) )
  {
    *((_DWORD *)this + 26) = COERCE_UNSIGNED_INT((float)*((int *)a3 + 2)) ^ _xmm;
    *((_DWORD *)this + 27) = COERCE_UNSIGNED_INT((float)*((int *)a3 + 3)) ^ _xmm;
    *((_DWORD *)this + 112) = *((_DWORD *)a3 + 4);
    *((_DWORD *)this + 113) = *((_DWORD *)a3 + 5);
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x66u);
  }
  return v3;
}

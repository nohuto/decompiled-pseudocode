/*
 * XREFs of ?RegisterSwapChain@CAnalogRenderTarget@@AEAAJXZ @ 0x180126D48
 * Callers:
 *     ?ProcessSetSwapChain@CAnalogRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ANALOGRENDERTARGET_SETSWAPCHAIN@@@Z @ 0x180126AD4 (-ProcessSetSwapChain@CAnalogRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ANALOGRENDERTARGET.c)
 *     ?RenderExclusive@CAnalogRenderTarget@@AEAAJPEA_N@Z @ 0x18012727C (-RenderExclusive@CAnalogRenderTarget@@AEAAJPEA_N@Z.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180040188 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?SetAnalogExclusive@CCompositionSurfaceInfo@@QEAAJ_N@Z @ 0x180119708 (-SetAnalogExclusive@CCompositionSurfaceInfo@@QEAAJ_N@Z.c)
 *     ?GetExclusiveSurfaceInfo@CAnalogRenderTarget@@AEAAPEAVCCompositionSurfaceInfo@@XZ @ 0x180126514 (-GetExclusiveSurfaceInfo@CAnalogRenderTarget@@AEAAPEAVCCompositionSurfaceInfo@@XZ.c)
 *     ?ProcessExclusiveSurfaceUpdate@CAnalogRenderTarget@@AEAA_NXZ @ 0x180126970 (-ProcessExclusiveSurfaceUpdate@CAnalogRenderTarget@@AEAA_NXZ.c)
 */

__int64 __fastcall CAnalogRenderTarget::RegisterSwapChain(CAnalogRenderTarget *this)
{
  CCompositionSurfaceInfo *ExclusiveSurfaceInfo; // rax
  CCompositionSurfaceInfo *v3; // rdi
  unsigned int v4; // eax
  unsigned int v5; // edx
  int v6; // eax
  char *v8; // [rsp+48h] [rbp+10h] BYREF

  ExclusiveSurfaceInfo = CAnalogRenderTarget::GetExclusiveSurfaceInfo(this);
  v3 = ExclusiveSurfaceInfo;
  if ( ExclusiveSurfaceInfo )
  {
    CCompositionSurfaceInfo::SetAnalogExclusive(ExclusiveSurfaceInfo, 1u);
    if ( this )
      v8 = (char *)this + 80;
    else
      v8 = 0LL;
    v4 = *((_DWORD *)v3 + 56);
    v5 = v4 + 1;
    if ( v4 + 1 >= v4 )
    {
      if ( v5 > *((_DWORD *)v3 + 55) )
      {
        v6 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v3 + 200, 8u, 1, &v8);
        if ( v6 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0xC0u);
      }
      else
      {
        *(_QWORD *)(*((_QWORD *)v3 + 25) + 8LL * *((unsigned int *)v3 + 56)) = v8;
        *((_DWORD *)v3 + 56) = v5;
      }
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
    }
    *((_BYTE *)this + 215) = 1;
    CAnalogRenderTarget::ProcessExclusiveSurfaceUpdate(this);
  }
  return 0LL;
}

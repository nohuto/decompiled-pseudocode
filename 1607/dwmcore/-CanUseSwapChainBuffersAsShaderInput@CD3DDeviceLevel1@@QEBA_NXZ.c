/*
 * XREFs of ?CanUseSwapChainBuffersAsShaderInput@CD3DDeviceLevel1@@QEBA_NXZ @ 0x1800809D4
 * Callers:
 *     ?CalcSwapChainParameters@CDisplay@@QEBAJU?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEAUHWND__@@PEBVCD3DDeviceLevel1@@PEAUDXGI_SWAP_CHAIN_DESC@@PEAIPEA_N@Z @ 0x180034420 (-CalcSwapChainParameters@CDisplay@@QEBAJU-$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEAU.c)
 *     ?GetBackdropImageFromRenderTarget@CDrawingContext@@QEAAJAEBUD2D_SIZE_F@@_NPEAUEffectInput@@@Z @ 0x180123628 (-GetBackdropImageFromRenderTarget@CDrawingContext@@QEAAJAEBUD2D_SIZE_F@@_NPEAUEffectInput@@@Z.c)
 *     ?Initialize@CRenderTargetBitmap@@IEAAJPEAVIRenderTargetDisplay@@@Z @ 0x180132A1C (-Initialize@CRenderTargetBitmap@@IEAAJPEAVIRenderTargetDisplay@@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall CD3DDeviceLevel1::CanUseSwapChainBuffersAsShaderInput(CD3DDeviceLevel1 *this)
{
  char v1; // dl
  __int64 v3; // r8

  v1 = 0;
  if ( *((int *)this + 169) >= 40960 )
    return 1;
  v3 = *((_QWORD *)this + 80);
  if ( *(_DWORD *)(v3 + 296) == 1297040209 )
    return *(_DWORD *)(v3 + 344) >= 1200;
  return v1;
}

/*
 * XREFs of ??_G?$CDeviceResourceTable@VCD3DPixelShader@@VCCompiledEffectTemplate@@VCD3DDeviceLevel1@@@@UEAAPEAXI@Z @ 0x180112E40
 * Callers:
 *     <none>
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ??1?$CDeviceResourceTable@VCD3DPixelShader@@VCCompiledEffectTemplate@@VCD3DDeviceLevel1@@@@UEAA@XZ @ 0x180112CB4 (--1-$CDeviceResourceTable@VCD3DPixelShader@@VCCompiledEffectTemplate@@VCD3DDeviceLevel1@@@@UEAA@.c)
 */

__int64 __fastcall CDeviceResourceTable<CD3DPixelShader,CCompiledEffectTemplate,CD3DDeviceLevel1>::`scalar deleting destructor'(
        __int64 a1,
        char a2)
{
  CDeviceResourceTable<CD3DPixelShader,CCompiledEffectTemplate,CD3DDeviceLevel1>::~CDeviceResourceTable<CD3DPixelShader,CCompiledEffectTemplate,CD3DDeviceLevel1>(a1);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      a1);
  return a1;
}

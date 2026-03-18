/*
 * XREFs of ??_G?$CDeviceResourceTable@VCD3DPixelShader@@UEffectShaderFactory@CCompiledEffectTemplate@@VCD3DDeviceLevel1@@@@UEAAPEAXI@Z @ 0x18014E010
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ??1?$CDeviceResourceTable@VCD3DPixelShader@@UEffectShaderFactory@CCompiledEffectTemplate@@VCD3DDeviceLevel1@@@@UEAA@XZ @ 0x18014DF20 (--1-$CDeviceResourceTable@VCD3DPixelShader@@UEffectShaderFactory@CCompiledEffectTemplate@@VCD3DD.c)
 */

_QWORD *__fastcall CDeviceResourceTable<CD3DPixelShader,CCompiledEffectTemplate::EffectShaderFactory,CD3DDeviceLevel1>::`scalar deleting destructor'(
        _QWORD *a1,
        char a2)
{
  CDeviceResourceTable<CD3DPixelShader,CCompiledEffectTemplate::EffectShaderFactory,CD3DDeviceLevel1>::~CDeviceResourceTable<CD3DPixelShader,CCompiledEffectTemplate::EffectShaderFactory,CD3DDeviceLevel1>(a1);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      a1);
  return a1;
}

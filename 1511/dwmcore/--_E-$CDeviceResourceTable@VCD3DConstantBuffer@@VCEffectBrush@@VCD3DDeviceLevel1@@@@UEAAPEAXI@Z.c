/*
 * XREFs of ??_E?$CDeviceResourceTable@VCD3DConstantBuffer@@VCEffectBrush@@VCD3DDeviceLevel1@@@@UEAAPEAXI@Z @ 0x1801227B0
 * Callers:
 *     <none>
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ??1?$CDeviceResourceTable@VCD3DConstantBuffer@@VCEffectBrush@@VCD3DDeviceLevel1@@@@UEAA@XZ @ 0x180122570 (--1-$CDeviceResourceTable@VCD3DConstantBuffer@@VCEffectBrush@@VCD3DDeviceLevel1@@@@UEAA@XZ.c)
 */

__int64 __fastcall CDeviceResourceTable<CD3DConstantBuffer,CEffectBrush,CD3DDeviceLevel1>::`vector deleting destructor'(
        __int64 a1,
        char a2)
{
  CDeviceResourceTable<CD3DConstantBuffer,CEffectBrush,CD3DDeviceLevel1>::~CDeviceResourceTable<CD3DConstantBuffer,CEffectBrush,CD3DDeviceLevel1>(a1);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      a1);
  return a1;
}

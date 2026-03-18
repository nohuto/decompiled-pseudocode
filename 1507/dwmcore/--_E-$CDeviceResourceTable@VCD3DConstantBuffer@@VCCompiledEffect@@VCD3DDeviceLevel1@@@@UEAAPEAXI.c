/*
 * XREFs of ??_E?$CDeviceResourceTable@VCD3DConstantBuffer@@VCCompiledEffect@@VCD3DDeviceLevel1@@@@UEAAPEAXI@Z @ 0x180112420
 * Callers:
 *     <none>
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ??1?$CDeviceResourceTable@VCD3DConstantBuffer@@VCCompiledEffect@@VCD3DDeviceLevel1@@@@UEAA@XZ @ 0x1801122B0 (--1-$CDeviceResourceTable@VCD3DConstantBuffer@@VCCompiledEffect@@VCD3DDeviceLevel1@@@@UEAA@XZ.c)
 */

__int64 __fastcall CDeviceResourceTable<CD3DConstantBuffer,CCompiledEffect,CD3DDeviceLevel1>::`vector deleting destructor'(
        __int64 a1,
        char a2)
{
  CDeviceResourceTable<CD3DConstantBuffer,CCompiledEffect,CD3DDeviceLevel1>::~CDeviceResourceTable<CD3DConstantBuffer,CCompiledEffect,CD3DDeviceLevel1>(a1);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      a1);
  return a1;
}

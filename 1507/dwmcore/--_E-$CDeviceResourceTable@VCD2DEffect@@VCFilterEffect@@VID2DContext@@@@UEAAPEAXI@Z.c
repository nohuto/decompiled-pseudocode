/*
 * XREFs of ??_E?$CDeviceResourceTable@VCD2DEffect@@VCFilterEffect@@VID2DContext@@@@UEAAPEAXI@Z @ 0x1800F8C10
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CDeviceResourceTable@VCD2DEffect@@VCFilterEffect@@VID2DContext@@@@UEAA@XZ @ 0x180002EA8 (--1-$CDeviceResourceTable@VCD2DEffect@@VCFilterEffect@@VID2DContext@@@@UEAA@XZ.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

struct IDeviceResourceNotify *__fastcall CDeviceResourceTable<CD2DEffect,CFilterEffect,ID2DContext>::`vector deleting destructor'(
        struct IDeviceResourceNotify *a1,
        char a2)
{
  CDeviceResourceTable<CD2DEffect,CFilterEffect,ID2DContext>::~CDeviceResourceTable<CD2DEffect,CFilterEffect,ID2DContext>(a1);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, struct IDeviceResourceNotify *))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                   + 32LL))(
      WPF::g_pProcessHeap,
      a1);
  return a1;
}

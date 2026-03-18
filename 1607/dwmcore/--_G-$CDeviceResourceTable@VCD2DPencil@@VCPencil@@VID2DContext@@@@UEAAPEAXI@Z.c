/*
 * XREFs of ??_G?$CDeviceResourceTable@VCD2DPencil@@VCPencil@@VID2DContext@@@@UEAAPEAXI@Z @ 0x18012B360
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ??1?$CDeviceResourceTable@VCD2DPencil@@VCPencil@@VID2DContext@@@@UEAA@XZ @ 0x18012B198 (--1-$CDeviceResourceTable@VCD2DPencil@@VCPencil@@VID2DContext@@@@UEAA@XZ.c)
 */

struct IDeviceResourceNotify *__fastcall CDeviceResourceTable<CD2DPencil,CPencil,ID2DContext>::`scalar deleting destructor'(
        struct IDeviceResourceNotify *a1,
        char a2)
{
  CDeviceResourceTable<CD2DPencil,CPencil,ID2DContext>::~CDeviceResourceTable<CD2DPencil,CPencil,ID2DContext>(a1);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, struct IDeviceResourceNotify *))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                   + 32LL))(
      WPF::g_pProcessHeap,
      a1);
  return a1;
}

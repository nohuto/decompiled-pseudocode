/*
 * XREFs of ??_ECD3DDeviceLevel1@@MEAAPEAXI@Z @ 0x180080990
 * Callers:
 *     ?Create@CD3DDeviceLevel1@@SAJAEBU_GUID@@PEAVCDXGIEnumeration@@PEAVCDXGIAdapterLimited@@PEAVIMILPoolManager@@PEAPEAV1@@Z @ 0x180021598 (-Create@CD3DDeviceLevel1@@SAJAEBU_GUID@@PEAVCDXGIEnumeration@@PEAVCDXGIAdapterLimited@@PEAVIMILP.c)
 *     ?HandleAdvanceFrame@CD3DDeviceManager@@AEAAJ_K_N@Z @ 0x180035810 (-HandleAdvanceFrame@CD3DDeviceManager@@AEAAJ_K_N@Z.c)
 *     ??_ECD3DDeviceLevel1@@OBJI@EAAPEAXI@Z @ 0x1800C1330 (--_ECD3DDeviceLevel1@@OBJI@EAAPEAXI@Z.c)
 *     ?DeleteUnusedDevice@CD3DDeviceManager@@AEAA_NI@Z @ 0x1801130A8 (-DeleteUnusedDevice@CD3DDeviceManager@@AEAA_NI@Z.c)
 * Callees:
 *     ??1CD3DDeviceLevel1@@MEAA@XZ @ 0x180080264 (--1CD3DDeviceLevel1@@MEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

CD3DDeviceLevel1 *__fastcall CD3DDeviceLevel1::`vector deleting destructor'(CD3DDeviceLevel1 *this, char a2)
{
  CD3DDeviceLevel1::~CD3DDeviceLevel1(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CD3DDeviceLevel1 *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}

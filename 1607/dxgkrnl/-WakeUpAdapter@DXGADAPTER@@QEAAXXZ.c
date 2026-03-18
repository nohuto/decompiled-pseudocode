/*
 * XREFs of ?WakeUpAdapter@DXGADAPTER@@QEAAXXZ @ 0x1C0146B88
 * Callers:
 *     ?TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ @ 0x1C0009524 (-TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ @ 0x1C009FA70 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ.c)
 * Callees:
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0009890 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     DpiRequestDevicePowerState @ 0x1C0010C28 (DpiRequestDevicePowerState.c)
 */

void __fastcall DXGADAPTER::WakeUpAdapter(DXGADAPTER *this)
{
  DXGPUSHLOCK::AcquireShared((DXGADAPTER *)((char *)this + 72));
  if ( *((_DWORD *)this + 44) == 1 )
    DpiRequestDevicePowerState(*((_QWORD *)this + 24), 1, 0);
  ExReleasePushLockSharedEx((char *)this + 72, 0LL);
  KeLeaveCriticalRegion();
}

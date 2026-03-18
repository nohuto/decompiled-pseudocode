/*
 * XREFs of ?WakeUpAdapter@DXGADAPTER@@QEAAXXZ @ 0x1C012FDE8
 * Callers:
 *     ?TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ @ 0x1C0003358 (-TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ @ 0x1C0079FD0 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ.c)
 * Callees:
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0001C24 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     DpiRequestDevicePowerState @ 0x1C00104C8 (DpiRequestDevicePowerState.c)
 */

void __fastcall DXGADAPTER::WakeUpAdapter(DXGADAPTER *this)
{
  DXGPUSHLOCK::AcquireShared((DXGADAPTER *)((char *)this + 56));
  if ( *((_DWORD *)this + 40) == 1 )
    DpiRequestDevicePowerState(*((_QWORD *)this + 22), 1, 0);
  ExReleasePushLockSharedEx((char *)this + 56, 0LL);
  KeLeaveCriticalRegion();
}

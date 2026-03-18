/*
 * XREFs of PopFxLockDevice @ 0x1400DA88C
 * Callers:
 *     PoFxNotifySurprisePowerOn @ 0x140116978 (PoFxNotifySurprisePowerOn.c)
 *     PopAllocateIrp @ 0x140121CF4 (PopAllocateIrp.c)
 *     PopFxUnregisterDeviceOrWait @ 0x1404A1280 (PopFxUnregisterDeviceOrWait.c)
 * Callees:
 *     ExReleaseSpinLockShared @ 0x14000A410 (ExReleaseSpinLockShared.c)
 *     ExAcquireSpinLockShared @ 0x140079490 (ExAcquireSpinLockShared.c)
 *     IoAcquireRemoveLockEx @ 0x1400DAFE0 (IoAcquireRemoveLockEx.c)
 */

__int64 __fastcall PopFxLockDevice(__int64 a1, char a2)
{
  __int64 v4; // rbx
  KIRQL v5; // al
  KIRQL v6; // r14

  v4 = 0LL;
  if ( a1 )
  {
    v5 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(a1 + 88));
    v4 = *(_QWORD *)(a1 + 80);
    v6 = v5;
    if ( a2 )
      v4 &= -(__int64)((*(_BYTE *)(a1 + 296) & 4) != 0);
    if ( v4 && IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(v4 + 208), 0LL, &File, 1u, 0x20u) < 0 )
      v4 = 0LL;
    ExReleaseSpinLockShared((PEX_SPIN_LOCK)(a1 + 88), v6);
  }
  return v4;
}

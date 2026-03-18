/*
 * XREFs of PopFxDeviceWork @ 0x140237E18
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x14004C230 (KeSetEvent.c)
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     PopFxDeliverDevicePowerRequired @ 0x14013A1B4 (PopFxDeliverDevicePowerRequired.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 */

LONG __fastcall PopFxDeviceWork(ULONG_PTR BugCheckParameter2)
{
  volatile signed __int32 *v2; // rdi
  unsigned __int8 CurrentIrql; // si
  LONG result; // eax
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  v2 = (volatile signed __int32 *)(BugCheckParameter2 + 328);
  do
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireSpinLockInstrumented(v2);
    }
    else if ( _interlockedbittestandset64(v2, 0LL) )
    {
      KxWaitForSpinLockAndAcquire(v2);
    }
    PopFxDeliverDevicePowerRequired(BugCheckParameter2, 0LL);
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      KiReleaseSpinLockInstrumented((volatile signed __int64 *)v2, retaddr);
    else
      _InterlockedAnd64((volatile signed __int64 *)v2, 0LL);
    __writecr8(CurrentIrql);
  }
  while ( _InterlockedExchangeAdd((volatile signed __int32 *)(BugCheckParameter2 + 304), 0xFFFFFFFF) != 1 );
  result = _InterlockedExchangeAdd((volatile signed __int32 *)(BugCheckParameter2 + 212), 0xFFFFFFFF);
  if ( result == 1 )
    return KeSetEvent((PRKEVENT)(BugCheckParameter2 + 216), 0, 0);
  return result;
}

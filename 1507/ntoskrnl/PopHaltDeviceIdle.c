/*
 * XREFs of PopHaltDeviceIdle @ 0x140147EFC
 * Callers:
 *     PoInitializeBroadcast @ 0x140565238 (PoInitializeBroadcast.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14004F100 (KeWaitForSingleObject.c)
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 */

NTSTATUS PopHaltDeviceIdle()
{
  __int16 *v0; // rbx
  unsigned __int8 CurrentIrql; // di
  NTSTATUS result; // eax
  __int16 v3; // [rsp+30h] [rbp-28h] BYREF
  char v4; // [rsp+32h] [rbp-26h]
  int v5; // [rsp+34h] [rbp-24h]
  _QWORD v6[4]; // [rsp+38h] [rbp-20h] BYREF
  void *retaddr; // [rsp+58h] [rbp+0h]

  v0 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireSpinLockInstrumented(&PopDopeGlobalLock);
  }
  else if ( _interlockedbittestandset64((volatile signed __int32 *)&PopDopeGlobalLock, 0LL) )
  {
    KxWaitForSpinLockAndAcquire((volatile signed __int32 *)&PopDopeGlobalLock);
  }
  byte_1403538EC = 1;
  if ( dword_1403538E8 )
  {
    v5 = 0;
    v6[1] = v6;
    v0 = &v3;
    v3 = 1;
    v6[0] = v6;
    PopDeviceIdleSync = (PRKEVENT)&v3;
    v4 = 6;
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    KiReleaseSpinLockInstrumented(&PopDopeGlobalLock, retaddr);
  else
    _InterlockedAnd64(&PopDopeGlobalLock, 0LL);
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  if ( v0 )
    return KeWaitForSingleObject(v0, Executive, 0, 0, 0LL);
  return result;
}

/*
 * XREFs of PnpDeviceCompletionQueueDispatchedEntryCompleted @ 0x1400CFF8C
 * Callers:
 *     PnpDeviceCompletionRoutine @ 0x1400CFE20 (PnpDeviceCompletionRoutine.c)
 *     PipEnumerateDevice @ 0x1404616A8 (PipEnumerateDevice.c)
 * Callees:
 *     KeReleaseSemaphoreEx @ 0x140044830 (KeReleaseSemaphoreEx.c)
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 */

__int64 __fastcall PnpDeviceCompletionQueueDispatchedEntryCompleted(__int64 a1, __int64 *a2, __int64 a3, __int64 a4)
{
  unsigned __int8 CurrentIrql; // di
  __int64 v6; // rcx
  __int64 **v7; // rax
  __int64 **v8; // rax
  __int64 result; // rax
  void *retaddr; // [rsp+38h] [rbp+0h]

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireSpinLockInstrumented(&qword_14034A868);
  }
  else if ( _interlockedbittestandset64((volatile signed __int32 *)&qword_14034A868, 0LL) )
  {
    KxWaitForSpinLockAndAcquire((volatile signed __int32 *)&qword_14034A868);
  }
  v6 = *a2;
  v7 = (__int64 **)a2[1];
  if ( *(__int64 **)(*a2 + 8) != a2 || *v7 != a2 )
    __fastfail(3u);
  *v7 = (__int64 *)v6;
  *(_QWORD *)(v6 + 8) = v7;
  v8 = (__int64 **)qword_14034A840;
  --dword_14034A830;
  *a2 = (__int64)&qword_14034A838;
  a2[1] = (__int64)v8;
  if ( *v8 != &qword_14034A838 )
    __fastfail(3u);
  *v8 = a2;
  qword_14034A840 = (__int64)a2;
  KeReleaseSemaphoreEx((__int64)&byte_14034A848, 0, 1, a4, 0);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    KiReleaseSpinLockInstrumented(&qword_14034A868, retaddr);
  else
    _InterlockedAnd64(&qword_14034A868, 0LL);
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}

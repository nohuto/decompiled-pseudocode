/*
 * XREFs of PnpDeviceCompletionQueueRemoveCompletedRequest @ 0x140026EF0
 * Callers:
 *     PnpStartDeviceNode @ 0x14045E860 (PnpStartDeviceNode.c)
 *     PipEnumerateDevice @ 0x1404616A8 (PipEnumerateDevice.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14004F100 (KeWaitForSingleObject.c)
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 */

_QWORD *__fastcall PnpDeviceCompletionQueueRemoveCompletedRequest(__int64 a1, _QWORD *a2)
{
  unsigned __int8 CurrentIrql; // di
  __int64 v4; // rcx
  _QWORD *v5; // rax
  void *retaddr; // [rsp+38h] [rbp+0h]

  KeWaitForSingleObject(&byte_14034A848, Executive, 0, 0, 0LL);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireSpinLockInstrumented(&qword_14034A868);
  }
  else if ( _interlockedbittestandset64((volatile signed __int32 *)&qword_14034A868, 0LL) )
  {
    KxWaitForSpinLockAndAcquire(&qword_14034A868);
  }
  v4 = *a2;
  v5 = (_QWORD *)a2[1];
  if ( *(_QWORD **)(*a2 + 8LL) != a2 || (_QWORD *)*v5 != a2 )
    __fastfail(3u);
  *v5 = v4;
  *(_QWORD *)(v4 + 8) = v5;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    KiReleaseSpinLockInstrumented(&qword_14034A868, retaddr);
  else
    _InterlockedAnd64(&qword_14034A868, 0LL);
  __writecr8(CurrentIrql);
  return a2;
}

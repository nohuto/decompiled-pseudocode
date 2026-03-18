/*
 * XREFs of PnpDeviceCompletionQueueAddDispatchedRequest @ 0x140027140
 * Callers:
 *     PnpStartDeviceNode @ 0x14045E860 (PnpStartDeviceNode.c)
 *     PipEnumerateDevice @ 0x1404616A8 (PipEnumerateDevice.c)
 * Callees:
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 */

_BOOL8 __fastcall PnpDeviceCompletionQueueAddDispatchedRequest(__int64 a1, __int64 *a2)
{
  unsigned __int8 CurrentIrql; // si
  __int64 **v4; // rax
  bool v5; // zf
  BOOL v6; // edi
  void *retaddr; // [rsp+28h] [rbp+0h]

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
  v4 = (__int64 **)qword_14034A828;
  v5 = PnpDeviceCompletionQueue == (_QWORD)&PnpDeviceCompletionQueue;
  *a2 = (__int64)&PnpDeviceCompletionQueue;
  v6 = v5;
  a2[1] = (__int64)v4;
  if ( *v4 != &PnpDeviceCompletionQueue )
    __fastfail(3u);
  *v4 = a2;
  ++dword_14034A830;
  qword_14034A828 = (__int64)a2;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    KiReleaseSpinLockInstrumented(&qword_14034A868, retaddr);
  else
    _InterlockedAnd64(&qword_14034A868, 0LL);
  __writecr8(CurrentIrql);
  return v6;
}

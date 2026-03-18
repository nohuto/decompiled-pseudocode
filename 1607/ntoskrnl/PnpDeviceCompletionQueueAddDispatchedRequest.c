/*
 * XREFs of PnpDeviceCompletionQueueAddDispatchedRequest @ 0x140008010
 * Callers:
 *     PnpStartDeviceNode @ 0x1403F10D4 (PnpStartDeviceNode.c)
 *     PipEnumerateDevice @ 0x1403F1CBC (PipEnumerateDevice.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x1400E9A70 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400EFE30 (KeAcquireSpinLockRaiseToDpc.c)
 */

_BOOL8 __fastcall PnpDeviceCompletionQueueAddDispatchedRequest(__int64 a1, _QWORD *a2)
{
  KIRQL v3; // al
  _QWORD *v4; // rcx
  BOOL v5; // edi

  v3 = KeAcquireSpinLockRaiseToDpc(&qword_14031F908);
  v4 = (_QWORD *)qword_14031F8C8;
  v5 = PnpDeviceCompletionQueue == (_QWORD)&PnpDeviceCompletionQueue;
  if ( *(__int64 **)qword_14031F8C8 != &PnpDeviceCompletionQueue )
    __fastfail(3u);
  *a2 = &PnpDeviceCompletionQueue;
  a2[1] = v4;
  *v4 = a2;
  ++dword_14031F8D0;
  qword_14031F8C8 = (__int64)a2;
  KeReleaseSpinLock(&qword_14031F908, v3);
  return v5;
}

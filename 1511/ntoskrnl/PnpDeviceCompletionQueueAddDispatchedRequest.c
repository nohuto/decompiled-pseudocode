/*
 * XREFs of PnpDeviceCompletionQueueAddDispatchedRequest @ 0x14001A8E4
 * Callers:
 *     PipEnumerateDevice @ 0x1403D0244 (PipEnumerateDevice.c)
 *     PnpStartDeviceNode @ 0x1404F2A48 (PnpStartDeviceNode.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14002D960 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140038DA0 (KeAcquireSpinLockRaiseToDpc.c)
 */

_BOOL8 __fastcall PnpDeviceCompletionQueueAddDispatchedRequest(__int64 a1, __int64 *a2)
{
  KIRQL v3; // al
  __int64 **v4; // rcx
  bool v5; // zf
  BOOL v6; // edi

  v3 = KeAcquireSpinLockRaiseToDpc(&qword_1402FA3E8);
  v4 = (__int64 **)qword_1402FA3A8;
  v5 = PnpDeviceCompletionQueue == (_QWORD)&PnpDeviceCompletionQueue;
  *a2 = (__int64)&PnpDeviceCompletionQueue;
  v6 = v5;
  a2[1] = (__int64)v4;
  if ( *v4 != &PnpDeviceCompletionQueue )
    __fastfail(3u);
  *v4 = a2;
  ++dword_1402FA3B0;
  qword_1402FA3A8 = (__int64)a2;
  KeReleaseSpinLock(&qword_1402FA3E8, v3);
  return v6;
}

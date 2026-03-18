/*
 * XREFs of PnpDeviceCompletionQueueRemoveCompletedRequest @ 0x14001AB74
 * Callers:
 *     PipEnumerateDevice @ 0x1403D0244 (PipEnumerateDevice.c)
 *     PnpStartDeviceNode @ 0x1404F2A48 (PnpStartDeviceNode.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14002D960 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140038DA0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeWaitForSingleObject @ 0x140081870 (KeWaitForSingleObject.c)
 */

_QWORD *__fastcall PnpDeviceCompletionQueueRemoveCompletedRequest(__int64 a1, _QWORD *a2)
{
  KIRQL v3; // al
  __int64 v4; // r8
  _QWORD *v5; // rdx

  KeWaitForSingleObject(&byte_1402FA3C8, Executive, 0, 0, 0LL);
  v3 = KeAcquireSpinLockRaiseToDpc(&qword_1402FA3E8);
  v4 = *a2;
  v5 = (_QWORD *)a2[1];
  if ( *(_QWORD **)(*a2 + 8LL) != a2 || (_QWORD *)*v5 != a2 )
    __fastfail(3u);
  *v5 = v4;
  *(_QWORD *)(v4 + 8) = v5;
  KeReleaseSpinLock(&qword_1402FA3E8, v3);
  return a2;
}

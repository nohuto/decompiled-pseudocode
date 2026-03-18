/*
 * XREFs of PnpDeviceCompletionQueueDispatchedEntryCompleted @ 0x140099508
 * Callers:
 *     PnpDeviceCompletionRoutine @ 0x140099428 (PnpDeviceCompletionRoutine.c)
 *     PipEnumerateDevice @ 0x1403D0244 (PipEnumerateDevice.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x140038DA0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeReleaseSemaphoreEx @ 0x14007A6F0 (KeReleaseSemaphoreEx.c)
 */

void __fastcall PnpDeviceCompletionQueueDispatchedEntryCompleted(__int64 a1, __int64 *a2)
{
  KIRQL v3; // al
  __int64 v4; // r9
  __int64 v5; // rdx
  KIRQL v6; // di
  __int64 **v7; // rcx
  __int64 **v8; // rcx

  v3 = KeAcquireSpinLockRaiseToDpc(&qword_1402FA3E8);
  v5 = *a2;
  v6 = v3;
  v7 = (__int64 **)a2[1];
  if ( *(__int64 **)(*a2 + 8) != a2 || *v7 != a2 )
    __fastfail(3u);
  *v7 = (__int64 *)v5;
  *(_QWORD *)(v5 + 8) = v7;
  v8 = (__int64 **)qword_1402FA3C0;
  --dword_1402FA3B0;
  *a2 = (__int64)&qword_1402FA3B8;
  a2[1] = (__int64)v8;
  if ( *v8 != &qword_1402FA3B8 )
    __fastfail(3u);
  *v8 = a2;
  qword_1402FA3C0 = (__int64)a2;
  KeReleaseSemaphoreEx((__int64)&byte_1402FA3C8, 0, 1LL, v4, 0);
  KeReleaseSpinLock(&qword_1402FA3E8, v6);
}

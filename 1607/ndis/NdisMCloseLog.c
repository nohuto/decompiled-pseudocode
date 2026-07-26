/*
 * XREFs of NdisMCloseLog @ 0x1C0059A10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall NdisMCloseLog(NDIS_HANDLE LogHandle)
{
  __int64 v1; // rbx
  KIRQL v3; // al

  v1 = *(_QWORD *)LogHandle;
  v3 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(*(_QWORD *)LogHandle + 96LL));
  *(_QWORD *)(v1 + 936) = 0LL;
  *(_QWORD *)(v1 + 520) = 0LL;
  *(_DWORD *)(v1 + 1856) = 0;
  KeReleaseSpinLock((PKSPIN_LOCK)(v1 + 96), v3);
  ExFreePoolWithTag(LogHandle, 0);
}

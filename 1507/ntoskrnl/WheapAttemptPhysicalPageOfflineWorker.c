/*
 * XREFs of WheapAttemptPhysicalPageOfflineWorker @ 0x1406FCA40
 * Callers:
 *     <none>
 * Callees:
 *     WheapAttemptPhysicalPageOffline @ 0x1406FC934 (WheapAttemptPhysicalPageOffline.c)
 */

LONG __fastcall WheapAttemptPhysicalPageOfflineWorker(__int64 a1)
{
  *(_DWORD *)(a1 + 12) = WheapAttemptPhysicalPageOffline(*(_QWORD *)a1, *(_BYTE *)(a1 + 8), *(_BYTE *)(a1 + 9));
  return KeSetEvent((PRKEVENT)(a1 + 16), 0, 0);
}

/*
 * XREFs of ndisWaitWakeIoCompletion @ 0x1C0063790
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisWaitWakeIoCompletion(__int64 a1, __int64 a2, __int64 a3)
{
  KIRQL v4; // al
  bool v5; // cf
  unsigned int v6; // ebx

  v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a3 + 96));
  *(_QWORD *)(a3 + 520) = KeGetCurrentThread();
  v5 = *(_BYTE *)(a3 + 1329) != 0;
  *(_DWORD *)(a3 + 1856) = 1704613;
  *(_BYTE *)(a3 + 1328) = 1;
  *(_QWORD *)(a3 + 520) = 0LL;
  *(_DWORD *)(a3 + 1856) = 0;
  v6 = v5 ? 0xC0000016 : 0;
  KeReleaseSpinLock((PKSPIN_LOCK)(a3 + 96), v4);
  return v6;
}

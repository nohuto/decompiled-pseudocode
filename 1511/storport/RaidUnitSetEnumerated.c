/*
 * XREFs of RaidUnitSetEnumerated @ 0x1C000BB80
 * Callers:
 *     RaidpBuildAdapterBusRelations @ 0x1C000B970 (RaidpBuildAdapterBusRelations.c)
 * Callees:
 *     <none>
 */

bool __fastcall RaidUnitSetEnumerated(__int64 a1, char a2)
{
  char v4; // r8
  bool v5; // bl
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 32), &LockHandle);
  v4 = *(_BYTE *)(a1 + 144);
  v5 = (v4 & 2) != 0;
  *(_BYTE *)(a1 + 144) = v4 ^ (v4 ^ (2 * a2)) & 2;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return v5;
}

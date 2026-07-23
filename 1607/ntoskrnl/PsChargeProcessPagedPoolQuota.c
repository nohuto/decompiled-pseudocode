/*
 * XREFs of PsChargeProcessPagedPoolQuota @ 0x1404AD388
 * Callers:
 *     AlpcpChargePagedPoolQuota @ 0x14040C5B4 (AlpcpChargePagedPoolQuota.c)
 *     ExpAllocateHandleTable @ 0x1404AD0A8 (ExpAllocateHandleTable.c)
 *     ExpAllocateTablePagedPoolNoZero @ 0x1404AD330 (ExpAllocateTablePagedPoolNoZero.c)
 *     MiResizeAweBitMap @ 0x14065C910 (MiResizeAweBitMap.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsChargeProcessPagedPoolQuota(struct _KPROCESS *a1, unsigned __int64 a2)
{
  if ( a1 == PsInitialSystemProcess )
    return 0LL;
  else
    return PspChargeQuota(a1[1].ActiveProcessors.Bitmap[4], (__int64)a1, 1, a2);
}

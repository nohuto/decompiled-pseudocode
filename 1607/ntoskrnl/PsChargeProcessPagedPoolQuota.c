/*
 * XREFs of PsChargeProcessPagedPoolQuota @ 0x1404C1658
 * Callers:
 *     AlpcpChargePagedPoolQuota @ 0x14040D6F4 (AlpcpChargePagedPoolQuota.c)
 *     ExpAllocateHandleTable @ 0x1404C1378 (ExpAllocateHandleTable.c)
 *     ExpAllocateTablePagedPoolNoZero @ 0x1404C1600 (ExpAllocateTablePagedPoolNoZero.c)
 *     MiResizeAweBitMap @ 0x14065C82C (MiResizeAweBitMap.c)
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

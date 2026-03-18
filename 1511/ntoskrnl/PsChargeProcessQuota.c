/*
 * XREFs of PsChargeProcessQuota @ 0x140018A2C
 * Callers:
 *     MmAdjustWorkingSetSizeEx @ 0x140096B2C (MmAdjustWorkingSetSizeEx.c)
 *     MmCreateProcessAddressSpace @ 0x1403CB7AC (MmCreateProcessAddressSpace.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsChargeProcessQuota(struct _KPROCESS *a1, __int64 a2, __int64 a3)
{
  if ( a1 == PsInitialSystemProcess )
    return 0LL;
  else
    return PspChargeQuota(a1[1].ActiveProcessors.Bitmap[4], a1, 3LL, a3);
}

/*
 * XREFs of PsChargeProcessQuota @ 0x1401035B8
 * Callers:
 *     MmAdjustWorkingSetSizeEx @ 0x1400AD44C (MmAdjustWorkingSetSizeEx.c)
 *     MmCreateProcessAddressSpace @ 0x1405261BC (MmCreateProcessAddressSpace.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsChargeProcessQuota(struct _KPROCESS *a1, __int64 a2, unsigned __int64 a3)
{
  if ( a1 == PsInitialSystemProcess )
    return 0LL;
  else
    return PspChargeQuota(a1[1].ActiveProcessors.Bitmap[4], (__int64)a1, 3, a3);
}

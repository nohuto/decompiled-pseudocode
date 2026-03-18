/*
 * XREFs of PspIoRateEntryIoControlReference @ 0x1400B61FC
 * Callers:
 *     PsIoRateControlReference @ 0x1400B6178 (PsIoRateControlReference.c)
 *     PspJobIoRateVolumeEntryReference @ 0x14020FA1C (PspJobIoRateVolumeEntryReference.c)
 * Callees:
 *     ExAcquireRundownProtection @ 0x1400D3ED0 (ExAcquireRundownProtection.c)
 */

unsigned __int64 __fastcall PspIoRateEntryIoControlReference(struct _EX_RUNDOWN_REF *a1)
{
  BOOLEAN v2; // al
  __int64 v3; // rdx

  v2 = ExAcquireRundownProtection(a1 + 4);
  v3 = 0LL;
  if ( v2 )
    return a1[5].Count;
  return v3;
}

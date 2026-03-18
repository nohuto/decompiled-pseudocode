/*
 * XREFs of DbgEnumerateCallback @ 0x1401356CC
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x14001DD60 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     ExAcquireRundownProtection @ 0x1400D3ED0 (ExAcquireRundownProtection.c)
 *     ExReleaseRundownProtection @ 0x1400D3F00 (ExReleaseRundownProtection.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1400EA3E0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 */

unsigned __int64 __fastcall DbgEnumerateCallback(struct _EX_RUNDOWN_REF **a1)
{
  struct _EX_RUNDOWN_REF *Count; // rbx
  struct _EX_RUNDOWN_REF *v3; // rdi
  unsigned __int64 v4; // rsi

  ExAcquireSpinLockSharedAtDpcLevel(&RtlpDebugPrintCallbackLock);
  Count = *a1;
  if ( *a1 )
  {
    v3 = *a1;
  }
  else
  {
    Count = (struct _EX_RUNDOWN_REF *)&RtlpDebugPrintCallbackList;
    v3 = 0LL;
  }
  v4 = 0LL;
  while ( 1 )
  {
    Count = (struct _EX_RUNDOWN_REF *)Count->Count;
    if ( Count == (struct _EX_RUNDOWN_REF *)&RtlpDebugPrintCallbackList )
      break;
    if ( ExAcquireRundownProtection(Count - 2) )
    {
      v4 = Count[-1].Count;
      *a1 = Count;
      break;
    }
  }
  ExReleaseSpinLockSharedFromDpcLevel(&RtlpDebugPrintCallbackLock);
  if ( v3 )
    ExReleaseRundownProtection(v3 - 2);
  return v4;
}

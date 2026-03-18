/*
 * XREFs of DbgEnumerateCallback @ 0x1400F44E0
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x140035AF0 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     ExReleaseRundownProtection_0 @ 0x14006EE30 (ExReleaseRundownProtection_0.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140077FB0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireRundownProtection @ 0x140079FF0 (ExAcquireRundownProtection.c)
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
    ExReleaseRundownProtection_0(v3 - 2);
  return v4;
}

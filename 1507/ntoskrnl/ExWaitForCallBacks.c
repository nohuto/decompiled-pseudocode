/*
 * XREFs of ExWaitForCallBacks @ 0x1406EF7C0
 * Callers:
 *     IoUnregisterPriorityCallback @ 0x1401F67FC (IoUnregisterPriorityCallback.c)
 *     KeDeregisterBoundCallback @ 0x1401FFC50 (KeDeregisterBoundCallback.c)
 * Callees:
 *     ExfWaitForRundownProtectionRelease @ 0x1400D4A70 (ExfWaitForRundownProtectionRelease.c)
 */

int __fastcall ExWaitForCallBacks(volatile signed __int64 *a1)
{
  unsigned __int64 v1; // rax

  v1 = _InterlockedCompareExchange64(a1, 1LL, 0LL);
  if ( v1 >= 2 )
    LODWORD(v1) = ExfWaitForRundownProtectionRelease(a1, v1);
  return v1;
}

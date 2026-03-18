/*
 * XREFs of PfLockSharedAcquire @ 0x1400FAF50
 * Callers:
 *     PfQuerySuperfetchInformation @ 0x140475A70 (PfQuerySuperfetchInformation.c)
 *     PfpRpCHashDeleteEntries @ 0x1404AC980 (PfpRpCHashDeleteEntries.c)
 *     PfSnQueryPrefetcherInformation @ 0x1404B3698 (PfSnQueryPrefetcherInformation.c)
 *     PfSnGetPrefetchInstructions @ 0x1404D439C (PfSnGetPrefetchInstructions.c)
 *     PfSnIsHostingApplication @ 0x1404D6338 (PfSnIsHostingApplication.c)
 *     PfCheckDeprioritizeImage @ 0x1404D66AC (PfCheckDeprioritizeImage.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140020AB0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 */

signed __int64 __fastcall PfLockSharedAcquire(volatile signed __int64 *a1)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v3; // rbx
  signed __int64 result; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v3 = KeAbPreAcquire((ULONG_PTR)a1, 0LL, 0LL);
  result = _InterlockedCompareExchange64(a1, 17LL, 0LL);
  if ( result )
    result = ExfAcquirePushLockSharedEx((unsigned __int64 *)a1, v3, (ULONG_PTR)a1);
  if ( v3 )
  {
    result = *(_QWORD *)(v3 + 32);
    *(_BYTE *)(v3 + 26) |= 1u;
  }
  return result;
}

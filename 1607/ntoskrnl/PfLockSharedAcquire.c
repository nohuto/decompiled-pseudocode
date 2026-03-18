/*
 * XREFs of PfLockSharedAcquire @ 0x1400064A4
 * Callers:
 *     PfpRpCHashDeleteEntries @ 0x1403E4C14 (PfpRpCHashDeleteEntries.c)
 *     PfSnGetPrefetchInstructions @ 0x1403E524C (PfSnGetPrefetchInstructions.c)
 *     PfSnIsHostingApplication @ 0x1403E6324 (PfSnIsHostingApplication.c)
 *     PfCheckDeprioritizeImage @ 0x1403E6698 (PfCheckDeprioritizeImage.c)
 *     PfQuerySuperfetchInformation @ 0x140418550 (PfQuerySuperfetchInformation.c)
 *     PfSnQueryPrefetcherInformation @ 0x1404D8920 (PfSnQueryPrefetcherInformation.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002C1B0 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400C8280 (ExfAcquirePushLockSharedEx.c)
 */

__int64 __fastcall PfLockSharedAcquire(volatile signed __int64 *a1)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v3; // rbx
  __int64 result; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v3 = KeAbPreAcquire((ULONG_PTR)a1);
  result = _InterlockedCompareExchange64(a1, 17LL, 0LL);
  if ( result )
    result = ExfAcquirePushLockSharedEx(a1, v3, a1);
  if ( v3 )
  {
    result = *(_QWORD *)(v3 + 32);
    *(_BYTE *)(v3 + 26) |= 1u;
  }
  return result;
}

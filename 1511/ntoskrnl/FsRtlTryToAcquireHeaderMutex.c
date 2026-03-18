/*
 * XREFs of FsRtlTryToAcquireHeaderMutex @ 0x1400DFFAC
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOLEAN __fastcall FsRtlTryToAcquireHeaderMutex(__int64 a1)
{
  return ExTryToAcquireFastMutex(*(PFAST_MUTEX *)(*(_QWORD *)(a1 + 24) + 48LL));
}

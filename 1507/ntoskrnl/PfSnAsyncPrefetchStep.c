/*
 * XREFs of PfSnAsyncPrefetchStep @ 0x140456B0C
 * Callers:
 *     PfSnAsyncPrefetchWorker @ 0x1404567D0 (PfSnAsyncPrefetchWorker.c)
 * Callees:
 *     PfSnPrefetchSections @ 0x140420658 (PfSnPrefetchSections.c)
 *     PfSnPrefetchMetadata @ 0x14042CB54 (PfSnPrefetchMetadata.c)
 */

__int64 __fastcall PfSnAsyncPrefetchStep(__int64 a1, __int64 *a2, __int64 a3)
{
  int v5; // edi
  __int64 v6; // r9
  __int64 result; // rax
  __int64 v8; // r9

  v5 = a3;
  PfSnPrefetchMetadata(a2, (unsigned int)a3, a3);
  result = PfSnPrefetchSections(a2, 0, v5, v6, *(_QWORD *)(a1 + 216));
  if ( (int)result >= 0 )
  {
    result = PfSnPrefetchSections(a2, 1, v5, v8, *(_QWORD *)(a1 + 216));
    if ( (int)result >= 0 )
    {
      *(_DWORD *)(a1 + 232) |= v5;
      return 0LL;
    }
  }
  return result;
}

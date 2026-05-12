/*
 * XREFs of RaidGetPortData @ 0x1C000D1F0
 * Callers:
 *     McGenControlCallbackV2 @ 0x1C000D090 (McGenControlCallbackV2.c)
 *     StorPortInitialize @ 0x1C000D300 (StorPortInitialize.c)
 *     RaSqmLogAdapterStatistics @ 0x1C002B738 (RaSqmLogAdapterStatistics.c)
 *     StorpLogStatistics @ 0x1C003D964 (StorpLogStatistics.c)
 * Callees:
 *     <none>
 */

char *RaidGetPortData()
{
  __int64 v0; // rbx
  char *result; // rax
  _QWORD *v2; // rax

  if ( RaidpPortData )
  {
    _InterlockedIncrement((volatile signed __int32 *)RaidpPortData);
    return (char *)RaidpPortData;
  }
  result = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x28uLL, 0x44506152u);
  v0 = (__int64)result;
  if ( result )
  {
    v2 = result + 8;
    v2[1] = v2;
    *v2 = v2;
    KeInitializeSpinLock((PKSPIN_LOCK)(v0 + 24));
    *(_DWORD *)(v0 + 32) = 0;
    *(_DWORD *)v0 = 1;
    RaidpPortData = v0;
    return (char *)v0;
  }
  return result;
}

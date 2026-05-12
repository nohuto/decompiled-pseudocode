/*
 * XREFs of RaidGetPortData @ 0x1C000A340
 * Callers:
 *     McGenControlCallbackV2 @ 0x1C000A1E0 (McGenControlCallbackV2.c)
 *     StorPortInitialize @ 0x1C000A450 (StorPortInitialize.c)
 *     RaSqmLogAdapterStatistics @ 0x1C00280B8 (RaSqmLogAdapterStatistics.c)
 *     StorpLogStatistics @ 0x1C0039B90 (StorpLogStatistics.c)
 * Callees:
 *     <none>
 */

KSPIN_LOCK *RaidGetPortData()
{
  KSPIN_LOCK *v0; // rbx
  KSPIN_LOCK *result; // rax
  _QWORD *v2; // rax

  if ( WPP_MAIN_CB.Reserved )
  {
    _InterlockedIncrement((volatile signed __int32 *)WPP_MAIN_CB.Reserved);
    return (KSPIN_LOCK *)WPP_MAIN_CB.Reserved;
  }
  result = (KSPIN_LOCK *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x28uLL, 0x44506152u);
  v0 = result;
  if ( result )
  {
    v2 = result + 1;
    v2[1] = v2;
    *v2 = v2;
    KeInitializeSpinLock(v0 + 3);
    *((_DWORD *)v0 + 8) = 0;
    *(_DWORD *)v0 = 1;
    WPP_MAIN_CB.Reserved = v0;
    return v0;
  }
  return result;
}

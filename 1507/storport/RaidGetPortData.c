/*
 * XREFs of RaidGetPortData @ 0x1C0007AFC
 * Callers:
 *     StorPortInitialize @ 0x1C0007C00 (StorPortInitialize.c)
 *     RaSqmLogAdapterStatistics @ 0x1C0026118 (RaSqmLogAdapterStatistics.c)
 *     StorEtwEnableCallback @ 0x1C0034F74 (StorEtwEnableCallback.c)
 *     StorpLogStatistics @ 0x1C0037D0C (StorpLogStatistics.c)
 * Callees:
 *     <none>
 */

KSPIN_LOCK *RaidGetPortData()
{
  KSPIN_LOCK *result; // rax
  KSPIN_LOCK *v1; // rbx
  _QWORD *v2; // rax

  if ( WPP_MAIN_CB.Reserved )
  {
    _InterlockedIncrement((volatile signed __int32 *)WPP_MAIN_CB.Reserved);
    return (KSPIN_LOCK *)WPP_MAIN_CB.Reserved;
  }
  else
  {
    result = (KSPIN_LOCK *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x28uLL, 0x44506152u);
    v1 = result;
    if ( !result )
      return result;
    v2 = result + 1;
    v2[1] = v2;
    *v2 = v2;
    KeInitializeSpinLock(v1 + 3);
    *((_DWORD *)v1 + 8) = 0;
    *(_DWORD *)v1 = 1;
    WPP_MAIN_CB.Reserved = v1;
  }
  return v1;
}

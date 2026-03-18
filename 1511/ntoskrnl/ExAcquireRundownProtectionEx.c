/*
 * XREFs of ExAcquireRundownProtectionEx @ 0x1400FB130
 * Callers:
 *     ExReferenceCallBackBlock @ 0x140038510 (ExReferenceCallBackBlock.c)
 *     MiDispatchFault @ 0x14004EB20 (MiDispatchFault.c)
 *     MiCompleteProtoPteFault @ 0x140054EB0 (MiCompleteProtoPteFault.c)
 *     PfFileInfoNotify @ 0x14006E310 (PfFileInfoNotify.c)
 *     PfSnAddProcessTrace @ 0x1400FAE6C (PfSnAddProcessTrace.c)
 *     PfSnReferenceProcessTrace @ 0x1400FAFB0 (PfSnReferenceProcessTrace.c)
 *     ExCompareExchangeCallBack @ 0x140136EEC (ExCompareExchangeCallBack.c)
 *     PspRundownProcess @ 0x1404A3FD8 (PspRundownProcess.c)
 *     VerifierExAcquireRundownProtectionEx @ 0x1406C0360 (VerifierExAcquireRundownProtectionEx.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall ExAcquireRundownProtectionEx(PEX_RUNDOWN_REF RunRef, ULONG Count)
{
  unsigned __int64 v2; // rax
  __int64 v3; // rdx
  unsigned __int64 v4; // rtt

  _m_prefetchw(RunRef);
  v2 = RunRef->Count;
  if ( (RunRef->Count & 1) != 0 )
    return 0;
  v3 = 2 * Count;
  while ( 1 )
  {
    v4 = v2;
    v2 = _InterlockedCompareExchange64((volatile signed __int64 *)RunRef, v3 + v2, v2);
    if ( v4 == v2 )
      break;
    if ( (v2 & 1) != 0 )
      return 0;
  }
  return 1;
}

/*
 * XREFs of ExAcquireRundownProtectionEx @ 0x140006BD0
 * Callers:
 *     PfSnAddProcessTrace @ 0x140006AA8 (PfSnAddProcessTrace.c)
 *     ExReferenceCallBackBlock @ 0x140013F80 (ExReferenceCallBackBlock.c)
 *     MiCompleteProtoPteFault @ 0x140039AF0 (MiCompleteProtoPteFault.c)
 *     PfFileInfoNotify @ 0x1400EEAD0 (PfFileInfoNotify.c)
 *     PfSnReferenceProcessTrace @ 0x1400F0910 (PfSnReferenceProcessTrace.c)
 *     ExCompareExchangeCallBack @ 0x140136688 (ExCompareExchangeCallBack.c)
 *     PspRundownProcess @ 0x1404F1108 (PspRundownProcess.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall ExAcquireRundownProtectionEx(PEX_RUNDOWN_REF RunRef, ULONG Count)
{
  unsigned __int64 v2; // rax
  unsigned __int64 v3; // rtt

  _m_prefetchw(RunRef);
  v2 = RunRef->Count;
  if ( (RunRef->Count & 1) != 0 )
    return 0;
  while ( 1 )
  {
    v3 = v2;
    v2 = _InterlockedCompareExchange64((volatile signed __int64 *)RunRef, 2 * Count + v2, v2);
    if ( v3 == v2 )
      break;
    if ( (v2 & 1) != 0 )
      return 0;
  }
  return 1;
}

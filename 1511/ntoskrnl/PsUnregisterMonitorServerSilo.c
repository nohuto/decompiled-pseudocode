/*
 * XREFs of PsUnregisterMonitorServerSilo @ 0x14063FD40
 * Callers:
 *     CmpInitServerSilo @ 0x140526568 (CmpInitServerSilo.c)
 *     ExpInitSystemPhase1 @ 0x140759698 (ExpInitSystemPhase1.c)
 *     SeRmInitPhase1 @ 0x140762928 (SeRmInitPhase1.c)
 * Callees:
 *     ExWaitForRundownProtectionRelease @ 0x14002D988 (ExWaitForRundownProtectionRelease.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     ExReleaseRundownProtection_0 @ 0x14006EE30 (ExReleaseRundownProtection_0.c)
 *     PspQueueDeferredWorkAndWait @ 0x1401343C4 (PspQueueDeferredWorkAndWait.c)
 *     PspPointerDereferenceMonitorServerSilo @ 0x140640858 (PspPointerDereferenceMonitorServerSilo.c)
 */

void __fastcall PsUnregisterMonitorServerSilo(struct _EX_RUNDOWN_REF *P)
{
  _m_prefetchw((char *)&P[2].Ptr + 4);
  if ( (_InterlockedOr((volatile signed __int32 *)&P[2].Ptr + 1, 2u) & 2) != 0 )
  {
    ExReleaseRundownProtection_0(P + 4);
  }
  else
  {
    PspQueueDeferredWorkAndWait((__int64 (__fastcall *)(__int64))PspUnregisterMonitorDeferred, (__int64)P);
    ExReleaseRundownProtection_0(P + 4);
    ExWaitForRundownProtectionRelease(P + 4);
    if ( BYTE4(P[13].Ptr) )
      ObfDereferenceObject(P[12].Ptr);
    HIDWORD(P[2].Ptr) |= 4u;
    _InterlockedExchange64((volatile __int64 *)&P[4], 1LL);
    PspPointerDereferenceMonitorServerSilo(P);
  }
}

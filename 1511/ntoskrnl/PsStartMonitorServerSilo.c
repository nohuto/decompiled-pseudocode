/*
 * XREFs of PsStartMonitorServerSilo @ 0x1405268B8
 * Callers:
 *     SepInitializationPhase1 @ 0x1405262AC (SepInitializationPhase1.c)
 *     CmpInitServerSilo @ 0x140526568 (CmpInitServerSilo.c)
 *     EtwpInitialize @ 0x140757334 (EtwpInitialize.c)
 *     ObInitSystem @ 0x140758E84 (ObInitSystem.c)
 *     ExpInitSystemPhase1 @ 0x140759698 (ExpInitSystemPhase1.c)
 *     SeRmInitPhase1 @ 0x140762928 (SeRmInitPhase1.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14006EE30 (ExReleaseRundownProtection_0.c)
 *     PspQueueDeferredWorkAndWait @ 0x1401343C4 (PspQueueDeferredWorkAndWait.c)
 *     PspReferenceMonitorServerSilo @ 0x140526A0C (PspReferenceMonitorServerSilo.c)
 */

__int64 __fastcall PsStartMonitorServerSilo(__int64 a1)
{
  __int64 result; // rax
  unsigned int v3; // edi

  result = PspReferenceMonitorServerSilo(a1);
  v3 = 0;
  if ( (int)result >= 0 )
  {
    if ( (*(_DWORD *)(a1 + 20) & 1) != 0 )
    {
      v3 = -1073741811;
    }
    else
    {
      *(_DWORD *)(a1 + 20) |= 1u;
      if ( *(_QWORD *)(a1 + 40) )
        v3 = PspQueueDeferredWorkAndWait((__int64 (__fastcall *)(__int64))PspStartMonitorDeferred, a1);
    }
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(a1 + 32));
    return v3;
  }
  return result;
}

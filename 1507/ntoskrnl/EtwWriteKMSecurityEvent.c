/*
 * XREFs of EtwWriteKMSecurityEvent @ 0x140164310
 * Callers:
 *     AdtpWriteToEtw @ 0x1405A166C (AdtpWriteToEtw.c)
 * Callees:
 *     EtwpEventWriteFull @ 0x1400182F0 (EtwpEventWriteFull.c)
 *     PsGetMonitorContextServerSilo @ 0x1400CEAC0 (PsGetMonitorContextServerSilo.c)
 *     PspDereferenceMonitorContextServerSilo @ 0x1401178C4 (PspDereferenceMonitorContextServerSilo.c)
 */

__int64 __fastcall EtwWriteKMSecurityEvent(unsigned __int16 *a1, __int64 a2, unsigned int a3, __int64 a4)
{
  __int64 v6; // rbx
  __int64 v7; // rsi
  __int64 v9; // [rsp+A8h] [rbp+10h] BYREF

  v9 = a2;
  v6 = a4;
  PsGetMonitorContextServerSilo(EtwSiloMonitor, (_QWORD *)0xFFFFFFFFFFFFFFFFLL, &v9, a4);
  v7 = v9;
  LODWORD(v6) = EtwpEventWriteFull(
                  v9 + 8,
                  *(_BYTE *)(v9 + 424),
                  0LL,
                  0,
                  a1,
                  0,
                  0,
                  0LL,
                  0LL,
                  a3,
                  v6,
                  0LL,
                  0LL,
                  0LL,
                  0,
                  0LL,
                  0LL);
  PspDereferenceMonitorContextServerSilo((volatile signed __int32 *)(v7 - 96));
  return (unsigned int)v6;
}

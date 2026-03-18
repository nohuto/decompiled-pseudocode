/*
 * XREFs of EtwWriteKMSecurityEvent @ 0x14013B1E0
 * Callers:
 *     AdtpWriteToEtwEx @ 0x14021D4CC (AdtpWriteToEtwEx.c)
 *     AdtpWriteToEtw @ 0x14053A414 (AdtpWriteToEtw.c)
 * Callees:
 *     EtwpGetSiloDriverState @ 0x140077640 (EtwpGetSiloDriverState.c)
 *     EtwpEventWriteFull @ 0x14009E960 (EtwpEventWriteFull.c)
 *     PspDereferenceMonitorContextServerSilo @ 0x14009FBBC (PspDereferenceMonitorContextServerSilo.c)
 */

__int64 __fastcall EtwWriteKMSecurityEvent(unsigned __int16 *a1, __int64 a2, unsigned int a3, __int64 a4)
{
  __int64 SiloDriverState; // rbp

  SiloDriverState = EtwpGetSiloDriverState((PVOID)0xFFFFFFFFFFFFFFFFLL);
  LODWORD(a4) = EtwpEventWriteFull(
                  SiloDriverState,
                  *(_BYTE *)(SiloDriverState + 5024),
                  0,
                  0,
                  a1,
                  0,
                  0,
                  0LL,
                  0LL,
                  a3,
                  a4,
                  0LL,
                  0LL,
                  0LL,
                  0,
                  0LL,
                  0LL);
  PspDereferenceMonitorContextServerSilo(SiloDriverState - 128);
  return (unsigned int)a4;
}

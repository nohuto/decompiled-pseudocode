/*
 * XREFs of EtwWriteKMSecurityEvent @ 0x1401443DC
 * Callers:
 *     AdtpWriteToEtwEx @ 0x140237BA0 (AdtpWriteToEtwEx.c)
 *     AdtpWriteToEtw @ 0x14056AD1C (AdtpWriteToEtw.c)
 * Callees:
 *     EtwpEventWriteFull @ 0x140073CE0 (EtwpEventWriteFull.c)
 *     PsGetCurrentServerSiloGlobals @ 0x14008C610 (PsGetCurrentServerSiloGlobals.c)
 */

__int64 EtwWriteKMSecurityEvent()
{
  _QWORD **CurrentServerSiloGlobals; // rax
  unsigned __int16 *v1; // rdx
  unsigned int v2; // r8d
  __int64 v3; // r9

  CurrentServerSiloGlobals = (_QWORD **)PsGetCurrentServerSiloGlobals();
  return EtwpEventWriteFull(
           CurrentServerSiloGlobals[106],
           *((_BYTE *)CurrentServerSiloGlobals[106] + 5024),
           0,
           0,
           v1,
           0,
           0,
           0LL,
           0LL,
           v2,
           v3,
           0LL,
           0LL,
           0LL,
           0,
           0LL,
           0LL);
}

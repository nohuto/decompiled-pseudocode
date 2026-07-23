/*
 * XREFs of EtwWriteKMSecurityEvent @ 0x14014494C
 * Callers:
 *     AdtpWriteToEtwEx @ 0x1402379CC (AdtpWriteToEtwEx.c)
 *     AdtpWriteToEtw @ 0x14056B25C (AdtpWriteToEtw.c)
 * Callees:
 *     EtwpEventWriteFull @ 0x140073860 (EtwpEventWriteFull.c)
 *     PsGetCurrentServerSiloGlobals @ 0x14008BD70 (PsGetCurrentServerSiloGlobals.c)
 */

__int64 EtwWriteKMSecurityEvent()
{
  __int64 v0; // rcx
  unsigned __int16 *v1; // rdx
  unsigned int v2; // r8d
  __int64 v3; // r9
  unsigned __int16 *v5; // [rsp+20h] [rbp-78h]

  v0 = *((_QWORD *)PsGetCurrentServerSiloGlobals() + 106);
  v5 = v1;
  LOBYTE(v1) = *(_BYTE *)(v0 + 5024);
  return EtwpEventWriteFull((_QWORD *)v0, (int)v1, 0, 0, v5, 0, 0, 0LL, 0LL, v2, v3, 0LL, 0LL, 0LL, 0, 0LL, 0LL);
}

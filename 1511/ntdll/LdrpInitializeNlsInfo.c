/*
 * XREFs of LdrpInitializeNlsInfo @ 0x1800909D0
 * Callers:
 *     LdrpInitializeProcess @ 0x18008E534 (LdrpInitializeProcess.c)
 * Callees:
 *     RtlInitNlsTables @ 0x180083A80 (RtlInitNlsTables.c)
 *     RtlResetRtlTranslations @ 0x180085F00 (RtlResetRtlTranslations.c)
 */

__int64 __fastcall LdrpInitializeNlsInfo(__int64 *a1)
{
  _BYTE v2[152]; // [rsp+20h] [rbp-98h] BYREF

  RtlInitNlsTables(a1[20], a1[21], a1[22], (__int64)v2);
  return RtlResetRtlTranslations((__int64)v2);
}

/*
 * XREFs of LdrpInitializeNlsInfo @ 0x1800BEA04
 * Callers:
 *     LdrpInitializeProcess @ 0x1800BEA44 (LdrpInitializeProcess.c)
 * Callees:
 *     RtlInitNlsTables @ 0x1800CD390 (RtlInitNlsTables.c)
 *     RtlResetRtlTranslations @ 0x1800CD400 (RtlResetRtlTranslations.c)
 */

__int64 __fastcall LdrpInitializeNlsInfo(_QWORD *a1)
{
  _BYTE v2[152]; // [rsp+20h] [rbp-98h] BYREF

  RtlInitNlsTables(a1[20], a1[21], a1[22], v2);
  return RtlResetRtlTranslations(v2);
}

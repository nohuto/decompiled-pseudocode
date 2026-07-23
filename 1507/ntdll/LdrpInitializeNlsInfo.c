/*
 * XREFs of LdrpInitializeNlsInfo @ 0x1800BEA04
 * Callers:
 *     LdrpInitializeProcess @ 0x1800BEA44 (LdrpInitializeProcess.c)
 * Callees:
 *     RtlInitNlsTables @ 0x1800CD390 (RtlInitNlsTables.c)
 *     RtlResetRtlTranslations @ 0x1800CD400 (RtlResetRtlTranslations.c)
 */

void __fastcall LdrpInitializeNlsInfo(PUSHORT *a1)
{
  _NLSTABLEINFO TableInfo; // [rsp+20h] [rbp-98h] BYREF

  RtlInitNlsTables(a1[20], a1[21], a1[22], &TableInfo);
  RtlResetRtlTranslations(&TableInfo);
}

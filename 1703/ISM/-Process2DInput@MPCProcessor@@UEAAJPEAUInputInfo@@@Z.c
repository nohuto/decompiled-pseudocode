/*
 * XREFs of ?Process2DInput@MPCProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x1800472D0
 * Callers:
 *     <none>
 * Callees:
 *     ??$LogMPCInputReport@AEAPEAUInputInfo@@@ISMTracing@@SAXAEAPEAUInputInfo@@@Z @ 0x180046960 (--$LogMPCInputReport@AEAPEAUInputInfo@@@ISMTracing@@SAXAEAPEAUInputInfo@@@Z.c)
 *     ?CacheHandInput@MPCProcessor@@AEAAXPEAUInputInfo@@PEA_N@Z @ 0x18004789C (-CacheHandInput@MPCProcessor@@AEAAXPEAUInputInfo@@PEA_N@Z.c)
 */

__int64 __fastcall MPCProcessor::Process2DInput(MPCProcessor *this, struct InputInfo *a2)
{
  bool v5; // [rsp+30h] [rbp+8h] BYREF
  struct InputInfo *v6; // [rsp+38h] [rbp+10h] BYREF

  v6 = a2;
  ISMTracing::LogMPCInputReport<InputInfo * &>((__int64 *)&v6);
  MPCProcessor::CacheHandInput((MPCProcessor *)((char *)this - 16), a2, &v5);
  return 0LL;
}

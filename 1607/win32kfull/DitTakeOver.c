/*
 * XREFs of DitTakeOver @ 0x1C011A098
 * Callers:
 *     WaitForRitDisEngagement @ 0x1C01195D8 (WaitForRitDisEngagement.c)
 * Callees:
 *     InitDitRimIocpSupport @ 0x1C011A12C (InitDitRimIocpSupport.c)
 *     AddAndInitRimClient @ 0x1C011A3F8 (AddAndInitRimClient.c)
 */

__int64 __fastcall DitTakeOver(int a1)
{
  char v2; // [rsp+20h] [rbp-28h]

  if ( a1 )
    return 1LL;
  if ( (int)AddAndInitRimClient() >= 0 && (int)InitDitRimIocpSupport() >= 0 )
  {
    HIDWORD(aDeviceTemplate[195]) = 64;
    v2 = 0;
    RIMReadInput(
      aDeviceTemplate[152],
      &aDeviceTemplate[201],
      HIDWORD(aDeviceTemplate[195]),
      aDeviceTemplate[159],
      v2,
      &aDeviceTemplate[198],
      &aDeviceTemplate[195],
      &aDeviceTemplate[196]);
    EtwTraceDitEngaged();
    return 1LL;
  }
  return 0LL;
}

/*
 * XREFs of RitTakeOver @ 0x1C01193E4
 * Callers:
 *     RawInputThread @ 0x1C007B620 (RawInputThread.c)
 * Callees:
 *     AddAndInitRimClient @ 0x1C011A3F8 (AddAndInitRimClient.c)
 */

__int64 RitTakeOver()
{
  char v1; // [rsp+20h] [rbp-28h]

  if ( (int)AddAndInitRimClient() >= 0 )
  {
    HIDWORD(aDeviceTemplate[195]) = 64;
    v1 = 0;
    RIMReadInput(
      aDeviceTemplate[152],
      &aDeviceTemplate[201],
      HIDWORD(aDeviceTemplate[195]),
      aDeviceTemplate[159],
      v1,
      &aDeviceTemplate[198],
      &aDeviceTemplate[195],
      &aDeviceTemplate[196]);
  }
  EtwTraceRitReEngaged();
  ZwSetEvent(ghDITRITEvent, 0LL);
  return 1LL;
}

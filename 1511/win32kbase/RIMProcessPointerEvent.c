/*
 * XREFs of RIMProcessPointerEvent @ 0x1C00C9674
 * Callers:
 *     RIMMarkEndPointerMessageDelivery @ 0x1C00C4F90 (RIMMarkEndPointerMessageDelivery.c)
 *     rimProcessPTPDeviceInput @ 0x1C00CD9FC (rimProcessPTPDeviceInput.c)
 *     rimProcessPointerDeviceInput @ 0x1C00CDE70 (rimProcessPointerDeviceInput.c)
 *     RIMGetPTPFrameContactCount @ 0x1C00D2500 (RIMGetPTPFrameContactCount.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0046B20 (WPP_RECORDER_SF_.c)
 *     EtwTraceBeginPointerFrameBuildPartial @ 0x1C00AB680 (EtwTraceBeginPointerFrameBuildPartial.c)
 *     EtwTraceEndPointerFrameBuildPartial @ 0x1C00ABB70 (EtwTraceEndPointerFrameBuildPartial.c)
 *     RIMCompleteFrame @ 0x1C00C93FC (RIMCompleteFrame.c)
 *     RIMStoreFrameNodes @ 0x1C00C9870 (RIMStoreFrameNodes.c)
 */

__int64 __fastcall RIMProcessPointerEvent(
        __int64 a1,
        __int64 a2,
        int a3,
        int a4,
        __int64 a5,
        int a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        LONG a10,
        int a11)
{
  int v15; // r8d
  int v16; // r8d
  unsigned __int16 v17; // r9
  unsigned __int16 v19; // r9

  WPP_RECORDER_SF_(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    4u,
    0x1Du,
    (__int64)&WPP_8a2a59bc22133e299c8a3827982089d1_Traceguids);
  EtwTraceBeginPointerFrameBuildPartial(a3, a4, v15);
  if ( !(unsigned int)RIMStoreFrameNodes(a1, a2, a11, a3, a4, a5, a6, a7) )
  {
    EtwTraceEndPointerFrameBuildPartial(a3, a4, v16);
    v17 = 30;
LABEL_3:
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      3u,
      4u,
      v17,
      (__int64)&WPP_8a2a59bc22133e299c8a3827982089d1_Traceguids);
    return 0LL;
  }
  EtwTraceEndPointerFrameBuildPartial(a3, a4, v16);
  if ( a4 )
  {
    v19 = 31;
  }
  else
  {
    if ( !(unsigned int)RIMCompleteFrame(a1, a2, a10) )
    {
      v17 = 32;
      goto LABEL_3;
    }
    v19 = 33;
  }
  WPP_RECORDER_SF_(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    4u,
    v19,
    (__int64)&WPP_8a2a59bc22133e299c8a3827982089d1_Traceguids);
  return 1LL;
}

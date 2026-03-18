/*
 * XREFs of rimCreateAndProcessPointerDeviceButtonOnlyFrame @ 0x1C00DC190
 * Callers:
 *     rimDoProcessAnyPointerDeviceInput @ 0x1C00DC28C (rimDoProcessAnyPointerDeviceInput.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0012AB0 (WPP_RECORDER_SF_.c)
 *     RIMAbArbitratePointerDeviceFrame @ 0x1C00D19A8 (RIMAbArbitratePointerDeviceFrame.c)
 *     RIMCompletePointerDeviceFrame @ 0x1C00D9824 (RIMCompletePointerDeviceFrame.c)
 *     RIMStartPointerDeviceFrame @ 0x1C00D9D18 (RIMStartPointerDeviceFrame.c)
 *     RIMStoreRawDataInPointerDeviceFrame @ 0x1C00D9E08 (RIMStoreRawDataInPointerDeviceFrame.c)
 *     rimProcessPointerDeviceButtonContact @ 0x1C00DDFEC (rimProcessPointerDeviceButtonContact.c)
 */

__int64 __fastcall rimCreateAndProcessPointerDeviceButtonOnlyFrame(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5)
{
  __int64 v7; // rbx
  int v9; // edx
  int v10; // edx
  __int64 v12; // [rsp+20h] [rbp-28h]
  int v13; // [rsp+58h] [rbp+10h] BYREF

  v13 = 0;
  v7 = a2;
  LOBYTE(a2) = 3;
  WPP_RECORDER_SF_(
    WPP_GLOBAL_Control->DeviceExtension,
    a2,
    4,
    28,
    (__int64)&WPP_8981bbd0d82c39b705fac429922c1527_Traceguids);
  if ( (unsigned int)RIMStartPointerDeviceFrame(a1, v7, a5) )
  {
    RIMStoreRawDataInPointerDeviceFrame(a1, v7, a3, a4, &v13);
    LODWORD(v12) = v13;
    rimProcessPointerDeviceButtonContact(a1, v7, a3, a4, v12);
    RIMAbArbitratePointerDeviceFrame(a1, v7);
    RIMCompletePointerDeviceFrame(a1, v7);
  }
  else
  {
    LOBYTE(v9) = 3;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v9,
      4,
      29,
      (__int64)&WPP_8981bbd0d82c39b705fac429922c1527_Traceguids);
  }
  LOBYTE(v10) = 3;
  return WPP_RECORDER_SF_(
           WPP_GLOBAL_Control->DeviceExtension,
           v10,
           4,
           30,
           (__int64)&WPP_8981bbd0d82c39b705fac429922c1527_Traceguids);
}

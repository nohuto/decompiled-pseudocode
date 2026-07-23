/*
 * XREFs of KeGenericCallDpc @ 0x14009EDE4
 * Callers:
 *     MiSwapStackPage @ 0x140109A7C (MiSwapStackPage.c)
 *     KeSetSystemTime @ 0x140126D94 (KeSetSystemTime.c)
 *     KeSwapDirectoryTableBase @ 0x1401D2108 (KeSwapDirectoryTableBase.c)
 *     MiInitializeDynamicPfns @ 0x1401E1B1C (MiInitializeDynamicPfns.c)
 *     MiJumpStack @ 0x1401E6204 (MiJumpStack.c)
 *     KeConfigureHeteroProcessors @ 0x1403DCF74 (KeConfigureHeteroProcessors.c)
 *     KiInitializeDynamicProcessor @ 0x1403DD584 (KiInitializeDynamicProcessor.c)
 *     EtwpUpdateFilterData @ 0x140492728 (EtwpUpdateFilterData.c)
 *     EtwpFreeLoggerContext @ 0x1404942D4 (EtwpFreeLoggerContext.c)
 *     ExGetPoolTagInfo @ 0x1404AF594 (ExGetPoolTagInfo.c)
 *     MmSetPermanentCacheAttribute @ 0x1406598E4 (MmSetPermanentCacheAttribute.c)
 *     Phase1InitializationDiscard @ 0x140794438 (Phase1InitializationDiscard.c)
 *     ExpAeThresholdInitialization @ 0x1407B1108 (ExpAeThresholdInitialization.c)
 * Callees:
 *     KeGenericProcessorCallback @ 0x1400C85B4 (KeGenericProcessorCallback.c)
 */

__int64 __fastcall KeGenericCallDpc(__int64 a1, __int64 a2)
{
  _QWORD v3[3]; // [rsp+20h] [rbp-18h] BYREF

  v3[0] = a1;
  v3[1] = a2;
  return ((__int64 (__fastcall *)(_QWORD, __int64 (__fastcall *)(__int64, _QWORD *), _QWORD *, __int64))KeGenericProcessorCallback)(
           0LL,
           KiGenericCallDpcWorker,
           v3,
           1LL);
}

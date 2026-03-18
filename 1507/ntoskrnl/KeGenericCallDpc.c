/*
 * XREFs of KeGenericCallDpc @ 0x1400D3924
 * Callers:
 *     KeSwapDirectoryTableBase @ 0x1400D37D8 (KeSwapDirectoryTableBase.c)
 *     MiSwapStackPage @ 0x14011F8A0 (MiSwapStackPage.c)
 *     KeSetSystemTime @ 0x14014C6F8 (KeSetSystemTime.c)
 *     MiJumpStack @ 0x14015D83C (MiJumpStack.c)
 *     KeConfigureHeteroProcessors @ 0x1403FA8E0 (KeConfigureHeteroProcessors.c)
 *     KiInitializeDynamicProcessor @ 0x1404018C0 (KiInitializeDynamicProcessor.c)
 *     EtwpUpdateFilterData @ 0x1404D6208 (EtwpUpdateFilterData.c)
 *     ExGetPoolTagInfo @ 0x1404F44F4 (ExGetPoolTagInfo.c)
 *     EtwpFreeLoggerContext @ 0x140524388 (EtwpFreeLoggerContext.c)
 *     Phase1InitializationDiscard @ 0x1407D146C (Phase1InitializationDiscard.c)
 *     ExpAeThresholdInitialization @ 0x1407DB8E4 (ExpAeThresholdInitialization.c)
 * Callees:
 *     KeGenericProcessorCallback @ 0x1400D4D9C (KeGenericProcessorCallback.c)
 */

__int64 __fastcall KeGenericCallDpc(__int64 a1, __int64 a2)
{
  _QWORD v3[3]; // [rsp+20h] [rbp-18h] BYREF

  v3[0] = a1;
  v3[1] = a2;
  return ((__int64 (__fastcall *)(_QWORD, __int64 (__fastcall *)(), _QWORD *, __int64))KeGenericProcessorCallback)(
           0LL,
           KiGenericCallDpcWorker,
           v3,
           1LL);
}

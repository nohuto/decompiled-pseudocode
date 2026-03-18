/*
 * XREFs of KeGenericCallDpc @ 0x1400E2FD8
 * Callers:
 *     MiSwapStackPage @ 0x1400D872C (MiSwapStackPage.c)
 *     KeSwapDirectoryTableBase @ 0x1400E2F88 (KeSwapDirectoryTableBase.c)
 *     KeSetSystemTime @ 0x14011784C (KeSetSystemTime.c)
 *     MiJumpStack @ 0x14012FB90 (MiJumpStack.c)
 *     KeConfigureHeteroProcessors @ 0x1403AA258 (KeConfigureHeteroProcessors.c)
 *     KiInitializeDynamicProcessor @ 0x1403B1090 (KiInitializeDynamicProcessor.c)
 *     EtwpFreeLoggerContext @ 0x14049D5B0 (EtwpFreeLoggerContext.c)
 *     ExGetPoolTagInfo @ 0x1404A7774 (ExGetPoolTagInfo.c)
 *     EtwpUpdateFilterData @ 0x1404CEC94 (EtwpUpdateFilterData.c)
 *     Phase1InitializationDiscard @ 0x1407645E8 (Phase1InitializationDiscard.c)
 *     ExpAeThresholdInitialization @ 0x140766FB8 (ExpAeThresholdInitialization.c)
 * Callees:
 *     KeGenericProcessorCallback @ 0x1400FF2DC (KeGenericProcessorCallback.c)
 */

__int64 __fastcall KeGenericCallDpc(__int64 a1, __int64 a2)
{
  _QWORD v3[3]; // [rsp+20h] [rbp-18h] BYREF

  v3[0] = a1;
  v3[1] = a2;
  return KeGenericProcessorCallback(0LL, KiGenericCallDpcWorker, v3, 1LL);
}

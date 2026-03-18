/*
 * XREFs of HvlpInitializeHvCrashdump @ 0x1401EFA5C
 * Callers:
 *     HvlPhase1Initialize @ 0x1401706D4 (HvlPhase1Initialize.c)
 * Callees:
 *     MmMapIoSpaceEx @ 0x140115984 (MmMapIoSpaceEx.c)
 *     KeRegisterBugCheckReasonCallback @ 0x140156464 (KeRegisterBugCheckReasonCallback.c)
 *     memset @ 0x140195A80 (memset.c)
 *     KeRegisterNmiCallback @ 0x14020007C (KeRegisterNmiCallback.c)
 *     MmFreeIndependentPages @ 0x14055E3E4 (MmFreeIndependentPages.c)
 *     MmAllocateIndependentPages @ 0x1405610B8 (MmAllocateIndependentPages.c)
 *     MmAllocateMappingAddress @ 0x1405622E0 (MmAllocateMappingAddress.c)
 */

__int64 __fastcall HvlpInitializeHvCrashdump(__int64 a1, int a2)
{
  unsigned int v2; // ebx
  void *IndependentPages; // rax

  dword_14034D098 = a2;
  v2 = -1073741823;
  qword_14034D090 = a1;
  if ( !a2 || (qword_14034D088 = (void *)MmMapIoSpaceEx(a1, (unsigned int)(a2 << 12), 2u)) != 0LL )
  {
    IndependentPages = (void *)MmAllocateIndependentPages(4096LL, 0xFFFFFFFFLL);
    HvlpFallbackScratchPage = IndependentPages;
    if ( IndependentPages )
      memset(IndependentPages, 0, 0x1000uLL);
    if ( (HvlpFlags & 0x2000) == 0 )
    {
      CallbackRecord.State = 0;
      if ( !KeRegisterBugCheckReasonCallback(
              &CallbackRecord,
              (PKBUGCHECK_REASON_CALLBACK_ROUTINE)HvlBugCheckCallbackRoutine,
              KbCallbackSecondaryDumpData,
              (PUCHAR)"HypervisorCrashdumpArea") )
        goto LABEL_16;
      stru_14034CFF8.State = 0;
      if ( !KeRegisterBugCheckReasonCallback(
              &stru_14034CFF8,
              (PKBUGCHECK_REASON_CALLBACK_ROUTINE)HvlAddPagesCallbackRoutine,
              KbCallbackAddPages,
              (PUCHAR)"HypervisorCrashdumpArea2") )
        goto LABEL_16;
      HvlpCrashdumpData = (__int64)KeRegisterNmiCallback((PNMI_CALLBACK)HvlNmiCallbackRoutine, 0LL);
      qword_14034D0A0 = (__int64)MmAllocateMappingAddress(0x1000uLL, 0x204C5648u);
      if ( !qword_14034D0A0 )
        goto LABEL_16;
      if ( (HvlpFlags & 0x2000) == 0 )
        return 0;
    }
    stru_14034D028.State = 0;
    if ( KeRegisterBugCheckReasonCallback(
           &stru_14034D028,
           (PKBUGCHECK_REASON_CALLBACK_ROUTINE)HvlSkBugCheckCallbackRoutine,
           KbCallbackSecondaryDumpData,
           (PUCHAR)"SecureKernelCrashdumpArea") )
    {
      stru_14034CFF8.State = 0;
      if ( KeRegisterBugCheckReasonCallback(
             &stru_14034CFF8,
             (PKBUGCHECK_REASON_CALLBACK_ROUTINE)HvlAddSecureHvPagesCallbackRoutine,
             KbCallbackAddPages,
             (PUCHAR)"HypervisorCrashdumpArea2") )
      {
        stru_14034D058.State = 0;
        if ( KeRegisterBugCheckReasonCallback(
               &stru_14034D058,
               (PKBUGCHECK_REASON_CALLBACK_ROUTINE)HvlAddSecureSkPagesCallbackRoutine,
               KbCallbackAddPages,
               (PUCHAR)"SecureKernelCrashdumpArea2") )
        {
          HvlpCrashdumpData = (__int64)KeRegisterNmiCallback((PNMI_CALLBACK)HvlSkNmiCallbackRoutine, 0LL);
          return 0;
        }
      }
    }
  }
LABEL_16:
  if ( HvlpFallbackScratchPage )
  {
    MmFreeIndependentPages(HvlpFallbackScratchPage, 4096LL);
    HvlpFallbackScratchPage = 0LL;
  }
  return v2;
}

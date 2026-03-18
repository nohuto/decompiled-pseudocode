/*
 * XREFs of HvlpInitializeHvCrashdump @ 0x1401B4B7C
 * Callers:
 *     HvlPhase1Initialize @ 0x1401428B0 (HvlPhase1Initialize.c)
 * Callees:
 *     MmMapIoSpaceEx @ 0x1400C0C7C (MmMapIoSpaceEx.c)
 *     KeRegisterBugCheckReasonCallback @ 0x140123974 (KeRegisterBugCheckReasonCallback.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     KeRegisterNmiCallback @ 0x1401C3F40 (KeRegisterNmiCallback.c)
 *     MmFreeIndependentPages @ 0x1403C5554 (MmFreeIndependentPages.c)
 *     MmAllocateIndependentPages @ 0x1403CBDCC (MmAllocateIndependentPages.c)
 *     MmAllocateMappingAddress @ 0x1404E8208 (MmAllocateMappingAddress.c)
 */

__int64 __fastcall HvlpInitializeHvCrashdump(__int64 a1, int a2)
{
  unsigned int v2; // ebx
  void *IndependentPages; // rax

  dword_1402FCC18 = a2;
  v2 = -1073741823;
  qword_1402FCC10 = a1;
  if ( !a2 || (qword_1402FCC08 = (void *)MmMapIoSpaceEx(a1, (unsigned int)(a2 << 12), 2u)) != 0LL )
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
        goto LABEL_17;
      stru_1402FCB78.State = 0;
      if ( !KeRegisterBugCheckReasonCallback(
              &stru_1402FCB78,
              (PKBUGCHECK_REASON_CALLBACK_ROUTINE)HvlAddPagesCallbackRoutine,
              KbCallbackAddPages,
              (PUCHAR)"HypervisorCrashdumpArea2") )
        goto LABEL_17;
      HvlpCrashdumpData = (__int64)KeRegisterNmiCallback((PNMI_CALLBACK)HvlNmiCallbackRoutine, 0LL);
      qword_1402FCC20 = (__int64)MmAllocateMappingAddress(0x1000uLL, 0x204C5648u);
      if ( !qword_1402FCC20 )
        goto LABEL_17;
      if ( (HvlpFlags & 0x2000) == 0 )
        return 0;
    }
    stru_1402FCBA8.State = 0;
    if ( KeRegisterBugCheckReasonCallback(
           &stru_1402FCBA8,
           (PKBUGCHECK_REASON_CALLBACK_ROUTINE)HvlSkBugCheckCallbackRoutine,
           KbCallbackSecondaryDumpData,
           (PUCHAR)"SecureKernelCrashdumpArea") )
    {
      if ( (HvlpFlags & 4) == 0
        || (stru_1402FCB78.State = 0,
            KeRegisterBugCheckReasonCallback(
              &stru_1402FCB78,
              (PKBUGCHECK_REASON_CALLBACK_ROUTINE)HvlAddSecureHvPagesCallbackRoutine,
              KbCallbackAddPages,
              (PUCHAR)"HypervisorCrashdumpArea2")) )
      {
        stru_1402FCBD8.State = 0;
        if ( KeRegisterBugCheckReasonCallback(
               &stru_1402FCBD8,
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
LABEL_17:
  if ( HvlpFallbackScratchPage )
  {
    MmFreeIndependentPages(HvlpFallbackScratchPage, 4096LL);
    HvlpFallbackScratchPage = 0LL;
  }
  return v2;
}

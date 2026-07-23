/*
 * XREFs of HvlpInitializeHvCrashdump @ 0x1401C07CC
 * Callers:
 *     InitBootProcessor @ 0x1407937C4 (InitBootProcessor.c)
 * Callees:
 *     MmMapIoSpaceEx @ 0x14009B070 (MmMapIoSpaceEx.c)
 *     KeRegisterBugCheckReasonCallback @ 0x14012E220 (KeRegisterBugCheckReasonCallback.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     KeRegisterNmiCallback @ 0x1401D2914 (KeRegisterNmiCallback.c)
 *     MmFreeIndependentPages @ 0x1403E1F14 (MmFreeIndependentPages.c)
 *     MmAllocateIndependentPages @ 0x1404C8A68 (MmAllocateIndependentPages.c)
 *     MmAllocateMappingAddress @ 0x14052C83C (MmAllocateMappingAddress.c)
 */

__int64 __fastcall HvlpInitializeHvCrashdump(__int64 a1, int a2)
{
  unsigned int v2; // ebx
  void *IndependentPages; // rax

  dword_1403221F8 = a2;
  v2 = -1073741823;
  qword_1403221F0 = a1;
  if ( !a2 || (qword_1403221E8 = (void *)MmMapIoSpaceEx(a1, (unsigned int)(a2 << 12), 2u)) != 0LL )
  {
    IndependentPages = (void *)MmAllocateIndependentPages(4096LL, 0xFFFFFFFFLL);
    HvlpFallbackScratchPage = IndependentPages;
    if ( IndependentPages )
      memset(IndependentPages, 0, 0x1000uLL);
    if ( !VslVsmEnabled )
    {
      CallbackRecord.State = 0;
      if ( !KeRegisterBugCheckReasonCallback(
              &CallbackRecord,
              (PKBUGCHECK_REASON_CALLBACK_ROUTINE)HvlBugCheckCallbackRoutine,
              KbCallbackSecondaryDumpData,
              (PUCHAR)"HypervisorCrashdumpArea") )
        goto LABEL_16;
      stru_140322158.State = 0;
      if ( !KeRegisterBugCheckReasonCallback(
              &stru_140322158,
              (PKBUGCHECK_REASON_CALLBACK_ROUTINE)HvlAddPagesCallbackRoutine,
              KbCallbackAddPages,
              (PUCHAR)"HypervisorCrashdumpArea2") )
        goto LABEL_16;
      HvlpCrashdumpData = (__int64)KeRegisterNmiCallback((PNMI_CALLBACK)HvlNmiCallbackRoutine, 0LL);
      qword_140322200 = (__int64)MmAllocateMappingAddress(0x1000uLL, 0x204C5648u);
      if ( !qword_140322200 )
        goto LABEL_16;
      if ( !VslVsmEnabled )
        return 0;
    }
    stru_140322188.State = 0;
    if ( KeRegisterBugCheckReasonCallback(
           &stru_140322188,
           (PKBUGCHECK_REASON_CALLBACK_ROUTINE)HvlSkBugCheckCallbackRoutine,
           KbCallbackSecondaryDumpData,
           (PUCHAR)"SecureKernelCrashdumpArea") )
    {
      if ( (HvlpFlags & 2) == 0
        || (stru_140322158.State = 0,
            KeRegisterBugCheckReasonCallback(
              &stru_140322158,
              (PKBUGCHECK_REASON_CALLBACK_ROUTINE)HvlAddSecureHvPagesCallbackRoutine,
              KbCallbackAddPages,
              (PUCHAR)"HypervisorCrashdumpArea2")) )
      {
        stru_1403221B8.State = 0;
        if ( KeRegisterBugCheckReasonCallback(
               &stru_1403221B8,
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

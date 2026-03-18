/*
 * XREFs of KeFlushSingleTb @ 0x14003FB20
 * Callers:
 *     MiMapSinglePage @ 0x140003778 (MiMapSinglePage.c)
 *     MiLockPagedAddress @ 0x140004FA4 (MiLockPagedAddress.c)
 *     MiStealPage @ 0x140055CB0 (MiStealPage.c)
 *     MiValidFault @ 0x14005B5E0 (MiValidFault.c)
 *     MiNoFaultFound @ 0x14007EB84 (MiNoFaultFound.c)
 *     MiValidateInPage @ 0x140087A20 (MiValidateInPage.c)
 *     MiAbortCombineScan @ 0x1400E59F8 (MiAbortCombineScan.c)
 *     MiTradeActivePage @ 0x1400FCE2C (MiTradeActivePage.c)
 *     MmStealTopLevelPage @ 0x14010EF54 (MmStealTopLevelPage.c)
 *     MiSwapStackPage @ 0x14011F8A0 (MiSwapStackPage.c)
 *     MiSwapStackPageNoDpc @ 0x14011FF4C (MiSwapStackPageNoDpc.c)
 *     MiJumpStackTarget @ 0x1401347E4 (MiJumpStackTarget.c)
 *     MiClearPageFileHash @ 0x14014ACC8 (MiClearPageFileHash.c)
 *     MiDbgReleaseAddress @ 0x140223080 (MiDbgReleaseAddress.c)
 *     MiDbgTranslatePhysicalAddress @ 0x14022311C (MiDbgTranslatePhysicalAddress.c)
 *     MiDbgUnTranslatePhysicalAddress @ 0x1402235E4 (MiDbgUnTranslatePhysicalAddress.c)
 *     MiLargePageFault @ 0x140223C5C (MiLargePageFault.c)
 *     MiScrubAweMappedPage @ 0x1402324DC (MiScrubAweMappedPage.c)
 *     MiRelocateImagePfn @ 0x1404BE420 (MiRelocateImagePfn.c)
 *     MiMarkBootGuardPage @ 0x14059A720 (MiMarkBootGuardPage.c)
 *     MxCopyPage @ 0x1407C648C (MxCopyPage.c)
 *     MxSwapPages @ 0x1407C7254 (MxSwapPages.c)
 *     MxFillPhysicalPage @ 0x1407C76BC (MxFillPhysicalPage.c)
 * Callees:
 *     KiIpiSendRequestEx @ 0x1400425D0 (KiIpiSendRequestEx.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     VmFlushTb @ 0x14025B4C4 (VmFlushTb.c)
 *     ExFlushTb @ 0x140264FB0 (ExFlushTb.c)
 *     HvlFlushSingleTb @ 0x1402708A8 (HvlFlushSingleTb.c)
 */

__int64 __fastcall KeFlushSingleTb(unsigned __int64 a1, int a2, int a3)
{
  unsigned __int8 v5; // dl
  unsigned __int64 v6; // rcx
  __int64 result; // rax
  __int64 v8; // rsi
  unsigned __int8 CurrentIrql; // r14
  struct _KPRCB *CurrentPrcb; // rbp
  _KTHREAD *CurrentThread; // rax
  _KPROCESS *Process; // rdx
  unsigned __int16 Count; // cx
  _WORD *v14; // r8
  unsigned int v15; // r9d
  int v16; // edx
  unsigned __int8 v17; // bl
  signed __int32 v18[8]; // [rsp+0h] [rbp-138h] BYREF
  unsigned __int64 v19; // [rsp+40h] [rbp-F8h] BYREF
  unsigned __int64 v20; // [rsp+48h] [rbp-F0h] BYREF
  int v21; // [rsp+50h] [rbp-E8h]
  _WORD v22[2]; // [rsp+60h] [rbp-D8h] BYREF
  int v23; // [rsp+64h] [rbp-D4h]
  _QWORD v24[21]; // [rsp+68h] [rbp-D0h] BYREF

  if ( a2 == 1 && a1 <= (unsigned __int64)MmHighestUserAddress && KeGetCurrentThread()->ApcState.Process->SecurePid )
  {
    v5 = 1;
    goto LABEL_8;
  }
  v5 = 0;
  if ( (HvlEnlightenments & 6) != 0 && ((HvlEnlightenments & 2) != 0 || (unsigned int)KeNumberProcessors_0 > 1) )
  {
LABEL_8:
    if ( a3 )
      v6 = 0LL;
    else
      v6 = KeGetCurrentThread()->ApcState.Process->DirectoryTableBase & 0xFFFFFFFFFFFFF000uLL;
    if ( KiKvaShadow )
      v6 = 0LL;
    result = HvlFlushSingleTb(v6, 0LL, v5, a1);
    goto LABEL_24;
  }
  v8 = 2LL;
  if ( a3 == 1 )
    v8 = 2147483650LL;
  v21 = a2;
  v20 = a1;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xCuLL);
  CurrentPrcb = KeGetCurrentPrcb();
  if ( a3 )
  {
    LODWORD(v14) = 0;
    v16 = 1;
  }
  else
  {
    _InterlockedOr(v18, 0);
    CurrentThread = CurrentPrcb->CurrentThread;
    v23 = 0;
    Process = CurrentThread->ApcState.Process;
    Count = Process->ActiveProcessors.Count;
    LOWORD(CurrentThread) = Process->ActiveProcessors.Size;
    v22[0] = Count;
    v22[1] = (_WORD)CurrentThread;
    if ( Count )
    {
      memmove(v24, Process->ActiveProcessors.Bitmap, 8LL * Count);
      Count = v22[0];
    }
    v14 = v22;
    v15 = KiProcessorIndexToNumberMappingTable[CurrentPrcb->Number];
    if ( Count > v15 >> 6 )
      v24[v15 >> 6] &= ~(1LL << (v15 & 0x3F));
    v16 = 0;
  }
  KiIpiSendRequestEx(
    (_DWORD)CurrentPrcb,
    v16,
    (_DWORD)v14,
    (unsigned int)&v20,
    0LL,
    v8,
    (__int64)KiFlushSingleTbWorker,
    (__int64)&v20);
  result = CurrentIrql;
  __writecr8(CurrentIrql);
LABEL_24:
  if ( VmTbFlushEnabled )
  {
    v19 = a1 & 0xFFFFFFFFFFFFF000uLL | 1;
    result = VmFlushTb(1LL, &v19);
  }
  if ( ExTbFlushActive )
  {
    v19 = a1 & 0xFFFFFFFFFFFFF000uLL | 1;
    v17 = KeGetCurrentIrql();
    __writecr8(0xFuLL);
    ExFlushTb(1LL, &v19, 0LL);
    result = v17;
    __writecr8(v17);
  }
  return result;
}

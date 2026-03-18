/*
 * XREFs of KeBugCheck2 @ 0x1401C4F98
 * Callers:
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 * Callees:
 *     KeQueryCurrentStackInformation @ 0x140028340 (KeQueryCurrentStackInformation.c)
 *     MmIsSessionAddress @ 0x1400431C0 (MmIsSessionAddress.c)
 *     KeIsAttachedProcess @ 0x1400701C0 (KeIsAttachedProcess.c)
 *     KeIsEmptyAffinityEx @ 0x140077130 (KeIsEmptyAffinityEx.c)
 *     MmIsSpecialPoolAddress @ 0x140079508 (MmIsSpecialPoolAddress.c)
 *     KeRemoveProcessorAffinityEx @ 0x14007C640 (KeRemoveProcessorAffinityEx.c)
 *     KeCopyAffinityEx @ 0x14007C670 (KeCopyAffinityEx.c)
 *     DbgPrintEx @ 0x1400E6934 (DbgPrintEx.c)
 *     PopPoCoalescinCallback @ 0x1401264C0 (PopPoCoalescinCallback.c)
 *     IoAddTriageDumpDataBlock @ 0x1401417B4 (IoAddTriageDumpDataBlock.c)
 *     KdRefreshDebuggerNotPresent @ 0x140142A68 (KdRefreshDebuggerNotPresent.c)
 *     xHalTimerWatchdogStop @ 0x140148598 (xHalTimerWatchdogStop.c)
 *     KiMarkBugCheckRegions @ 0x14014DBFC (KiMarkBugCheckRegions.c)
 *     DebugService2 @ 0x14015B930 (DebugService2.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     xHalHaltSystem @ 0x140166DD0 (xHalHaltSystem.c)
 *     HvlLogGuestCrashInformation @ 0x1401AE3B0 (HvlLogGuestCrashInformation.c)
 *     HvlPrepareForRootCrashdump @ 0x1401B0D54 (HvlPrepareForRootCrashdump.c)
 *     HvlResumeFromRootCrashdump @ 0x1401B0EDC (HvlResumeFromRootCrashdump.c)
 *     IoInitializeBugCheckProgress @ 0x1401B8338 (IoInitializeBugCheckProgress.c)
 *     IoSaveBugCheckProgress @ 0x1401B8474 (IoSaveBugCheckProgress.c)
 *     IoWriteCrashDump @ 0x1401B87D0 (IoWriteCrashDump.c)
 *     KdDecodeDataBlock @ 0x1401C1D40 (KdDecodeDataBlock.c)
 *     KdEnableDebuggerWithLock @ 0x1401C2024 (KdEnableDebuggerWithLock.c)
 *     KiCheckForFreezeExecution @ 0x1401C3628 (KiCheckForFreezeExecution.c)
 *     KeBugCheckUnicodeToAnsi @ 0x1401C5B98 (KeBugCheckUnicodeToAnsi.c)
 *     KiBugCheckDebugBreak @ 0x1401C5E48 (KiBugCheckDebugBreak.c)
 *     KiDisplayBlueScreen @ 0x1401C6018 (KiDisplayBlueScreen.c)
 *     KiDumpParameterImages @ 0x1401C633C (KiDumpParameterImages.c)
 *     KiInvokeBugCheckEntryCallbacks @ 0x1401C64C0 (KiInvokeBugCheckEntryCallbacks.c)
 *     KiPcToFileHeader @ 0x1401C6550 (KiPcToFileHeader.c)
 *     KiSaveCurrentEtwTraceBuffer @ 0x1401C660C (KiSaveCurrentEtwTraceBuffer.c)
 *     KiScanBugCheckCallbackList @ 0x1401C6728 (KiScanBugCheckCallbackList.c)
 *     KiSendFreeze @ 0x1401C9324 (KiSendFreeze.c)
 *     KiSendThawExecution @ 0x1401C93D4 (KiSendThawExecution.c)
 *     KiSetDebuggerOwner @ 0x1401C9560 (KiSetDebuggerOwner.c)
 *     MmLocateUnloadedDriver @ 0x1401CF04C (MmLocateUnloadedDriver.c)
 *     PopInternalAddToDumpFile @ 0x1401E66D8 (PopInternalAddToDumpFile.c)
 *     xHalGetInterruptTranslator @ 0x1404BD620 (xHalGetInterruptTranslator.c)
 *     VfNotifyVerifierOfEvent @ 0x1406B70C8 (VfNotifyVerifierOfEvent.c)
 */

void __fastcall __noreturn KeBugCheck2(
        unsigned int a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        const CHAR *a4,
        unsigned __int64 a5,
        __int64 a6)
{
  const CHAR *v6; // rdi
  __int64 v7; // rsi
  unsigned int v12; // edx
  signed __int32 v13; // eax
  signed __int32 v14; // ecx
  bool v15; // r8
  signed __int32 v16; // eax
  unsigned int v17; // edx
  signed __int32 v18; // ecx
  struct _KPRCB *CurrentPrcb; // r8
  size_t v20; // r8
  _CONTEXT *Context; // rax
  struct _KFLOATING_SAVE *v22; // rcx
  __int64 v23; // rdx
  __int128 v24; // xmm1
  __int64 v25; // rbx
  __int64 v26; // rdi
  __int64 v27; // rbx
  char v28; // si
  __int64 v29; // rax
  __int64 v30; // rcx
  unsigned __int64 Teb; // rax
  int *v32; // rcx
  unsigned __int64 v33; // r14
  struct _KTHREAD *v34; // rcx
  struct _KPRCB *v35; // rdi
  PVOID *v36; // rcx
  char v37; // bl
  bool v38; // si
  unsigned int v39; // eax
  bool v40; // r13
  bool v41; // r14
  _CONTEXT *v42; // rax
  PVOID *v43; // rcx
  __int64 v44; // rdx
  __int128 v45; // xmm1
  unsigned int v46; // ebx
  struct _KFLOATING_SAVE *v47; // rcx
  __int64 v48; // rcx
  int v49; // [rsp+20h] [rbp-E0h]
  int v50; // [rsp+28h] [rbp-D8h]
  char v51; // [rsp+30h] [rbp-D0h]
  int v52; // [rsp+38h] [rbp-C8h]
  int v53; // [rsp+40h] [rbp-C0h]
  int v54; // [rsp+48h] [rbp-B8h]
  int v55; // [rsp+50h] [rbp-B0h] BYREF
  char v56; // [rsp+54h] [rbp-ACh]
  bool v57; // [rsp+55h] [rbp-ABh]
  bool v58; // [rsp+56h] [rbp-AAh]
  bool v59; // [rsp+57h] [rbp-A9h]
  PCSTR Format; // [rsp+58h] [rbp-A8h]
  __int64 v61; // [rsp+60h] [rbp-A0h]
  struct _KPRCB *v62; // [rsp+68h] [rbp-98h]
  int v63; // [rsp+70h] [rbp-90h]
  __int64 v64; // [rsp+78h] [rbp-88h]
  unsigned int Number; // [rsp+80h] [rbp-80h]
  struct _KTHREAD *CurrentThread; // [rsp+88h] [rbp-78h]
  __int64 v67; // [rsp+90h] [rbp-70h] BYREF
  int v68; // [rsp+98h] [rbp-68h] BYREF
  __int64 (__fastcall *v69)(); // [rsp+A0h] [rbp-60h]
  void *Src; // [rsp+A8h] [rbp-58h] BYREF
  unsigned __int64 v71; // [rsp+B0h] [rbp-50h] BYREF
  _QWORD v72[3]; // [rsp+B8h] [rbp-48h] BYREF
  unsigned __int16 v73[88]; // [rsp+D0h] [rbp-30h] BYREF
  _OWORD v74[77]; // [rsp+180h] [rbp+80h] BYREF
  char pszDest[176]; // [rsp+650h] [rbp+550h] BYREF

  v6 = (const CHAR *)a5;
  v7 = a6;
  pszDest[0] = 0;
  v69 = KiBugCheckProgress;
  BYTE2(v55) = 0;
  v59 = IopAutoReboot != 0;
  v57 = 1;
  v58 = 1;
  Format = 0LL;
  v64 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v63 = 0;
  if ( KeGetCurrentIrql() < 2u )
    __writecr8(2uLL);
  if ( KeGetCurrentThread()->InitialStack )
  {
    v15 = KeQueryCurrentStackInformation(&v68, (unsigned __int64 *)&Src, &v71);
    v16 = KiBugCheckActive;
    v17 = (16 * KeGetCurrentPrcb()->Number) | 3;
    while ( (v16 & 3) != 3 )
    {
      v18 = v16;
      v16 = _InterlockedCompareExchange(&KiBugCheckActive, v17, v16);
      if ( v16 == v18 )
      {
        if ( v15 && v68 && v68 != 5 )
        {
          v20 = v71 - (_QWORD)Src;
          if ( v71 - (unsigned __int64)Src > 0x6000 )
            v20 = 24576LL;
          memmove(&KiPreBugcheckStackSaveArea, Src, v20);
        }
LABEL_20:
        HIBYTE(v55) = 1;
        goto LABEL_12;
      }
    }
  }
  else
  {
    v12 = (16 * KeGetCurrentPrcb()->Number) | 3;
    v13 = KiBugCheckActive;
    while ( (v13 & 3) != 3 )
    {
      v14 = v13;
      v13 = _InterlockedCompareExchange(&KiBugCheckActive, v12, v13);
      if ( v13 == v14 )
        goto LABEL_20;
    }
  }
  HIBYTE(v55) = 0;
LABEL_12:
  CurrentPrcb = KeGetCurrentPrcb();
  v62 = CurrentPrcb;
  Number = CurrentPrcb->Number;
  if ( !qword_1402DE0C0 )
    goto LABEL_13;
  if ( PopSimulateHiberBugcheck )
    PoPowerDownActionInProgress = 0;
  if ( *(_BYTE *)(qword_1402DE0C0 + 4) )
  {
    DbgPrintEx(
      0x65u,
      0,
      "\n"
      "A bugcheck occurred during the late stages of hibernate suspend or resume.\n"
      "Due to verification temporarily enabled by Po during this time,\n"
      "regular bugcheck processing may not work.\n"
      "\n");
    if ( a1 == 10 )
      DbgPrintEx(
        0x65u,
        0,
        "Memory was accessed during this time that was not properly marked\n"
        "for the boot phase of hibernate! Check the callstack and parameters\n"
        "to find the pages that need to be marked.\n"
        "\n");
    CurrentPrcb = v62;
    v56 = 1;
    v69 = 0LL;
  }
  else
  {
LABEL_13:
    v56 = 0;
  }
  Context = CurrentPrcb->Context;
  v22 = (struct _KFLOATING_SAVE *)v74;
  v23 = 9LL;
  do
  {
    *(_OWORD *)&v22->Dummy = *(_OWORD *)&Context->P1Home;
    *(_OWORD *)&v22[4].Dummy = *(_OWORD *)&Context->P3Home;
    *(_OWORD *)&v22[8].Dummy = *(_OWORD *)&Context->P5Home;
    *(_OWORD *)&v22[12].Dummy = *(_OWORD *)&Context->ContextFlags;
    *(_OWORD *)&v22[16].Dummy = *(_OWORD *)&Context->SegGs;
    *(_OWORD *)&v22[20].Dummy = *(_OWORD *)&Context->Dr1;
    *(_OWORD *)&v22[24].Dummy = *(_OWORD *)&Context->Dr3;
    v22 += 32;
    v24 = *(_OWORD *)&Context->Dr7;
    Context = (_CONTEXT *)((char *)Context + 128);
    *(_OWORD *)&v22[-4].Dummy = v24;
    --v23;
  }
  while ( v23 );
  *(_OWORD *)&v22->Dummy = *(_OWORD *)&Context->P1Home;
  *(_OWORD *)&v22[4].Dummy = *(_OWORD *)&Context->P3Home;
  *(_OWORD *)&v22[8].Dummy = *(_OWORD *)&Context->P5Home;
  *(_OWORD *)&v22[12].Dummy = *(_OWORD *)&Context->ContextFlags;
  *(_OWORD *)&v22[16].Dummy = *(_OWORD *)&Context->SegGs;
  if ( HIBYTE(v55) )
  {
    off_1402D2938(v22);
    HvlEnlightenments &= 0x2000u;
    IoSaveBugCheckProgress(96);
    KeIsEmptyAffinityEx(KiNmiInProgress);
    off_1402D2708();
    if ( ViVerifierEnabled )
      VfNotifyVerifierOfEvent(2LL);
    if ( !v56 )
      KiSaveCurrentEtwTraceBuffer();
    IoAddTriageDumpDataBlock((int)&KseEngine, 96);
    if ( a1 == 229 )
    {
      KiScanBugCheckCallbackList();
      off_1402D2918();
      HalReturnToFirmware(3LL);
    }
    *(_QWORD *)&qword_1402E8808 = a2;
    *(_QWORD *)&qword_1402E8810 = a3;
    if ( a1 == -1073741103 )
      a1 = 195;
    *(_QWORD *)qword_1402E8818 = a4;
    KiBugCheckData = a1;
    *(_QWORD *)&qword_1402E8820 = a5;
    if ( a1 > 0xCB )
    {
      switch ( a1 )
      {
        case 0xD8u:
          KiBugCheckDriver = a2 + 88;
          goto LABEL_109;
        case 0xEAu:
          KiBugCheckDriver = (__int64)a4;
          goto LABEL_109;
        case 0xEFu:
          goto LABEL_105;
      }
      if ( a1 != 252 )
      {
        if ( a1 == 317 )
        {
          v63 = 8;
          goto LABEL_109;
        }
        if ( a1 != 335 )
          goto LABEL_109;
        if ( a3 < 0x100 && a5 )
        {
          v34 = CurrentThread;
          if ( *(_QWORD *)(a5 + 8) )
            v34 = *(struct _KTHREAD **)(a5 + 8);
          CurrentThread = v34;
        }
LABEL_104:
        if ( KeGetCurrentThread()->ApcState.Process != PsInitialSystemProcess )
LABEL_105:
          BYTE2(v55) = 1;
LABEL_109:
        a4 = Format;
        v28 = (char)Format;
        v6 = Format;
LABEL_110:
        HvlLogGuestCrashInformation(
          KiBugCheckData,
          *(__int64 *)&qword_1402E8808,
          *(__int64 *)&qword_1402E8810,
          *(__int64 *)qword_1402E8818,
          *(__int64 *)&qword_1402E8820);
        if ( KiBugCheckDriver )
        {
          KeBugCheckUnicodeToAnsi(KiBugCheckDriver, pszDest, 128LL);
        }
        else if ( v64 )
        {
          KiDumpParameterImages(pszDest);
        }
        if ( !KdPitchDebugger )
          qword_1402C7A88 = (__int64)v74;
        if ( a1 != 226
          && ((_BYTE)KdDebuggerEnabled || KdEventLoggingEnabled)
          && !KiHypervisorInitiatedCrashDump
          && (!KdRefreshDebuggerNotPresent() || KdEventLoggingPresent) )
        {
          DbgPrintEx(
            0x65u,
            0,
            "\n*** Fatal System Error: 0x%08lx\n                       (0x%p,0x%p,0x%p,0x%p)\n\n",
            KiBugCheckData,
            *(const void **)&qword_1402E8808,
            *(const void **)&qword_1402E8810,
            *(const void **)qword_1402E8818,
            *(const void **)&qword_1402E8820);
          if ( KiBugCheckDriver )
            DbgPrintEx(0x65u, 0, "Driver at fault: %s.\n", pszDest);
          if ( v28 )
          {
            if ( a4 )
              DbgPrintEx(0x65u, 0, a4);
            if ( v6 )
              DbgPrintEx(0x65u, 0, v6);
          }
          if ( (_BYTE)KdDebuggerEnabled && !(_BYTE)KdDebuggerNotPresent )
            KiBugCheckDebugBreak(3u, v49, v50, v51, v52, v53, v54, v55, (int)Format, v61);
        }
        CurrentPrcb = v62;
        goto LABEL_133;
      }
LABEL_46:
      if ( !a6 )
      {
        if ( !a4 || ((unsigned __int8)a4 & 3) != 0 )
          goto LABEL_109;
        v7 = (__int64)a4;
      }
      if ( a1 == 142 )
        goto LABEL_109;
      v25 = *(_QWORD *)(v7 + 360);
      v64 = v25;
      if ( !KeIsAttachedProcess() || !MmIsSessionAddress(v25) )
        goto LABEL_109;
      goto LABEL_104;
    }
    switch ( a1 )
    {
      case 0xCBu:
        v64 = a2;
        goto LABEL_109;
      case 0xAu:
        if ( a5 < ExPoolCodeStart || a5 >= ExPoolCodeEnd )
        {
          KiPcToFileHeader(a5, &v67, 0LL, (char *)&v55 + 1);
          if ( BYTE1(v55) == 1 )
          {
            if ( KiPcToFileHeader(a2, &v67, 1LL, (char *)&v55 + 1) )
            {
              KiBugCheckData = 211LL;
              KiBugCheckDriver = v67 + 88;
            }
            else
            {
              KiBugCheckDriver = MmLocateUnloadedDriver(a2);
              if ( KiBugCheckDriver )
                KiBugCheckData = 212LL;
            }
          }
          else
          {
            KiBugCheckData = 209LL;
          }
        }
        else
        {
          KiBugCheckData = 197LL;
        }
        v64 = 0LL;
        goto LABEL_109;
      case 0x4Cu:
        v32 = &qword_1402E8808;
        BYTE2(v55) = 1;
        v28 = 1;
        v33 = a3 - (_QWORD)&qword_1402E8808;
        KiBugCheckData = (unsigned int)a2;
        do
        {
          *(_QWORD *)v32 = *(_QWORD *)((char *)v32 + v33);
          v32 += 2;
        }
        while ( (__int64)v32 < (__int64)&KiHardwareTrigger );
        goto LABEL_110;
    }
    if ( a1 != 80 )
    {
      if ( a1 == 123 )
      {
        v57 = ((unsigned __int8)a4 & 1) == 0;
        v58 = ((unsigned __int8)a4 & 2) == 0;
        goto LABEL_109;
      }
      if ( a1 != 142 && a1 != 190 )
        goto LABEL_109;
      goto LABEL_46;
    }
    v26 = 0LL;
    if ( !a6 )
    {
      if ( !a4 || ((unsigned __int8)a4 & 3) != 0 )
      {
        BYTE1(v55) = 1;
LABEL_64:
        if ( (unsigned int)MmIsSpecialPoolAddress(a2) == 1 )
        {
          a4 = Format;
          v6 = Format;
          v28 = (char)Format;
          if ( (a2 & 0x1000) != 0 )
          {
            v29 = 214LL;
            v30 = 205LL;
          }
          else
          {
            v29 = 213LL;
            v30 = 204LL;
          }
          if ( BYTE1(v55) == 1 )
            v29 = v30;
          KiBugCheckData = v29;
          goto LABEL_110;
        }
        if ( v64 == a2
          && MmIsSessionAddress(a2)
          && ((Teb = (unsigned __int64)CurrentThread->Teb) == 0 || Teb >= (unsigned __int64)MmSystemRangeStart) )
        {
          KiBugCheckData = 207LL;
        }
        else if ( !v26 )
        {
          KiBugCheckDriver = MmLocateUnloadedDriver(a2);
          if ( KiBugCheckDriver )
            KiBugCheckData = 206LL;
        }
        goto LABEL_109;
      }
      v7 = (__int64)a4;
    }
    v64 = *(_QWORD *)(v7 + 360);
    v27 = v64;
    *(_QWORD *)qword_1402E8818 = v64;
    v26 = KiPcToFileHeader(v64, &v67, 0LL, (char *)&v55 + 1);
    if ( KeIsAttachedProcess()
      && MmIsSessionAddress(v27)
      && KeGetCurrentThread()->ApcState.Process != PsInitialSystemProcess )
    {
      BYTE2(v55) = 1;
    }
    goto LABEL_64;
  }
LABEL_133:
  _disable();
  __writecr8(0xFuLL);
  if ( HIBYTE(v55) )
  {
    if ( (unsigned int)KeNumberProcessors_0 <= 1 || KiHypervisorInitiatedCrashDump )
    {
      v35 = v62;
    }
    else
    {
      KiSetDebuggerOwner(CurrentPrcb);
      KeCopyAffinityEx((__int64)v73, (unsigned __int16 *)KeActiveProcessors);
      v35 = v62;
      KeRemoveProcessorAffinityEx(v73, v62->Number);
      KiSendFreeze(v73, 0LL);
      KeStallExecutionProcessor(0xF4240u);
    }
    IoInitializeBugCheckProgress(a1, a2);
    IoSaveBugCheckProgress(1);
    v37 = v56;
    v38 = v58;
    if ( v56 )
    {
      v41 = v57;
      v40 = v59;
    }
    else
    {
      if ( CrashdmpDumpBlock && v58 )
        v39 = v63;
      else
        v39 = v63 | 4;
      v40 = v59;
      if ( !v59 )
        v39 |= 2u;
      v41 = v57;
      if ( !v57 )
        v39 |= 1u;
      KiDisplayBlueScreen(v39);
    }
    HvlPrepareForRootCrashdump(v36);
    if ( !v37 )
    {
      KiInvokeBugCheckEntryCallbacks();
      IoSaveBugCheckProgress(2);
    }
    if ( !(_BYTE)KdDebuggerEnabled && !KdPitchDebugger )
      KdEnableDebuggerWithLock(0);
    v42 = v35->Context;
    v43 = (PVOID *)v74;
    v44 = 9LL;
    do
    {
      *(_OWORD *)&v42->P1Home = *(_OWORD *)v43;
      *(_OWORD *)&v42->P3Home = *((_OWORD *)v43 + 1);
      *(_OWORD *)&v42->P5Home = *((_OWORD *)v43 + 2);
      *(_OWORD *)&v42->ContextFlags = *((_OWORD *)v43 + 3);
      *(_OWORD *)&v42->SegGs = *((_OWORD *)v43 + 4);
      *(_OWORD *)&v42->Dr1 = *((_OWORD *)v43 + 5);
      *(_OWORD *)&v42->Dr3 = *((_OWORD *)v43 + 6);
      v42 = (_CONTEXT *)((char *)v42 + 128);
      v45 = *((_OWORD *)v43 + 7);
      v43 += 16;
      *(_OWORD *)&v42[-1].LastExceptionToRip = v45;
      --v44;
    }
    while ( v44 );
    *(_OWORD *)&v42->P1Home = *(_OWORD *)v43;
    *(_OWORD *)&v42->P3Home = *((_OWORD *)v43 + 1);
    *(_OWORD *)&v42->P5Home = *((_OWORD *)v43 + 2);
    *(_OWORD *)&v42->ContextFlags = *((_OWORD *)v43 + 3);
    *(_OWORD *)&v42->SegGs = *((_OWORD *)v43 + 4);
    if ( v38 )
    {
      if ( a1 == 265 )
        KiMarkBugCheckRegions(
          *(__int64 *)&qword_1402E8808,
          *(__int64 *)&qword_1402E8810,
          *(__int64 *)qword_1402E8818,
          qword_1402E8820);
      KdDecodeDataBlock();
      if ( a1 == 239 )
        PopInternalAddToDumpFile(0LL, 0LL, 0LL);
      IoWriteCrashDump(
        KiBugCheckData,
        *(__int64 *)&qword_1402E8808,
        *(__int64 *)&qword_1402E8810,
        *(__int64 *)qword_1402E8818,
        *(__int64 *)&qword_1402E8820,
        v74,
        (__int64)CurrentThread,
        (__int64)v69,
        SBYTE2(v55));
      IoSaveBugCheckProgress(3);
    }
  }
  else
  {
    if ( Number != (unsigned int)KiBugCheckActive >> 4 )
    {
      while ( 1 )
      {
        KiCheckForFreezeExecution(0LL);
        _mm_pause();
      }
    }
    if ( KiHypervisorInitiatedCrashDump || (v46 = ((unsigned int)KiBugCheckActive >> 2) & 3, v46 >= 2) )
      off_1402D2648();
    IoSaveBugCheckProgress(5);
    _InterlockedExchangeAdd(&KiBugCheckActive, 4u);
    if ( v46 )
      KiBugCheckDebugBreak(4u, v49, v50, v51, v52, v53, v54, v55, (int)Format, v61);
    v40 = v59;
    v41 = v57;
  }
  HvlResumeFromRootCrashdump(v43);
  IoSaveBugCheckProgress(99);
  if ( !v56 )
    KiScanBugCheckCallbackList();
  off_1402D2928(v47);
  IoSaveBugCheckProgress(4);
  if ( v40 )
  {
    KiResumeForReboot = 1;
    KiSendThawExecution(0LL);
    if ( !KiHypervisorInitiatedCrashDump )
    {
      v72[0] = -1LL;
      v72[1] = 0LL;
      v72[2] = 0LL;
      DebugService2(0LL, (__int64)v72, 4u);
    }
    off_1402D2918();
    if ( PoPowerDownActionInProgress || (v48 = 3LL, !v41) )
      v48 = 1LL;
    HalReturnToFirmware(v48);
  }
  KiBugCheckDebugBreak(4u, v49, v50, v51, v52, v53, v54, v55, (int)Format, v61);
}

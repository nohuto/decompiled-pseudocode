/*
 * XREFs of KeBugCheck2 @ 0x1401D3F18
 * Callers:
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x140002F70 (xHalTimerWatchdogStop.c)
 *     MmIsSessionAddress @ 0x1400137C0 (MmIsSessionAddress.c)
 *     KeRemoveProcessorAffinityEx @ 0x140030B3C (KeRemoveProcessorAffinityEx.c)
 *     KeCopyAffinityEx @ 0x140030B70 (KeCopyAffinityEx.c)
 *     KeQueryCurrentStackInformation @ 0x14004EF40 (KeQueryCurrentStackInformation.c)
 *     KiCheckForFreezeExecution @ 0x140083470 (KiCheckForFreezeExecution.c)
 *     KiSendThawExecution @ 0x140083DBC (KiSendThawExecution.c)
 *     KiSetDebuggerOwner @ 0x140083F20 (KiSetDebuggerOwner.c)
 *     KiSendFreeze @ 0x1400845E0 (KiSendFreeze.c)
 *     DbgPrintEx @ 0x140084C90 (DbgPrintEx.c)
 *     KeIsEmptyAffinityEx @ 0x1400D26B0 (KeIsEmptyAffinityEx.c)
 *     KeIsAttachedProcess @ 0x1400E5D20 (KeIsAttachedProcess.c)
 *     MmIsSpecialPoolAddress @ 0x1400E90BC (MmIsSpecialPoolAddress.c)
 *     xHalFreeMessageTarget @ 0x1401312D4 (xHalFreeMessageTarget.c)
 *     IoAddTriageDumpDataBlock @ 0x14014B924 (IoAddTriageDumpDataBlock.c)
 *     KdRefreshDebuggerNotPresent @ 0x14014C9B4 (KdRefreshDebuggerNotPresent.c)
 *     KiMarkBugCheckRegions @ 0x140157534 (KiMarkBugCheckRegions.c)
 *     DebugService2 @ 0x140167340 (DebugService2.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     xHalHaltSystem @ 0x140171C08 (xHalHaltSystem.c)
 *     HvlLogGuestCrashInformation @ 0x1401BAA30 (HvlLogGuestCrashInformation.c)
 *     HvlNotifyRootCrashdump @ 0x1401BD54C (HvlNotifyRootCrashdump.c)
 *     HvlPrepareForRootCrashdump @ 0x1401BD5F4 (HvlPrepareForRootCrashdump.c)
 *     IoInitializeBugCheckProgress @ 0x1401C5F90 (IoInitializeBugCheckProgress.c)
 *     IoSaveBugCheckProgress @ 0x1401C6100 (IoSaveBugCheckProgress.c)
 *     IoWriteCrashDump @ 0x1401C645C (IoWriteCrashDump.c)
 *     KdDecodeDataBlock @ 0x1401D1184 (KdDecodeDataBlock.c)
 *     KdEnableDebuggerWithLock @ 0x1401D1484 (KdEnableDebuggerWithLock.c)
 *     KeBugCheckUnicodeToAnsi @ 0x1401D4B88 (KeBugCheckUnicodeToAnsi.c)
 *     KiBugCheckDebugBreak @ 0x1401D4DC8 (KiBugCheckDebugBreak.c)
 *     KiDisplayBlueScreen @ 0x1401D4F98 (KiDisplayBlueScreen.c)
 *     KiDumpParameterImages @ 0x1401D52BC (KiDumpParameterImages.c)
 *     KiInvokeBugCheckEntryCallbacks @ 0x1401D543C (KiInvokeBugCheckEntryCallbacks.c)
 *     KiPcToFileHeader @ 0x1401D54CC (KiPcToFileHeader.c)
 *     KiSaveCurrentEtwTraceBuffer @ 0x1401D5598 (KiSaveCurrentEtwTraceBuffer.c)
 *     KiScanBugCheckCallbackList @ 0x1401D56B4 (KiScanBugCheckCallbackList.c)
 *     MmLocateUnloadedDriver @ 0x1401E5D84 (MmLocateUnloadedDriver.c)
 *     PopInternalAddToDumpFile @ 0x1401FEEA4 (PopInternalAddToDumpFile.c)
 *     xHalGetInterruptTranslator @ 0x1404CB35C (xHalGetInterruptTranslator.c)
 *     CmpMarkLockTryAcquired @ 0x140528708 (CmpMarkLockTryAcquired.c)
 *     VfNotifyVerifierOfEvent @ 0x1407028E0 (VfNotifyVerifierOfEvent.c)
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
  char v7; // r10
  __int64 v8; // rsi
  unsigned int v13; // edx
  signed __int32 v14; // eax
  signed __int32 v15; // ecx
  bool v16; // r8
  signed __int32 v17; // eax
  unsigned int v18; // edx
  signed __int32 v19; // ecx
  struct _KPRCB *CurrentPrcb; // r8
  size_t v21; // r8
  _CONTEXT *Context; // rax
  _OWORD *v23; // rcx
  __int64 v24; // rdx
  __int128 v25; // xmm1
  unsigned __int64 v26; // rbx
  __int64 v27; // rdi
  unsigned __int64 v28; // rbx
  char v29; // si
  __int64 v30; // rax
  __int64 v31; // rcx
  int *v32; // rcx
  unsigned __int64 v33; // r14
  struct _KTHREAD *v34; // rcx
  BOOLEAN refreshed; // al
  struct _KPRCB *v36; // rdi
  PVOID *v37; // rcx
  char v38; // bl
  bool v39; // si
  unsigned int v40; // eax
  bool v41; // r13
  bool v42; // r14
  _CONTEXT *v43; // rax
  PVOID *v44; // rcx
  __int64 v45; // rdx
  __int128 v46; // xmm1
  unsigned int v47; // ebx
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
  unsigned int Number; // [rsp+74h] [rbp-8Ch]
  unsigned __int64 v65; // [rsp+78h] [rbp-88h]
  struct _KTHREAD *CurrentThread; // [rsp+80h] [rbp-80h]
  int v67; // [rsp+88h] [rbp-78h] BYREF
  __int64 v68; // [rsp+90h] [rbp-70h] BYREF
  __int64 (__fastcall *v69)(); // [rsp+98h] [rbp-68h]
  unsigned __int64 v70; // [rsp+A0h] [rbp-60h] BYREF
  void *Src; // [rsp+A8h] [rbp-58h] BYREF
  _QWORD v72[4]; // [rsp+B0h] [rbp-50h] BYREF
  unsigned __int16 v73[88]; // [rsp+D0h] [rbp-30h] BYREF
  _OWORD v74[77]; // [rsp+180h] [rbp+80h] BYREF
  char pszDest[176]; // [rsp+650h] [rbp+550h] BYREF

  v6 = (const CHAR *)a5;
  v7 = 0;
  v8 = a6;
  pszDest[0] = 0;
  v69 = KiBugCheckProgress;
  BYTE2(v55) = 0;
  v59 = IopAutoReboot != 0;
  v57 = 1;
  v58 = 1;
  Format = 0LL;
  v65 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v63 = 0;
  if ( KeGetCurrentIrql() < 2u )
    __writecr8(2uLL);
  if ( KeGetCurrentThread()->InitialStack )
  {
    v16 = KeQueryCurrentStackInformation(&v67, (unsigned __int64 *)&Src, &v70);
    v17 = KiBugCheckActive;
    v18 = (16 * KeGetCurrentPrcb()->Number) | 3;
    do
    {
      if ( (v17 & 3) == 3 )
      {
        v7 = 0;
        goto LABEL_12;
      }
      v19 = v17;
      v17 = _InterlockedCompareExchange(&KiBugCheckActive, v18, v17);
    }
    while ( v17 != v19 );
    v7 = 0;
    if ( v16 && v67 && v67 != 5 )
    {
      v21 = v70 - (_QWORD)Src;
      if ( v70 - (unsigned __int64)Src > 0x6000 )
        v21 = 24576LL;
      memmove(&KiPreBugcheckStackSaveArea, Src, v21);
      v7 = 0;
    }
LABEL_21:
    v56 = 1;
  }
  else
  {
    v13 = (16 * KeGetCurrentPrcb()->Number) | 3;
    v14 = KiBugCheckActive;
    while ( (v14 & 3) != 3 )
    {
      v15 = v14;
      v14 = _InterlockedCompareExchange(&KiBugCheckActive, v13, v14);
      if ( v14 == v15 )
        goto LABEL_21;
    }
LABEL_12:
    v56 = 0;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v62 = CurrentPrcb;
  Number = CurrentPrcb->Number;
  if ( !qword_1403033E0 )
    goto LABEL_14;
  if ( PopSimulateHiberBugcheck )
    PoPowerDownActionInProgress = 0;
  if ( *(_BYTE *)(qword_1403033E0 + 3) )
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
    v7 = 0;
    HIBYTE(v55) = 1;
    v69 = 0LL;
  }
  else
  {
LABEL_14:
    HIBYTE(v55) = 0;
  }
  Context = CurrentPrcb->Context;
  v23 = v74;
  v24 = 9LL;
  do
  {
    *v23 = *(_OWORD *)&Context->P1Home;
    v23[1] = *(_OWORD *)&Context->P3Home;
    v23[2] = *(_OWORD *)&Context->P5Home;
    v23[3] = *(_OWORD *)&Context->ContextFlags;
    v23[4] = *(_OWORD *)&Context->SegGs;
    v23[5] = *(_OWORD *)&Context->Dr1;
    v23[6] = *(_OWORD *)&Context->Dr3;
    v23 += 8;
    v25 = *(_OWORD *)&Context->Dr7;
    Context = (_CONTEXT *)((char *)Context + 128);
    *(v23 - 1) = v25;
    --v24;
  }
  while ( v24 );
  *v23 = *(_OWORD *)&Context->P1Home;
  v23[1] = *(_OWORD *)&Context->P3Home;
  v23[2] = *(_OWORD *)&Context->P5Home;
  v23[3] = *(_OWORD *)&Context->ContextFlags;
  v23[4] = *(_OWORD *)&Context->SegGs;
  if ( v56 )
  {
    off_1402F25D8();
    HvlEnlightenments &= 0x2000u;
    IoSaveBugCheckProgress(96);
    KeIsEmptyAffinityEx(KiNmiInProgress);
    off_1402F23A8();
    if ( ViVerifierEnabled )
      VfNotifyVerifierOfEvent(2LL);
    if ( !HIBYTE(v55) )
      KiSaveCurrentEtwTraceBuffer();
    IoAddTriageDumpDataBlock((int)&KseEngine, 96);
    if ( a1 == 229 )
    {
      KiScanBugCheckCallbackList();
      off_1402F25B8();
      HalReturnToFirmware(3LL);
    }
    *(_QWORD *)&qword_14030DD68 = a2;
    *(_QWORD *)&qword_14030DD70 = a3;
    if ( a1 == -1073741103 )
      a1 = 195;
    *(_QWORD *)qword_14030DD78 = a4;
    KiBugCheckData = a1;
    *(_QWORD *)&qword_14030DD80 = a5;
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
        v29 = (char)Format;
        v6 = Format;
LABEL_110:
        HvlLogGuestCrashInformation(
          KiBugCheckData,
          *(__int64 *)&qword_14030DD68,
          *(__int64 *)&qword_14030DD70,
          *(__int64 *)qword_14030DD78,
          *(__int64 *)&qword_14030DD80);
        v7 = 0;
        if ( KiBugCheckDriver )
        {
          KeBugCheckUnicodeToAnsi(KiBugCheckDriver, pszDest);
        }
        else if ( v65 )
        {
          KiDumpParameterImages(pszDest);
          v7 = 0;
        }
        if ( KdPitchDebugger == v7 )
          qword_1402F2928 = (__int64)v74;
        if ( a1 != 226
          && ((_BYTE)KdDebuggerEnabled != v7 || KdEventLoggingEnabled != v7)
          && KiHypervisorInitiatedCrashDump == v7 )
        {
          refreshed = KdRefreshDebuggerNotPresent();
          v7 = 0;
          if ( !refreshed || KdEventLoggingPresent )
          {
            DbgPrintEx(
              0x65u,
              0,
              "\n*** Fatal System Error: 0x%08lx\n                       (0x%p,0x%p,0x%p,0x%p)\n\n",
              KiBugCheckData,
              *(const void **)&qword_14030DD68,
              *(const void **)&qword_14030DD70,
              *(const void **)qword_14030DD78,
              *(const void **)&qword_14030DD80);
            v7 = 0;
            if ( KiBugCheckDriver )
            {
              DbgPrintEx(0x65u, 0, "Driver at fault: %s.\n", pszDest);
              v7 = 0;
            }
            if ( v29 )
            {
              if ( a4 )
              {
                DbgPrintEx(0x65u, 0, a4);
                v7 = 0;
              }
              if ( v6 )
              {
                DbgPrintEx(0x65u, 0, v6);
                v7 = 0;
              }
            }
            if ( (_BYTE)KdDebuggerEnabled && !(_BYTE)KdDebuggerNotPresent )
            {
              KiBugCheckDebugBreak(3u, v49, v50, v51, v52, v53, v54, v55, (int)Format, v61);
              v7 = 0;
            }
          }
        }
        CurrentPrcb = v62;
        goto LABEL_133;
      }
LABEL_47:
      if ( !a6 )
      {
        if ( !a4 || ((unsigned __int8)a4 & 3) != 0 )
          goto LABEL_109;
        v8 = (__int64)a4;
      }
      if ( a1 == 142 )
        goto LABEL_109;
      v26 = *(_QWORD *)(v8 + 360);
      v65 = v26;
      if ( !KeIsAttachedProcess() || !MmIsSessionAddress(v26) )
        goto LABEL_109;
      goto LABEL_104;
    }
    switch ( a1 )
    {
      case 0xCBu:
        v65 = a2;
        goto LABEL_109;
      case 0xAu:
        if ( a5 < ExPoolCodeStart || a5 >= ExPoolCodeEnd )
        {
          KiPcToFileHeader(a5, &v68, 0LL, (char *)&v55 + 1);
          if ( BYTE1(v55) == 1 )
          {
            if ( KiPcToFileHeader(a2, &v68, 1LL, (char *)&v55 + 1) )
            {
              KiBugCheckData = 211LL;
              KiBugCheckDriver = v68 + 88;
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
        v65 = 0LL;
        goto LABEL_109;
      case 0x4Cu:
        v32 = &qword_14030DD68;
        BYTE2(v55) = 1;
        v29 = 1;
        v33 = a3 - (_QWORD)&qword_14030DD68;
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
      goto LABEL_47;
    }
    v27 = 0LL;
    if ( !a6 )
    {
      if ( !a4 || ((unsigned __int8)a4 & 3) != 0 )
      {
        BYTE1(v55) = 1;
LABEL_65:
        if ( (unsigned int)MmIsSpecialPoolAddress(a2) == 1 )
        {
          a4 = Format;
          v6 = Format;
          v29 = (char)Format;
          if ( ((a2 >> 9) & 8) != 0 )
          {
            v30 = 214LL;
            v31 = 205LL;
          }
          else
          {
            v30 = 213LL;
            v31 = 204LL;
          }
          if ( BYTE1(v55) == 1 )
            v30 = v31;
          KiBugCheckData = v30;
          goto LABEL_110;
        }
        if ( v65 == a2 && MmIsSessionAddress(a2) && (unsigned __int64)CurrentThread->Teb - 1 > 0xFFFF7FFFFFFFFFFEuLL )
        {
          KiBugCheckData = 207LL;
        }
        else if ( !v27 )
        {
          KiBugCheckDriver = MmLocateUnloadedDriver(a2);
          if ( KiBugCheckDriver )
            KiBugCheckData = 206LL;
        }
        goto LABEL_109;
      }
      v8 = (__int64)a4;
    }
    v65 = *(_QWORD *)(v8 + 360);
    v28 = v65;
    *(_QWORD *)qword_14030DD78 = v65;
    v27 = KiPcToFileHeader(v65, &v68, 0LL, (char *)&v55 + 1);
    if ( KeIsAttachedProcess()
      && MmIsSessionAddress(v28)
      && KeGetCurrentThread()->ApcState.Process != PsInitialSystemProcess )
    {
      BYTE2(v55) = 1;
    }
    goto LABEL_65;
  }
LABEL_133:
  _disable();
  __writecr8(0xFuLL);
  if ( v56 == v7 )
  {
    if ( Number != (unsigned int)KiBugCheckActive >> 4 )
    {
      while ( 1 )
      {
        KiCheckForFreezeExecution(0LL);
        _mm_pause();
      }
    }
    if ( KiHypervisorInitiatedCrashDump != v7 || (v47 = ((unsigned int)KiBugCheckActive >> 2) & 3, v47 >= 2) )
      off_1402F22E8();
    IoSaveBugCheckProgress(5);
    _InterlockedExchangeAdd(&KiBugCheckActive, 4u);
    if ( v47 )
      KiBugCheckDebugBreak(4u, v49, v50, v51, v52, v53, v54, v55, (int)Format, v61);
    v41 = v59;
    v42 = v57;
    v38 = HIBYTE(v55);
  }
  else
  {
    if ( (unsigned int)KeNumberProcessors_0 > 1 && KiHypervisorInitiatedCrashDump == v7 )
    {
      KiSetDebuggerOwner((__int64)CurrentPrcb);
      KeCopyAffinityEx((__int64)v73, (unsigned __int16 *)KeActiveProcessors);
      v36 = v62;
      KeRemoveProcessorAffinityEx(v73, v62->Number);
      KiSendFreeze((__int64)v73, 0);
      KeStallExecutionProcessor(0xF4240u);
    }
    else
    {
      v36 = v62;
    }
    IoInitializeBugCheckProgress(a1, a2);
    IoSaveBugCheckProgress(1);
    v38 = HIBYTE(v55);
    v39 = v58;
    if ( HIBYTE(v55) )
    {
      v42 = v57;
      v41 = v59;
    }
    else
    {
      if ( CrashdmpDumpBlock && v58 )
        v40 = v63;
      else
        v40 = v63 | 4;
      v41 = v59;
      if ( !v59 )
        v40 |= 2u;
      v42 = v57;
      if ( !v57 )
        v40 |= 1u;
      KiDisplayBlueScreen(v40);
    }
    HvlPrepareForRootCrashdump(v37);
    if ( !v38 )
    {
      KiInvokeBugCheckEntryCallbacks();
      IoSaveBugCheckProgress(2);
    }
    if ( !(_BYTE)KdDebuggerEnabled && !KdPitchDebugger )
      KdEnableDebuggerWithLock(0);
    v43 = v36->Context;
    v44 = (PVOID *)v74;
    v45 = 9LL;
    do
    {
      *(_OWORD *)&v43->P1Home = *(_OWORD *)v44;
      *(_OWORD *)&v43->P3Home = *((_OWORD *)v44 + 1);
      *(_OWORD *)&v43->P5Home = *((_OWORD *)v44 + 2);
      *(_OWORD *)&v43->ContextFlags = *((_OWORD *)v44 + 3);
      *(_OWORD *)&v43->SegGs = *((_OWORD *)v44 + 4);
      *(_OWORD *)&v43->Dr1 = *((_OWORD *)v44 + 5);
      *(_OWORD *)&v43->Dr3 = *((_OWORD *)v44 + 6);
      v43 = (_CONTEXT *)((char *)v43 + 128);
      v46 = *((_OWORD *)v44 + 7);
      v44 += 16;
      *(_OWORD *)&v43[-1].LastExceptionToRip = v46;
      --v45;
    }
    while ( v45 );
    *(_OWORD *)&v43->P1Home = *(_OWORD *)v44;
    *(_OWORD *)&v43->P3Home = *((_OWORD *)v44 + 1);
    *(_OWORD *)&v43->P5Home = *((_OWORD *)v44 + 2);
    *(_OWORD *)&v43->ContextFlags = *((_OWORD *)v44 + 3);
    *(_OWORD *)&v43->SegGs = *((_OWORD *)v44 + 4);
    if ( v39 )
    {
      if ( a1 == 265 )
        KiMarkBugCheckRegions(
          *(__int64 *)&qword_14030DD68,
          *(__int64 *)&qword_14030DD70,
          *(__int64 *)qword_14030DD78,
          qword_14030DD80);
      KdDecodeDataBlock();
      if ( a1 == 239 )
      {
        PopInternalAddToDumpFile(0LL, 0LL, 0LL);
        if ( (_DWORD)CriticalProcessExceptionData )
        {
          IoAddTriageDumpDataBlock((int)&CriticalProcessExceptionData, 48);
          if ( (_WORD)xmmword_1402FCFF0 )
            IoAddTriageDumpDataBlock(SDWORD2(xmmword_1402FCFF0), (unsigned __int16)xmmword_1402FCFF0);
        }
      }
      IoWriteCrashDump(
        KiBugCheckData,
        *(__int64 *)&qword_14030DD68,
        *(__int64 *)&qword_14030DD70,
        *(__int64 *)qword_14030DD78,
        *(__int64 *)&qword_14030DD80,
        v74,
        (__int64)CurrentThread,
        (__int64)v69,
        SBYTE2(v55));
      IoSaveBugCheckProgress(3);
    }
  }
  if ( !VslVsmEnabled )
  {
    if ( (HvlpFlags & 2) != 0 )
      HvlNotifyRootCrashdump(2);
    HvlEnlightenments = HvlpEnlightenments;
    off_1402F24B8(v44);
  }
  IoSaveBugCheckProgress(99);
  if ( !v38 )
    KiScanBugCheckCallbackList();
  off_1402F25C8();
  IoSaveBugCheckProgress(4);
  if ( v41 )
  {
    KiResumeForReboot = 1;
    KiSendThawExecution(0);
    if ( !KiHypervisorInitiatedCrashDump )
    {
      v72[0] = -1LL;
      v72[2] = 0LL;
      v72[1] = 0LL;
      DebugService2(0LL, (__int64)v72, 4u);
    }
    off_1402F25B8();
    if ( PoPowerDownActionInProgress || (v48 = 3LL, !v42) )
      v48 = 1LL;
    HalReturnToFirmware(v48);
  }
  KiBugCheckDebugBreak(4u, v49, v50, v51, v52, v53, v54, v55, (int)Format, v61);
}

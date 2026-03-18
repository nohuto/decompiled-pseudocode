/*
 * XREFs of KeBugCheck2 @ 0x140201994
 * Callers:
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 * Callees:
 *     KeQueryCurrentStackInformation @ 0x14001D5D0 (KeQueryCurrentStackInformation.c)
 *     MmIsSessionAddress @ 0x14004ED20 (MmIsSessionAddress.c)
 *     MmIsSpecialPoolAddress @ 0x14005ED6C (MmIsSpecialPoolAddress.c)
 *     DbgPrintEx @ 0x140131EAC (DbgPrintEx.c)
 *     PopPoCoalescinCallback @ 0x140139F40 (PopPoCoalescinCallback.c)
 *     IoAddTriageDumpDataBlock @ 0x14016F790 (IoAddTriageDumpDataBlock.c)
 *     KdRefreshDebuggerNotPresent @ 0x1401708E8 (KdRefreshDebuggerNotPresent.c)
 *     KiMarkBugCheckRegions @ 0x14017BCEC (KiMarkBugCheckRegions.c)
 *     xHalTimerWatchdogStop @ 0x14017DF20 (xHalTimerWatchdogStop.c)
 *     DebugService2 @ 0x14018B410 (DebugService2.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     xHalHaltSystem @ 0x140195B88 (xHalHaltSystem.c)
 *     HvlLogGuestCrashInformation @ 0x1401E5218 (HvlLogGuestCrashInformation.c)
 *     HvlPrepareForRootCrashdump @ 0x1401E9B20 (HvlPrepareForRootCrashdump.c)
 *     HvlResumeFromRootCrashdump @ 0x1401E9EEC (HvlResumeFromRootCrashdump.c)
 *     IoInitializeBugCheckProgress @ 0x1401F3704 (IoInitializeBugCheckProgress.c)
 *     IoSaveBugCheckProgress @ 0x1401F3834 (IoSaveBugCheckProgress.c)
 *     IoWriteCrashDump @ 0x1401F3B80 (IoWriteCrashDump.c)
 *     KdCopyDataBlock @ 0x1401FD7E8 (KdCopyDataBlock.c)
 *     KdEnableDebuggerWithLock @ 0x1401FDCD4 (KdEnableDebuggerWithLock.c)
 *     KeBugCheckUnicodeToAnsi @ 0x1402026A4 (KeBugCheckUnicodeToAnsi.c)
 *     KiBugCheckDebugBreak @ 0x140202990 (KiBugCheckDebugBreak.c)
 *     KiDisplayBlueScreen @ 0x140202B60 (KiDisplayBlueScreen.c)
 *     KiDumpParameterImages @ 0x140202E84 (KiDumpParameterImages.c)
 *     KiInvokeBugCheckEntryCallbacks @ 0x140203008 (KiInvokeBugCheckEntryCallbacks.c)
 *     KiPcToFileHeader @ 0x140203098 (KiPcToFileHeader.c)
 *     KiSaveCurrentEtwTraceBuffer @ 0x140203154 (KiSaveCurrentEtwTraceBuffer.c)
 *     KiScanBugCheckCallbackList @ 0x140203270 (KiScanBugCheckCallbackList.c)
 *     KiFreezeTargetExecution @ 0x140206774 (KiFreezeTargetExecution.c)
 *     KiSendFreeze @ 0x140206BC0 (KiSendFreeze.c)
 *     KiSendThawExecution @ 0x140206CD0 (KiSendThawExecution.c)
 *     KiSetDebuggerOwner @ 0x140206EA0 (KiSetDebuggerOwner.c)
 *     MmLocateUnloadedDriver @ 0x14020E614 (MmLocateUnloadedDriver.c)
 *     PopInternalAddToDumpFile @ 0x140233810 (PopInternalAddToDumpFile.c)
 *     xHalGetInterruptTranslator @ 0x140553ADC (xHalGetInterruptTranslator.c)
 *     VfNotifyVerifierOfEvent @ 0x140737430 (VfNotifyVerifierOfEvent.c)
 */

void __fastcall __noreturn KeBugCheck2(
        int a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        const CHAR *a4,
        unsigned __int64 a5,
        __int64 a6)
{
  const CHAR *v6; // rbx
  __int64 v8; // r14
  unsigned int v11; // r13d
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
  unsigned __int16 i; // cx
  char v26; // r14
  __int64 v27; // r15
  __int64 v28; // rbx
  __int64 v29; // rax
  __int64 v30; // rcx
  BOOL IsSessionAddress; // eax
  unsigned __int64 Teb; // rax
  int *v33; // rcx
  unsigned __int64 v34; // r15
  struct _KTHREAD *v35; // rcx
  unsigned __int16 v36; // r8
  int v37; // r10d
  struct _KPRCB *v38; // rdi
  unsigned int v39; // r9d
  char v40; // bl
  bool v41; // si
  unsigned int v42; // eax
  bool v43; // r14
  _CONTEXT *v44; // rax
  _OWORD *v45; // rcx
  __int64 v46; // rdx
  __int128 v47; // xmm1
  unsigned int v48; // ebx
  struct _KFLOATING_SAVE *v49; // rcx
  __int64 v50; // rcx
  int v51; // [rsp+20h] [rbp-E0h]
  int v52; // [rsp+28h] [rbp-D8h]
  char v53; // [rsp+30h] [rbp-D0h]
  int v54; // [rsp+38h] [rbp-C8h]
  int v55; // [rsp+40h] [rbp-C0h]
  int v56; // [rsp+48h] [rbp-B8h]
  int v57; // [rsp+50h] [rbp-B0h] BYREF
  char v58; // [rsp+54h] [rbp-ACh]
  bool v59; // [rsp+55h] [rbp-ABh]
  bool v60; // [rsp+56h] [rbp-AAh]
  struct _KTHREAD *CurrentThread; // [rsp+58h] [rbp-A8h]
  __int64 v62; // [rsp+60h] [rbp-A0h]
  const CHAR *v63; // [rsp+68h] [rbp-98h]
  struct _KPRCB *v64; // [rsp+78h] [rbp-88h]
  unsigned __int64 v65; // [rsp+80h] [rbp-80h]
  int v66; // [rsp+88h] [rbp-78h]
  unsigned int Number; // [rsp+8Ch] [rbp-74h]
  int v68; // [rsp+90h] [rbp-70h] BYREF
  __int64 v69; // [rsp+98h] [rbp-68h] BYREF
  __int64 (__fastcall *v70)(); // [rsp+A0h] [rbp-60h]
  unsigned __int64 v71; // [rsp+A8h] [rbp-58h] BYREF
  void *Src; // [rsp+B0h] [rbp-50h] BYREF
  _QWORD v73[3]; // [rsp+B8h] [rbp-48h] BYREF
  _DWORD v74[2]; // [rsp+D0h] [rbp-30h] BYREF
  _QWORD v75[21]; // [rsp+D8h] [rbp-28h] BYREF
  _OWORD v76[77]; // [rsp+180h] [rbp+80h] BYREF
  char pszDest[176]; // [rsp+650h] [rbp+550h] BYREF

  v6 = (const CHAR *)a5;
  v8 = a6;
  v11 = a1;
  IoInitializeBugCheckProgress(a1, a2);
  IoSaveBugCheckProgress(1);
  pszDest[0] = 0;
  v70 = KiBugCheckProgress;
  LOBYTE(v62) = IopAutoReboot != 0;
  v59 = 1;
  v60 = 1;
  BYTE2(v57) = 0;
  v63 = 0LL;
  v65 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v66 = 0;
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
        HIBYTE(v57) = 1;
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
  HIBYTE(v57) = 0;
LABEL_12:
  CurrentPrcb = KeGetCurrentPrcb();
  v64 = CurrentPrcb;
  Number = CurrentPrcb->Number;
  if ( !qword_14032E680 )
    goto LABEL_13;
  if ( PopSimulateHiberBugcheck )
    PoPowerDownActionInProgress = 0;
  if ( *(_BYTE *)(qword_14032E680 + 4) )
  {
    DbgPrintEx(
      0x65u,
      0,
      "\n"
      "A bugcheck occurred during the late stages of hibernate suspend or resume.\n"
      "Due to verification temporarily enabled by Po during this time,\n"
      "regular bugcheck processing may not work.\n"
      "\n");
    if ( v11 == 10 )
      DbgPrintEx(
        0x65u,
        0,
        "Memory was accessed during this time that was not properly marked\n"
        "for the boot phase of hibernate! Check the callstack and parameters\n"
        "to find the pages that need to be marked.\n"
        "\n");
    CurrentPrcb = v64;
    v58 = 1;
    v70 = 0LL;
  }
  else
  {
LABEL_13:
    v58 = 0;
  }
  Context = CurrentPrcb->Context;
  v22 = (struct _KFLOATING_SAVE *)v76;
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
  if ( !HIBYTE(v57) )
  {
    v27 = (__int64)CurrentThread;
    goto LABEL_145;
  }
  off_140321A88(v22);
  HvlEnlightenments &= 0x4000u;
  IoSaveBugCheckProgress(96);
  for ( i = 0; i < (unsigned __int16)KiNmiInProgress; ++i )
  {
    if ( qword_14031EB38[i] )
      break;
  }
  off_140321858();
  if ( ViVerifierEnabled )
    VfNotifyVerifierOfEvent(2LL);
  if ( !v58 )
    KiSaveCurrentEtwTraceBuffer();
  IoAddTriageDumpDataBlock((int)&KseEngine, 96);
  if ( v11 == 229 )
  {
    KiScanBugCheckCallbackList();
    off_140321A68();
    HalReturnToFirmware(3LL);
  }
  *(_QWORD *)&qword_140338C88 = a2;
  *(_QWORD *)&qword_140338C90 = a3;
  if ( v11 == -1073741103 )
    v11 = 195;
  *(_QWORD *)qword_140338C98 = a4;
  KiBugCheckData = v11;
  *(_QWORD *)&qword_140338CA0 = a5;
  if ( v11 > 0xCB )
  {
    switch ( v11 )
    {
      case 0xD8u:
        KiBugCheckDriver = a2 + 88;
        break;
      case 0xEAu:
        KiBugCheckDriver = (__int64)a4;
        break;
      case 0xEFu:
        BYTE2(v57) = 1;
        break;
      case 0xFCu:
        goto LABEL_49;
      case 0x13Du:
        v66 = 8;
        break;
      case 0x14Fu:
        if ( a3 < 0x100 && a5 )
        {
          v35 = CurrentThread;
          if ( *(_QWORD *)(a5 + 8) )
            v35 = *(struct _KTHREAD **)(a5 + 8);
          CurrentThread = v35;
        }
        a4 = v63;
        v6 = v63;
        goto LABEL_57;
    }
    goto LABEL_118;
  }
  switch ( v11 )
  {
    case 0xCBu:
      v65 = a2;
      goto LABEL_118;
    case 0xAu:
      if ( a5 < ExPoolCodeStart || a5 >= ExPoolCodeEnd )
      {
        KiPcToFileHeader(a5, &v69, 0LL, (char *)&v57 + 1);
        if ( BYTE1(v57) == 1 )
        {
          if ( KiPcToFileHeader(a2, &v69, 1LL, (char *)&v57 + 1) )
          {
            KiBugCheckData = 211LL;
            KiBugCheckDriver = v69 + 88;
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
      goto LABEL_118;
    case 0x4Cu:
      v33 = &qword_140338C88;
      BYTE2(v57) = 1;
      v26 = 1;
      v34 = a3 - (_QWORD)&qword_140338C88;
      KiBugCheckData = (unsigned int)a2;
      do
      {
        *(_QWORD *)v33 = *(_QWORD *)((char *)v33 + v34);
        v33 += 2;
      }
      while ( (__int64)v33 < (__int64)&KiHardwareTrigger );
      v27 = (__int64)CurrentThread;
      goto LABEL_121;
    case 0x50u:
      v28 = 0LL;
      if ( !a6 )
      {
        if ( !a4 || ((unsigned __int8)a4 & 3) != 0 )
        {
          BYTE1(v57) = 1;
          goto LABEL_68;
        }
        v8 = (__int64)a4;
      }
      v65 = *(_QWORD *)(v8 + 360);
      *(_QWORD *)qword_140338C98 = v65;
      v28 = KiPcToFileHeader(v65, &v69, 0LL, (char *)&v57 + 1);
      if ( KeGetCurrentThread()->ApcStateIndex == 1
        && MmIsSessionAddress(v65)
        && KeGetCurrentThread()->ApcState.Process != PsInitialSystemProcess )
      {
        BYTE2(v57) = 1;
      }
LABEL_68:
      if ( (unsigned int)MmIsSpecialPoolAddress(a2) == 1 )
      {
        a4 = v63;
        v27 = (__int64)CurrentThread;
        v6 = v63;
        v26 = (char)v63;
        if ( ((((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) & 8) != 0 )
        {
          v29 = 214LL;
          v30 = 205LL;
        }
        else
        {
          v29 = 213LL;
          v30 = 204LL;
        }
        if ( BYTE1(v57) == 1 )
          v29 = v30;
        KiBugCheckData = v29;
        goto LABEL_121;
      }
      if ( v65 == a2 )
      {
        IsSessionAddress = MmIsSessionAddress(a2);
        v27 = (__int64)CurrentThread;
        if ( IsSessionAddress )
        {
          Teb = (unsigned __int64)CurrentThread->Teb;
          if ( !Teb || Teb >= (unsigned __int64)MmSystemRangeStart )
          {
            KiBugCheckData = 207LL;
            goto LABEL_119;
          }
        }
      }
      else
      {
        v27 = (__int64)CurrentThread;
      }
      if ( !v28 )
      {
        KiBugCheckDriver = MmLocateUnloadedDriver(a2);
        if ( KiBugCheckDriver )
          KiBugCheckData = 206LL;
      }
      goto LABEL_119;
    case 0x7Bu:
      v59 = ((unsigned __int8)a4 & 1) == 0;
      v60 = ((unsigned __int8)a4 & 2) == 0;
LABEL_118:
      v27 = (__int64)CurrentThread;
LABEL_119:
      a4 = v63;
      v6 = v63;
      goto LABEL_120;
  }
  if ( v11 != 142 && v11 != 190 )
    goto LABEL_118;
LABEL_49:
  v6 = 0LL;
  if ( a6 )
    goto LABEL_53;
  if ( a4 && ((unsigned __int8)a4 & 3) == 0 )
  {
    v8 = (__int64)a4;
LABEL_53:
    if ( v11 != 142 )
    {
      v65 = *(_QWORD *)(v8 + 360);
      if ( KeGetCurrentThread()->ApcStateIndex == 1 && MmIsSessionAddress(v65) )
      {
        a4 = 0LL;
LABEL_57:
        v26 = (char)v6;
        v27 = (__int64)CurrentThread;
        if ( KeGetCurrentThread()->ApcState.Process != PsInitialSystemProcess )
          BYTE2(v57) = 1;
        goto LABEL_121;
      }
      v27 = (__int64)CurrentThread;
      a4 = 0LL;
      goto LABEL_120;
    }
  }
  v27 = (__int64)CurrentThread;
  a4 = 0LL;
LABEL_120:
  v26 = (char)v6;
LABEL_121:
  HvlLogGuestCrashInformation(
    KiBugCheckData,
    *(__int64 *)&qword_140338C88,
    *(__int64 *)&qword_140338C90,
    *(__int64 *)qword_140338C98,
    *(__int64 *)&qword_140338CA0);
  if ( KiBugCheckDriver )
  {
    KeBugCheckUnicodeToAnsi(KiBugCheckDriver, pszDest, 128LL);
  }
  else if ( v65 )
  {
    KiDumpParameterImages(pszDest);
  }
  if ( !KdPitchDebugger )
    qword_140316B58 = (__int64)v76;
  if ( v11 != 226
    && ((_BYTE)KdDebuggerEnabled || KdEventLoggingEnabled)
    && !KiHypervisorInitiatedCrashDump
    && (!KdRefreshDebuggerNotPresent() || KdEventLoggingPresent) )
  {
    DbgPrintEx(
      0x65u,
      0,
      "\n*** Fatal System Error: 0x%08lx\n                       (0x%p,0x%p,0x%p,0x%p)\n\n",
      KiBugCheckData,
      *(const void **)&qword_140338C88,
      *(const void **)&qword_140338C90,
      *(const void **)qword_140338C98,
      *(const void **)&qword_140338CA0);
    if ( KiBugCheckDriver )
      DbgPrintEx(0x65u, 0, "Driver at fault: %s.\n", pszDest);
    if ( v26 )
    {
      if ( a4 )
        DbgPrintEx(0x65u, 0, a4);
      if ( v6 )
        DbgPrintEx(0x65u, 0, v6);
    }
    if ( (_BYTE)KdDebuggerEnabled && !(_BYTE)KdDebuggerNotPresent )
      KiBugCheckDebugBreak(3u, v51, v52, v53, v54, v55, v56, v57, (int)CurrentThread, v62);
  }
  CurrentPrcb = v64;
LABEL_145:
  _disable();
  __writecr8(0xFuLL);
  if ( HIBYTE(v57) )
  {
    if ( (unsigned int)KeNumberProcessors_0 <= 1 || KiHypervisorInitiatedCrashDump )
    {
      v38 = v64;
    }
    else
    {
      KiSetDebuggerOwner(CurrentPrcb);
      v36 = KeActiveProcessors[0];
      v74[0] = KeActiveProcessors[0];
      v74[1] = v37;
      if ( (unsigned __int16)v37 < LOWORD(KeActiveProcessors[0]) )
      {
        memmove(v75, qword_1403D15E8, 8LL * LOWORD(KeActiveProcessors[0]));
        v36 = v74[0];
      }
      v38 = v64;
      v39 = KiProcessorIndexToNumberMappingTable[v64->Number];
      if ( v36 > v39 >> 6 )
        v75[v39 >> 6] &= ~(1LL << (v39 & 0x3F));
      KiSendFreeze(v74, 0LL);
      KeStallExecutionProcessor(0xF4240u);
    }
    v40 = v58;
    v41 = v60;
    if ( v58 )
    {
      v43 = v59;
    }
    else
    {
      if ( CrashdmpDumpBlock && v60 )
        v42 = v66;
      else
        v42 = v66 | 4;
      if ( !(_BYTE)v62 )
        v42 |= 2u;
      v43 = v59;
      if ( !v59 )
        v42 |= 1u;
      KiDisplayBlueScreen(v42, v23, CurrentPrcb, 1LL);
    }
    HvlPrepareForRootCrashdump();
    if ( !v40 )
    {
      KiInvokeBugCheckEntryCallbacks();
      IoSaveBugCheckProgress(2);
    }
    if ( !(_BYTE)KdDebuggerEnabled && !KdPitchDebugger )
      KdEnableDebuggerWithLock(0);
    v44 = v38->Context;
    v45 = v76;
    v46 = 9LL;
    do
    {
      *(_OWORD *)&v44->P1Home = *v45;
      *(_OWORD *)&v44->P3Home = v45[1];
      *(_OWORD *)&v44->P5Home = v45[2];
      *(_OWORD *)&v44->ContextFlags = v45[3];
      *(_OWORD *)&v44->SegGs = v45[4];
      *(_OWORD *)&v44->Dr1 = v45[5];
      *(_OWORD *)&v44->Dr3 = v45[6];
      v44 = (_CONTEXT *)((char *)v44 + 128);
      v47 = v45[7];
      v45 += 8;
      *(_OWORD *)&v44[-1].LastExceptionToRip = v47;
      --v46;
    }
    while ( v46 );
    *(_OWORD *)&v44->P1Home = *v45;
    *(_OWORD *)&v44->P3Home = v45[1];
    *(_OWORD *)&v44->P5Home = v45[2];
    *(_OWORD *)&v44->ContextFlags = v45[3];
    *(_OWORD *)&v44->SegGs = v45[4];
    if ( v41 )
    {
      if ( v11 == 265 )
        KiMarkBugCheckRegions(
          *(__int64 *)&qword_140338C88,
          *(__int64 *)&qword_140338C90,
          (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))qword_140338C98,
          qword_140338CA0);
      if ( KdpDataBlockEncoded )
      {
        KdCopyDataBlock(&KdDebuggerDataBlock);
        KdpDataBlockEncoded = 0;
      }
      if ( v11 == 239 )
        PopInternalAddToDumpFile(0LL, 0LL, 0LL);
      IoWriteCrashDump(
        KiBugCheckData,
        *(__int64 *)&qword_140338C88,
        *(__int64 *)&qword_140338C90,
        *(__int64 *)qword_140338C98,
        *(__int64 *)&qword_140338CA0,
        v76,
        v27,
        (__int64)v70,
        SBYTE2(v57));
      IoSaveBugCheckProgress(3);
    }
  }
  else
  {
    if ( Number != (unsigned int)KiBugCheckActive >> 4 )
    {
      while ( 1 )
      {
        if ( KeGetCurrentPrcb()->IpiFrozen == 5 )
          KiFreezeTargetExecution(0LL, 0LL);
        _mm_pause();
      }
    }
    if ( KiHypervisorInitiatedCrashDump || (v48 = ((unsigned int)KiBugCheckActive >> 2) & 3, v48 >= 2) )
      off_140321798();
    IoSaveBugCheckProgress(5);
    _InterlockedExchangeAdd(&KiBugCheckActive, 4u);
    if ( v48 )
      KiBugCheckDebugBreak(4u, v51, v52, v53, v54, v55, v56, v57, (int)CurrentThread, v62);
    v43 = v59;
  }
  HvlResumeFromRootCrashdump();
  if ( !v58 )
    KiScanBugCheckCallbackList();
  off_140321A78(v49);
  IoSaveBugCheckProgress(4);
  if ( (_BYTE)v62 )
  {
    KiResumeForReboot = 1;
    KiSendThawExecution(0LL);
    if ( !KiHypervisorInitiatedCrashDump )
    {
      v73[0] = -1LL;
      v73[1] = 0LL;
      v73[2] = 0LL;
      DebugService2(0LL, (__int64)v73, 4u);
    }
    off_140321A68();
    if ( PoPowerDownActionInProgress || (v50 = 3LL, !v43) )
      v50 = 1LL;
    HalReturnToFirmware(v50);
  }
  KiBugCheckDebugBreak(4u, v51, v52, v53, v54, v55, v56, v57, (int)CurrentThread, v62);
}

/*
 * XREFs of KdInitSystem @ 0x1406AA128
 * Callers:
 *     KdEnableDebuggerWithLock @ 0x1401C2024 (KdEnableDebuggerWithLock.c)
 *     KeEnterKernelDebugger @ 0x1401C5C54 (KeEnterKernelDebugger.c)
 *     KiSystemStartup @ 0x14039C010 (KiSystemStartup.c)
 *     PopHiberCheckResume @ 0x14039D7D4 (PopHiberCheckResume.c)
 *     KiSetFeatureBits @ 0x1403A7FB8 (KiSetFeatureBits.c)
 *     Phase1InitializationDiscard @ 0x1407645E8 (Phase1InitializationDiscard.c)
 * Callees:
 *     DbgLoadImageSymbols @ 0x140002788 (DbgLoadImageSymbols.c)
 *     KeInitializeTimerEx @ 0x14002C018 (KeInitializeTimerEx.c)
 *     KeInitializeDpc @ 0x140093330 (KeInitializeDpc.c)
 *     RtlInitString @ 0x1400E561C (RtlInitString.c)
 *     MmGetPagedPoolCommitPointer @ 0x1400F470C (MmGetPagedPoolCommitPointer.c)
 *     KdDisableDebuggerWithLock @ 0x140142878 (KdDisableDebuggerWithLock.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     strncmp @ 0x140143860 (strncmp.c)
 *     strstr @ 0x140143918 (strstr.c)
 *     _strupr @ 0x140143974 (_strupr.c)
 *     atol @ 0x140143BA0 (atol.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     __report_rangecheckfailure @ 0x1401A8930 (__report_rangecheckfailure.c)
 *     KdPollBreakIn @ 0x1401C28BC (KdPollBreakIn.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     KdRegisterDebuggerDataBlock @ 0x1406AA3BC (KdRegisterDebuggerDataBlock.c)
 */

char __fastcall KdInitSystem(int a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // r15d
  char v6; // r13
  char v7; // r12
  char v8; // bp
  __int64 v9; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 v11; // rcx
  char *v12; // rsi
  char v13; // di
  char *v14; // rax
  unsigned int v16; // eax
  char *v17; // rcx
  const char *j; // rcx
  char v19; // al
  const char *v20; // r15
  __int64 v21; // rdx
  int v22; // eax
  __int64 *k; // rdi
  CHAR *v24; // r9
  unsigned int v25; // r8d
  __int64 v26; // rdx
  CHAR v27; // al
  unsigned int i; // edi
  PVOID PoolWithTag; // rax
  __int64 v30; // rsi
  signed __int32 v31[8]; // [rsp+0h] [rbp-178h] BYREF
  STRING DestinationString; // [rsp+20h] [rbp-158h] BYREF
  CHAR SourceString[256]; // [rsp+30h] [rbp-148h] BYREF

  v4 = 0;
  v6 = 0;
  v7 = 0;
  if ( a1 )
  {
    KeQueryPerformanceCounter(&KdPerformanceCounterRate);
    if ( !KdPitchDebugger )
    {
      for ( i = 0; i < (unsigned int)KeNumberProcessors_0; ++i )
      {
        PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x1000uLL, 0x6F49644Bu);
        v30 = (__int64)PoolWithTag;
        if ( PoolWithTag )
        {
          memset(PoolWithTag, 0, 0x1000uLL);
          _InterlockedOr(v31, 0);
          KdLogBuffer[i] = v30;
        }
      }
    }
    KdpLoaderDebuggerBlock = 0LL;
    return 1;
  }
  if ( !(_BYTE)KdDebuggerEnabled )
  {
    KiDebugRoutine = (__int64 (*)(_DWORD, _DWORD, _DWORD, _DWORD, char, ...))KdpStub;
    KdBreakAfterSymbolLoad = 0;
    if ( !KdPitchDebugger || (v8 = 1, !KdLocalDebugEnabled) )
      v8 = 0;
    if ( KdDebugDevice && *(_DWORD *)(KdDebugDevice + 236) == 3 )
      KdTransportMaxPacketSize = 1408;
    if ( !KdpDebuggerDataListHead )
    {
      *((_QWORD *)&KdpContext + 1) = KdDebugDevice;
      qword_1402C7BD0 = (__int64)MmGetPagedPoolCommitPointer();
      KdpPowerSpinLock = 0LL;
      qword_1402EB728 = (__int64)&KdpPowerListHead;
      KdpPowerListHead = (__int64)&KdpPowerListHead;
      qword_1402EB718 = (__int64)&KdpDebuggerDataListHead;
      KdpDebuggerDataListHead = (__int64)&KdpDebuggerDataListHead;
      KdRegisterDebuggerDataBlock(v9, KdDebuggerDataBlock);
      WORD3(KdVersionBlock) |= 1u;
      *((_QWORD *)&xmmword_1402C7DD0 + 1) = &PsLoadedModuleList;
      LODWORD(KdVersionBlock) = 693764111;
      *(_WORD *)((char *)&KdVersionBlock + 11) = 13059;
      qword_1402C7DE0 = (__int64)&KdpDebuggerDataListHead;
    }
    CurrentPrcb = KeGetCurrentPrcb();
    if ( !CurrentPrcb->Context )
    {
      CurrentPrcb->ContextFlagsInit = 1048587;
      CurrentPrcb->Context = &CurrentPrcb->ProcessorState.ContextFrame;
    }
    if ( a2 )
    {
      v11 = *(_QWORD *)(*(_QWORD *)(a2 + 16) + 48LL);
      off_1402C7D38 = &KdpLoaderDebuggerBlock;
      KdpLoaderDebuggerBlock = a2 + 16;
      v12 = *(char **)(a2 + 216);
      *(_QWORD *)&xmmword_1402C7DD0 = v11;
      if ( !v12 )
      {
        KdPitchDebugger = 1;
        v13 = 0;
        KdPageDebuggerSection = 1;
        goto LABEL_19;
      }
      strupr(v12);
      LODWORD(KdPrintBufferAllocateSize) = 0;
      v13 = 0;
      v14 = strstr(v12, "DBGPRINT_LOG_SIZE=");
      if ( v14 )
      {
        v16 = (atol(v14 + 18) + 4095) & 0xFFFFF000;
        LODWORD(KdPrintBufferAllocateSize) = v16;
        if ( v16 > 0x1000000 )
        {
          v16 = 0x1000000;
          LODWORD(KdPrintBufferAllocateSize) = 0x1000000;
        }
        if ( v16 <= 0x1000 )
          LODWORD(KdPrintBufferAllocateSize) = 0;
      }
      if ( strstr(v12, "CRASHDEBUG") )
      {
        KdPitchDebugger = 0;
        KdpBootedNodebug = 0;
      }
      else if ( strstr(v12, "NODEBUG") )
      {
        KdPitchDebugger = 1;
        KdPageDebuggerSection = 1;
        KdpBootedNodebug = 1;
      }
      else if ( strstr(v12, "DEBUGPORT=LOCAL") )
      {
        KdPitchDebugger = 1;
        v8 = 1;
        KdPageDebuggerSection = 1;
        LOBYTE(KdDebuggerNotPresent) = 1;
        KdLocalDebugEnabled = 1;
        KdpBootedNodebug = 0;
      }
      else
      {
        v17 = strstr(v12, "DEBUG=");
        if ( v17 || (v17 = strstr(v12, "DEBUG")) != 0LL )
        {
          KdpBootedNodebug = 0;
          v13 = 1;
          if ( v17[5] == 61 )
          {
            for ( j = v17 + 6; ; j = v20 + 1 )
            {
              v19 = *j;
              v20 = j;
              while ( v19 )
              {
                if ( (unsigned __int8)v19 <= 0x2Cu )
                {
                  v21 = 0x100100000200LL;
                  if ( _bittest64(&v21, v19) )
                    break;
                }
                v19 = *++v20;
              }
              v22 = (_DWORD)v20 - (_DWORD)j;
              if ( (_DWORD)v20 == (_DWORD)j )
                break;
              if ( v22 == 10 )
              {
                if ( !strncmp(j, "AUTOENABLE", 0xAuLL) )
                {
                  v6 = 1;
                  KdAutoEnableOnEvent = 1;
                  v7 = 0;
                }
              }
              else if ( v22 == 7 )
              {
                if ( !strncmp(j, "DISABLE", 7uLL) )
                {
                  v6 = 1;
                  KdAutoEnableOnEvent = 0;
                  v7 = 1;
                }
              }
              else if ( v22 == 6 && !strncmp(j, "NOUMEX", 6uLL) )
              {
                KdIgnoreUmExceptions = 1;
              }
              if ( *v20 != 44 )
                break;
            }
            v4 = 0;
          }
        }
      }
      if ( strstr(v12, "NOEVENT") )
      {
        KdEventLoggingEnabled = 0;
        goto LABEL_19;
      }
      if ( !strstr(v12, "EVENT") )
        goto LABEL_19;
      KdEventLoggingEnabled = 1;
      KdPageDebuggerSection = 0;
    }
    else
    {
      *(_QWORD *)&xmmword_1402C7DD0 = PsNtosImageBase;
    }
    v13 = 1;
LABEL_19:
    Base = (PVOID)xmmword_1402C7DD0;
    if ( !v8 )
    {
      if ( a2 && *(_DWORD *)(a2 + 12) != 1 )
        v13 = 0;
      if ( !v13 )
      {
        LOBYTE(KdDebuggerNotPresent) = 1;
        return 1;
      }
      if ( (int)KdInitialize(0LL, a2, &KdpContext, a4) < 0 )
      {
        KdPitchDebugger = 0;
        v13 = 0;
        LOBYTE(KdDebuggerNotPresent) = 1;
        KdLocalDebugEnabled = 1;
      }
      else
      {
        KiDebugRoutine = (__int64 (*)(_DWORD, _DWORD, _DWORD, _DWORD, char, ...))KdpTrap;
      }
    }
    if ( !KdpDebuggerStructuresInitialized )
    {
      BYTE4(KdpContext) = 0;
      KiDebugSwitchRoutine = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))KdpSwitchProcessor;
      LODWORD(KdpContext) = 20;
      KeInitializeDpc(&KdpTimeSlipDpc, KdpTimeSlipDpcRoutine, 0LL);
      KeInitializeTimerEx(&KdpTimeSlipTimer, NotificationTimer);
      KdpTimeSlipWorkItem.Parameter = 0LL;
      KdpTimeSlipWorkItem.WorkerRoutine = (void (__fastcall *)(void *))KdpTimeSlipWork;
      KdpTimeSlipWorkItem.List.Flink = 0LL;
      KdpDebuggerStructuresInitialized = 1;
    }
    KdTimerStart = 0LL;
    if ( KdEventLoggingEnabled && KdpBootedNodebug )
    {
      KdPitchDebugger = 1;
      KdEventLoggingPresent = v13;
      LOBYTE(KdDebuggerNotPresent) = 1;
      KdLocalDebugEnabled = 0;
    }
    else
    {
      LOBYTE(KdDebuggerEnabled) = 1;
      MEMORY[0xFFFFF780000002D4] = 1;
      if ( KdLocalDebugEnabled )
        return 1;
    }
    if ( !KdEventLoggingEnabled || (_BYTE)KdDebuggerEnabled )
    {
      KdPitchDebugger = 0;
      if ( v6 )
      {
        KdDisableDebuggerWithLock();
        KdBlockEnable = v7;
      }
      else
      {
        if ( a2 )
        {
          for ( k = *(__int64 **)(a2 + 16); k != (__int64 *)(a2 + 16); ++v4 )
          {
            if ( v4 >= 3 )
              break;
            v24 = (CHAR *)k[10];
            v25 = *((unsigned __int16 *)k + 36) >> 1;
            if ( v25 >= 0x100 )
              v25 = 255;
            v26 = 0LL;
            do
            {
              v27 = *v24;
              v24 += 2;
              SourceString[v26] = v27;
              v26 = (unsigned int)(v26 + 1);
            }
            while ( (unsigned int)v26 < v25 );
            if ( (unsigned int)v26 >= 0x100uLL )
              _report_rangecheckfailure();
            SourceString[v26] = 0;
            RtlInitString(&DestinationString, SourceString);
            DbgLoadImageSymbols(&DestinationString, (PVOID)k[6], 0xFFFFFFFFuLL);
            k = (__int64 *)*k;
          }
        }
        else
        {
          DbgLoadImageSymbols(0LL, Base, 0xFFFFFFFFuLL);
        }
        if ( a2 )
          KdBreakAfterSymbolLoad = KdPollBreakIn();
      }
    }
    return 1;
  }
  return 1;
}

/*
 * XREFs of KdInitSystem @ 0x1406F3740
 * Callers:
 *     KdEnableDebuggerWithLock @ 0x1401D1484 (KdEnableDebuggerWithLock.c)
 *     KeEnterKernelDebugger @ 0x1401D4BC4 (KeEnterKernelDebugger.c)
 *     KiSystemStartup @ 0x1403C8010 (KiSystemStartup.c)
 *     PopHiberCheckResume @ 0x1403D06EC (PopHiberCheckResume.c)
 *     KiSetFeatureBits @ 0x1403D57C8 (KiSetFeatureBits.c)
 *     KiSetProcessorSignature @ 0x1403DE364 (KiSetProcessorSignature.c)
 *     Phase1InitializationDiscard @ 0x140794438 (Phase1InitializationDiscard.c)
 * Callees:
 *     KeInitializeDpc @ 0x14000D25C (KeInitializeDpc.c)
 *     DbgLoadImageSymbols @ 0x1400846BC (DbgLoadImageSymbols.c)
 *     RtlInitString @ 0x1400A7D18 (RtlInitString.c)
 *     MmGetPagedPoolCommitPointer @ 0x1400B3DF0 (MmGetPagedPoolCommitPointer.c)
 *     KdPollBreakIn @ 0x1400DD630 (KdPollBreakIn.c)
 *     KeInitializeTimerEx @ 0x1400EEAA0 (KeInitializeTimerEx.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     _strupr @ 0x14014D1E0 (_strupr.c)
 *     strncmp @ 0x14014D3F0 (strncmp.c)
 *     strstr @ 0x14014D4A8 (strstr.c)
 *     atol @ 0x14014D538 (atol.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     __report_rangecheckfailure @ 0x1401B1134 (__report_rangecheckfailure.c)
 *     KdDisableDebuggerWithLock @ 0x1401D1384 (KdDisableDebuggerWithLock.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     KdRegisterDebuggerDataBlock @ 0x1406F4114 (KdRegisterDebuggerDataBlock.c)
 */

char __fastcall KdInitSystem(int a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v5; // r13
  char v6; // r12
  char v7; // r14
  __int64 v8; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 v10; // rcx
  char *v11; // rbp
  char v12; // di
  char *v13; // rax
  const char *v14; // rsi
  char *v15; // rcx
  char v16; // al
  char *v17; // rcx
  unsigned int v18; // ebp
  __int64 *k; // rdi
  CHAR *v20; // r9
  unsigned int v21; // r8d
  __int64 v22; // rdx
  CHAR v23; // al
  unsigned int i; // edi
  PVOID PoolWithTag; // rax
  PVOID v26; // rsi
  unsigned int v28; // eax
  const char *j; // rcx
  char v30; // al
  const char *v31; // rsi
  __int64 v32; // rdx
  int v33; // eax
  signed __int32 v34[8]; // [rsp+0h] [rbp-178h] BYREF
  STRING DestinationString; // [rsp+20h] [rbp-158h] BYREF
  CHAR SourceString[256]; // [rsp+30h] [rbp-148h] BYREF

  v5 = 0;
  v6 = 0;
  if ( a1 )
  {
    KeQueryPerformanceCounter(&KdPerformanceCounterRate);
    if ( !KdPitchDebugger )
    {
      for ( i = 0; i < (unsigned int)KeNumberProcessors_0; ++i )
      {
        PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x1000uLL, 0x6F49644Bu);
        v26 = PoolWithTag;
        if ( PoolWithTag )
        {
          memset(PoolWithTag, 0, 0x1000uLL);
          _InterlockedOr(v34, 0);
          KdLogBuffer[i] = v26;
        }
      }
    }
    KdpLoaderDebuggerBlock = 0LL;
    return 1;
  }
  if ( !(_BYTE)KdDebuggerEnabled )
  {
    KdpDebugRoutineSelect = 0;
    KdBreakAfterSymbolLoad = 0;
    if ( !KdPitchDebugger || (v7 = 1, !KdLocalDebugEnabled) )
      v7 = 0;
    if ( KdDebugDevice && *(_DWORD *)(KdDebugDevice + 236) == 3 )
      KdTransportMaxPacketSize = 1408;
    if ( !KdpDebuggerDataListHead )
    {
      *((_QWORD *)&KdpContext + 1) = KdDebugDevice;
      qword_1402F2A70 = (__int64)MmGetPagedPoolCommitPointer();
      KdpPowerSpinLock = 0LL;
      qword_14031CCD8 = (__int64)&KdpPowerListHead;
      KdpPowerListHead = (__int64)&KdpPowerListHead;
      qword_14031CCC8 = (__int64)&KdpDebuggerDataListHead;
      KdpDebuggerDataListHead = (__int64)&KdpDebuggerDataListHead;
      KdRegisterDebuggerDataBlock(v8, &KdDebuggerDataBlock);
      WORD3(KdVersionBlock) |= 1u;
      *((_QWORD *)&xmmword_1402F4E38 + 1) = &PsLoadedModuleList;
      LODWORD(KdVersionBlock) = 943259663;
      *(_WORD *)((char *)&KdVersionBlock + 11) = 13059;
      qword_1402F4E48 = (__int64)&KdpDebuggerDataListHead;
    }
    CurrentPrcb = KeGetCurrentPrcb();
    if ( !CurrentPrcb->Context )
    {
      CurrentPrcb->ContextFlagsInit = 1048587;
      CurrentPrcb->Context = &CurrentPrcb->ProcessorState.ContextFrame;
    }
    if ( a2 )
    {
      v10 = *(_QWORD *)(*(_QWORD *)(a2 + 16) + 48LL);
      off_1402F2BD8 = &KdpLoaderDebuggerBlock;
      KdpLoaderDebuggerBlock = a2 + 16;
      v11 = *(char **)(a2 + 216);
      *(_QWORD *)&xmmword_1402F4E38 = v10;
      if ( v11 )
      {
        strupr(v11);
        LODWORD(KdPrintBufferAllocateSize) = 0;
        v12 = 0;
        v13 = strstr(v11, "DBGPRINT_LOG_SIZE=");
        if ( v13 )
        {
          v28 = (atol(v13 + 18) + 4095) & 0xFFFFF000;
          LODWORD(KdPrintBufferAllocateSize) = v28;
          if ( v28 > 0x1000000 )
          {
            v28 = 0x1000000;
            LODWORD(KdPrintBufferAllocateSize) = 0x1000000;
          }
          if ( v28 <= 0x1000 )
            LODWORD(KdPrintBufferAllocateSize) = 0;
        }
        if ( strstr(v11, "CRASHDEBUG") )
        {
          KdPitchDebugger = 0;
          KdpBootedNodebug = 0;
        }
        else if ( strstr(v11, "NODEBUG") )
        {
          KdPitchDebugger = 1;
          KdPageDebuggerSection = 1;
          KdpBootedNodebug = 1;
        }
        else if ( strstr(v11, "DEBUGPORT=LOCAL") )
        {
          KdPitchDebugger = 1;
          v7 = 1;
          KdPageDebuggerSection = 1;
          LOBYTE(KdDebuggerNotPresent) = 1;
          KdLocalDebugEnabled = 1;
          KdpBootedNodebug = 0;
        }
        else
        {
          v14 = v11;
          do
          {
            v15 = strstr(v14, " DEBUG=");
            if ( !v15 )
            {
              v15 = strstr(v14, " DEBUG");
              if ( !v15 )
                break;
            }
            v14 = v15 + 6;
            v16 = v15[6];
            if ( v16 == 32 || v16 == 61 || !v16 )
            {
              v17 = v15 + 1;
              KdpBootedNodebug = 0;
              v12 = 1;
              if ( v17[5] == 61 )
              {
                for ( j = v17 + 6; ; j = v31 + 1 )
                {
                  v30 = *j;
                  v31 = j;
                  while ( v30 )
                  {
                    if ( (unsigned __int8)v30 <= 0x2Cu )
                    {
                      v32 = 0x100100000200LL;
                      if ( _bittest64(&v32, v30) )
                        break;
                    }
                    v30 = *++v31;
                  }
                  v33 = (_DWORD)v31 - (_DWORD)j;
                  if ( (_DWORD)v31 == (_DWORD)j )
                    break;
                  if ( v33 == 10 )
                  {
                    if ( !strncmp(j, "AUTOENABLE", 0xAuLL) )
                    {
                      v5 = 1;
                      KdAutoEnableOnEvent = 1;
                      v6 = 0;
                    }
                  }
                  else if ( v33 == 7 )
                  {
                    if ( !strncmp(j, "DISABLE", 7uLL) )
                    {
                      v5 = 1;
                      KdAutoEnableOnEvent = 0;
                      v6 = 1;
                    }
                  }
                  else if ( v33 == 6 && !strncmp(j, "NOUMEX", 6uLL) )
                  {
                    KdIgnoreUmExceptions = 1;
                  }
                  if ( *v31 != 44 )
                    break;
                }
              }
              break;
            }
          }
          while ( v15 != (char *)-6LL );
        }
        if ( !strstr(v11, "NOEVENT") )
        {
          if ( !strstr(v11, "EVENT") )
            goto LABEL_26;
          KdEventLoggingEnabled = 1;
          KdPageDebuggerSection = 0;
          goto LABEL_60;
        }
        KdEventLoggingEnabled = 0;
      }
      else
      {
        KdPitchDebugger = 1;
        v12 = 0;
        KdPageDebuggerSection = 1;
      }
LABEL_26:
      Base = (PVOID)xmmword_1402F4E38;
      if ( !v7 )
      {
        if ( a2 && *(_DWORD *)(a2 + 12) < 2u )
          v12 = 0;
        if ( !v12 )
        {
          LOBYTE(KdDebuggerNotPresent) = 1;
          return 1;
        }
        if ( (int)KdInitialize(0LL, a2, &KdpContext, a4) < 0 )
        {
          KdPitchDebugger = 0;
          v12 = 0;
          LOBYTE(KdDebuggerNotPresent) = 1;
          KdLocalDebugEnabled = 1;
        }
        else
        {
          KdpDebugRoutineSelect = 1;
        }
      }
      if ( !KdpDebuggerStructuresInitialized )
      {
        BYTE4(KdpContext) = 0;
        LODWORD(KdpContext) = 20;
        KeInitializeDpc(&KdpTimeSlipDpc, (PKDEFERRED_ROUTINE)KdpTimeSlipDpcRoutine, 0LL);
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
        KdEventLoggingPresent = v12;
        LOBYTE(KdDebuggerNotPresent) = 1;
        KdLocalDebugEnabled = 0;
        goto LABEL_37;
      }
      LOBYTE(KdDebuggerEnabled) = 1;
      MEMORY[0xFFFFF780000002D4] = 1;
      if ( !KdLocalDebugEnabled )
      {
LABEL_37:
        if ( !KdEventLoggingEnabled || (_BYTE)KdDebuggerEnabled )
        {
          KdPitchDebugger = 0;
          if ( v5 )
          {
            KdDisableDebuggerWithLock();
            KdBlockEnable = v6;
          }
          else
          {
            if ( a2 )
            {
              v18 = 0;
              for ( k = *(__int64 **)(a2 + 16); k != (__int64 *)(a2 + 16); ++v18 )
              {
                if ( v18 >= 3 )
                  break;
                v20 = (CHAR *)k[10];
                v21 = *((unsigned __int16 *)k + 36) >> 1;
                if ( v21 >= 0x100 )
                  v21 = 255;
                v22 = 0LL;
                do
                {
                  v23 = *v20;
                  v20 += 2;
                  SourceString[v22] = v23;
                  v22 = (unsigned int)(v22 + 1);
                }
                while ( (unsigned int)v22 < v21 );
                if ( (unsigned int)v22 >= 0x100uLL )
                  _report_rangecheckfailure();
                SourceString[v22] = 0;
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
      }
      return 1;
    }
    *(_QWORD *)&xmmword_1402F4E38 = PsNtosImageBase;
LABEL_60:
    v12 = 1;
    goto LABEL_26;
  }
  return 1;
}

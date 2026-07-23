/*
 * XREFs of PopInvokeSystemStateHandler @ 0x1403A0370
 * Callers:
 *     PopTransitionToSleep @ 0x14039E084 (PopTransitionToSleep.c)
 *     PopEndMirroring @ 0x14039EAC4 (PopEndMirroring.c)
 *     PopShutdownSystem @ 0x1403B2D54 (PopShutdownSystem.c)
 * Callees:
 *     VfIsVerifierEnabled @ 0x140001FF0 (VfIsVerifierEnabled.c)
 *     EtwTraceKernelEvent @ 0x140037C30 (EtwTraceKernelEvent.c)
 *     KeInsertQueueDpc @ 0x140043D30 (KeInsertQueueDpc.c)
 *     KeInitializeDpc @ 0x140093330 (KeInitializeDpc.c)
 *     KeSetSystemGroupAffinityThread @ 0x1400FF490 (KeSetSystemGroupAffinityThread.c)
 *     KeRebaselineSystemTime @ 0x140117A8C (KeRebaselineSystemTime.c)
 *     KeRebaselineInterruptTime @ 0x140118D34 (KeRebaselineInterruptTime.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     ext_ms_win_ntos_tm_l1_1_0_TmIsKTMCommitCoordinator @ 0x140143840 (ext_ms_win_ntos_tm_l1_1_0_TmIsKTMCommitCoordinator.c)
 *     xHalTimerWatchdogStop @ 0x140148598 (xHalTimerWatchdogStop.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     DbgBreakPointWithStatus @ 0x14015B8E0 (DbgBreakPointWithStatus.c)
 *     RtlpInterlockedPushEntrySList @ 0x14015B9A0 (RtlpInterlockedPushEntrySList.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     MmInvalidateDumpAddresses @ 0x14039D45C (MmInvalidateDumpAddresses.c)
 *     MmUpdateHiberMappings @ 0x14039DF40 (MmUpdateHiberMappings.c)
 *     MiUpdateUserMappings @ 0x14039DFB8 (MiUpdateUserMappings.c)
 *     PopIssueNextState @ 0x1403A0A80 (PopIssueNextState.c)
 *     VfNotifyOfHibernate @ 0x1406BBF48 (VfNotifyOfHibernate.c)
 *     BgLibraryInitialize @ 0x1406D9CE8 (BgLibraryInitialize.c)
 */

__int64 __fastcall PopInvokeSystemStateHandler(int a1, __int64 a2)
{
  __int64 v2; // r15
  signed int Next; // r13d
  __int64 v6; // rbx
  __int64 (__fastcall *v7)(ULONG_PTR); // rsi
  __int64 v8; // rdi
  unsigned __int8 CurrentIrql; // r12
  unsigned int i; // ebx
  int v11; // edi
  __int64 *v12; // rsi
  LARGE_INTEGER PerformanceCounter; // rdi
  __int64 v14; // rbx
  __int64 v15; // rcx
  struct _KFLOATING_SAVE *v16; // rcx
  PKFLOATING_SAVE v17; // rcx
  unsigned __int64 v18; // rcx
  char v19; // bl
  bool v20; // zf
  char v21; // bl
  __int64 v22; // rcx
  char v23; // al
  LARGE_INTEGER v24; // [rsp+30h] [rbp-D0h]
  struct _GROUP_AFFINITY Affinity; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v26; // [rsp+48h] [rbp-B8h]
  LARGE_INTEGER v27; // [rsp+50h] [rbp-B0h] BYREF
  _SLIST_ENTRY v28[6]; // [rsp+60h] [rbp-A0h] BYREF
  struct _KDPC Dpc; // [rsp+C0h] [rbp-40h] BYREF
  _QWORD DeferredContext[10]; // [rsp+100h] [rbp+0h] BYREF
  _QWORD v31[2]; // [rsp+150h] [rbp+50h] BYREF
  _QWORD *v32; // [rsp+160h] [rbp+60h] BYREF
  int v33; // [rsp+168h] [rbp+68h]
  int v34; // [rsp+16Ch] [rbp+6Ch]
  _QWORD v35[2]; // [rsp+170h] [rbp+70h] BYREF
  _QWORD v36[3]; // [rsp+180h] [rbp+80h] BYREF

  v2 = a1;
  LOBYTE(v26) = 0;
  v24.QuadPart = 0LL;
  Next = -1073741823;
  memset(DeferredContext, 0, sizeof(DeferredContext));
  LODWORD(DeferredContext[5]) = v2;
  memset(v36, 0, sizeof(v36));
  DeferredContext[0] = v36;
  DeferredContext[4] = &PopPowerStateNotifyHandler;
  if ( (_DWORD)v2 != 7 )
  {
    DeferredContext[0] = (char *)&PopPowerStateHandlers + 24 * v2;
    if ( !*(_QWORD *)(DeferredContext[0] + 8LL) )
      return 3221225664LL;
  }
  HIDWORD(DeferredContext[7]) = KeNumberProcessors_0;
  LODWORD(DeferredContext[6]) = KeNumberProcessors_0;
  LODWORD(DeferredContext[7]) = 1;
  if ( ((_DWORD)v2 == 3 || (_DWORD)v2 == 6) && a2 )
  {
    v6 = a2;
    DeferredContext[2] = a2;
    v7 = PopSaveHiberContextWrapper;
    DeferredContext[3] = a2;
    DeferredContext[1] = PopSaveHiberContextWrapper;
    v8 = a2;
  }
  else
  {
    v6 = DeferredContext[3];
    v8 = DeferredContext[2];
    v7 = (__int64 (__fastcall *)(ULONG_PTR))DeferredContext[1];
  }
  memset(v28, 0, sizeof(v28));
  if ( a2 )
  {
    PopHibernateSystemContext = DeferredContext[0];
    qword_140305B78 = (__int64)v7;
    qword_140305B90 = (__int64)&PopPowerStateNotifyHandler;
    v12 = &PopHibernateSystemContext;
    byte_140305B9C = BYTE4(DeferredContext[5]);
    dword_140305BA0 = DeferredContext[6];
    qword_140305B80 = v8;
    qword_140305B88 = v6;
    dword_140305B98 = v2;
    dword_140305BAC = KeNumberProcessors_0;
    dword_140305BA8 = DeferredContext[7];
    RtlpInterlockedPushEntrySList(&SListHead, &v28[5]);
    CurrentIrql = v26;
  }
  else
  {
    Affinity.Reserved[1] = 0;
    *(_DWORD *)&Affinity.Group = (unsigned __int16)((unsigned int)KiProcessorIndexToNumberMappingTable[0] >> 6);
    Affinity.Reserved[2] = 0;
    Affinity.Mask = 1LL << (KiProcessorIndexToNumberMappingTable[0] & 0x3F);
    KeSetSystemGroupAffinityThread(&Affinity, 0LL);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    KeInitializeDpc(&Dpc, PopInvokeStateHandlerTargetProcessor, DeferredContext);
    Dpc.Importance = 2;
    for ( i = 0; i < (unsigned int)KeNumberProcessors_0; ++i )
    {
      if ( i != KeGetCurrentPrcb()->Number )
      {
        v11 = HIDWORD(DeferredContext[6]);
        Dpc.Number = i + 640;
        KeInsertQueueDpc(&Dpc, 0LL, 0LL);
        while ( v11 == HIDWORD(DeferredContext[6]) )
          _mm_pause();
      }
    }
    v12 = DeferredContext;
  }
  PopIssueNextState(v12, v28, 2LL);
  if ( dword_1402DE0A0 == 4 )
  {
    PerformanceCounter.QuadPart = 0LL;
    v14 = 1000000LL * KeGetCurrentPrcb()->MHz;
  }
  else
  {
    v14 = PopQpcFrequency;
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
  }
  if ( (xmmword_140382290 & 0x8000) != 0 )
  {
    v34 = 0;
    v32 = v35;
    v35[0] = PerformanceCounter.QuadPart;
    v35[1] = v14;
    v33 = 16;
    EtwTraceKernelEvent((int)&v32, 1, 0x80008000, 0x1230u, 4200450);
  }
  PopIssueNextState(v12, v28, 3LL);
  if ( a2 )
  {
    RtlpDebugPrintCallbacksActive = 0;
    if ( (unsigned int)VfIsVerifierEnabled() )
    {
      LOBYTE(v15) = 1;
      VfNotifyOfHibernate(v15);
    }
  }
  PoAllProcIntrDisabled = 1;
  if ( SLODWORD(v28[4].Next) >= 0 )
  {
    *((_BYTE *)v12 + 44) = 1;
    PopIssueNextState(v12, v28, 10LL);
    if ( (_DWORD)v2 != 3 && (_DWORD)v2 != 6 )
      off_1402D2938(v16);
    if ( a2 )
    {
      PopIssueNextState(v12, v28, 4LL);
      MiUpdateUserMappings();
      PopIssueNextState(v12, v28, 8LL);
    }
    PopIssueNextState(v12, v28, 5LL);
    Next = (signed int)v28[4].Next;
    KeRebaselineInterruptTime();
    off_1402D2928(v17);
    PopIssueNextState(v12, v28, 6LL);
    if ( a2 )
    {
      if ( Next == 1073742484 )
        PopIssueNextState(v12, v28, 7LL);
      MmInvalidateDumpAddresses(xmmword_1402DE308, 0xDuLL);
      v18 = *(_QWORD *)(a2 + 312);
      if ( v18 )
        MmInvalidateDumpAddresses(v18, (unsigned int)(16 * *(_DWORD *)(a2 + 264)));
      PopIssueNextState(v12, v28, 8LL);
      MmUpdateHiberMappings(2, 0LL);
      *(_BYTE *)(a2 + 4) = 0;
      PopIssueNextState(v12, v28, 9LL);
    }
    v19 = PopDebugFlags;
    if ( (PopDebugFlags & 1) != 0 && (_BYTE)KdDebuggerEnabled )
      DbgBreakPointWithStatus(Next);
    if ( (v19 & 2) != 0 )
      KeBugCheckEx(0xA0u, 0xAuLL, 0LL, 0LL, 0LL);
    PopNoMoreInput = 0;
    if ( Next >= 0 )
    {
      ++PoPowerSequence;
      PopFullWake = 0;
      dword_1402DEAC8 = 1;
      if ( PoResumeFromHibernate )
        _InterlockedOr(&PopFullWake, 2u);
    }
    *((_BYTE *)v12 + 44) = 0;
    PopIssueNextState(v12, v28, 10LL);
  }
  if ( a2 )
  {
    if ( Next == -1073741632 )
    {
      if ( (PopSimulate & 0x1000) == 0 )
      {
        while ( 1 )
          ;
      }
      *(_BYTE *)a2 = 1;
LABEL_52:
      v20 = qword_1402DDF20 == 0;
      *v12 = (__int64)&unk_1402DDF18;
      v12[3] = 0LL;
      if ( !v20 )
        PopIssueNextState(v12, v28, 5LL);
      HalReturnToFirmware(3LL);
    }
    PoHiberInProgress = 0;
    *(_DWORD *)(a2 + 188) = Next;
    if ( *(_BYTE *)a2 )
      goto LABEL_52;
    if ( (unsigned int)VfIsVerifierEnabled() )
      VfNotifyOfHibernate(0LL);
    if ( RtlpDebugPrintCallbackList == (_UNKNOWN *)&RtlpDebugPrintCallbackList )
      RtlpDebugPrintCallbacksActive = 1;
    *(_DWORD *)(a2 + 188) = 1073742484;
  }
  KeRebaselineInterruptTime();
  KeRebaselineSystemTime();
  PoAllProcIntrDisabled = 0;
  PopIssueNextState(v12, v28, 11LL);
  if ( Next >= 0 )
  {
    if ( dword_1402DE0A0 != 4 || PoResumeFromHibernate )
    {
      v21 = 0;
      v24 = KeQueryPerformanceCounter(0LL);
      off_1402D2710();
    }
    else
    {
      v21 = 1;
      if ( !off_1402D2710() )
        v24.QuadPart = 0LL;
    }
    if ( (xmmword_140382290 & 0x8000) != 0 )
    {
      v27 = v24;
      v31[1] = 8LL;
      v31[0] = &v27;
      EtwTraceKernelEvent((int)v31, 1, 0x80008000, 0x1231u, 4200450);
    }
    if ( v21 )
      qword_1402DE5F8 = PopQpcFrequency / 0x3E8uLL * (v24.QuadPart / (1000 * (unsigned __int64)KeGetCurrentPrcb()->MHz))
                      - PerformanceCounter.QuadPart;
  }
  PopIssueNextState(v12, v28, 12LL);
  PopIssueNextState(v12, v28, 13LL);
  if ( SLODWORD(v28[4].Next) >= 0 )
  {
    v22 = *v12;
    LODWORD(v28[4].Next) = 0;
    v23 = *(_BYTE *)(v22 + 5);
    if ( v23 != -1 )
      *(_BYTE *)(v22 + 5) = v23 + 1;
  }
  if ( a2 )
  {
    if ( Next == 1073742484 && !byte_1402DE321 && byte_140305B50 )
      BgLibraryInitialize(Address, 0LL);
  }
  else
  {
    __writecr8(CurrentIrql);
  }
  return LODWORD(v28[4].Next);
}

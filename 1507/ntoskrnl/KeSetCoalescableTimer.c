/*
 * XREFs of KeSetCoalescableTimer @ 0x1400662B0
 * Callers:
 *     PopFxPluginWork @ 0x140029DC8 (PopFxPluginWork.c)
 *     PopFxScheduleDeviceIdleTimer @ 0x140029EA0 (PopFxScheduleDeviceIdleTimer.c)
 *     CmpArmLazyWriter @ 0x140062190 (CmpArmLazyWriter.c)
 *     EtwpRequestFlushTimer @ 0x1400637C4 (EtwpRequestFlushTimer.c)
 *     ExpSetTimer @ 0x140065EC0 (ExpSetTimer.c)
 *     CcRescheduleLazyWriteScan @ 0x1400676E4 (CcRescheduleLazyWriteScan.c)
 *     PopFxArmResidentTimer @ 0x14012A750 (PopFxArmResidentTimer.c)
 *     CmpCompleteLazyWrite @ 0x14012B6A8 (CmpCompleteLazyWrite.c)
 *     ExpTimerDpcRoutine @ 0x14012B7B8 (ExpTimerDpcRoutine.c)
 *     ExpTimerResume @ 0x14012D1AC (ExpTimerResume.c)
 *     PopPepArmIdleTimer @ 0x140136200 (PopPepArmIdleTimer.c)
 *     CcBcbProfiler @ 0x14017B2D0 (CcBcbProfiler.c)
 *     IopEnableTimer @ 0x1401F2290 (IopEnableTimer.c)
 *     KiInitializeProcessor @ 0x1403F8C60 (KiInitializeProcessor.c)
 *     sub_140406000 @ 0x140406000 (sub_140406000.c)
 *     PiDrvDbUnloadNode @ 0x1404DE470 (PiDrvDbUnloadNode.c)
 *     WdipTimeoutCheckRoutine @ 0x14054CD10 (WdipTimeoutCheckRoutine.c)
 *     ExpSetWorkerFactoryDeferredCreateTimer @ 0x14055744C (ExpSetWorkerFactoryDeferredCreateTimer.c)
 *     ExpWorkerThreadBalanceManager @ 0x1405B12E8 (ExpWorkerThreadBalanceManager.c)
 *     IopErrorLogQueueRequest @ 0x140678964 (IopErrorLogQueueRequest.c)
 *     AnFwProgressIndicatorTransition @ 0x14075C350 (AnFwProgressIndicatorTransition.c)
 *     AnFwDisplayFade @ 0x14075D0A8 (AnFwDisplayFade.c)
 *     AnFwDisplayProgressIndicator @ 0x14075E5AC (AnFwDisplayProgressIndicator.c)
 *     AnFwDisplayBackgroundUpdate @ 0x14075FAE0 (AnFwDisplayBackgroundUpdate.c)
 *     CcInitializeBcbProfiler @ 0x14079A2C4 (CcInitializeBcbProfiler.c)
 *     PoInitSystem @ 0x1407D2D24 (PoInitSystem.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x1400103E0 (EtwTraceKernelEvent.c)
 *     KiExitDispatcher @ 0x14004C6B0 (KiExitDispatcher.c)
 *     KiInsertTimerTable @ 0x1400A2120 (KiInsertTimerTable.c)
 *     KiTimerWaitTest @ 0x1400A40F0 (KiTimerWaitTest.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     KiTraceSetTimer @ 0x1402099B0 (KiTraceSetTimer.c)
 */

BOOLEAN __stdcall KeSetCoalescableTimer(
        PKTIMER Timer,
        LARGE_INTEGER DueTime,
        ULONG Period,
        ULONG TolerableDelay,
        PKDPC Dpc)
{
  char v5; // r13
  LARGE_INTEGER v7; // rbx
  unsigned __int64 v9; // r13
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // r8
  int v12; // eax
  ULONG v13; // ecx
  unsigned int v14; // r13d
  BOOLEAN v15; // r12
  unsigned int v16; // edi
  unsigned __int64 Size; // r15
  __int64 v18; // rbp
  volatile signed __int32 *v19; // rsi
  unsigned int v20; // edi
  unsigned int v21; // edi
  signed __int64 v22; // rsi
  struct _LIST_ENTRY *Flink; // rdx
  struct _LIST_ENTRY *Blink; // rax
  unsigned __int64 v26; // rcx
  __int64 v27; // rdx
  unsigned int v28; // r15d
  volatile signed __int32 *v29; // rdx
  __int64 v30; // rcx
  PKDPC v31; // rbp
  int v32; // r8d
  LONGLONG v33; // rax
  ULONG v34; // [rsp+30h] [rbp-98h]
  struct _KPRCB *CurrentPrcb; // [rsp+38h] [rbp-90h]
  LONG LockNV; // [rsp+40h] [rbp-88h]
  _KDPC *v37; // [rsp+58h] [rbp-70h]
  unsigned __int8 CurrentIrql; // [rsp+60h] [rbp-68h]
  PKTIMER v39; // [rsp+68h] [rbp-60h] BYREF
  PKDPC v40; // [rsp+70h] [rbp-58h]
  _QWORD v41[2]; // [rsp+78h] [rbp-50h] BYREF

  v5 = 0;
  v34 = Period;
  v40 = Dpc;
  v7 = DueTime;
  if ( TolerableDelay )
  {
    v9 = 10000LL * TolerableDelay;
    if ( v9 > 0xFC0000 )
    {
      v10 = v9 - 16515072;
      if ( DueTime.QuadPart >= 0 )
      {
        v11 = DueTime.QuadPart + v10;
        if ( (__int64)(DueTime.QuadPart + v10) < DueTime.QuadPart )
          v11 = 0x7FFFFFFFFFFFFFFFLL;
      }
      else
      {
        v11 = DueTime.QuadPart - v10;
        if ( (__int64)(DueTime.QuadPart - v10) > DueTime.QuadPart )
          v11 = 0x8000000000000000uLL;
      }
      if ( Period )
      {
        v12 = -1;
        v13 = Period + (int)v10 / 10000;
        if ( v13 >= Period )
          v12 = v13;
        v34 = v12;
      }
      LODWORD(v9) = 16515072;
      v7.QuadPart = v11;
    }
    v14 = (unsigned int)v9 >> 18;
    if ( v14 > 0x3F )
      LOBYTE(v14) = 63;
    v5 = 4 * v14;
  }
  v37 = (_KDPC *)(KiWaitNever ^ __ROR8__(
                                  (unsigned __int64)Timer ^ _byteswap_uint64((unsigned __int64)Dpc ^ KiWaitAlways),
                                  KiWaitNever));
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v15 = 0;
  CurrentPrcb = KeGetCurrentPrcb();
  while ( 1 )
  {
    v16 = 0;
    if ( _interlockedbittestandset(&Timer->Header.Lock, 7u) )
    {
      do
      {
        if ( (++v16 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v16);
      }
      while ( (Timer->Header.LockNV & 0x80u) != 0 || _interlockedbittestandset(&Timer->Header.Lock, 7u) );
    }
    if ( (Timer->Header.Reserved1 & 0xC0) == 0 )
      break;
    Size = Timer->Header.Size;
    v18 = KiProcessorBlock[Timer->Processor] + 13824;
    v19 = (volatile signed __int32 *)(v18 + 32 * (Size + 16));
    v20 = 0;
    while ( _interlockedbittestandset64(v19, 0LL) )
    {
      do
      {
        if ( (++v20 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v20);
      }
      while ( *(_QWORD *)v19 );
    }
    if ( (Timer->Header.Reserved1 & 0x80u) == 0 )
    {
      Flink = Timer->TimerListEntry.Flink;
      Blink = Timer->TimerListEntry.Blink;
      v26 = Size;
      if ( Flink->Blink != &Timer->TimerListEntry || Blink->Flink != &Timer->TimerListEntry )
        __fastfail(3u);
      Blink->Flink = Flink;
      Flink->Blink = Blink;
      if ( Blink == Flink )
      {
        *(_DWORD *)(32 * (Size + 16) + v18 + 28) = -1;
        v27 = qword_1403D2238[2 * *(unsigned __int8 *)(v18 - 12208)];
        if ( KiSerializeTimerExpiration )
        {
          v28 = Size & 0x3F;
          v29 = (volatile signed __int32 *)(v27 + 8 * (v26 >> 6));
        }
        else
        {
          v28 = *(unsigned __int8 *)(v18 - 12207);
          v29 = (volatile signed __int32 *)((v26 << 6) + v27);
        }
        _interlockedbittestandreset64(v29, v28);
      }
      _InterlockedAnd64((volatile signed __int64 *)v19, 0LL);
      _InterlockedAnd(&Timer->Header.Lock, 0xBFFFFFFF);
      goto LABEL_43;
    }
    _InterlockedAnd64((volatile signed __int64 *)v19, 0LL);
    if ( _InterlockedExchange64((volatile __int64 *)(v18 + 8LL * (Timer->Header.Reserved1 & 0x3F)), 0LL) )
    {
      _InterlockedAnd(&Timer->Header.Lock, 0xFFFFFFu);
LABEL_43:
      v15 = 1;
      break;
    }
    _InterlockedAnd(&Timer->Header.Lock, 0xFFFFFF7F);
    v21 = 0;
    while ( (Timer->Header.Reserved1 & 0x80u) != 0 )
    {
      if ( (++v21 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v21);
    }
  }
  if ( (DWORD2(PerfGlobalGroupMask) & 0x20000) != 0 && v15 )
  {
    v39 = Timer;
    v41[0] = &v39;
    v41[1] = 8LL;
    EtwTraceKernelEvent((int)v41, 1, 0x40020000u, 0xF55u, 1538);
  }
  Timer->Dpc = v37;
  Timer->Period = v34;
  LockNV = Timer->Header.LockNV;
  BYTE1(LockNV) = v5;
  if ( v7.HighPart >= 0 )
  {
    v5 |= 1u;
    BYTE1(LockNV) = v5;
    v7.QuadPart = MEMORY[0xFFFFF78000000014] - v7.QuadPart;
    if ( v7.HighPart >= 0 )
    {
      v22 = (signed __int64)CurrentPrcb;
      Timer->Header.LockNV = LockNV;
      Timer->DueTime.QuadPart = 0LL;
LABEL_50:
      KiTimerWaitTest(v22, Timer, 0LL);
      goto LABEL_51;
    }
  }
  v30 = 0LL;
  if ( (v5 & 0xFC) != 0 )
    v30 = (unsigned __int8)(v5 & 0xFC) << 16;
  HIBYTE(LockNV) |= 0x40u;
  v31 = v40;
  v22 = (signed __int64)CurrentPrcb;
  v32 = (int)v40;
  v33 = MEMORY[0xFFFFF78000000008] - v7.QuadPart;
  Timer->DueTime.QuadPart = MEMORY[0xFFFFF78000000008] - v7.QuadPart;
  BYTE2(LockNV) = (unsigned __int64)(v30 + v33) >> 18;
  Timer->Header.LockNV = LockNV;
  Timer->Header.SignalState = 0;
  if ( !(unsigned __int8)KiInsertTimerTable((_DWORD)CurrentPrcb, (_DWORD)Timer, v32, BYTE2(LockNV), 0LL) )
    goto LABEL_50;
  if ( (DWORD2(PerfGlobalGroupMask) & 0x20000) != 0 )
    KiTraceSetTimer(Timer, v31, 0LL);
  else
    _InterlockedAnd(&Timer->Header.Lock, 0xFFFFFF7F);
LABEL_51:
  KiExitDispatcher(v22, 0, 1u, 0, CurrentIrql);
  return v15;
}

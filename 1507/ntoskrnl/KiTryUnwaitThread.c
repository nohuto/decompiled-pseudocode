/*
 * XREFs of KiTryUnwaitThread @ 0x14004DFB0
 * Callers:
 *     KiRundownMutants @ 0x14000DF1C (KiRundownMutants.c)
 *     KiResumeThread @ 0x14000E65C (KiResumeThread.c)
 *     KeTerminateThread @ 0x14000F218 (KeTerminateThread.c)
 *     KePulseEvent @ 0x1400118D0 (KePulseEvent.c)
 *     KeReleaseMutant @ 0x140022C40 (KeReleaseMutant.c)
 *     ExTryQueueWorkItem @ 0x1400292FC (ExTryQueueWorkItem.c)
 *     AlpcpSignal @ 0x1400444B0 (AlpcpSignal.c)
 *     KeReleaseSemaphoreEx @ 0x140044830 (KeReleaseSemaphoreEx.c)
 *     KeReleaseSemaphore @ 0x140048A40 (KeReleaseSemaphore.c)
 *     IopfCompleteRequest @ 0x140048F80 (IopfCompleteRequest.c)
 *     IopCompleteRequest @ 0x14004A190 (IopCompleteRequest.c)
 *     KeReleaseMutex @ 0x14004BE50 (KeReleaseMutex.c)
 *     KeSetEvent @ 0x14004C230 (KeSetEvent.c)
 *     KiTimerWaitTest @ 0x1400A40F0 (KiTimerWaitTest.c)
 *     CcMapAndCopyInToCache @ 0x1400B2720 (CcMapAndCopyInToCache.c)
 *     ExpReleaseResourceForThreadLite @ 0x1400C92E0 (ExpReleaseResourceForThreadLite.c)
 *     PpmCheckRun @ 0x1400E7D30 (PpmCheckRun.c)
 *     KeSetProcess @ 0x1400EFB40 (KeSetProcess.c)
 *     KeSetEventBoostPriorityEx @ 0x1400F3D78 (KeSetEventBoostPriorityEx.c)
 *     KiExpireTimer2 @ 0x1400F5400 (KiExpireTimer2.c)
 *     MiInsertInSystemSpace @ 0x1400F8C80 (MiInsertInSystemSpace.c)
 *     KeWakeWaitChain @ 0x140103A14 (KeWakeWaitChain.c)
 *     KeRundownQueueEx @ 0x140112874 (KeRundownQueueEx.c)
 *     KeTimeOutQueueWaiters @ 0x140120854 (KeTimeOutQueueWaiters.c)
 *     KeSignalGate @ 0x140127FF0 (KeSignalGate.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 */

__int64 __fastcall KiTryUnwaitThread(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  __int64 v4; // rdi
  unsigned __int8 v5; // si
  unsigned int v6; // ebx
  char v11; // al
  int v12; // ecx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rsi
  unsigned int v16; // ebx
  __int64 v17; // rdx
  _QWORD *v18; // rcx
  int *v19; // rcx
  char v20; // dl
  bool v21; // zf
  _QWORD *v22; // rcx
  _QWORD *v23; // rdx
  __int64 result; // rax
  int v25; // [rsp+20h] [rbp-38h]

  v4 = *(_QWORD *)(a2 + 24);
  v5 = 0;
  v6 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v4 + 64), 0LL) )
  {
    do
    {
      if ( (++v6 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v6);
    }
    while ( *(_QWORD *)(v4 + 64) );
  }
  if ( *(_BYTE *)(v4 + 388) != 5 )
    goto LABEL_49;
  v11 = *(_BYTE *)(v4 + 112);
  v5 = 0;
  v12 = v11 & 7;
  if ( v12 == 1 || v12 == 4 )
  {
    v13 = *(_QWORD *)(v4 + 232);
    if ( v13 )
    {
      if ( (*(_BYTE *)v13 & 0x7F) == 0x15 )
      {
        v14 = (unsigned __int8)*(_DWORD *)(v4 + 540);
        *(_DWORD *)(v4 + 540) = v14;
        _InterlockedIncrement((volatile signed __int32 *)(v13 + 4 * v14 + 536));
      }
      else
      {
        _InterlockedIncrement((volatile signed __int32 *)(v13 + 40));
      }
    }
    v15 = *(_QWORD *)(v4 + 712);
    if ( v15 )
    {
      v16 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v15 + 22672), 0LL) )
      {
        do
        {
          if ( (++v16 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
            _mm_pause();
          else
            HvlNotifyLongSpinWait(v16);
        }
        while ( *(_QWORD *)(v15 + 22672) );
      }
      if ( *(_QWORD *)(v4 + 712) )
      {
        v17 = *(_QWORD *)(v4 + 216);
        v18 = *(_QWORD **)(v4 + 224);
        if ( *(_QWORD *)(v17 + 8) != v4 + 216 || *v18 != v4 + 216 )
          __fastfail(3u);
        *v18 = v17;
        *(_QWORD *)(v17 + 8) = v18;
        *(_QWORD *)(v4 + 712) = 0LL;
      }
      _InterlockedAnd64((volatile signed __int64 *)(v15 + 22672), 0LL);
    }
    *(_BYTE *)(v4 + 388) = 7;
    v5 = 1;
    *(_QWORD *)(v4 + 216) = *(_QWORD *)(a1 + 11400);
    *(_QWORD *)(a1 + 11400) = v4 + 216;
    *(_QWORD *)(v4 + 200) = a3;
LABEL_37:
    if ( !v5 )
      goto LABEL_49;
    goto LABEL_38;
  }
  if ( (*(_BYTE *)(v4 + 112) & 7) != 0 )
  {
    if ( v12 == 5 )
    {
      *(_BYTE *)(v4 + 112) = v11 & 0xF8 | 6;
      goto LABEL_49;
    }
    if ( v12 == 3 )
      *(_BYTE *)(a2 + 17) = 2;
    goto LABEL_37;
  }
  v5 = 1;
  *(_BYTE *)(v4 + 112) = v11 & 0xF8 | 2;
  *(_QWORD *)(v4 + 200) = a3;
  *(_BYTE *)(a2 + 17) = 0;
LABEL_38:
  if ( a4 )
  {
    *a4 = v4;
    v19 = *(int **)(a2 + 32);
    if ( (*(_BYTE *)v19 & 0x7F) == 2 )
    {
      *(_WORD *)(v4 + 484) -= *((unsigned __int8 *)v19 + 49);
      if ( *(_QWORD *)(a1 + 8) == v4 )
        v20 = *(_BYTE *)(a1 + 11754);
      else
        v20 = 0;
      v25 = *v19;
      BYTE2(v25) = v20;
      *v19 = v25;
      v21 = *((_BYTE *)v19 + 48) == 0;
      *((_QWORD *)v19 + 5) = v4;
      if ( !v21 )
      {
        *((_BYTE *)v19 + 48) = 0;
        *(_QWORD *)(v4 + 200) |= 0x80uLL;
      }
      v22 = v19 + 6;
      v23 = *(_QWORD **)(v4 + 784);
      *v22 = v4 + 776;
      v22[1] = v23;
      if ( *v23 != v4 + 776 )
        __fastfail(3u);
      *v23 = v22;
      *(_QWORD *)(v4 + 784) = v22;
    }
  }
LABEL_49:
  result = v5;
  *(_QWORD *)(v4 + 64) = 0LL;
  ++*(_BYTE *)(a2 + 17);
  return result;
}

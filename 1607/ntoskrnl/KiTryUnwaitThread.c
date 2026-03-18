/*
 * XREFs of KiTryUnwaitThread @ 0x140057DA0
 * Callers:
 *     KeSetEventBoostPriorityEx @ 0x14000CAE8 (KeSetEventBoostPriorityEx.c)
 *     KeReleaseSemaphore @ 0x1400529B0 (KeReleaseSemaphore.c)
 *     IopfCompleteRequest @ 0x140053570 (IopfCompleteRequest.c)
 *     IopCompleteRequest @ 0x140054840 (IopCompleteRequest.c)
 *     KeReleaseMutex @ 0x140055FE0 (KeReleaseMutex.c)
 *     KeSetEvent @ 0x1400562D0 (KeSetEvent.c)
 *     KiTimerWaitTest @ 0x140058C90 (KiTimerWaitTest.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x14005E910 (NtWaitForWorkViaWorkerFactory.c)
 *     ExpReleaseResourceForThreadLite @ 0x140068950 (ExpReleaseResourceForThreadLite.c)
 *     KeSetProcess @ 0x140074F14 (KeSetProcess.c)
 *     KeWakeWaitChain @ 0x1400A5CEC (KeWakeWaitChain.c)
 *     KeTimeOutQueueWaiters @ 0x1400A8210 (KeTimeOutQueueWaiters.c)
 *     KeSignalGate @ 0x1400A889C (KeSignalGate.c)
 *     KePulseEvent @ 0x1400BEF10 (KePulseEvent.c)
 *     KiResumeThread @ 0x1400CB420 (KiResumeThread.c)
 *     KeReleaseSemaphoreEx @ 0x1400CF090 (KeReleaseSemaphoreEx.c)
 *     KiExpireTimer2 @ 0x1400EC080 (KiExpireTimer2.c)
 *     KiRundownMutants @ 0x1400F2320 (KiRundownMutants.c)
 *     KeTerminateThread @ 0x1400F2454 (KeTerminateThread.c)
 *     KeRundownQueueEx @ 0x1400F6B68 (KeRundownQueueEx.c)
 *     KeReleaseMutant @ 0x1400F6E00 (KeReleaseMutant.c)
 *     KiWakeOtherQueueWaiters @ 0x1400F9DBC (KiWakeOtherQueueWaiters.c)
 *     MiInsertInSystemSpace @ 0x1400FF2A0 (MiInsertInSystemSpace.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14002ECB0 (KeYieldProcessorEx.c)
 *     KiWaitSatisfyMutant @ 0x140098170 (KiWaitSatisfyMutant.c)
 */

__int64 __fastcall KiTryUnwaitThread(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  __int64 v4; // rbx
  unsigned __int8 v5; // di
  char v10; // cl
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rdi
  __int64 v14; // rdx
  _QWORD *v15; // rcx
  __int64 result; // rax
  __int64 v17; // rcx
  _BYTE *v18; // rcx
  _DWORD v19[14]; // [rsp+20h] [rbp-38h] BYREF
  int v20; // [rsp+68h] [rbp+10h] BYREF

  v4 = *(_QWORD *)(a2 + 24);
  v5 = 0;
  v20 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v4 + 64), 0LL) )
  {
    do
      KeYieldProcessorEx(&v20);
    while ( *(_QWORD *)(v4 + 64) );
  }
  if ( *(_BYTE *)(v4 + 388) != 5 )
    goto LABEL_17;
  v10 = *(_BYTE *)(v4 + 112);
  v5 = 0;
  v11 = v10 & 7;
  if ( v11 == 1 || v11 == 4 )
  {
    v12 = *(_QWORD *)(v4 + 232);
    if ( v12 )
    {
      if ( (*(_BYTE *)v12 & 0x7F) == 0x15 )
      {
        v17 = (unsigned __int8)*(_DWORD *)(v4 + 540);
        *(_DWORD *)(v4 + 540) = v17;
        _InterlockedIncrement((volatile signed __int32 *)(v12 + 4 * v17 + 536));
      }
      else
      {
        _InterlockedIncrement((volatile signed __int32 *)(v12 + 40));
      }
    }
    v13 = *(_QWORD *)(v4 + 712);
    if ( v13 )
    {
      v19[0] = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v13 + 22672), 0LL) )
      {
        do
          KeYieldProcessorEx(v19);
        while ( *(_QWORD *)(v13 + 22672) );
      }
      if ( *(_QWORD *)(v4 + 712) )
      {
        v14 = *(_QWORD *)(v4 + 216);
        v15 = *(_QWORD **)(v4 + 224);
        if ( *(_QWORD *)(v14 + 8) != v4 + 216 || *v15 != v4 + 216 )
          __fastfail(3u);
        *v15 = v14;
        *(_QWORD *)(v14 + 8) = v15;
        *(_QWORD *)(v4 + 712) = 0LL;
      }
      _InterlockedAnd64((volatile signed __int64 *)(v13 + 22672), 0LL);
    }
    *(_BYTE *)(v4 + 388) = 7;
    v5 = 1;
    *(_QWORD *)(v4 + 216) = *(_QWORD *)(a1 + 11400);
    *(_QWORD *)(a1 + 11400) = v4 + 216;
    *(_QWORD *)(v4 + 200) = a3;
    goto LABEL_15;
  }
  if ( (*(_BYTE *)(v4 + 112) & 7) != 0 )
  {
    if ( v11 == 5 )
    {
      *(_BYTE *)(v4 + 112) = v10 & 0xF8 | 6;
      goto LABEL_17;
    }
    if ( v11 == 3 )
      *(_BYTE *)(a2 + 17) = 2;
LABEL_15:
    if ( !v5 )
      goto LABEL_17;
    goto LABEL_16;
  }
  v5 = 1;
  *(_BYTE *)(v4 + 112) = v10 & 0xF8 | 2;
  *(_QWORD *)(v4 + 200) = a3;
  *(_BYTE *)(a2 + 17) = 0;
LABEL_16:
  if ( a4 )
  {
    *a4 = v4;
    v18 = *(_BYTE **)(a2 + 32);
    if ( (*v18 & 0x7F) == 2 )
      KiWaitSatisfyMutant(v18, v4, a1);
  }
LABEL_17:
  result = v5;
  *(_QWORD *)(v4 + 64) = 0LL;
  ++*(_BYTE *)(a2 + 17);
  return result;
}

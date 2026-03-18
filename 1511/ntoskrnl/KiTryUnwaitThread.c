/*
 * XREFs of KiTryUnwaitThread @ 0x140088FA0
 * Callers:
 *     MiInsertInSystemSpace @ 0x14000A670 (MiInsertInSystemSpace.c)
 *     KePulseEvent @ 0x140014A90 (KePulseEvent.c)
 *     KeSetProcess @ 0x14001BFCC (KeSetProcess.c)
 *     KiResumeThread @ 0x140028CF8 (KiResumeThread.c)
 *     KeTerminateThread @ 0x14002B7EC (KeTerminateThread.c)
 *     KiRundownMutants @ 0x14002BB9C (KiRundownMutants.c)
 *     KiExpireTimer2 @ 0x140033E90 (KiExpireTimer2.c)
 *     ExpReleaseResourceForThreadLite @ 0x14003FF80 (ExpReleaseResourceForThreadLite.c)
 *     KiTimerWaitTest @ 0x140045200 (KiTimerWaitTest.c)
 *     PpmCheckRun @ 0x140074B90 (PpmCheckRun.c)
 *     KeReleaseSemaphoreEx @ 0x14007A6F0 (KeReleaseSemaphoreEx.c)
 *     KeSetEventBoostPriorityEx @ 0x14007CAE0 (KeSetEventBoostPriorityEx.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x14007F570 (NtWaitForWorkViaWorkerFactory.c)
 *     KeReleaseSemaphore @ 0x140084230 (KeReleaseSemaphore.c)
 *     IopfCompleteRequest @ 0x140084CF0 (IopfCompleteRequest.c)
 *     IopCompleteRequest @ 0x140086090 (IopCompleteRequest.c)
 *     KeReleaseMutant @ 0x140087250 (KeReleaseMutant.c)
 *     KeSetEvent @ 0x1400875D0 (KeSetEvent.c)
 *     KeTimeOutQueueWaiters @ 0x1400C6848 (KeTimeOutQueueWaiters.c)
 *     KeWakeWaitChain @ 0x1400CFA54 (KeWakeWaitChain.c)
 *     KeRundownQueueEx @ 0x1400DF520 (KeRundownQueueEx.c)
 *     KeSignalGate @ 0x1400E9410 (KeSignalGate.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14007CAC0 (KeYieldProcessorEx.c)
 *     KiWaitSatisfyMutant @ 0x1400DF104 (KiWaitSatisfyMutant.c)
 */

__int64 __fastcall KiTryUnwaitThread(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  __int64 v4; // rbx
  unsigned __int8 v5; // di
  char v10; // al
  int v11; // ecx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdi
  __int64 v15; // rdx
  _QWORD *v16; // rcx
  _BYTE *v17; // rcx
  __int64 result; // rax
  _DWORD v19[14]; // [rsp+20h] [rbp-38h] BYREF
  int v20; // [rsp+68h] [rbp+10h] BYREF

  v4 = *(_QWORD *)(a2 + 24);
  v5 = 0;
  v20 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v4 + 64), 0LL) )
  {
    do
      KeYieldProcessorEx(&v20, a2, a3);
    while ( *(_QWORD *)(v4 + 64) );
  }
  if ( *(_BYTE *)(v4 + 388) != 5 )
    goto LABEL_33;
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
        v13 = (unsigned __int8)*(_DWORD *)(v4 + 540);
        *(_DWORD *)(v4 + 540) = v13;
        _InterlockedIncrement((volatile signed __int32 *)(v12 + 4 * v13 + 536));
      }
      else
      {
        _InterlockedIncrement((volatile signed __int32 *)(v12 + 40));
      }
    }
    v14 = *(_QWORD *)(v4 + 712);
    if ( v14 )
    {
      v19[0] = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v14 + 22672), 0LL) )
      {
        do
          KeYieldProcessorEx(v19, v12, a3);
        while ( *(_QWORD *)(v14 + 22672) );
      }
      if ( *(_QWORD *)(v4 + 712) )
      {
        v15 = *(_QWORD *)(v4 + 216);
        v16 = *(_QWORD **)(v4 + 224);
        if ( *(_QWORD *)(v15 + 8) != v4 + 216 || *v16 != v4 + 216 )
          __fastfail(3u);
        *v16 = v15;
        *(_QWORD *)(v15 + 8) = v16;
        *(_QWORD *)(v4 + 712) = 0LL;
      }
      _InterlockedAnd64((volatile signed __int64 *)(v14 + 22672), 0LL);
    }
    *(_BYTE *)(v4 + 388) = 7;
    v5 = 1;
    *(_QWORD *)(v4 + 216) = *(_QWORD *)(a1 + 11400);
    *(_QWORD *)(a1 + 11400) = v4 + 216;
    *(_QWORD *)(v4 + 200) = a3;
LABEL_29:
    if ( !v5 )
      goto LABEL_33;
    goto LABEL_30;
  }
  if ( (*(_BYTE *)(v4 + 112) & 7) != 0 )
  {
    if ( v11 == 5 )
    {
      *(_BYTE *)(v4 + 112) = v10 & 0xF8 | 6;
      goto LABEL_33;
    }
    if ( v11 == 3 )
      *(_BYTE *)(a2 + 17) = 2;
    goto LABEL_29;
  }
  v5 = 1;
  *(_BYTE *)(v4 + 112) = v10 & 0xF8 | 2;
  *(_QWORD *)(v4 + 200) = a3;
  *(_BYTE *)(a2 + 17) = 0;
LABEL_30:
  if ( a4 )
  {
    *a4 = v4;
    v17 = *(_BYTE **)(a2 + 32);
    if ( (*v17 & 0x7F) == 2 )
      KiWaitSatisfyMutant(v17, v4, a1, a4);
  }
LABEL_33:
  result = v5;
  *(_QWORD *)(v4 + 64) = 0LL;
  ++*(_BYTE *)(a2 + 17);
  return result;
}

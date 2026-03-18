/*
 * XREFs of PfpScenCtxPrefetchWait @ 0x1403EED74
 * Callers:
 *     PfPowerActionNotify @ 0x1403EE01C (PfPowerActionNotify.c)
 *     PfpProcessScenarioPhase @ 0x140582300 (PfpProcessScenarioPhase.c)
 * Callees:
 *     KeResetEvent @ 0x1400484D0 (KeResetEvent.c)
 *     KeSetEvent @ 0x14004C230 (KeSetEvent.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeWaitForSingleObject @ 0x14004F100 (KeWaitForSingleObject.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 */

__int64 __fastcall PfpScenCtxPrefetchWait(ULONG_PTR BugCheckParameter2, int a2, unsigned int a3, __int64 a4)
{
  int v4; // r15d
  int v6; // r12d
  unsigned int v7; // r14d
  int v8; // ebp
  struct _KTHREAD *CurrentThread; // rax
  __int64 v10; // rax
  __int64 v11; // r9
  __int64 v12; // rdi
  int v13; // eax
  struct _KTHREAD *v14; // rdx
  __int16 v15; // ax
  unsigned int v17; // eax
  int v18; // r15d
  unsigned int v19; // edi
  struct _KTHREAD *v20; // rcx
  __int16 v21; // ax
  int v22; // edi
  unsigned int v23; // eax
  struct _KEVENT *v24; // rcx
  LARGE_INTEGER Timeout; // [rsp+70h] [rbp+8h] BYREF
  int v26; // [rsp+78h] [rbp+10h]
  unsigned int v27; // [rsp+80h] [rbp+18h]

  v27 = a3;
  v26 = a2;
  v4 = a2;
  v6 = 0;
  v7 = 0;
  v8 = dword_140350418 < (unsigned int)dword_14035041C ? 0x7D0 : 0;
  while ( 1 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v10 = KeAbPreAcquire(BugCheckParameter2, 0LL, 0LL, a4);
    v12 = v10;
    if ( _interlockedbittestandset64((volatile signed __int32 *)BugCheckParameter2, 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)BugCheckParameter2, v10, BugCheckParameter2, v11);
    if ( v12 )
      *(_BYTE *)(v12 + 26) |= 1u;
    if ( *(_DWORD *)(BugCheckParameter2 + 48) != v4 || (*(_DWORD *)(BugCheckParameter2 + 8) & 0xC) == 8 )
      goto LABEL_12;
    if ( v6 )
    {
      v24 = *(struct _KEVENT **)(BugCheckParameter2 + 40);
      *(_DWORD *)(BugCheckParameter2 + 8) = *(_DWORD *)(BugCheckParameter2 + 8) & 0xFFFFFFF3 | 8;
      if ( !v24 )
        goto LABEL_12;
      goto LABEL_35;
    }
    KeResetEvent((PRKEVENT)(BugCheckParameter2 + 16));
    v13 = *(_DWORD *)(BugCheckParameter2 + 8);
    if ( (v13 & 3) == 1 )
    {
      v17 = v13 & 0xFFFFFFF3 | 4;
      v18 = 2;
      v19 = v27 - v7;
      goto LABEL_20;
    }
    if ( (v13 & 3) != 0 || !v8 )
      break;
    v19 = v8;
    v17 = v13 & 0xFFFFFFF3 | 4;
    v18 = 1;
    v8 = 0;
LABEL_20:
    *(_DWORD *)(BugCheckParameter2 + 8) = v17;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)BugCheckParameter2);
    KeAbPostRelease(BugCheckParameter2);
    v20 = KeGetCurrentThread();
    v21 = v20->KernelApcDisable + 1;
    v20->KernelApcDisable = v21;
    if ( !v21
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v20->ApcState.ApcListHead[0].Flink != &v20->152
      && !v20->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
    Timeout.QuadPart = -10000LL * v19;
    v22 = ((MEMORY[0xFFFFF78000000004] * MEMORY[0xFFFFF78000000324]) << 8)
        + ((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
    v23 = KeWaitForSingleObject((PVOID)(BugCheckParameter2 + 16), Executive, 0, 0, &Timeout);
    a4 = v23;
    v7 += ((MEMORY[0xFFFFF78000000004] * MEMORY[0xFFFFF78000000324]) << 8)
        + ((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24)
        - v22;
    if ( v23 == 258 || v7 >= v27 )
    {
      v6 = 1;
    }
    else if ( v18 == 2 )
    {
      return v7;
    }
    v4 = v26;
  }
  if ( (v13 & 3) == 0 )
  {
    v24 = *(struct _KEVENT **)(BugCheckParameter2 + 40);
    *(_DWORD *)(BugCheckParameter2 + 8) = v13 & 0xFFFFFFF3 | 8;
    if ( v24 )
LABEL_35:
      KeSetEvent(v24, 0, 0);
  }
LABEL_12:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)BugCheckParameter2);
  KeAbPostRelease(BugCheckParameter2);
  v14 = KeGetCurrentThread();
  v15 = v14->KernelApcDisable + 1;
  v14->KernelApcDisable = v15;
  if ( !v15
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v14->ApcState.ApcListHead[0].Flink != &v14->152
    && !v14->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  return v7;
}

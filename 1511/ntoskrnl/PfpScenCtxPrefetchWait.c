/*
 * XREFs of PfpScenCtxPrefetchWait @ 0x1403A5454
 * Callers:
 *     PfPowerActionNotify @ 0x1403A46FC (PfPowerActionNotify.c)
 *     PfpProcessScenarioPhase @ 0x14050B304 (PfpProcessScenarioPhase.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     KeWaitForSingleObject @ 0x140081870 (KeWaitForSingleObject.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     KeResetEvent @ 0x14008E310 (KeResetEvent.c)
 *     PfpScenCtxWaiterTimedOut @ 0x140117A70 (PfpScenCtxWaiterTimedOut.c)
 */

__int64 __fastcall PfpScenCtxPrefetchWait(ULONG_PTR BugCheckParameter2, int a2, unsigned int a3)
{
  int v3; // r12d
  unsigned int v4; // r14d
  int v6; // r15d
  int v8; // ebp
  struct _KTHREAD *CurrentThread; // rax
  __int64 v10; // rax
  __int64 v11; // rdi
  int v12; // eax
  int v13; // r15d
  unsigned int v14; // eax
  unsigned int v15; // edi
  int v16; // edi
  NTSTATUS v17; // eax
  LARGE_INTEGER Timeout; // [rsp+70h] [rbp+8h] BYREF
  int v20; // [rsp+78h] [rbp+10h]

  v20 = a2;
  v3 = 0;
  v4 = 0;
  v6 = a2;
  v8 = dword_140302698 < (unsigned int)dword_14030269C ? 0x7D0 : 0;
  while ( 1 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v10 = KeAbPreAcquire(BugCheckParameter2, 0LL, 0LL);
    v11 = v10;
    if ( _interlockedbittestandset64((volatile signed __int32 *)BugCheckParameter2, 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)BugCheckParameter2, v10, BugCheckParameter2);
    if ( v11 )
      *(_BYTE *)(v11 + 26) |= 1u;
    if ( *(_DWORD *)(BugCheckParameter2 + 48) != v6 || (*(_DWORD *)(BugCheckParameter2 + 8) & 0xC) == 8 )
      break;
    if ( v3 )
      goto LABEL_23;
    KeResetEvent((PRKEVENT)(BugCheckParameter2 + 16));
    v12 = *(_DWORD *)(BugCheckParameter2 + 8);
    if ( (v12 & 3) == 1 )
    {
      v13 = 2;
      v14 = v12 & 0xFFFFFFF3 | 4;
      v15 = a3 - v4;
    }
    else
    {
      if ( (v12 & 3) != 0 || !v8 )
      {
        if ( (v12 & 3) != 0 )
          break;
LABEL_23:
        PfpScenCtxWaiterTimedOut(BugCheckParameter2);
        break;
      }
      v13 = 1;
      v14 = v12 & 0xFFFFFFF3 | 4;
      v15 = v8;
      v8 = 0;
    }
    *(_DWORD *)(BugCheckParameter2 + 8) = v14;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)BugCheckParameter2);
    KeAbPostRelease(BugCheckParameter2);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    Timeout.QuadPart = -10000LL * v15;
    v16 = ((MEMORY[0xFFFFF78000000004] * MEMORY[0xFFFFF78000000324]) << 8)
        + ((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
    v17 = KeWaitForSingleObject((PVOID)(BugCheckParameter2 + 16), Executive, 0, 0, &Timeout);
    v4 += ((MEMORY[0xFFFFF78000000004] * MEMORY[0xFFFFF78000000324]) << 8)
        + ((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24)
        - v16;
    if ( v17 == 258 || v4 >= a3 )
    {
      v3 = 1;
    }
    else if ( v13 == 2 )
    {
      return v4;
    }
    v6 = v20;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)BugCheckParameter2);
  KeAbPostRelease(BugCheckParameter2);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return v4;
}

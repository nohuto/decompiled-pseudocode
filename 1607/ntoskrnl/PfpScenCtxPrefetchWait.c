/*
 * XREFs of PfpScenCtxPrefetchWait @ 0x1403D02EC
 * Callers:
 *     PfPowerActionNotify @ 0x1403CFF90 (PfPowerActionNotify.c)
 *     PfpProcessScenarioPhase @ 0x140545928 (PfpProcessScenarioPhase.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KeResetEvent @ 0x14002E1B0 (KeResetEvent.c)
 *     KeWaitForSingleObject @ 0x14005C400 (KeWaitForSingleObject.c)
 *     KeLeaveCriticalRegion @ 0x140069880 (KeLeaveCriticalRegion.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
 *     PfpScenCtxWaiterTimedOut @ 0x140127128 (PfpScenCtxWaiterTimedOut.c)
 */

__int64 __fastcall PfpScenCtxPrefetchWait(ULONG_PTR BugCheckParameter2, int a2, unsigned int a3)
{
  int v3; // r12d
  unsigned int v4; // r14d
  int v6; // r15d
  int v8; // ebp
  struct _KTHREAD *CurrentThread; // rax
  _BYTE *v10; // rax
  _BYTE *v11; // rdi
  int v12; // eax
  unsigned int v14; // eax
  int v15; // r15d
  unsigned int v16; // edi
  int v17; // edi
  NTSTATUS v18; // eax
  LARGE_INTEGER Timeout; // [rsp+70h] [rbp+8h] BYREF
  int v20; // [rsp+78h] [rbp+10h]

  v20 = a2;
  v3 = 0;
  v4 = 0;
  v6 = a2;
  v8 = dword_140328258 < (unsigned int)dword_14032825C ? 0x7D0 : 0;
  while ( 1 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v10 = (_BYTE *)KeAbPreAcquire(BugCheckParameter2, 0LL, 0);
    v11 = v10;
    if ( _interlockedbittestandset64((volatile signed __int32 *)BugCheckParameter2, 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)BugCheckParameter2, v10, BugCheckParameter2);
    if ( v11 )
      v11[26] |= 1u;
    if ( *(_DWORD *)(BugCheckParameter2 + 48) != v6 || (*(_DWORD *)(BugCheckParameter2 + 8) & 0xC) == 8 )
      break;
    if ( v3 )
      goto LABEL_16;
    KeResetEvent((PRKEVENT)(BugCheckParameter2 + 16));
    v12 = *(_DWORD *)(BugCheckParameter2 + 8);
    if ( (v12 & 3) == 1 )
    {
      v14 = v12 & 0xFFFFFFF3 | 4;
      v15 = 2;
      v16 = a3 - v4;
    }
    else
    {
      if ( (v12 & 3) != 0 || !v8 )
      {
        if ( (v12 & 3) != 0 )
          break;
LABEL_16:
        PfpScenCtxWaiterTimedOut(BugCheckParameter2);
        break;
      }
      v16 = v8;
      v14 = v12 & 0xFFFFFFF3 | 4;
      v15 = 1;
      v8 = 0;
    }
    *(_DWORD *)(BugCheckParameter2 + 8) = v14;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)BugCheckParameter2);
    KeAbPostRelease(BugCheckParameter2);
    KeLeaveCriticalRegion();
    Timeout.QuadPart = -10000LL * v16;
    v17 = ((MEMORY[0xFFFFF78000000004] * MEMORY[0xFFFFF78000000324]) << 8)
        + ((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
    v18 = KeWaitForSingleObject((PVOID)(BugCheckParameter2 + 16), Executive, 0, 0, &Timeout);
    v4 += ((MEMORY[0xFFFFF78000000004] * MEMORY[0xFFFFF78000000324]) << 8)
        + ((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24)
        - v17;
    if ( v18 == 258 || v4 >= a3 )
    {
      v3 = 1;
    }
    else if ( v15 == 2 )
    {
      return v4;
    }
    v6 = v20;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)BugCheckParameter2);
  KeAbPostRelease(BugCheckParameter2);
  KeLeaveCriticalRegion();
  return v4;
}

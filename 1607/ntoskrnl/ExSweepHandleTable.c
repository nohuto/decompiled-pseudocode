/*
 * XREFs of ExSweepHandleTable @ 0x14045E200
 * Callers:
 *     ObKillProcess @ 0x14045C564 (ObKillProcess.c)
 *     PspRundownSingleProcess @ 0x14045CF90 (PspRundownSingleProcess.c)
 *     ObInitProcess @ 0x14045E3D4 (ObInitProcess.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KeLeaveCriticalRegionThread @ 0x140069C20 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
 *     KiStackAttachProcess @ 0x1400CB090 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400CC6C0 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ObCloseHandleTableEntry @ 0x14044D250 (ObCloseHandleTableEntry.c)
 *     ExpLookupHandleTableEntry @ 0x140450260 (ExpLookupHandleTableEntry.c)
 *     ExpBlockOnLockedHandleEntry @ 0x1404AF024 (ExpBlockOnLockedHandleEntry.c)
 */

int __fastcall ExSweepHandleTable(_KPROCESS *a1, __int64 a2, unsigned __int8 a3)
{
  struct _KTHREAD *CurrentThread; // rbp
  char v4; // r13
  int v8; // esi
  ULONG_PTR v9; // rbx
  signed __int64 *v10; // rdi
  signed __int64 v11; // r8
  bool v12; // al
  _BYTE *v13; // rax
  _BYTE *v14; // rdi
  int result; // eax
  _BYTE v16[48]; // [rsp+30h] [rbp-78h] BYREF

  CurrentThread = KeGetCurrentThread();
  v4 = 0;
  if ( CurrentThread->ApcState.Process != a1 )
  {
    KiStackAttachProcess(a1, 0, (__int64)v16);
    v4 = 1;
  }
  v8 = 0;
  v9 = 4LL;
  --CurrentThread->KernelApcDisable;
LABEL_4:
  v10 = (signed __int64 *)ExpLookupHandleTableEntry((unsigned int *)a2, v9);
  if ( v10 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        _m_prefetchw(v10);
        v11 = *v10;
        if ( (*v10 & 1) != 0 )
          break;
        if ( v11 )
        {
          ExpBlockOnLockedHandleEntry(a2, v10, v11);
        }
        else
        {
LABEL_7:
          v9 += 4LL;
          v10 += 2;
          if ( (v9 & 0x3FF) == 0 )
          {
            v9 += 4LL;
            goto LABEL_4;
          }
        }
      }
      if ( v11 == _InterlockedCompareExchange64(v10, v11 - 1, v11) )
      {
        v12 = (int)ObCloseHandleTableEntry(a2, (unsigned int *)v10, a1, v9, a3, 1) >= 0;
        --CurrentThread->KernelApcDisable;
        if ( v12 )
          ++v8;
        goto LABEL_7;
      }
    }
  }
  v13 = (_BYTE *)KeAbPreAcquire(a2 + 64, 0LL, 0);
  v14 = v13;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(a2 + 64), 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a2 + 64), v13, a2 + 64);
  if ( v14 )
    v14[26] |= 1u;
  *(_DWORD *)(a2 + 88) -= v8;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a2 + 64), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a2 + 64));
  KeAbPostRelease(a2 + 64);
  *(_BYTE *)(a2 + 44) |= 4u;
  result = KeLeaveCriticalRegionThread((__int64)CurrentThread);
  if ( v4 == 1 )
    return KiUnstackDetachProcess((struct _KTHREAD *)v16, 0);
  return result;
}

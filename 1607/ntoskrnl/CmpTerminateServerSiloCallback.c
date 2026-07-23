/*
 * XREFs of CmpTerminateServerSiloCallback @ 0x1405FF4A4
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     PsGetPermanentSiloContext @ 0x140091640 (PsGetPermanentSiloContext.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     CmpUnlockRegistry @ 0x14040362C (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x140403660 (CmpLockRegistry.c)
 *     CmpLockKcbExclusive @ 0x140420F10 (CmpLockKcbExclusive.c)
 *     CmpDelayDerefKeyControlBlock @ 0x14043622C (CmpDelayDerefKeyControlBlock.c)
 *     CmpUnlockKcb @ 0x1404374E0 (CmpUnlockKcb.c)
 */

void __fastcall CmpTerminateServerSiloCallback(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v2; // rdi
  _BYTE *v3; // rax
  _BYTE *v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  void **v8; // rsi
  void *v9; // rdi
  void **v10; // rax
  __int64 v11; // rbx
  unsigned __int64 v13; // [rsp+38h] [rbp+10h] BYREF

  PsGetPermanentSiloContext(a1, *((_DWORD *)CmpSiloMonitor + 5), &v13);
  if ( v13 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v2 = (unsigned __int64 *)(v13 + 24);
    v3 = (_BYTE *)KeAbPreAcquire(v13 + 24, 0LL, 0);
    v4 = v3;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v2, 0LL) )
      ExfAcquirePushLockExclusiveEx(v2, v3, (ULONG_PTR)v2);
    if ( v4 )
      v4[26] |= 1u;
    *(_BYTE *)(v13 + 16) = 1;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v2);
    KeAbPostRelease((ULONG_PTR)v2);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v5, v6, v7);
    v8 = (void **)v13;
    while ( 1 )
    {
      v9 = *v8;
      if ( *v8 == v8 )
        break;
      v10 = *(void ***)v9;
      if ( *((void ***)v9 + 1) != v8 || v10[1] != v9 )
        __fastfail(3u);
      *v8 = v10;
      v10[1] = v8;
      if ( *((_DWORD *)v9 + 4) )
      {
        do
        {
          v11 = *((_QWORD *)v9 + 3);
          CmpLockRegistry();
          CmpLockKcbExclusive(v11);
          *(_WORD *)(v11 + 4) &= 0xFF5Fu;
          CmpUnlockKcb((char *)v11);
          CmpDelayDerefKeyControlBlock(v11);
          CmpUnlockRegistry();
        }
        while ( (*((_DWORD *)v9 + 4))-- != 1 );
      }
      ExFreePoolWithTag(v9, 0x33364D43u);
    }
  }
}

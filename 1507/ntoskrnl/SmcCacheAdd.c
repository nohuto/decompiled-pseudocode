/*
 * XREFs of SmcCacheAdd @ 0x1406DAD34
 * Callers:
 *     SmcProcessCreateRequest @ 0x1406DA5E4 (SmcProcessCreateRequest.c)
 * Callees:
 *     KeSetEvent @ 0x14004C230 (KeSetEvent.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExfAcquireRundownProtection @ 0x1400D4A40 (ExfAcquireRundownProtection.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 */

__int64 __fastcall SmcCacheAdd(__int64 a1, int *a2, int *a3, __int64 a4)
{
  unsigned int v4; // ebx
  unsigned int v6; // r14d
  __int64 v9; // rdi
  struct _KTHREAD *CurrentThread; // rax
  __int64 v11; // rax
  __int64 v12; // r9
  __int64 v13; // rbp
  int v14; // ecx
  int v15; // ecx
  unsigned __int64 v16; // rtt
  struct _KTHREAD *v17; // rcx
  __int16 v18; // ax

  v4 = 0;
  v6 = 0;
  while ( 1 )
  {
    v9 = a1 + 32LL * v6;
    if ( !*(_QWORD *)v9 )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      v11 = KeAbPreAcquire(v9 + 16, 0LL, 0LL, a4);
      v13 = v11;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v9 + 16), 0LL) )
        ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v9 + 16), v11, v9 + 16, v12);
      if ( v13 )
        *(_BYTE *)(v13 + 26) |= 1u;
      if ( !*(_QWORD *)v9 )
      {
        *(_QWORD *)v9 = a2;
        do
        {
          v14 = *(_DWORD *)(v9 + 24) ^ (*(_DWORD *)(v9 + 24) ^ (*(_DWORD *)(v9 + 24) + 1)) & 0xFFF;
          *(_DWORD *)(v9 + 24) = v14;
          v15 = v6 | (16 * (v14 & 0xFFF));
          *a2 = v15;
        }
        while ( v15 == -1 );
        *a3 = v15;
        a2 = 0LL;
        _InterlockedExchange64((volatile __int64 *)(v9 + 8), 0LL);
        _m_prefetchw((const void *)(v9 + 8));
        v16 = *(_QWORD *)(v9 + 8) & 0xFFFFFFFFFFFFFFFEuLL;
        if ( v16 != _InterlockedCompareExchange64((volatile signed __int64 *)(v9 + 8), v16 + 2, v16) )
          ExfAcquireRundownProtection((PEX_RUNDOWN_REF)(v9 + 8));
      }
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v9 + 16), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(v9 + 16));
      KeAbPostRelease(v9 + 16);
      v17 = KeGetCurrentThread();
      v18 = v17->KernelApcDisable + 1;
      v17->KernelApcDisable = v18;
      if ( !v18
        && ($CD287064E7C9F7953DE243E927CFCB99 *)v17->ApcState.ApcListHead[0].Flink != &v17->152
        && !v17->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery();
      }
      if ( !a2 )
        break;
    }
    if ( ++v6 >= 0x10 )
      return (unsigned int)-1073741671;
  }
  KeSetEvent(*(PRKEVENT *)(a1 + 552), 0, 0);
  return v4;
}

/*
 * XREFs of SmcCacheAdd @ 0x140658908
 * Callers:
 *     SmcProcessCreateRequest @ 0x1406581B8 (SmcProcessCreateRequest.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x140042660 (KeLeaveCriticalRegion.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     ExAcquireRundownProtection @ 0x140079FF0 (ExAcquireRundownProtection.c)
 *     KeSetEvent @ 0x1400875D0 (KeSetEvent.c)
 */

__int64 __fastcall SmcCacheAdd(__int64 a1, int *a2, int *a3)
{
  unsigned int v3; // ebx
  unsigned int v5; // ebp
  __int64 v8; // rdi
  struct _KTHREAD *CurrentThread; // rax
  __int64 v10; // rax
  __int64 v11; // r14
  int v12; // ecx
  int v13; // ecx

  v3 = 0;
  v5 = 0;
  while ( 1 )
  {
    v8 = a1 + 32LL * v5;
    if ( !*(_QWORD *)v8 )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      v10 = KeAbPreAcquire(v8 + 16, 0LL, 0LL);
      v11 = v10;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v8 + 16), 0LL) )
        ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v8 + 16), v10, v8 + 16);
      if ( v11 )
        *(_BYTE *)(v11 + 26) |= 1u;
      if ( !*(_QWORD *)v8 )
      {
        *(_QWORD *)v8 = a2;
        do
        {
          v12 = *(_DWORD *)(v8 + 24) ^ (*(_DWORD *)(v8 + 24) ^ (*(_DWORD *)(v8 + 24) + 1)) & 0xFFF;
          *(_DWORD *)(v8 + 24) = v12;
          v13 = v5 | (16 * (v12 & 0xFFF));
          *a2 = v13;
        }
        while ( v13 == -1 );
        *a3 = v13;
        a2 = 0LL;
        _InterlockedExchange64((volatile __int64 *)(v8 + 8), 0LL);
        ExAcquireRundownProtection((PEX_RUNDOWN_REF)(v8 + 8));
      }
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v8 + 16), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(v8 + 16));
      KeAbPostRelease(v8 + 16);
      KeLeaveCriticalRegion();
      if ( !a2 )
        break;
    }
    if ( ++v5 >= 0x10 )
      return (unsigned int)-1073741671;
  }
  KeSetEvent(*(PRKEVENT *)(a1 + 552), 0, 0);
  return v3;
}

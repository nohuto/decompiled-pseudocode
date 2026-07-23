/*
 * XREFs of SmcCacheAdd @ 0x140699DE4
 * Callers:
 *     SmcProcessCreateRequest @ 0x140697548 (SmcProcessCreateRequest.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KeSetEvent @ 0x140055E50 (KeSetEvent.c)
 *     KeLeaveCriticalRegion @ 0x140069880 (KeLeaveCriticalRegion.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
 *     ExAcquireRundownProtection @ 0x1400D1D70 (ExAcquireRundownProtection.c)
 */

__int64 __fastcall SmcCacheAdd(__int64 a1, int *a2, int *a3)
{
  unsigned int v3; // edi
  ULONG_PTR v4; // rbx
  unsigned int i; // esi
  struct _KTHREAD *CurrentThread; // rax
  _BYTE *v10; // rax
  _BYTE *v11; // rbp
  int v12; // ecx
  int v13; // ecx

  v3 = 0;
  v4 = a1 + 16;
  for ( i = 0; i < 0x10; ++i )
  {
    if ( !*(_QWORD *)(v4 - 16) )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      v10 = (_BYTE *)KeAbPreAcquire(v4, 0LL, 0);
      v11 = v10;
      if ( _interlockedbittestandset64((volatile signed __int32 *)v4, 0LL) )
        ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v4, v10, v4);
      if ( v11 )
        v11[26] |= 1u;
      if ( !*(_QWORD *)(v4 - 16) )
      {
        *(_QWORD *)(v4 - 16) = a2;
        do
        {
          v12 = *(_DWORD *)(v4 + 8) ^ (*(_DWORD *)(v4 + 8) ^ (*(_DWORD *)(v4 + 8) + 1)) & 0xFFF;
          *(_DWORD *)(v4 + 8) = v12;
          v13 = i | (16 * (v12 & 0xFFF));
          *a2 = v13;
        }
        while ( v13 == -1 );
        *a3 = v13;
        a2 = 0LL;
        _InterlockedExchange64((volatile __int64 *)(v4 - 8), 0LL);
        ExAcquireRundownProtection((PEX_RUNDOWN_REF)(v4 - 8));
      }
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v4, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)v4);
      KeAbPostRelease(v4);
      KeLeaveCriticalRegion();
      if ( !a2 )
        break;
    }
    v4 += 32LL;
  }
  if ( i < 0x10 )
    KeSetEvent(*(PRKEVENT *)(a1 + 552), 0, 0);
  else
    return (unsigned int)-1073741671;
  return v3;
}

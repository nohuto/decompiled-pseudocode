/*
 * XREFs of ExpSaPageGroupFreeMemory @ 0x1402663F8
 * Callers:
 *     ExpSaAllocatorFree @ 0x140266070 (ExpSaAllocatorFree.c)
 * Callees:
 *     RtlClearBitsEx @ 0x14003ED80 (RtlClearBitsEx.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 */

bool __fastcall ExpSaPageGroupFreeMemory(__int64 a1, unsigned __int64 a2, unsigned int a3, __int64 a4)
{
  unsigned __int64 *v4; // rbx
  unsigned __int64 v5; // rbp
  __int64 v7; // rax
  __int64 v8; // r9
  __int64 v9; // rdi
  bool v10; // di

  v4 = (unsigned __int64 *)(a1 + 24);
  v5 = a3;
  v7 = KeAbPreAcquire(a1 + 24, 0LL, 0LL, a4);
  v9 = v7;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v4, 0LL) )
    ExfAcquirePushLockExclusiveEx(v4, v7, (ULONG_PTR)v4, v8);
  if ( v9 )
    *(_BYTE *)(v9 + 26) |= 1u;
  RtlClearBitsEx(a1 + 48, (a2 >> 4) & 0x1FF, v5);
  *(_DWORD *)(a1 + 36) += v5;
  v10 = *(_DWORD *)(a1 + 36) == 512;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v4, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v4);
  KeAbPostRelease((ULONG_PTR)v4);
  return v10;
}

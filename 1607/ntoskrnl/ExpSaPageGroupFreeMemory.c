/*
 * XREFs of ExpSaPageGroupFreeMemory @ 0x140135324
 * Callers:
 *     ExpSaAllocatorFree @ 0x14013522C (ExpSaAllocatorFree.c)
 * Callees:
 *     RtlClearBitsEx @ 0x1400137E8 (RtlClearBitsEx.c)
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
 */

bool __fastcall ExpSaPageGroupFreeMemory(__int64 a1, unsigned __int64 a2, unsigned int a3)
{
  unsigned __int64 *v3; // rbx
  unsigned __int64 v4; // rbp
  _BYTE *v6; // rax
  _BYTE *v7; // rdi
  bool v8; // di

  v3 = (unsigned __int64 *)(a1 + 24);
  v4 = a3;
  v6 = (_BYTE *)KeAbPreAcquire(a1 + 24, 0LL, 0);
  v7 = v6;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v3, 0LL) )
    ExfAcquirePushLockExclusiveEx(v3, v6, (ULONG_PTR)v3);
  if ( v7 )
    v7[26] |= 1u;
  RtlClearBitsEx(a1 + 48, (a2 >> 4) & 0x1FF, v4);
  *(_DWORD *)(a1 + 36) += v4;
  v8 = *(_DWORD *)(a1 + 36) == 512;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v3, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v3);
  KeAbPostRelease((ULONG_PTR)v3);
  return v8;
}

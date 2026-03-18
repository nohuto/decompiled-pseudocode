/*
 * XREFs of ExpSaPageGroupAllocateMemory @ 0x14015BC00
 * Callers:
 *     ExpSaAllocatorAllocate @ 0x14015BAD0 (ExpSaAllocatorAllocate.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     RtlFindClearBitsAndSetEx @ 0x140064FF8 (RtlFindClearBitsAndSetEx.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 */

__int64 __fastcall ExpSaPageGroupAllocateMemory(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v5; // rbp
  unsigned __int64 *v6; // rdi
  __int64 v7; // rax
  __int64 v8; // r9
  __int64 v9; // rsi
  unsigned __int64 ClearBitsAndSet; // rdx
  __int64 v11; // rbx

  v5 = a2;
  if ( *(_DWORD *)(a1 + 36) < a2 )
    return -1LL;
  v6 = (unsigned __int64 *)(a1 + 24);
  v7 = KeAbPreAcquire(a1 + 24, 0LL, 0LL, a4);
  v9 = v7;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v6, 0LL) )
    ExfAcquirePushLockExclusiveEx(v6, v7, (ULONG_PTR)v6, v8);
  if ( v9 )
    *(_BYTE *)(v9 + 26) |= 1u;
  if ( *(_DWORD *)(a1 + 36) < (unsigned int)v5
    || (ClearBitsAndSet = RtlFindClearBitsAndSetEx((unsigned __int64 *)(a1 + 48), v5, *(unsigned int *)(a1 + 44)),
        ClearBitsAndSet == -1LL) )
  {
    v11 = -1LL;
  }
  else
  {
    *(_DWORD *)(a1 + 36) -= v5;
    *(_DWORD *)(a1 + 44) = ClearBitsAndSet + v5;
    v11 = 16 * (ClearBitsAndSet & 0x1FF | ((*(_DWORD *)(a1 + 32) & 0x3FFFFu) << 9));
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v6, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v6);
  KeAbPostRelease((ULONG_PTR)v6);
  return v11;
}

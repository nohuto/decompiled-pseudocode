/*
 * XREFs of PspStorageEmptyArrayNonReadonly @ 0x140210120
 * Callers:
 *     PspCompleteHardDereferenceSiloDeferred @ 0x14067E3F0 (PspCompleteHardDereferenceSiloDeferred.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     ObfDereferenceObjectWithTag @ 0x14006A850 (ObfDereferenceObjectWithTag.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
 */

__int64 __fastcall PspStorageEmptyArrayNonReadonly(unsigned __int64 *BugCheckParameter2, unsigned int a2)
{
  unsigned int v2; // esi
  unsigned __int64 *v3; // rbx
  __int64 *v4; // r14
  __int64 v5; // rbp
  _BYTE *v6; // rax
  _BYTE *v7; // rdi
  __int64 v8; // rdi
  void *v9; // rdi

  v2 = 0;
  v3 = BugCheckParameter2;
  if ( a2 )
  {
    v4 = (__int64 *)(BugCheckParameter2 + 1);
    v5 = a2;
    do
    {
      v6 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)v3, 0LL, 0);
      v7 = v6;
      if ( _interlockedbittestandset64((volatile signed __int32 *)v3, 0LL) )
        ExfAcquirePushLockExclusiveEx(v3, v6, (ULONG_PTR)v3);
      if ( v7 )
        v7[26] |= 1u;
      v8 = *v4;
      if ( (*v4 & 1) != 0 )
      {
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v3, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)v3);
        KeAbPostRelease((ULONG_PTR)v3);
      }
      else
      {
        *v4 = 1LL;
        v9 = (void *)(v8 & 0xFFFFFFFFFFFFFFFEuLL);
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v3, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)v3);
        KeAbPostRelease((ULONG_PTR)v3);
        if ( v9 )
        {
          ObfDereferenceObjectWithTag(v9, 0x746C6644u);
          ++v2;
        }
      }
      v3 += 2;
      v4 += 2;
      --v5;
    }
    while ( v5 );
  }
  return v2;
}

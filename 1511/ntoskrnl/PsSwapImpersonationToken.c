/*
 * XREFs of PsSwapImpersonationToken @ 0x140477AC0
 * Callers:
 *     NtOpenThreadTokenEx @ 0x1404772C0 (NtOpenThreadTokenEx.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x140042AA0 (ObfReferenceObject.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 */

__int64 __fastcall PsSwapImpersonationToken(__int64 a1, void *a2, unsigned __int64 a3)
{
  int v3; // edi
  void *v7; // r15
  struct _KTHREAD *CurrentThread; // r12
  __int64 v9; // rax
  __int64 v10; // rsi
  __int64 v11; // rcx
  void *v13; // rcx

  v3 = 0;
  v7 = 0LL;
  if ( (*(_DWORD *)(a1 + 1724) & 8) != 0 )
  {
    CurrentThread = KeGetCurrentThread();
    ObfReferenceObject((PVOID)a3);
    --CurrentThread->KernelApcDisable;
    v9 = KeAbPreAcquire(a1 + 1704, 0LL, 0LL);
    v10 = v9;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 1704), 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a1 + 1704), v9, a1 + 1704);
    if ( v10 )
      *(_BYTE *)(v10 + 26) |= 1u;
    if ( (*(_DWORD *)(a1 + 1724) & 8) != 0 )
    {
      v11 = *(_QWORD *)(a1 + 1624);
      if ( (void *)(v11 & 0xFFFFFFFFFFFFFFF8uLL) == a2 && (*(_DWORD *)(a1 + 1724) & 0x100) != 0 )
      {
        v7 = *(void **)(a1 + 1888);
        *(_QWORD *)(a1 + 1888) = 0LL;
        *(_QWORD *)(a1 + 1624) = a3 | v11 & 7;
        _InterlockedAnd((volatile signed __int32 *)(a1 + 1724), 0xFFFFFEFF);
      }
      else
      {
        v3 = -1073741823;
      }
    }
    else
    {
      v3 = -1073741700;
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 1704), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 1704));
    KeAbPostRelease(a1 + 1704);
    KiLeaveCriticalRegionUnsafe((__int64)CurrentThread);
    if ( v3 < 0 )
    {
      v13 = (void *)a3;
    }
    else
    {
      ObfDereferenceObject(a2);
      if ( !v7 )
        return (unsigned int)v3;
      v13 = v7;
    }
    ObfDereferenceObject(v13);
    return (unsigned int)v3;
  }
  return 3221225596LL;
}

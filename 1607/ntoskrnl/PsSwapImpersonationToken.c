/*
 * XREFs of PsSwapImpersonationToken @ 0x140413D30
 * Callers:
 *     NtOpenThreadTokenEx @ 0x140413580 (NtOpenThreadTokenEx.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002C1B0 (KeAbPreAcquire.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055FA0 (KiLeaveCriticalRegionUnsafe.c)
 *     ObfReferenceObject @ 0x14006A060 (ObfReferenceObject.c)
 *     ObfDereferenceObject @ 0x14006AC00 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x14006AEC0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C8070 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400C8738 (ExfTryToWakePushLock.c)
 */

__int64 __fastcall PsSwapImpersonationToken(__int64 a1, void *a2, unsigned __int64 a3)
{
  int v3; // edi
  void *v7; // r15
  struct _KTHREAD *CurrentThread; // r12
  _BYTE *v9; // rax
  _BYTE *v10; // rsi
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  void *v16; // rcx

  v3 = 0;
  v7 = 0LL;
  if ( (*(_DWORD *)(a1 + 1728) & 8) != 0 )
  {
    CurrentThread = KeGetCurrentThread();
    ObfReferenceObject((PVOID)a3);
    --CurrentThread->KernelApcDisable;
    v9 = (_BYTE *)KeAbPreAcquire(a1 + 1712, 0LL, 0);
    v10 = v9;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 1712), 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a1 + 1712), v9, a1 + 1712);
    if ( v10 )
      v10[26] |= 1u;
    if ( (*(_DWORD *)(a1 + 1728) & 8) != 0 )
    {
      v11 = *(_QWORD *)(a1 + 1632);
      if ( (void *)(v11 & 0xFFFFFFFFFFFFFFF8uLL) == a2 && (*(_DWORD *)(a1 + 1728) & 0x100) != 0 )
      {
        v7 = *(void **)(a1 + 1896);
        *(_QWORD *)(a1 + 1896) = 0LL;
        *(_QWORD *)(a1 + 1632) = a3 | v11 & 7;
        _InterlockedAnd((volatile signed __int32 *)(a1 + 1728), 0xFFFFFEFF);
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
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 1712), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 1712));
    KeAbPostRelease(a1 + 1712);
    KiLeaveCriticalRegionUnsafe((__int64)CurrentThread, v12, v13, v14);
    if ( v3 < 0 )
    {
      v16 = (void *)a3;
    }
    else
    {
      ObfDereferenceObject(a2);
      if ( !v7 )
        return (unsigned int)v3;
      v16 = v7;
    }
    ObfDereferenceObject(v16);
    return (unsigned int)v3;
  }
  return 3221225596LL;
}

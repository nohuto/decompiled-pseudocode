/*
 * XREFs of PsSwapImpersonationToken @ 0x140435BE0
 * Callers:
 *     NtOpenThreadTokenEx @ 0x140433000 (NtOpenThreadTokenEx.c)
 * Callees:
 *     ObfReferenceObject @ 0x14004E630 (ObfReferenceObject.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 */

__int64 __fastcall PsSwapImpersonationToken(__int64 a1, void *a2, unsigned __int64 a3)
{
  int v3; // edi
  void *v7; // r12
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v9; // r9
  __int64 v10; // rax
  __int64 v11; // r9
  __int64 v12; // rbp
  __int64 v13; // rcx
  __int16 v14; // ax
  void *v16; // rcx

  v3 = 0;
  v7 = 0LL;
  if ( (*(_DWORD *)(a1 + 1724) & 8) != 0 )
  {
    CurrentThread = KeGetCurrentThread();
    ObfReferenceObject((PVOID)a3);
    --CurrentThread->KernelApcDisable;
    v10 = KeAbPreAcquire(a1 + 1704, 0LL, 0LL, v9);
    v12 = v10;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 1704), 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a1 + 1704), v10, a1 + 1704, v11);
    if ( v12 )
      *(_BYTE *)(v12 + 26) |= 1u;
    if ( (*(_DWORD *)(a1 + 1724) & 8) != 0 )
    {
      v13 = *(_QWORD *)(a1 + 1624);
      if ( (void *)(v13 & 0xFFFFFFFFFFFFFFF8uLL) == a2 && (*(_DWORD *)(a1 + 1724) & 0x100) != 0 )
      {
        v7 = *(void **)(a1 + 1888);
        *(_QWORD *)(a1 + 1888) = 0LL;
        *(_QWORD *)(a1 + 1624) = a3 | v13 & 7;
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
    v14 = CurrentThread->KernelApcDisable + 1;
    CurrentThread->KernelApcDisable = v14;
    if ( !v14
      && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
      && !CurrentThread->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
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

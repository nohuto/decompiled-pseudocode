/*
 * XREFs of HvViewMapContiguousBytesAfterFileOffset @ 0x140662BE8
 * Callers:
 *     CmpDoSystemCacheRead @ 0x14065B988 (CmpDoSystemCacheRead.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400F2F00 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400F3600 (ExfReleasePushLockShared.c)
 */

__int64 __fastcall HvViewMapContiguousBytesAfterFileOffset(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 v6; // rsi
  unsigned __int64 *v7; // rbx
  __int64 v8; // rdi
  __int64 v9; // r9
  unsigned int v10; // edi
  struct _KTHREAD *v11; // rdx
  __int16 v12; // ax

  CurrentThread = KeGetCurrentThread();
  v6 = a2;
  --CurrentThread->KernelApcDisable;
  v7 = (unsigned __int64 *)(a1 + 8);
  v8 = KeAbPreAcquire(a1 + 8, 0LL, 0LL, a4);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)v7, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v7, v8, (ULONG_PTR)v7, v9);
  if ( v8 )
    *(_BYTE *)(v8 + 26) |= 1u;
  v10 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 8 * ((v6 >> 24) & 0x7F)) + 32 * ((v6 >> 18) & 0x3F) + 24)
      - (v6 & 0x3FFFF);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)v7, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)v7);
  KeAbPostRelease((ULONG_PTR)v7);
  v11 = KeGetCurrentThread();
  v12 = v11->KernelApcDisable + 1;
  v11->KernelApcDisable = v12;
  if ( !v12
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v11->ApcState.ApcListHead[0].Flink != &v11->152
    && !v11->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  return v10;
}

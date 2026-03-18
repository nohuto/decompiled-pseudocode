/*
 * XREFs of PfpRpCHashEmpty @ 0x1405C46D4
 * Callers:
 *     PfpRpControlRequestReset @ 0x1405C4684 (PfpRpControlRequestReset.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 */

void __fastcall PfpRpCHashEmpty(__int64 a1, __int64 a2, unsigned __int64 *a3, __int64 a4)
{
  unsigned int v6; // eax
  unsigned int i; // r8d
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v9; // rsi
  __int64 v10; // rax
  __int64 v11; // r9
  __int64 v12; // rbp
  struct _KTHREAD *v13; // rax
  void *v14; // r14
  __int64 v15; // rax
  __int64 v16; // r9
  __int64 v17; // rbp
  struct _KTHREAD *v18; // rcx
  __int16 v19; // ax
  struct _KTHREAD *v20; // rdx
  __int16 v21; // ax
  __int128 v22; // [rsp+20h] [rbp-38h]
  __int64 v23; // [rsp+30h] [rbp-28h]

  LODWORD(a4) = 1 << *(_DWORD *)(a2 + 8);
  v6 = a4;
  for ( i = -1; v6; v6 >>= 1 )
    ++i;
  if ( (((_DWORD)a4 - 1) & (unsigned int)a4) != 0 )
    ++i;
  *((_QWORD *)&v22 + 1) = i;
  LODWORD(v23) = 0;
  *(_QWORD *)&v22 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v9 = (unsigned __int64 *)(a1 + 128);
  --CurrentThread->KernelApcDisable;
  v10 = KeAbPreAcquire(a1 + 128, 0LL, 0LL, a4);
  v12 = v10;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v9, 0LL) )
    ExfAcquirePushLockExclusiveEx(v9, v10, (ULONG_PTR)v9, v11);
  if ( v12 )
    *(_BYTE *)(v12 + 26) |= 1u;
  v13 = KeGetCurrentThread();
  v14 = *(void **)a2;
  --v13->KernelApcDisable;
  v15 = KeAbPreAcquire((ULONG_PTR)a3, 0LL, 0LL, v11);
  v17 = v15;
  if ( _interlockedbittestandset64((volatile signed __int32 *)a3, 0LL) )
    ExfAcquirePushLockExclusiveEx(a3, v15, (ULONG_PTR)a3, v16);
  if ( v17 )
    *(_BYTE *)(v17 + 26) |= 1u;
  *(_OWORD *)a2 = v22;
  *(_QWORD *)(a2 + 16) = v23;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)a3, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)a3);
  KeAbPostRelease((ULONG_PTR)a3);
  v18 = KeGetCurrentThread();
  v19 = v18->KernelApcDisable + 1;
  v18->KernelApcDisable = v19;
  if ( !v19
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v18->ApcState.ApcListHead[0].Flink != &v18->152
    && !v18->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v9, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v9);
  KeAbPostRelease((ULONG_PTR)v9);
  v20 = KeGetCurrentThread();
  v21 = v20->KernelApcDisable + 1;
  v20->KernelApcDisable = v21;
  if ( !v21
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v20->ApcState.ApcListHead[0].Flink != &v20->152
    && !v20->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  if ( v14 )
    ExFreePoolWithTag(v14, 0);
}

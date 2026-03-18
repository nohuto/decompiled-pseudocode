/*
 * XREFs of ?SmFeEmptyComplete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@K@Z @ 0x140258EF4
 * Callers:
 *     ?SmIoCtxWorkItemComplete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU_ST_WORK_ITEM_HDR@@PEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@J@Z @ 0x14013EEA0 (-SmIoCtxWorkItemComplete@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU_ST_WORK_ITEM_HDR@@PEAU1@PEAU-$SM.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 */

void __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmFeEmptyComplete(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v5; // r14
  unsigned __int64 *v7; // rdi
  __int64 v8; // rax
  __int64 v9; // r9
  __int64 v10; // rsi
  struct _KTHREAD *v11; // rcx
  __int16 v12; // ax

  CurrentThread = KeGetCurrentThread();
  v5 = a2;
  --CurrentThread->SpecialApcDisable;
  v7 = (unsigned __int64 *)(a1 + 5816);
  v8 = KeAbPreAcquire(a1 + 5816, 0LL, 0LL, a4);
  v10 = v8;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v7, 0LL) )
    ExfAcquirePushLockExclusiveEx(v7, v8, (ULONG_PTR)v7, v9);
  if ( v10 )
    *(_BYTE *)(v10 + 26) |= 1u;
  *(_DWORD *)(a1 + 5840) &= ~(1 << v5);
  _InterlockedExchange64((volatile __int64 *)(a1 + 8 * v5 + 5848), 0LL);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v7, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v7);
  KeAbPostRelease((ULONG_PTR)v7);
  v11 = KeGetCurrentThread();
  v12 = v11->SpecialApcDisable + 1;
  v11->SpecialApcDisable = v12;
  if ( !v12 && ($CD287064E7C9F7953DE243E927CFCB99 *)v11->ApcState.ApcListHead[0].Flink != &v11->152 )
    KiCheckForKernelApcDelivery();
}

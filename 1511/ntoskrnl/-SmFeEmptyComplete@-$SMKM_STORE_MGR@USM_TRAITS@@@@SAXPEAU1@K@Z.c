/*
 * XREFs of ?SmFeEmptyComplete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@K@Z @ 0x140209B68
 * Callers:
 *     ?SmIoCtxWorkItemComplete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU_ST_WORK_ITEM_HDR@@PEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@J@Z @ 0x14010D2C0 (-SmIoCtxWorkItemComplete@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU_ST_WORK_ITEM_HDR@@PEAU1@PEAU-$SM.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     ?StLockAcquireExclusive@@YAKPEAUVLOCK@@@Z @ 0x1400F7898 (-StLockAcquireExclusive@@YAKPEAUVLOCK@@@Z.c)
 */

__int64 __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmFeEmptyComplete(__int64 a1, unsigned int a2)
{
  volatile signed __int64 *v2; // rsi
  __int64 v3; // rbx

  v2 = (volatile signed __int64 *)(a1 + 5816);
  v3 = a2;
  StLockAcquireExclusive(a1 + 5816);
  *(_DWORD *)(a1 + 5840) &= ~(1 << v3);
  _InterlockedExchange64((volatile __int64 *)(a1 + 8 * v3 + 5848), 0LL);
  if ( (_InterlockedExchangeAdd64(v2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v2);
  KeAbPostRelease((ULONG_PTR)v2);
  return KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
}

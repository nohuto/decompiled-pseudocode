/*
 * XREFs of ?SmStSwapStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SM_STORE_SWAP_OPERATION@@@Z @ 0x140001F48
 * Callers:
 *     ?SmSwapStore@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@W4_SM_STORE_SWAP_OPERATION@@@Z @ 0x140001EF0 (-SmSwapStore@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@@@W4_SM_STORE_.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x1400309E0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400430F0 (KiLeaveGuardedRegionUnsafe.c)
 *     KiStackAttachProcess @ 0x1400A6700 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400A6A00 (KiUnstackDetachProcess.c)
 *     ?StLockAcquireShared@@YAKPEAUVLOCK@@@Z @ 0x1400E7A9C (-StLockAcquireShared@@YAKPEAUVLOCK@@@Z.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     ?SmStOutSwapPrepareStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@@Z @ 0x140202EBC (-SmStOutSwapPrepareStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@@Z.c)
 *     ?SmStOutSwapStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@@Z @ 0x140202F74 (-SmStOutSwapStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@@Z.c)
 *     SmPerformStoreSwapOperation @ 0x14020A930 (SmPerformStoreSwapOperation.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SMKM_STORE<SM_TRAITS>::SmStSwapStore(__int64 a1, int a2)
{
  int v4; // ebx
  _QWORD *v5; // rsi
  unsigned int v6; // ebx
  struct VLOCK *v8; // rdi
  unsigned int v9; // eax
  _BYTE v10[48]; // [rsp+28h] [rbp-40h] BYREF

  KiStackAttachProcess((ULONG_PTR)PsInitialSystemProcess);
  if ( !a2 )
  {
    v9 = SMKM_STORE<SM_TRAITS>::SmStOutSwapPrepareStore(a1);
    goto LABEL_18;
  }
  v4 = a2 - 1;
  if ( !v4 )
  {
    v9 = SMKM_STORE<SM_TRAITS>::SmStOutSwapStore(a1);
LABEL_18:
    v6 = v9;
    goto LABEL_6;
  }
  if ( v4 == 1 )
  {
    v5 = *(_QWORD **)(a1 + 5016);
    if ( (unsigned __int64)v5 - 1 <= 0xFFFFFFFFFFFFFFFDuLL )
    {
      if ( v5 == (_QWORD *)_InterlockedCompareExchange64(
                             (volatile signed __int64 *)(a1 + 5016),
                             -1LL,
                             (signed __int64)v5) )
      {
        if ( *v5 )
          v6 = SmPerformStoreSwapOperation(2LL);
        else
          v6 = -1073741661;
        _InterlockedExchange64((volatile __int64 *)(a1 + 5016), 0LL);
        v8 = (struct VLOCK *)(a1 + 4488);
        StLockAcquireShared(v8);
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)v8, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared(v8);
        KeAbPostRelease((ULONG_PTR)v8);
        KiLeaveGuardedRegionUnsafe(KeGetCurrentThread());
        ExFreePoolWithTag(v5, 0);
      }
      else
      {
        v6 = -1073740682;
      }
    }
    else
    {
      v6 = -1073741661;
    }
  }
  else
  {
    v6 = -1073741811;
  }
LABEL_6:
  KiUnstackDetachProcess(v10, 0LL);
  return v6;
}

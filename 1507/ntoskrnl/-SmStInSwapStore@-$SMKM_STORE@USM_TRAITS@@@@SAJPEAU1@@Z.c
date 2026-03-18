/*
 * XREFs of ?SmStInSwapStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@@Z @ 0x140131DDC
 * Callers:
 *     ?SmStSwapStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SM_STORE_SWAP_OPERATION@@@Z @ 0x140131D5C (-SmStSwapStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SM_STORE_SWAP_OPERATION@@@Z.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400F2F00 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400F3600 (ExfReleasePushLockShared.c)
 *     SmPerformStoreSwapOperation @ 0x140259E80 (SmPerformStoreSwapOperation.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SMKM_STORE<SM_TRAITS>::SmStInSwapStore(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v4; // r14
  unsigned int v6; // ebx
  struct _KTHREAD *CurrentThread; // rcx
  unsigned __int64 *v9; // rdi
  __int64 v10; // rsi
  __int64 v11; // r9
  struct _KTHREAD *v12; // rcx
  __int16 v13; // ax

  v4 = *(_QWORD **)(a1 + 5016);
  if ( (unsigned __int64)v4 - 1 <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    if ( v4 == (_QWORD *)_InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 5016), -1LL, (signed __int64)v4) )
    {
      if ( *v4 )
        v6 = SmPerformStoreSwapOperation(2LL);
      else
        v6 = -1073741661;
      _InterlockedExchange64((volatile __int64 *)(a1 + 5016), 0LL);
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->SpecialApcDisable;
      v9 = (unsigned __int64 *)(a1 + 4488);
      v10 = KeAbPreAcquire((ULONG_PTR)v9, 0LL, 0LL, a4);
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)v9, 17LL, 0LL) )
        ExfAcquirePushLockSharedEx(v9, v10, (ULONG_PTR)v9, v11);
      if ( v10 )
        *(_BYTE *)(v10 + 26) |= 1u;
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)v9, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)v9);
      KeAbPostRelease((ULONG_PTR)v9);
      v12 = KeGetCurrentThread();
      v13 = v12->SpecialApcDisable + 1;
      v12->SpecialApcDisable = v13;
      if ( !v13 && ($CD287064E7C9F7953DE243E927CFCB99 *)v12->ApcState.ApcListHead[0].Flink != &v12->152 )
        KiCheckForKernelApcDelivery();
      ExFreePoolWithTag(v4, 0);
    }
    else
    {
      return (unsigned int)-1073740682;
    }
  }
  else
  {
    return (unsigned int)-1073741661;
  }
  return v6;
}

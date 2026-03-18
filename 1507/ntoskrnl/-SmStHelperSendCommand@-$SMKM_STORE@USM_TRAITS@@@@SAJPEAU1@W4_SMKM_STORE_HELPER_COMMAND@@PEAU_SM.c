/*
 * XREFs of ?SmStHelperSendCommand@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SMKM_STORE_HELPER_COMMAND@@PEAU_SMKM_STORE_HELPER_PARAMS@@K@Z @ 0x140147898
 * Callers:
 *     ?SmStReleaseVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@KK@Z @ 0x14014753C (-SmStReleaseVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@KK@Z.c)
 *     ?SmStAllocateVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@K@Z @ 0x140147640 (-SmStAllocateVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@K@Z.c)
 *     ?SmStMapVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KKKK@Z @ 0x1401476BC (-SmStMapVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KKKK@Z.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     SmKmStoreHelperSendCommand @ 0x1400DAA14 (SmKmStoreHelperSendCommand.c)
 *     KeDelayExecutionThread @ 0x1400E73A0 (KeDelayExecutionThread.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     SmKmStoreHelperWaitForCommand @ 0x140147A68 (SmKmStoreHelperWaitForCommand.c)
 */

__int64 __fastcall SMKM_STORE<SM_TRAITS>::SmStHelperSendCommand(__int64 a1, int a2, __int64 a3, unsigned __int8 a4)
{
  __int64 v4; // rsi
  unsigned int v8; // ebp
  __int64 v9; // rcx
  __int64 *v10; // rbp
  struct _KTHREAD *CurrentThread; // rcx
  __int16 v12; // ax
  __int64 v13; // r9
  int v14; // edi
  struct _KTHREAD *v15; // rax
  __int64 v16; // rax
  __int64 v17; // r9
  __int64 v18; // rdi
  __int64 v20; // [rsp+20h] [rbp-28h] BYREF
  LARGE_INTEGER Interval; // [rsp+28h] [rbp-20h] BYREF

  v4 = a1 + 4816;
  if ( a2 != 4 )
    v4 = a1 + 4696;
  v8 = SmKmStoreHelperSendCommand(v4, a2, a3, a4 & 1);
  if ( v8 != -1073741650 )
  {
    if ( (a4 & 2) != 0 )
    {
      v10 = 0LL;
    }
    else
    {
      if ( *(_BYTE *)(a1 + 4486) <= 1u )
        v9 = 100 * SmStHelperTimeout;
      else
        v9 = 1000 * SmStHelperTimeout;
      v20 = v9;
      v10 = &v20;
    }
    if ( (*(_BYTE *)(a1 + 4485) & 4) != 0 )
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 4488), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 4488));
      KeAbPostRelease(a1 + 4488);
      CurrentThread = KeGetCurrentThread();
      v12 = CurrentThread->SpecialApcDisable + 1;
      CurrentThread->SpecialApcDisable = v12;
      if ( !v12
        && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      {
        KiCheckForKernelApcDelivery();
      }
    }
    v8 = SmKmStoreHelperWaitForCommand(v4, a3, v10, (a4 >> 2) & 1);
    if ( (*(_BYTE *)(a1 + 4485) & 4) != 0 )
    {
      v14 = 20;
      Interval.QuadPart = -150000LL;
      while ( *(_DWORD *)(a1 + 5032) && v14 && *(_BYTE *)(a1 + 4486) >= 3u )
      {
        KeDelayExecutionThread(0, 0, &Interval);
        --v14;
      }
      v15 = KeGetCurrentThread();
      --v15->SpecialApcDisable;
      v16 = KeAbPreAcquire(a1 + 4488, 0LL, 0LL, v13);
      v18 = v16;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 4488), 0LL) )
        ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a1 + 4488), v16, a1 + 4488, v17);
      if ( v18 )
        *(_BYTE *)(v18 + 26) |= 1u;
      ++*(_DWORD *)(a1 + 4500);
      *(_DWORD *)(a1 + 4496) = 1;
    }
  }
  return v8;
}

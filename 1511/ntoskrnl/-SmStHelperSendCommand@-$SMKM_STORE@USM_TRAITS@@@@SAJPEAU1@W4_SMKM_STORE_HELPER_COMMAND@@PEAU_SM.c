/*
 * XREFs of ?SmStHelperSendCommand@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SMKM_STORE_HELPER_COMMAND@@PEAU_SMKM_STORE_HELPER_PARAMS@@K@Z @ 0x140110D84
 * Callers:
 *     ?SmStMapVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KKKK@Z @ 0x140110B74 (-SmStMapVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KKKK@Z.c)
 *     ?SmStAllocateVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@K@Z @ 0x1401115FC (-SmStAllocateVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@K@Z.c)
 *     ?SmStReleaseVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@KK@Z @ 0x140111764 (-SmStReleaseVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@KK@Z.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x140029A90 (KeDelayExecutionThread.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400430F0 (KiLeaveGuardedRegionUnsafe.c)
 *     ?StLockAcquireExclusive@@YAKPEAUVLOCK@@@Z @ 0x1400F7898 (-StLockAcquireExclusive@@YAKPEAUVLOCK@@@Z.c)
 *     SmKmStoreHelperSendCommand @ 0x1400F7D9C (SmKmStoreHelperSendCommand.c)
 *     SmKmStoreHelperWaitForCommand @ 0x140110EE4 (SmKmStoreHelperWaitForCommand.c)
 */

__int64 __fastcall SMKM_STORE<SM_TRAITS>::SmStHelperSendCommand(__int64 a1, int a2, __int64 a3, unsigned __int8 a4)
{
  __int64 v4; // rbp
  unsigned int v8; // esi
  __int64 v9; // rcx
  __int64 *v10; // rsi
  int v11; // edi
  int v12; // eax
  __int64 v14; // [rsp+20h] [rbp-28h] BYREF
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
      v14 = v9;
      v10 = &v14;
    }
    if ( (*(_BYTE *)(a1 + 4485) & 4) != 0 )
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 4488), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 4488));
      KeAbPostRelease(a1 + 4488);
      KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
    }
    v8 = SmKmStoreHelperWaitForCommand(v4, a3, v10, (a4 >> 2) & 1);
    if ( (*(_BYTE *)(a1 + 4485) & 4) != 0 )
    {
      v11 = 20;
      Interval.QuadPart = -150000LL;
      while ( *(_DWORD *)(a1 + 5032) && v11 && *(_BYTE *)(a1 + 4486) >= 3u )
      {
        KeDelayExecutionThread(0, 0, &Interval);
        --v11;
      }
      v12 = StLockAcquireExclusive(a1 + 4488);
      ++*(_DWORD *)(a1 + 4500);
      *(_DWORD *)(a1 + 4496) = v12;
    }
  }
  return v8;
}

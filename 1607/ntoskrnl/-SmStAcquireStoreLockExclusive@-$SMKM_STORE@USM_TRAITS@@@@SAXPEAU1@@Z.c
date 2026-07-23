/*
 * XREFs of ?SmStAcquireStoreLockExclusive@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x1400039F0
 * Callers:
 *     ?SmStWorker@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x1400037A8 (-SmStWorker@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     ?SmStCleanup@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x140003B38 (-SmStCleanup@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     ?StDmPageRemove@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x140118274 (-StDmPageRemove@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StDmpSinglePageAdd@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAK@Z @ 0x140118AB4 (-StDmpSinglePageAdd@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAK@Z.c)
 *     ?SmStHelperSendCommand@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SMKM_STORE_HELPER_COMMAND@@PEAU_SMKM_STORE_HELPER_PARAMS@@K@Z @ 0x14011F278 (-SmStHelperSendCommand@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SMKM_STORE_HELPER_COMMAND@@PEAU_SM.c)
 * Callees:
 *     ?StLockAcquireExclusive@@YAKPEAUVLOCK@@@Z @ 0x140003A68 (-StLockAcquireExclusive@@YAKPEAUVLOCK@@@Z.c)
 *     KeDelayExecutionThread @ 0x1400CE420 (KeDelayExecutionThread.c)
 */

void __fastcall SMKM_STORE<SM_TRAITS>::SmStAcquireStoreLockExclusive(__int64 a1)
{
  bool v2; // zf
  int v3; // edi
  unsigned int v4; // eax
  LARGE_INTEGER Interval; // [rsp+30h] [rbp+8h] BYREF

  if ( (*(_BYTE *)(a1 + 5861) & 4) != 0 )
  {
    v2 = *(_DWORD *)(a1 + 6432) == 0;
    v3 = 20;
    Interval.QuadPart = -150000LL;
    if ( !v2 )
    {
      do
      {
        if ( !v3 )
          break;
        if ( *(_BYTE *)(a1 + 5862) < 3u )
          break;
        KeDelayExecutionThread(0, 0, &Interval);
        --v3;
      }
      while ( *(_DWORD *)(a1 + 6432) );
    }
    v4 = StLockAcquireExclusive((struct VLOCK *)(a1 + 5864));
    ++*(_DWORD *)(a1 + 5876);
    *(_DWORD *)(a1 + 5872) = v4;
  }
}

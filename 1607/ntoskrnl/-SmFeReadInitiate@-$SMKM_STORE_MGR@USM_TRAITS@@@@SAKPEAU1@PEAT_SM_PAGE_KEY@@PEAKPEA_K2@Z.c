/*
 * XREFs of ?SmFeReadInitiate@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@PEAKPEA_K2@Z @ 0x14011E398
 * Callers:
 *     ?SmReadPickStore@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@PEAKPEAPEAU?$SMKM_STORE@USM_TRAITS@@@@2@Z @ 0x14011E460 (-SmReadPickStore@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@PEAKPEAPEAU-$SMKM_STO.c)
 * Callees:
 *     ?StLockAcquireShared@@YAKPEAUVLOCK@@@Z @ 0x140002088 (-StLockAcquireShared@@YAKPEAUVLOCK@@@Z.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400136F0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1400C64E0 (ExfReleasePushLockShared.c)
 *     ?SmFeCheckPresent@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@PEAK2@Z @ 0x14011CE70 (-SmFeCheckPresent@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@PEAK2@Z.c)
 */

__int64 __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmFeReadInitiate(
        __int64 a1,
        unsigned int *a2,
        unsigned int *a3,
        _QWORD *a4,
        int *a5)
{
  unsigned int v5; // r15d
  signed __int64 *v6; // rdi
  int *v11; // rbp
  unsigned int v12; // ebx
  int v13; // ecx
  unsigned int v14; // eax
  unsigned int v16; // [rsp+50h] [rbp+8h] BYREF

  v5 = *a3;
  v6 = (signed __int64 *)(a1 + 440);
  v16 = *a3;
  StLockAcquireShared((struct VLOCK *)(a1 + 440));
  v11 = a5;
  v12 = SMKM_STORE_MGR<SM_TRAITS>::SmFeCheckPresent(a1, a2, &v16, a5);
  if ( v12 != 1024 )
  {
    v13 = *(_DWORD *)(a1 + 1664);
    if ( ((v13 & 4) != 0 || !*v11) && ((v14 = v16, v16 == v5) || (v13 & 8) != 0) )
    {
      *a4 = 0LL;
      *a3 = v14;
    }
    else
    {
      v12 = 1024;
    }
  }
  if ( _InterlockedCompareExchange64(v6, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v6);
  KeAbPostRelease((ULONG_PTR)v6);
  KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
  return v12;
}

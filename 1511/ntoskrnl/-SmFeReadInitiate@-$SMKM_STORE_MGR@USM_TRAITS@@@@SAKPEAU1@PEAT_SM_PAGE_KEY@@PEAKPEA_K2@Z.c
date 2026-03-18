/*
 * XREFs of ?SmFeReadInitiate@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@PEAKPEA_K2@Z @ 0x14011015C
 * Callers:
 *     ?SmReadPickStore@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@PEAKPEAPEAU?$SMKM_STORE@USM_TRAITS@@@@2@Z @ 0x140110250 (-SmReadPickStore@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@PEAKPEAPEAU-$SMKM_STO.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x1400309E0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400430F0 (KiLeaveGuardedRegionUnsafe.c)
 *     ?StLockAcquireShared@@YAKPEAUVLOCK@@@Z @ 0x1400E7A9C (-StLockAcquireShared@@YAKPEAUVLOCK@@@Z.c)
 *     ?SmFeCheckPresent@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@PEAK2@Z @ 0x14010F1BC (-SmFeCheckPresent@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@PEAK2@Z.c)
 */

__int64 __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmFeReadInitiate(
        __int64 a1,
        unsigned int *a2,
        unsigned int *a3,
        LONGLONG *a4,
        int *a5)
{
  unsigned int v5; // r15d
  signed __int64 *v6; // rsi
  int *v11; // r14
  unsigned int v12; // edi
  int v13; // eax
  unsigned int v14; // ebx
  __int64 v15; // rbp
  LONGLONG v16; // rax
  __int64 v18; // rcx
  LARGE_INTEGER PerformanceCounter; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  unsigned int v22; // ebx
  __int64 i; // rcx
  unsigned int v24; // [rsp+50h] [rbp+8h] BYREF

  v5 = *a3;
  v6 = (signed __int64 *)(a1 + 5816);
  v24 = *a3;
  StLockAcquireShared((struct VLOCK *)(a1 + 5816));
  v11 = a5;
  v12 = SMKM_STORE_MGR<SM_TRAITS>::SmFeCheckPresent(a1, a2, &v24, a5);
  if ( v12 != 32 )
  {
    v13 = *(_DWORD *)(a1 + 10112);
    if ( ((v13 & 4) != 0 || !*v11) && ((v14 = v24, v24 == v5) || (v13 & 8) != 0) )
    {
      v15 = *(_QWORD *)(176LL * (v12 & 0x1F) + a1);
      if ( *(_BYTE *)(v15 + 4484) )
      {
        v18 = *(_QWORD *)(v15 + 2448);
        if ( *(int *)(v18 + 8) <= 0 )
        {
          PerformanceCounter = KeQueryPerformanceCounter(0LL);
        }
        else
        {
          PerformanceCounter.QuadPart = *(_QWORD *)v18 + *(unsigned int *)(v18 + 12);
          v14 = v24;
        }
        v20 = *(_QWORD *)(v15 + 2448);
        v21 = *(_QWORD *)(v15 + 4584);
        v22 = v14 << 12;
        for ( i = *(_QWORD *)(v20 + 16); *(_DWORD *)i < v22; i += 32LL )
          ;
        ++*(_WORD *)(i + 4);
        v14 = v24;
        *(_QWORD *)(v20 + 40) = MEMORY[0xFFFFF78000000008];
        v16 = PerformanceCounter.QuadPart + v21 + *(_QWORD *)(i + 8);
      }
      else
      {
        v16 = 0LL;
      }
      *a4 = v16;
      *a3 = v14;
    }
    else
    {
      v12 = 32;
    }
  }
  if ( _InterlockedCompareExchange64(v6, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v6);
  KeAbPostRelease((ULONG_PTR)v6);
  KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
  return v12;
}

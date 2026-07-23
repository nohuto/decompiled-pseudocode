/*
 * XREFs of ?SmStOutSwapPrepareStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@@Z @ 0x14021CA10
 * Callers:
 *     ?SmStSwapStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SM_STORE_SWAP_OPERATION@@@Z @ 0x140002184 (-SmStSwapStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SM_STORE_SWAP_OPERATION@@@Z.c)
 * Callees:
 *     RtlSetAllBits @ 0x140005744 (RtlSetAllBits.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall SMKM_STORE<SM_TRAITS>::SmStOutSwapPrepareStore(__int64 a1)
{
  char *PoolWithTag; // rax
  signed __int64 v4; // rsi

  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 6408), -1LL, 0LL) )
    return 3221226614LL;
  PoolWithTag = (char *)ExAllocatePoolWithTag(
                          NonPagedPoolNx,
                          4 * (((unsigned __int64)*(unsigned int *)(a1 + 6052) + 31) >> 5) + 24,
                          0x77536D73u);
  v4 = (signed __int64)PoolWithTag;
  if ( PoolWithTag )
  {
    *(_QWORD *)PoolWithTag = 0LL;
    *((_QWORD *)PoolWithTag + 1) = 0LL;
    *((_QWORD *)PoolWithTag + 2) = 0LL;
    *((_DWORD *)PoolWithTag + 2) = *(_DWORD *)(a1 + 6052);
    *((_QWORD *)PoolWithTag + 2) = PoolWithTag + 24;
    RtlSetAllBits((PRTL_BITMAP)(PoolWithTag + 8));
    _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 6408), v4, -1LL);
    return 0LL;
  }
  else
  {
    _InterlockedExchange64((volatile __int64 *)(a1 + 6408), 0LL);
    return 3221225626LL;
  }
}

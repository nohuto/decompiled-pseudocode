/*
 * XREFs of MmRelocatePfnList @ 0x14062AA8C
 * Callers:
 *     PfpPfnPrioRequest @ 0x140415750 (PfpPfnPrioRequest.c)
 * Callees:
 *     MiIdentifyPfnWrapper @ 0x140050BC0 (MiIdentifyPfnWrapper.c)
 *     MI_IS_PFN @ 0x140051760 (MI_IS_PFN.c)
 *     MiClaimPhysicalRun @ 0x1400720B0 (MiClaimPhysicalRun.c)
 *     MiPfnsWorthTrying @ 0x1400BF370 (MiPfnsWorthTrying.c)
 *     MiCreatePteCopyList @ 0x1400BFE3C (MiCreatePteCopyList.c)
 *     MiReleasePteCopyList @ 0x1400BFE9C (MiReleasePteCopyList.c)
 *     MiEmptyKernelStackCache @ 0x1400C1C3C (MiEmptyKernelStackCache.c)
 */

__int64 __fastcall MmRelocatePfnList(unsigned __int64 a1, _QWORD *a2, unsigned int a3, unsigned int a4)
{
  unsigned int v7; // r14d
  _QWORD *v8; // r12
  unsigned __int64 v9; // rsi
  __int64 v10; // rdi
  __int64 v11; // xmm1_8
  __int64 v12; // [rsp+40h] [rbp-40h] BYREF
  __int64 v13; // [rsp+48h] [rbp-38h] BYREF
  unsigned __int128 v14; // [rsp+50h] [rbp-30h] BYREF
  __int64 v15; // [rsp+60h] [rbp-20h]
  _BYTE v16[24]; // [rsp+68h] [rbp-18h] BYREF
  int v17; // [rsp+C0h] [rbp+40h] BYREF

  if ( a3 >= (unsigned __int16)KeNumberNodes )
    return 3221225712LL;
  if ( a4 >= MmNumberOfChannels )
    return 3221225713LL;
  v7 = (a3 << byte_1402FE6D9) | (a4 << byte_1402FE6E8);
  MiCreatePteCopyList(a1, 0x100uLL, (unsigned __int64)v16);
  v8 = &a2[3 * a1];
  while ( a2 < v8 )
  {
    v9 = a2[1];
    v10 = 0LL;
    v14 = __PAIR128__(v9, 0LL);
    v15 = 0LL;
    if ( !MI_IS_PFN(v9) )
      goto LABEL_15;
    MiIdentifyPfnWrapper(48 * v9 - 0x58000000000LL, (__int64)&v14);
    v10 = v15;
    if ( v15 != a2[2]
      || (((unsigned __int64)v14 ^ *a2) & 0x1FFFFFFFFFFFE00LL) != 0
      || MiPfnsWorthTrying(MiSystemPartition[0], 48 * v9 - 0x58000000000LL, 1LL, 0, &v17, &v13) )
    {
      goto LABEL_15;
    }
    if ( v17 == 1 )
      MiEmptyKernelStackCache();
    if ( MiClaimPhysicalRun(MiSystemPartition, v9, 1LL, (__int64)v16, 0x800000u, v7, &v12) || v12 == -1 )
LABEL_15:
      v15 = v10 | 2;
    else
      *((_QWORD *)&v14 + 1) = v12;
    v11 = v15;
    *(_OWORD *)a2 = v14;
    a2[2] = v11;
    a2 += 3;
  }
  MiReleasePteCopyList((__int64)v16);
  return 0LL;
}

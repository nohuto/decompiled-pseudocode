/*
 * XREFs of MmRelocatePfnList @ 0x1406647DC
 * Callers:
 *     PfpPfnPrioRequest @ 0x14041A310 (PfpPfnPrioRequest.c)
 * Callees:
 *     MiEmptyKernelStackCache @ 0x14000196C (MiEmptyKernelStackCache.c)
 *     MiIsPfn @ 0x14000F720 (MiIsPfn.c)
 *     MiIdentifyPfnWrapper @ 0x14000F770 (MiIdentifyPfnWrapper.c)
 *     MiPfnsWorthTrying @ 0x1401029B0 (MiPfnsWorthTrying.c)
 *     MiClaimPhysicalRun @ 0x14010415C (MiClaimPhysicalRun.c)
 *     MiReleasePteCopyList @ 0x140104DB4 (MiReleasePteCopyList.c)
 *     MiCreatePteCopyList @ 0x140104EF8 (MiCreatePteCopyList.c)
 */

__int64 __fastcall MmRelocatePfnList(unsigned __int64 a1, _QWORD *a2, unsigned int a3, unsigned int a4)
{
  int v7; // esi
  _QWORD *v8; // r12
  unsigned __int64 v9; // r14
  __int64 v10; // rdi
  __int64 v11; // xmm1_8
  __int64 v12; // [rsp+40h] [rbp-40h] BYREF
  __int128 v13; // [rsp+48h] [rbp-38h] BYREF
  __int64 v14; // [rsp+58h] [rbp-28h]
  _BYTE v15[32]; // [rsp+60h] [rbp-20h] BYREF
  int v16; // [rsp+C0h] [rbp+40h] BYREF

  if ( a3 >= (unsigned __int16)KeNumberNodes )
    return 3221225712LL;
  if ( a4 >= MmNumberOfChannels )
    return 3221225713LL;
  v7 = (a3 << byte_140326A09) | (a4 << byte_140326A18);
  MiCreatePteCopyList(a1, 0x100uLL, (unsigned __int64)v15);
  v8 = &a2[3 * a1];
  while ( a2 < v8 )
  {
    v9 = a2[1];
    v10 = 0LL;
    *(_QWORD *)&v13 = 0LL;
    v14 = 0LL;
    *((_QWORD *)&v13 + 1) = v9;
    if ( !MiIsPfn(v9) )
      goto LABEL_15;
    MiIdentifyPfnWrapper(48 * v9 - 0x58000000000LL, (__int64)&v13);
    v10 = v14;
    if ( v14 != a2[2]
      || (((unsigned __int64)v13 ^ *a2) & 0x1FFFFFFFFFFFE00LL) != 0
      || MiPfnsWorthTrying((__int16 *)MiSystemPartition, 48 * v9 - 0x58000000000LL, 1LL, 0, &v16) )
    {
      goto LABEL_15;
    }
    if ( v16 == 1 )
      MiEmptyKernelStackCache();
    if ( MiClaimPhysicalRun(MiSystemPartition, v9, 1LL, (__int64)v15, 0x400000u, v7, &v12) || v12 == -1 )
LABEL_15:
      v14 = v10 | 2;
    else
      *((_QWORD *)&v13 + 1) = v12;
    v11 = v14;
    *(_OWORD *)a2 = v13;
    a2[2] = v11;
    a2 += 3;
  }
  MiReleasePteCopyList((__int64)v15);
  return 0LL;
}

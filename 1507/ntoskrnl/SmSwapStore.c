/*
 * XREFs of SmSwapStore @ 0x14055D55C
 * Callers:
 *     MiInSwapStoreWorker @ 0x14055D454 (MiInSwapStoreWorker.c)
 *     SmStoreCompressionStart @ 0x1406D9F78 (SmStoreCompressionStart.c)
 *     SmStoreCompressionStop @ 0x1406D9FF0 (SmStoreCompressionStop.c)
 * Callees:
 *     SmpKeyedStoreEntryGet @ 0x1400F0084 (SmpKeyedStoreEntryGet.c)
 *     ?SmSwapStore@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@W4_SM_STORE_SWAP_OPERATION@@@Z @ 0x140131D04 (-SmSwapStore@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@@@W4_SM_STORE_.c)
 */

__int64 __fastcall SmSwapStore(int a1)
{
  __int64 v2; // rax
  unsigned int v3; // r8d
  _KPROCESS *Process; // [rsp+38h] [rbp+10h] BYREF

  Process = KeGetCurrentThread()->ApcState.Process;
  v2 = SmpKeyedStoreEntryGet((ULONG_PTR)qword_140352D30, &Process, 0, 0LL);
  if ( !v2 )
    return 3221226021LL;
  v3 = 2;
  if ( a1 != 2 )
    v3 = a1 != 0;
  return SMKM_STORE_MGR<SM_TRAITS>::SmSwapStore(
           (__int64)SmGlobals,
           (_DWORD *)SmGlobals[22 * (*(_WORD *)(v2 + 16) & 0x1F)],
           v3);
}

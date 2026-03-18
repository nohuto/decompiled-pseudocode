/*
 * XREFs of SmSwapStore @ 0x1403B5BA4
 * Callers:
 *     MiInSwapStoreWorker @ 0x1403B5A9C (MiInSwapStoreWorker.c)
 *     SmStoreCompressionStop @ 0x140517730 (SmStoreCompressionStop.c)
 *     SmStoreCompressionStart @ 0x14051779C (SmStoreCompressionStart.c)
 * Callees:
 *     ?SmSwapStore@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@W4_SM_STORE_SWAP_OPERATION@@@Z @ 0x140001EF0 (-SmSwapStore@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@@@W4_SM_STORE_.c)
 *     SmpKeyedStoreEntryGet @ 0x1400926A8 (SmpKeyedStoreEntryGet.c)
 */

__int64 __fastcall SmSwapStore(int a1)
{
  __int64 v2; // rax
  unsigned int v3; // r8d
  _KPROCESS *Process; // [rsp+38h] [rbp+10h] BYREF

  Process = KeGetCurrentThread()->ApcState.Process;
  v2 = SmpKeyedStoreEntryGet((__int64)&qword_140304FC0, &Process, 0, 0);
  if ( !v2 )
    return 3221226021LL;
  v3 = 2;
  if ( a1 != 2 )
    v3 = a1 != 0;
  return SMKM_STORE_MGR<SM_TRAITS>::SmSwapStore(
           (__int64)&SmGlobals,
           *((_DWORD **)&SmGlobals + 22 * (*(_WORD *)(v2 + 16) & 0x1F)),
           v3);
}

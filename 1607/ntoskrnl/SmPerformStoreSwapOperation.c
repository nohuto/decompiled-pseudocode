/*
 * XREFs of SmPerformStoreSwapOperation @ 0x140221F48
 * Callers:
 *     ?SmStSwapStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SM_STORE_SWAP_OPERATION@@@Z @ 0x140002184 (-SmStSwapStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SM_STORE_SWAP_OPERATION@@@Z.c)
 *     ?SmStOutSwapStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@@Z @ 0x14021CAC8 (-SmStOutSwapStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@@Z.c)
 * Callees:
 *     PspQueueApcSpecialApc @ 0x1403E6870 (PspQueueApcSpecialApc.c)
 */

__int64 __fastcall SmPerformStoreSwapOperation(int a1, __int64 a2)
{
  bool v3; // zf
  struct _KPROCESS *Process; // rcx

  if ( a1 == 3 )
  {
    PspQueueApcSpecialApc((PVOID)a2);
    return 0LL;
  }
  else
  {
    v3 = a1 == 2;
    Process = KeGetCurrentThread()->ApcState.Process;
    if ( v3 )
      return MmInSwapVirtualAddresses(Process, (PVOID)a2);
    else
      return MmOutSwapVirtualAddresses(
               Process,
               *(unsigned __int64 **)(a2 + 8),
               *(unsigned int *)(a2 + 16),
               (_QWORD *)a2);
  }
}

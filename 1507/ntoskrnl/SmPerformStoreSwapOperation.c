/*
 * XREFs of SmPerformStoreSwapOperation @ 0x140259E80
 * Callers:
 *     ?SmStInSwapStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@@Z @ 0x140131DDC (-SmStInSwapStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@@Z.c)
 *     ?SmStOutSwapStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@@Z @ 0x1402521D8 (-SmStOutSwapStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@@Z.c)
 * Callees:
 *     PspQueueApcSpecialApc @ 0x1404F9234 (PspQueueApcSpecialApc.c)
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

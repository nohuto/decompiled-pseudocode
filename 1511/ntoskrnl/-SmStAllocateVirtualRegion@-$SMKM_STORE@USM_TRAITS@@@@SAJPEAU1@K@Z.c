/*
 * XREFs of ?SmStAllocateVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@K@Z @ 0x1401115FC
 * Callers:
 *     ?StMapAndLockRegion@?$ST_STORE@USM_TRAITS@@@@SAPEADPEAU_ST_DATA_MGR@1@KKK@Z @ 0x140111484 (-StMapAndLockRegion@-$ST_STORE@USM_TRAITS@@@@SAPEADPEAU_ST_DATA_MGR@1@KKK@Z.c)
 * Callees:
 *     ?SmStHelperSendCommand@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SMKM_STORE_HELPER_COMMAND@@PEAU_SMKM_STORE_HELPER_PARAMS@@K@Z @ 0x140110D84 (-SmStHelperSendCommand@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SMKM_STORE_HELPER_COMMAND@@PEAU_SM.c)
 *     memset @ 0x140166CC0 (memset.c)
 */

__int64 __fastcall SMKM_STORE<SM_TRAITS>::SmStAllocateVirtualRegion(__int64 a1, unsigned int a2)
{
  __int64 v2; // rdi
  __int64 v4; // rbx
  __int64 result; // rax
  _QWORD v6[7]; // [rsp+20h] [rbp-38h] BYREF

  v2 = *(_QWORD *)(a1 + 4680);
  v4 = a2;
  if ( *(_QWORD *)(v2 + 8LL * a2) )
    return 0LL;
  memset(v6, 0, 0x28uLL);
  v6[1] = *(unsigned int *)(a1 + 4672);
  result = SMKM_STORE<SM_TRAITS>::SmStHelperSendCommand(a1, 2, (__int64)v6, 4u);
  if ( (int)result >= 0 )
  {
    result = LODWORD(v6[4]);
    if ( SLODWORD(v6[4]) >= 0 )
    {
      *(_QWORD *)(v2 + 8 * v4) = v6[3];
      return 0LL;
    }
  }
  return result;
}

/*
 * XREFs of ?CompareVadRangeAvl@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x1C0046E5C
 * Callers:
 *     ?InsertVadToReservedListForNewVaRange@CVirtualAddressAllocator@@IEAAXPEAUVIDMM_VAD@@U_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@@Z @ 0x1C00477A8 (-InsertVadToReservedListForNewVaRange@CVirtualAddressAllocator@@IEAAXPEAUVIDMM_VAD@@U_D3DDDIGPUV.c)
 *     ?InsertVadToReservedList@CVirtualAddressAllocator@@IEAAXPEAUVIDMM_VAD@@@Z @ 0x1C0047838 (-InsertVadToReservedList@CVirtualAddressAllocator@@IEAAXPEAUVIDMM_VAD@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CompareVadRangeAvl(char *a1, struct _RTL_BALANCED_NODE *a2)
{
  struct _RTL_BALANCED_NODE *v2; // r9
  struct _RTL_BALANCED_NODE *v3; // r8
  _QWORD *v5; // rax

  v2 = a2[1].Children[0];
  v3 = (struct _RTL_BALANCED_NODE *)*((_QWORD *)a1 + 3);
  if ( *(_OWORD *)&a2[1].0 != *(_OWORD *)(a1 + 24) )
  {
    if ( *((_QWORD *)a1 + 4) <= (unsigned __int64)v2 )
      return 0xFFFFFFFFLL;
    if ( v3 >= a2[1].Children[1] )
      return 1LL;
    v5 = (_QWORD *)WdLogNewEntry5_WdCriticalError(a1, a2, v3, v2);
    v5[5] = 0LL;
    v5[6] = 0LL;
    v5[7] = 0LL;
    v5[3] = 275LL;
    v5[4] = 23LL;
    WdLogEvent5_WdCriticalError(v5);
  }
  return 0LL;
}

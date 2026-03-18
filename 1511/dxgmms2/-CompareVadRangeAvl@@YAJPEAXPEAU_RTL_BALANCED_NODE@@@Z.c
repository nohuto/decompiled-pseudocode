/*
 * XREFs of ?CompareVadRangeAvl@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x1C005EFB0
 * Callers:
 *     ?MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_VAD_OWNER_TYPE@@_K333IU_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@1IPEAPEAUVIDMM_VAD_PENDING_OPERATION@@@Z @ 0x1C003FBE0 (-MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_V.c)
 *     ?ReserveVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K000IW4_D3DDDIGPUVIRTUALADDRESS_RESERVATION_TYPE@@_KEPEA_KPEAPEAUVIDMM_MAPPED_VA_RANGE@@E@Z @ 0x1C0040888 (-ReserveVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K000IW4_D3DDDIGPUVIRTUALADDRESS_RESE.c)
 *     ?ReserveVirtualAddressRangeNoAccess@CVirtualAddressAllocator@@QEAAJ_K000IPEA_K@Z @ 0x1C0041838 (-ReserveVirtualAddressRangeNoAccess@CVirtualAddressAllocator@@QEAAJ_K000IPEA_K@Z.c)
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

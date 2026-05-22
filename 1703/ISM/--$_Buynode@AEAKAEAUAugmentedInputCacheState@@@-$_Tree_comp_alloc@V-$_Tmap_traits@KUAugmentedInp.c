/*
 * XREFs of ??$_Buynode@AEAKAEAUAugmentedInputCacheState@@@?$_Tree_comp_alloc@V?$_Tmap_traits@KUAugmentedInputCacheState@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKUAugmentedInputCacheState@@@std@@@3@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBKUAugmentedInputCacheState@@@std@@PEAX@1@AEAKAEAUAugmentedInputCacheState@@@Z @ 0x180075970
 * Callers:
 *     ?OnDeviceAttach@AugmentedInputDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x180074B60 (-OnDeviceAttach@AugmentedInputDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 * Callees:
 *     ?_Buynode0@?$_Tree_comp_alloc@V?$_Tmap_traits@KUAugmentedInputCacheState@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKUAugmentedInputCacheState@@@std@@@3@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBKUAugmentedInputCacheState@@@std@@PEAX@2@XZ @ 0x180075AF0 (-_Buynode0@-$_Tree_comp_alloc@V-$_Tmap_traits@KUAugmentedInputCacheState@@U-$less@K@std@@V-$allo.c)
 */

__int64 __fastcall std::_Tree_comp_alloc<std::_Tmap_traits<unsigned long,AugmentedInputCacheState,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,AugmentedInputCacheState>>,0>>::_Buynode<unsigned long &,AugmentedInputCacheState &>(
        __int64 a1,
        unsigned int *a2,
        __int64 a3)
{
  __int64 result; // rax
  __int64 v6; // rcx

  result = std::_Tree_comp_alloc<std::_Tmap_traits<unsigned long,AugmentedInputCacheState,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,AugmentedInputCacheState>>,0>>::_Buynode0(a1);
  *(_WORD *)(result + 24) = 0;
  try
  {
    if ( result != -28 )
    {
      v6 = *a2;
      *(_DWORD *)(result + 28) = v6;
      *(_QWORD *)(result + 32) = *(_QWORD *)a3;
      *(_DWORD *)(result + 40) = *(_DWORD *)(a3 + 8);
    }
  }
  catch ( ... )
  {
    std::_Tree_comp_alloc<std::_Tmap_traits<unsigned long,AugmentedInputCacheState,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,AugmentedInputCacheState>>,0>>::_Freenode0(
      v6,
      (char *)result);
    throw;
  }
  return result;
}

/*
 * XREFs of ??$_Buynode@U?$pair@KH@std@@@?$_Tree_buy@U?$pair@$$CBKK@std@@V?$allocator@U?$pair@$$CBKK@std@@@2@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBKK@std@@PEAX@1@$$QEAU?$pair@KH@1@@Z @ 0x18000D6B0
 * Callers:
 *     ?AddResourcePriorityToMap@CResourcePriorityTracker@@IEAAJK@Z @ 0x18000D350 (-AddResourcePriorityToMap@CResourcePriorityTracker@@IEAAJK@Z.c)
 * Callees:
 *     ?_Buynode0@?$_Tree_buy@U?$pair@$$CBKK@std@@V?$allocator@U?$pair@$$CBKK@std@@@2@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBKK@std@@PEAX@2@XZ @ 0x18000D640 (-_Buynode0@-$_Tree_buy@U-$pair@$$CBKK@std@@V-$allocator@U-$pair@$$CBKK@std@@@2@@std@@QEAAPEAU-$_.c)
 */

_QWORD *__fastcall std::_Tree_buy<std::pair<unsigned long const,unsigned long>>::_Buynode<std::pair<unsigned long,int>>(
        _QWORD *a1,
        _DWORD *a2)
{
  _QWORD *result; // rax

  result = std::_Tree_buy<std::pair<unsigned long const,unsigned long>>::_Buynode0(a1);
  *((_WORD *)result + 12) = 0;
  try
  {
    if ( result != (_QWORD *)-28LL )
    {
      *((_DWORD *)result + 7) = *a2;
      *((_DWORD *)result + 8) = a2[1];
    }
  }
  catch ( ... )
  {
    operator delete(result);
    throw;
  }
  return result;
}

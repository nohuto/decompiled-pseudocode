/*
 * XREFs of ?_Buynode0@?$_Tree_buy@U?$pair@$$CBKK@std@@V?$allocator@U?$pair@$$CBKK@std@@@2@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBKK@std@@PEAX@2@XZ @ 0x18000D640
 * Callers:
 *     ??$_Buynode@U?$pair@KH@std@@@?$_Tree_buy@U?$pair@$$CBKK@std@@V?$allocator@U?$pair@$$CBKK@std@@@2@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBKK@std@@PEAX@1@$$QEAU?$pair@KH@1@@Z @ 0x18000D6B0 (--$_Buynode@U-$pair@KH@std@@@-$_Tree_buy@U-$pair@$$CBKK@std@@V-$allocator@U-$pair@$$CBKK@std@@@2.c)
 * Callees:
 *     ?_Xbad_alloc@std@@YAXXZ @ 0x180046DB8 (-_Xbad_alloc@std@@YAXXZ.c)
 */

_QWORD *__fastcall std::_Tree_buy<std::pair<unsigned long const,unsigned long>>::_Buynode0(_QWORD *a1)
{
  HANDLE ProcessHeap; // rax
  _QWORD *result; // rax

  ProcessHeap = GetProcessHeap();
  result = HeapAlloc(ProcessHeap, 0, 0x28uLL);
  if ( !result )
    std::_Xbad_alloc();
  try
  {
    *result = *a1;
    if ( result != (_QWORD *)-8LL )
      result[1] = *a1;
    if ( result != (_QWORD *)-16LL )
      result[2] = *a1;
  }
  catch ( ... )
  {
    operator delete(result);
    throw;
  }
  return result;
}

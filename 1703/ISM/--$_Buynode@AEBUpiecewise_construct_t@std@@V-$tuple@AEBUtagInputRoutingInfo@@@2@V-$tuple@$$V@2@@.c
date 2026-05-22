/*
 * XREFs of ??$_Buynode@AEBUpiecewise_construct_t@std@@V?$tuple@AEBUtagInputRoutingInfo@@@2@V?$tuple@$$V@2@@?$_List_buy@U?$pair@$$CBUtagInputRoutingInfo@@V?$unique_ptr@VInputTarget@@U?$default_delete@VInputTarget@@@std@@@std@@@std@@V?$allocator@U?$pair@$$CBUtagInputRoutingInfo@@V?$unique_ptr@VInputTarget@@U?$default_delete@VInputTarget@@@std@@@std@@@std@@@2@@std@@QEAAPEAU?$_List_node@U?$pair@$$CBUtagInputRoutingInfo@@V?$unique_ptr@VInputTarget@@U?$default_delete@VInputTarget@@@std@@@std@@@std@@PEAX@1@PEAU21@0AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBUtagInputRoutingInfo@@@1@$$QEAV?$tuple@$$V@1@@Z @ 0x18006B6A0
 * Callers:
 *     ??A?$unordered_map@UtagInputRoutingInfo@@V?$unique_ptr@VInputTarget@@U?$default_delete@VInputTarget@@@std@@@std@@U?$hash@UtagInputRoutingInfo@@@3@U?$equal_to@UtagInputRoutingInfo@@@3@V?$allocator@U?$pair@$$CBUtagInputRoutingInfo@@V?$unique_ptr@VInputTarget@@U?$default_delete@VInputTarget@@@std@@@std@@@std@@@3@@std@@QEAAAEAV?$unique_ptr@VInputTarget@@U?$default_delete@VInputTarget@@@std@@@1@AEBUtagInputRoutingInfo@@@Z @ 0x18006A384 (--A-$unordered_map@UtagInputRoutingInfo@@V-$unique_ptr@VInputTarget@@U-$default_delete@VInputTar.c)
 * Callees:
 *     ?_Buynode0@?$_List_alloc@U?$_List_base_types@U?$pair@$$CBIUtagInputRoutingInfo@@@std@@V?$allocator@U?$pair@$$CBIUtagInputRoutingInfo@@@std@@@2@@std@@@std@@QEAAPEAU?$_List_node@U?$pair@$$CBIUtagInputRoutingInfo@@@std@@PEAX@2@PEAU32@0@Z @ 0x18006B54C (-_Buynode0@-$_List_alloc@U-$_List_base_types@U-$pair@$$CBIUtagInputRoutingInfo@@@std@@V-$allocat.c)
 */

char *__fastcall std::_List_buy<std::pair<tagInputRoutingInfo const,std::unique_ptr<InputTarget>>>::_Buynode<std::piecewise_construct_t const &,std::tuple<tagInputRoutingInfo const &>,std::tuple<>>(
        __int64 a1,
        char *a2,
        char *a3,
        __int64 a4,
        _OWORD **a5)
{
  char *result; // rax
  _OWORD *v6; // rcx

  result = std::_List_alloc<std::_List_base_types<std::pair<unsigned int const,tagInputRoutingInfo>>>::_Buynode0(
             a1,
             a2,
             a3);
  try
  {
    if ( result != (char *)-16LL )
    {
      v6 = *a5;
      *((_OWORD *)result + 1) = **a5;
      *((_OWORD *)result + 2) = v6[1];
      *((_OWORD *)result + 3) = v6[2];
      *((_QWORD *)result + 8) = 0LL;
    }
  }
  catch ( ... )
  {
    std::_Wrap_alloc<std::allocator<std::_List_node<std::pair<tagInputRoutingInfo const,std::unique_ptr<InputTarget>>,void *>>>::deallocate(
      (__int64)v6,
      result);
    throw;
  }
  return result;
}

/*
 * XREFs of ??$_Buynode@AEBUpiecewise_construct_t@std@@V?$tuple@AEBI@2@V?$tuple@$$V@2@@?$_List_buy@U?$pair@$$CBIUViewHeirarchyEntry@ViewHeirarchy@@@std@@V?$allocator@U?$pair@$$CBIUViewHeirarchyEntry@ViewHeirarchy@@@std@@@2@@std@@QEAAPEAU?$_List_node@U?$pair@$$CBIUViewHeirarchyEntry@ViewHeirarchy@@@std@@PEAX@1@PEAU21@0AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBI@1@$$QEAV?$tuple@$$V@1@@Z @ 0x18006ECEC
 * Callers:
 *     ??A?$unordered_map@IUViewHeirarchyEntry@ViewHeirarchy@@U?$hash@I@std@@U?$equal_to@I@4@V?$allocator@U?$pair@$$CBIUViewHeirarchyEntry@ViewHeirarchy@@@std@@@4@@std@@QEAAAEAUViewHeirarchyEntry@ViewHeirarchy@@AEBI@Z @ 0x18006E490 (--A-$unordered_map@IUViewHeirarchyEntry@ViewHeirarchy@@U-$hash@I@std@@U-$equal_to@I@4@V-$allocat.c)
 * Callees:
 *     ?_Buynode0@?$_List_alloc@U?$_List_base_types@U?$pair@$$CBIUViewHeirarchyEntry@ViewHeirarchy@@@std@@V?$allocator@U?$pair@$$CBIUViewHeirarchyEntry@ViewHeirarchy@@@std@@@2@@std@@@std@@QEAAPEAU?$_List_node@U?$pair@$$CBIUViewHeirarchyEntry@ViewHeirarchy@@@std@@PEAX@2@PEAU32@0@Z @ 0x18000A980 (-_Buynode0@-$_List_alloc@U-$_List_base_types@U-$pair@$$CBIUViewHeirarchyEntry@ViewHeirarchy@@@st.c)
 */

char *__fastcall std::_List_buy<std::pair<unsigned int const,ViewHeirarchy::ViewHeirarchyEntry>>::_Buynode<std::piecewise_construct_t const &,std::tuple<unsigned int const &>,std::tuple<>>(
        __int64 a1,
        char *a2,
        char *a3,
        __int64 a4,
        _DWORD **a5)
{
  char *result; // rax
  __int64 v6; // rcx

  result = std::_List_alloc<std::_List_base_types<std::pair<unsigned int const,ViewHeirarchy::ViewHeirarchyEntry>>>::_Buynode0(
             a1,
             a2,
             a3);
  try
  {
    if ( result != (char *)-16LL )
    {
      *((_DWORD *)result + 4) = **a5;
      v6 = 0LL;
      *((_QWORD *)result + 3) = 0LL;
      *((_QWORD *)result + 4) = 0LL;
      *((_QWORD *)result + 3) = 0LL;
      *((_DWORD *)result + 8) = 0;
    }
  }
  catch ( ... )
  {
    std::_Wrap_alloc<std::allocator<std::_List_node<std::pair<enum TestCommandMessageType const,std::pair<void *,bool (*)(void *,TestCommandMessageDataHeader *)>>,void *>>>::deallocate(
      v6,
      result);
    throw;
  }
  return result;
}

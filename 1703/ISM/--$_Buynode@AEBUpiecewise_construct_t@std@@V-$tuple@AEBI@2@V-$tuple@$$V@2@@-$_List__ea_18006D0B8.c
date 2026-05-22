/*
 * XREFs of ??$_Buynode@AEBUpiecewise_construct_t@std@@V?$tuple@AEBI@2@V?$tuple@$$V@2@@?$_List_buy@U?$pair@$$CBIUtagInputRoutingInfo@@@std@@V?$allocator@U?$pair@$$CBIUtagInputRoutingInfo@@@std@@@2@@std@@QEAAPEAU?$_List_node@U?$pair@$$CBIUtagInputRoutingInfo@@@std@@PEAX@1@PEAU21@0AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBI@1@$$QEAV?$tuple@$$V@1@@Z @ 0x18006D0B8
 * Callers:
 *     ??0InputAttemptedTarget@@QEAA@AEBV?$shared_ptr@VInputAttemptedTargetManager@@@std@@IAEBV?$ComPtr@VInputThread@@@WRL@Microsoft@@AEBUtagInputRoutingInfo@@@Z @ 0x18006BD0C (--0InputAttemptedTarget@@QEAA@AEBV-$shared_ptr@VInputAttemptedTargetManager@@@std@@IAEBV-$ComPtr.c)
 * Callees:
 *     ?_Buynode0@?$_List_alloc@U?$_List_base_types@U?$pair@$$CBIUtagInputRoutingInfo@@@std@@V?$allocator@U?$pair@$$CBIUtagInputRoutingInfo@@@std@@@2@@std@@@std@@QEAAPEAU?$_List_node@U?$pair@$$CBIUtagInputRoutingInfo@@@std@@PEAX@2@PEAU32@0@Z @ 0x18006B54C (-_Buynode0@-$_List_alloc@U-$_List_base_types@U-$pair@$$CBIUtagInputRoutingInfo@@@std@@V-$allocat.c)
 *     memset @ 0x18009D814 (memset.c)
 */

char *__fastcall std::_List_buy<std::pair<unsigned int const,tagInputRoutingInfo>>::_Buynode<std::piecewise_construct_t const &,std::tuple<unsigned int const &>,std::tuple<>>(
        __int64 a1,
        char *a2,
        char *a3,
        __int64 a4,
        _DWORD **a5)
{
  char *v5; // rax
  __int64 v6; // rcx
  char *v7; // rbx
  char *v9; // [rsp+58h] [rbp+20h]

  v5 = std::_List_alloc<std::_List_base_types<std::pair<unsigned int const,tagInputRoutingInfo>>>::_Buynode0(a1, a2, a3);
  v7 = v5;
  v9 = v5;
  try
  {
    if ( v5 != (char *)-16LL )
    {
      *((_DWORD *)v5 + 4) = **a5;
      memset(v5 + 24, 0, 0x30uLL);
    }
  }
  catch ( ... )
  {
    std::_Wrap_alloc<std::allocator<std::_List_node<std::pair<tagInputRoutingInfo const,std::unique_ptr<InputTarget>>,void *>>>::deallocate(
      v6,
      v9);
    throw;
  }
  return v7;
}

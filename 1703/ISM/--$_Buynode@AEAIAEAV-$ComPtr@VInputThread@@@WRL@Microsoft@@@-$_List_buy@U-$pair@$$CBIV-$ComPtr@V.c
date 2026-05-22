/*
 * XREFs of ??$_Buynode@AEAIAEAV?$ComPtr@VInputThread@@@WRL@Microsoft@@@?$_List_buy@U?$pair@$$CBIV?$ComPtr@VInputThread@@@WRL@Microsoft@@@std@@V?$allocator@U?$pair@$$CBIV?$ComPtr@VInputThread@@@WRL@Microsoft@@@std@@@2@@std@@QEAAPEAU?$_List_node@U?$pair@$$CBIV?$ComPtr@VInputThread@@@WRL@Microsoft@@@std@@PEAX@1@PEAU21@0AEAIAEAV?$ComPtr@VInputThread@@@WRL@Microsoft@@@Z @ 0x18006B600
 * Callers:
 *     ?OnAppThreadConnected@InputDeliveryServer@@QEAAJII@Z @ 0x180069754 (-OnAppThreadConnected@InputDeliveryServer@@QEAAJII@Z.c)
 *     ?Deliver@InputDeliveryServer@@UEAAJPEBUKeyboardEvent@@PEAVInputAcknowledge@@@Z @ 0x180069D10 (-Deliver@InputDeliveryServer@@UEAAJPEBUKeyboardEvent@@PEAVInputAcknowledge@@@Z.c)
 * Callees:
 *     ?_Buynode0@?$_List_alloc@U?$_List_base_types@U?$pair@$$CBKPEAVControllerProcessor@@@std@@V?$allocator@U?$pair@$$CBKPEAVControllerProcessor@@@std@@@2@@std@@@std@@QEAAPEAU?$_List_node@U?$pair@$$CBKPEAVControllerProcessor@@@std@@PEAX@2@PEAU32@0@Z @ 0x18003170C (-_Buynode0@-$_List_alloc@U-$_List_base_types@U-$pair@$$CBKPEAVControllerProcessor@@@std@@V-$allo.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

char *__fastcall std::_List_buy<std::pair<unsigned int const,Microsoft::WRL::ComPtr<InputThread>>>::_Buynode<unsigned int &,Microsoft::WRL::ComPtr<InputThread> &>(
        __int64 a1,
        char *a2,
        char *a3,
        _DWORD *a4,
        __int64 *a5)
{
  char *v6; // rax
  __int64 v7; // rcx
  char *v8; // rbx
  char *v10; // [rsp+40h] [rbp+8h]

  v6 = std::_List_alloc<std::_List_base_types<std::pair<unsigned long const,ControllerProcessor *>>>::_Buynode0(
         a1,
         a2,
         a3);
  v8 = v6;
  v10 = v6;
  try
  {
    if ( v6 != (char *)-16LL )
    {
      *((_DWORD *)v6 + 4) = *a4;
      v7 = *a5;
      *((_QWORD *)v6 + 3) = *a5;
      if ( v7 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
    }
  }
  catch ( ... )
  {
    std::_Wrap_alloc<std::allocator<std::_List_node<std::pair<unsigned int const,Microsoft::WRL::ComPtr<InputAcknowledge>>,void *>>>::deallocate(
      v7,
      v10);
    throw;
  }
  return v8;
}

/*
 * XREFs of ??$_Buynode@AEAKAEAPEAVControllerProcessor@@@?$_List_buy@U?$pair@$$CBKPEAVControllerProcessor@@@std@@V?$allocator@U?$pair@$$CBKPEAVControllerProcessor@@@std@@@2@@std@@QEAAPEAU?$_List_node@U?$pair@$$CBKPEAVControllerProcessor@@@std@@PEAX@1@PEAU21@0AEAKAEAPEAVControllerProcessor@@@Z @ 0x180031764
 * Callers:
 *     ?RegisterControllerProcessor@ControllerNavigationManager@@QEAAJKPEAVControllerProcessor@@@Z @ 0x180030938 (-RegisterControllerProcessor@ControllerNavigationManager@@QEAAJKPEAVControllerProcessor@@@Z.c)
 * Callees:
 *     ?_Buynode0@?$_List_alloc@U?$_List_base_types@U?$pair@$$CBKPEAVControllerProcessor@@@std@@V?$allocator@U?$pair@$$CBKPEAVControllerProcessor@@@std@@@2@@std@@@std@@QEAAPEAU?$_List_node@U?$pair@$$CBKPEAVControllerProcessor@@@std@@PEAX@2@PEAU32@0@Z @ 0x18003170C (-_Buynode0@-$_List_alloc@U-$_List_base_types@U-$pair@$$CBKPEAVControllerProcessor@@@std@@V-$allo.c)
 */

char *__fastcall std::_List_buy<std::pair<unsigned long const,ControllerProcessor *>>::_Buynode<unsigned long &,ControllerProcessor * &>(
        __int64 a1,
        char *a2,
        char *a3,
        _DWORD *a4,
        _QWORD *a5)
{
  char *result; // rax
  __int64 v7; // rcx

  result = std::_List_alloc<std::_List_base_types<std::pair<unsigned long const,ControllerProcessor *>>>::_Buynode0(
             a1,
             a2,
             a3);
  try
  {
    if ( result != (char *)-16LL )
    {
      *((_DWORD *)result + 4) = *a4;
      v7 = (__int64)a5;
      *((_QWORD *)result + 3) = *a5;
    }
  }
  catch ( ... )
  {
    std::_Wrap_alloc<std::allocator<std::_List_node<std::pair<unsigned int const,Microsoft::WRL::ComPtr<InputAcknowledge>>,void *>>>::deallocate(
      v7,
      result);
    throw;
  }
  return result;
}

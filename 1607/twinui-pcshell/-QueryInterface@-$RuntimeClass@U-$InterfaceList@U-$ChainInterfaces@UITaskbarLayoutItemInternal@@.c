/*
 * XREFs of ?QueryInterface@?$RuntimeClass@U?$InterfaceList@U?$ChainInterfaces@UITaskbarLayoutItemInternal@@UITaskbarLayoutItem@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18000CB70
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180030420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::ChainInterfaces<ITaskbarLayoutItemInternal,ITaskbarLayoutItem,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::QueryInterface(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  unsigned int v3; // ebx

  v3 = 0;
  *a3 = 0LL;
  if ( !*a2
    && a2[1] == *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data2
    && a2[2] == *(_DWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4
    && a2[3] == *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data4[4]
    || *a2 == -1740809166
    && a2[1] == *(_DWORD *)&GUID_983d5c32_6534_4fa1_8383_a8430e19de76.Data2
    && a2[2] == *(_DWORD *)GUID_983d5c32_6534_4fa1_8383_a8430e19de76.Data4
    && a2[3] == *(_DWORD *)&GUID_983d5c32_6534_4fa1_8383_a8430e19de76.Data4[4]
    || *a2 == -1976946633
    && a2[1] == *(_DWORD *)&GUID_8a2a3037_d907_4af5_996a_0262e73bbe8f.Data2
    && a2[2] == *(_DWORD *)GUID_8a2a3037_d907_4af5_996a_0262e73bbe8f.Data4
    && a2[3] == *(_DWORD *)&GUID_8a2a3037_d907_4af5_996a_0262e73bbe8f.Data4[4] )
  {
    *a3 = a1;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
  }
  else
  {
    return (unsigned int)-2147467262;
  }
  return v3;
}

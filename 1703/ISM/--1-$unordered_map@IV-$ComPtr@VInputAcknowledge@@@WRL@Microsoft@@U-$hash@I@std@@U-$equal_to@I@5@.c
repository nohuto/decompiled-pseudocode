/*
 * XREFs of ??1?$unordered_map@IV?$ComPtr@VInputAcknowledge@@@WRL@Microsoft@@U?$hash@I@std@@U?$equal_to@I@5@V?$allocator@U?$pair@$$CBIV?$ComPtr@VInputAcknowledge@@@WRL@Microsoft@@@std@@@5@@std@@QEAA@XZ @ 0x180068FA4
 * Callers:
 *     _InputDeliveryServer::_InputDeliveryServer_::_1_::dtor$11 @ 0x1800A25B0 (_InputDeliveryServer--_InputDeliveryServer_--_1_--dtor$11.c)
 *     _InputDeliveryServer::_InputDeliveryServer_::_1_::dtor$13 @ 0x1800A25D6 (_InputDeliveryServer--_InputDeliveryServer_--_1_--dtor$13.c)
 *     _InputDeliveryServer::InputDeliveryServer_::_1_::dtor$11 @ 0x1800A2788 (_InputDeliveryServer--InputDeliveryServer_--_1_--dtor$11.c)
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x180001914 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 */

__int64 __fastcall std::unordered_map<unsigned int,Microsoft::WRL::ComPtr<InputAcknowledge>>::~unordered_map<unsigned int,Microsoft::WRL::ComPtr<InputAcknowledge>>(
        _QWORD *a1)
{
  char *v2; // rcx

  v2 = (char *)a1[3];
  if ( v2 )
  {
    std::_Deallocate(v2, (__int64)(a1[5] - (_QWORD)v2) >> 3, 8uLL);
    a1[3] = 0LL;
    a1[4] = 0LL;
    a1[5] = 0LL;
  }
  return std::list<std::pair<unsigned int const,Microsoft::WRL::ComPtr<InputThread>>>::~list<std::pair<unsigned int const,Microsoft::WRL::ComPtr<InputThread>>>(a1 + 1);
}

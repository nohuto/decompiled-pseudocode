/*
 * XREFs of ??1?$unordered_map@UtagInputRoutingInfo@@V?$unique_ptr@VInputTarget@@U?$default_delete@VInputTarget@@@std@@@std@@U?$hash@UtagInputRoutingInfo@@@3@U?$equal_to@UtagInputRoutingInfo@@@3@V?$allocator@U?$pair@$$CBUtagInputRoutingInfo@@V?$unique_ptr@VInputTarget@@U?$default_delete@VInputTarget@@@std@@@std@@@std@@@3@@std@@QEAA@XZ @ 0x180068FEC
 * Callers:
 *     _InputDeliveryServer::_InputDeliveryServer_::_1_::dtor$12 @ 0x1800A25C3 (_InputDeliveryServer--_InputDeliveryServer_--_1_--dtor$12.c)
 *     _InputDeliveryServer::InputDeliveryServer_::_1_::dtor$12 @ 0x1800A27BB (_InputDeliveryServer--InputDeliveryServer_--_1_--dtor$12.c)
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x180001914 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 */

__int64 __fastcall std::unordered_map<tagInputRoutingInfo,std::unique_ptr<InputTarget>>::~unordered_map<tagInputRoutingInfo,std::unique_ptr<InputTarget>>(
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
  return std::list<std::pair<tagInputRoutingInfo const,std::unique_ptr<InputTarget>>>::~list<std::pair<tagInputRoutingInfo const,std::unique_ptr<InputTarget>>>(a1 + 1);
}

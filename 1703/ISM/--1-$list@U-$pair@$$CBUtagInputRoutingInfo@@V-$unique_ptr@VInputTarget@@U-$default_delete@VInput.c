/*
 * XREFs of ??1?$list@U?$pair@$$CBUtagInputRoutingInfo@@V?$unique_ptr@VInputTarget@@U?$default_delete@VInputTarget@@@std@@@std@@@std@@V?$allocator@U?$pair@$$CBUtagInputRoutingInfo@@V?$unique_ptr@VInputTarget@@U?$default_delete@VInputTarget@@@std@@@std@@@std@@@2@@std@@QEAA@XZ @ 0x18006A93C
 * Callers:
 *     ??1InputDeliveryServer@@EEAA@XZ @ 0x180068CAC (--1InputDeliveryServer@@EEAA@XZ.c)
 *     ??1?$unordered_map@UtagInputRoutingInfo@@V?$unique_ptr@VInputTarget@@U?$default_delete@VInputTarget@@@std@@@std@@U?$hash@UtagInputRoutingInfo@@@3@U?$equal_to@UtagInputRoutingInfo@@@3@V?$allocator@U?$pair@$$CBUtagInputRoutingInfo@@V?$unique_ptr@VInputTarget@@U?$default_delete@VInputTarget@@@std@@@std@@@std@@@3@@std@@QEAA@XZ @ 0x180068FEC (--1-$unordered_map@UtagInputRoutingInfo@@V-$unique_ptr@VInputTarget@@U-$default_delete@VInputTar.c)
 *     _InputDeliveryServer::InputDeliveryServer_::_1_::dtor$62 @ 0x1800A279B (_InputDeliveryServer--InputDeliveryServer_--_1_--dtor$62.c)
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x180001914 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall std::list<std::pair<tagInputRoutingInfo const,std::unique_ptr<InputTarget>>>::~list<std::pair<tagInputRoutingInfo const,std::unique_ptr<InputTarget>>>(
        char **a1)
{
  char *v2; // rdi
  char *v3; // rsi
  void (__fastcall ***v4)(_QWORD, __int64); // rcx

  v2 = *(char **)*a1;
  *(_QWORD *)*a1 = *a1;
  *((_QWORD *)*a1 + 1) = *a1;
  a1[1] = 0LL;
  if ( v2 != *a1 )
  {
    do
    {
      v3 = *(char **)v2;
      v4 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)v2 + 8);
      if ( v4 )
        (**v4)(v4, 1LL);
      std::_Deallocate(v2, 1uLL, 0x48uLL);
      v2 = v3;
    }
    while ( v3 != *a1 );
  }
  std::_Deallocate(*a1, 1uLL, 0x48uLL);
}

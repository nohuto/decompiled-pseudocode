/*
 * XREFs of ??1?$list@U?$pair@$$CBIV?$ComPtr@VInputThread@@@WRL@Microsoft@@@std@@V?$allocator@U?$pair@$$CBIV?$ComPtr@VInputThread@@@WRL@Microsoft@@@std@@@2@@std@@QEAA@XZ @ 0x18006A8AC
 * Callers:
 *     ??1InputDeliveryServer@@EEAA@XZ @ 0x180068CAC (--1InputDeliveryServer@@EEAA@XZ.c)
 *     ??1?$unordered_map@IV?$ComPtr@VInputAcknowledge@@@WRL@Microsoft@@U?$hash@I@std@@U?$equal_to@I@5@V?$allocator@U?$pair@$$CBIV?$ComPtr@VInputAcknowledge@@@WRL@Microsoft@@@std@@@5@@std@@QEAA@XZ @ 0x180068FA4 (--1-$unordered_map@IV-$ComPtr@VInputAcknowledge@@@WRL@Microsoft@@U-$hash@I@std@@U-$equal_to@I@5@.c)
 *     _InputDeliveryServer::InputDeliveryServer_::_1_::dtor$27 @ 0x1800A2768 (_InputDeliveryServer--InputDeliveryServer_--_1_--dtor$27.c)
 *     _InputDeliveryServer::InputDeliveryServer_::_1_::dtor$97 @ 0x1800A27CE (_InputDeliveryServer--InputDeliveryServer_--_1_--dtor$97.c)
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x180001914 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

void __fastcall std::list<std::pair<unsigned int const,Microsoft::WRL::ComPtr<InputThread>>>::~list<std::pair<unsigned int const,Microsoft::WRL::ComPtr<InputThread>>>(
        char **a1)
{
  char *v2; // rdi
  char *v3; // rsi
  __int64 v4; // rcx

  v2 = *(char **)*a1;
  *(_QWORD *)*a1 = *a1;
  *((_QWORD *)*a1 + 1) = *a1;
  a1[1] = 0LL;
  if ( v2 != *a1 )
  {
    do
    {
      v3 = *(char **)v2;
      v4 = *((_QWORD *)v2 + 3);
      if ( v4 )
      {
        *((_QWORD *)v2 + 3) = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
      }
      std::_Deallocate(v2, 1uLL, 0x20uLL);
      v2 = v3;
    }
    while ( v3 != *a1 );
  }
  std::_Deallocate(*a1, 1uLL, 0x20uLL);
}

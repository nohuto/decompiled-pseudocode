/*
 * XREFs of ?OnInputServiceDisconnect@InputDeliveryServer@@UEAAJXZ @ 0x18006A100
 * Callers:
 *     <none>
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x180001914 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     ?_Init@?$_Hash@V?$_Umap_traits@IUtagInputRoutingInfo@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUtagInputRoutingInfo@@@std@@@3@$0A@@std@@@std@@IEAAX_K@Z @ 0x18000A4BC (-_Init@-$_Hash@V-$_Umap_traits@IUtagInputRoutingInfo@@V-$_Uhash_compare@IU-$hash@I@std@@U-$equal.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall InputDeliveryServer::OnInputServiceDisconnect(InputDeliveryServer *this)
{
  _QWORD *v1; // rbx
  char **v2; // rax
  char *v3; // rdi
  __int64 *v4; // rsi
  __int64 v5; // rcx

  *((_BYTE *)this + 232) = 0;
  v1 = (_QWORD *)((char *)this + 248);
  v2 = (char **)*((_QWORD *)this + 32);
  v3 = *v2;
  *v2 = (char *)v2;
  *(_QWORD *)(*((_QWORD *)this + 32) + 8LL) = *((_QWORD *)this + 32);
  *((_QWORD *)this + 33) = 0LL;
  if ( v3 != *((char **)this + 32) )
  {
    do
    {
      v4 = *(__int64 **)v3;
      v5 = *((_QWORD *)v3 + 3);
      if ( v5 )
      {
        *((_QWORD *)v3 + 3) = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
      }
      std::_Deallocate(v3, 1uLL, 0x20uLL);
      v3 = (char *)v4;
    }
    while ( v4 != (__int64 *)v1[1] );
  }
  std::_Hash<std::_Umap_traits<unsigned int,tagInputRoutingInfo,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,tagInputRoutingInfo>>,0>>::_Init(
    v1,
    8LL);
  return 0LL;
}

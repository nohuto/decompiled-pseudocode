/*
 * XREFs of ?GetThread@InputTarget@@QEBA?AV?$ComPtr@VInputThread@@@WRL@Microsoft@@XZ @ 0x18006BBFC
 * Callers:
 *     ?PostInputMessage@InputDeliveryServer@@UEAAJPEBUtagInputRoutingInfo@@PEBX_K@Z @ 0x180069210 (-PostInputMessage@InputDeliveryServer@@UEAAJPEBUtagInputRoutingInfo@@PEBX_K@Z.c)
 *     ?PostInputMessage@InputDeliveryServer@@UEAAJPEBUtagInputRoutingInfo@@PEBUKeyboardEvent@@@Z @ 0x180069360 (-PostInputMessage@InputDeliveryServer@@UEAAJPEBUtagInputRoutingInfo@@PEBUKeyboardEvent@@@Z.c)
 *     ?OnAppThreadDisconnected@InputDeliveryServer@@QEAAJI@Z @ 0x180069A48 (-OnAppThreadDisconnected@InputDeliveryServer@@QEAAJI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall InputTarget::GetThread(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 8);
  *a2 = v2;
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  return a2;
}

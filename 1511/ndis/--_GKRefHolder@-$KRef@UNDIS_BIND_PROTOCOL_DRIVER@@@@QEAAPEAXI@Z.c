/*
 * XREFs of ??_GKRefHolder@?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@QEAAPEAXI@Z @ 0x1C00C94FC
 * Callers:
 *     ?unref@?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@AEAAXXZ @ 0x1C00A58C0 (-unref@-$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@AEAAXXZ.c)
 *     _lambda_b71825de59a79cfcba83505e6bc2fe25_::_helper_func_cdecl_ @ 0x1C00A5940 (_lambda_b71825de59a79cfcba83505e6bc2fe25_--_helper_func_cdecl_.c)
 *     ?ndisBindEnumerateProtocolDrivers@@YAXP6AXPEAXV?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@@Z0@Z @ 0x1C00A5984 (-ndisBindEnumerateProtocolDrivers@@YAXP6AXPEAXV-$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@@Z0@Z.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall KRef<NDIS_BIND_PROTOCOL_DRIVER>::KRefHolder::`scalar deleting destructor'(_QWORD *P)
{
  void *v2; // rcx
  _QWORD **v3; // rdx
  PVOID *v4; // rcx

  v2 = (void *)P[5];
  if ( v2 )
    ExFreePoolWithTag(v2, 0x7274534Bu);
  v3 = (_QWORD **)P[3];
  v4 = (PVOID *)P[4];
  if ( v3[1] != P + 3 || *v4 != P + 3 )
    __fastfail(3u);
  *v4 = v3;
  v3[1] = v4;
  ExFreePoolWithTag(P, 0x44745042u);
  return P;
}

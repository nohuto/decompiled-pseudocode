/*
 * XREFs of ??_GKRefHolder@?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@QEAAPEAXI@Z @ 0x1C00D00EC
 * Callers:
 *     ?ndisBindEnumerateProtocolDrivers@@YAXP6AXPEAXV?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@@Z0@Z @ 0x1C00A1638 (-ndisBindEnumerateProtocolDrivers@@YAXP6AXPEAXV-$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@@Z0@Z.c)
 *     _lambda_ec9adc5b0c3de61ef55d8ad95ac8116c_::operator() @ 0x1C00A56AC (_lambda_ec9adc5b0c3de61ef55d8ad95ac8116c_--operator().c)
 *     _lambda_b71825de59a79cfcba83505e6bc2fe25_::_helper_func_cdecl_ @ 0x1C00A6CB0 (_lambda_b71825de59a79cfcba83505e6bc2fe25_--_helper_func_cdecl_.c)
 *     ?reserve@?$KArray@V?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@@Rtl@@QEAA_N_K@Z @ 0x1C00AD66C (-reserve@-$KArray@V-$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@@Rtl@@QEAA_N_K@Z.c)
 *     ?unref@?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@AEAAXXZ @ 0x1C00AE2B4 (-unref@-$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@AEAAXXZ.c)
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

/*
 * XREFs of ?ndisVBusDetachComplete@@YAXPEAX@Z @ 0x1C00DDE20
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisBindEnumerateProtocolDrivers@@YAXP6AXPEAXV?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@@Z0@Z @ 0x1C00A1638 (-ndisBindEnumerateProtocolDrivers@@YAXP6AXPEAXV-$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@@Z0@Z.c)
 */

void __fastcall ndisVBusDetachComplete(void *a1)
{
  byte_1C0085248 = 0;
  ndisBindEnumerateProtocolDrivers(
    (void (__fastcall *)(__int64, volatile signed __int32 **))lambda_45acac7420f6e2785f1f49a7cce477f4_::_helper_func_cdecl_,
    0LL);
  ExWaitForRundownProtectionRelease(&RunRef);
  NmrClientDetachProviderComplete(NmrBindingHandle);
  ProviderDispatch = 0LL;
  *(_OWORD *)&NmrBindingHandle = 0LL;
}

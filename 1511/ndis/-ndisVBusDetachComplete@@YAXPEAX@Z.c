/*
 * XREFs of ?ndisVBusDetachComplete@@YAXPEAX@Z @ 0x1C00D7760
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisBindEnumerateProtocolDrivers@@YAXP6AXPEAXV?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@@Z0@Z @ 0x1C00A5984 (-ndisBindEnumerateProtocolDrivers@@YAXP6AXPEAXV-$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@@Z0@Z.c)
 */

void __fastcall ndisVBusDetachComplete(void *a1)
{
  *((_BYTE *)&WPP_MAIN_CB.Reserved + 8) = 0;
  ndisBindEnumerateProtocolDrivers(
    (void (__fastcall *)(__int64, volatile signed __int32 **))lambda_45acac7420f6e2785f1f49a7cce477f4_::_helper_func_cdecl_,
    0LL);
  ExWaitForRundownProtectionRelease(&RunRef);
  NmrClientDetachProviderComplete(*(HANDLE *)&WPP_MAIN_CB.SectorSize);
  WPP_MAIN_CB.Reserved = 0LL;
  *(_OWORD *)&WPP_MAIN_CB.SectorSize = 0LL;
}

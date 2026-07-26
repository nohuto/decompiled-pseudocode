/*
 * XREFs of ?reset@?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@AEAAXPEAVKRefHolder@1@@Z @ 0x1C00A58DC
 * Callers:
 *     ?BuildProtocolLink@BindStack@Ndis@@AEAA?AV?$KPtr@UNDIS_BIND_PROTOCOL_LINK@@U?$KDeletePtr@UNDIS_BIND_PROTOCOL_LINK@@@@@@AEAV?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@@Z @ 0x1C00A5DAC (-BuildProtocolLink@BindStack@Ndis@@AEAA-AV-$KPtr@UNDIS_BIND_PROTOCOL_LINK@@U-$KDele_ea_1C00A5DAC.c)
 *     NdisRegisterProtocol @ 0x1C00C96E0 (NdisRegisterProtocol.c)
 * Callees:
 *     ?unref@?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@AEAAXXZ @ 0x1C00A58C0 (-unref@-$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@AEAAXXZ.c)
 */

__int64 __fastcall KRef<NDIS_BIND_PROTOCOL_DRIVER>::reset(volatile signed __int32 **a1, volatile signed __int32 *a2)
{
  __int64 result; // rax

  if ( a2 != *a1 )
  {
    result = KRef<NDIS_BIND_PROTOCOL_DRIVER>::unref(a1);
    *a1 = a2;
    if ( a2 )
      _InterlockedIncrement(a2 + 16);
  }
  return result;
}

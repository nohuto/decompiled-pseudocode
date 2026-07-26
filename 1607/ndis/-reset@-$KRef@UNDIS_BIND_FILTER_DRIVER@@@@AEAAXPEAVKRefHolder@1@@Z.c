/*
 * XREFs of ?reset@?$KRef@UNDIS_BIND_FILTER_DRIVER@@@@AEAAXPEAVKRefHolder@1@@Z @ 0x1C00A148C
 * Callers:
 *     ?BuildFilterLink@BindStack@Ndis@@AEAA?AV?$KPtr@UNDIS_BIND_FILTER_LINK@@U?$KDeletePtr@UNDIS_BIND_FILTER_LINK@@@@@@PEBU_GUID@@K@Z @ 0x1C00A377C (-BuildFilterLink@BindStack@Ndis@@AEAA-AV-$KPtr@UNDIS_BIND_FILTER_LINK@@U-$KDeletePtr@UNDIS_BIND_.c)
 * Callees:
 *     ?unref@?$KRef@UNDIS_BIND_FILTER_DRIVER@@@@AEAAXXZ @ 0x1C00A1440 (-unref@-$KRef@UNDIS_BIND_FILTER_DRIVER@@@@AEAAXXZ.c)
 */

__int64 __fastcall KRef<NDIS_BIND_FILTER_DRIVER>::reset(volatile signed __int32 **a1, volatile signed __int32 *a2)
{
  __int64 result; // rax

  if ( a2 != *a1 )
  {
    result = KRef<NDIS_BIND_FILTER_DRIVER>::unref(a1);
    *a1 = a2;
    if ( a2 )
      _InterlockedIncrement(a2 + 20);
  }
  return result;
}

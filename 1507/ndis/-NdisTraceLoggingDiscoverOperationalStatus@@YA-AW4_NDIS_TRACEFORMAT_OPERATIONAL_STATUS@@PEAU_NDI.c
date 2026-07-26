/*
 * XREFs of ?NdisTraceLoggingDiscoverOperationalStatus@@YA?AW4_NDIS_TRACEFORMAT_OPERATIONAL_STATUS@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00175CC
 * Callers:
 *     ?NdisTraceLoggingDeviceStarted@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_TRACEFORMAT_FAILURE_REASON@@J@Z @ 0x1C0014200 (-NdisTraceLoggingDeviceStarted@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_TRACEFORMAT_FAILURE_REASON@.c)
 *     ?NdisTraceLoggingDeviceStatusChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0017488 (-NdisTraceLoggingDeviceStatusChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NdisTraceLoggingDiscoverOperationalStatus(__int64 a1)
{
  int v1; // ecx
  int v2; // ecx
  __int64 result; // rax
  int v4; // edx

  if ( *(_DWORD *)(a1 + 4120) == 1 )
    return 1LL;
  if ( *(_DWORD *)(a1 + 4120) != 2 )
  {
    if ( *(_DWORD *)(a1 + 4120) == 3 )
      return 5LL;
    if ( *(_DWORD *)(a1 + 4120) != 4 )
    {
      switch ( *(_DWORD *)(a1 + 4120) )
      {
        case 5:
          v4 = *(_DWORD *)(a1 + 4124);
          if ( !v4 )
            return 7LL;
          if ( v4 == 4 )
            return 8LL;
          result = 9LL;
          if ( v4 != 8 )
            return 7LL;
          return result;
        case 6:
          return 10LL;
        case 7:
          return 11LL;
      }
    }
    return 6LL;
  }
  v1 = *(_DWORD *)(a1 + 4124);
  if ( !v1 )
    return 2LL;
  v2 = v1 - 1;
  if ( v2 )
  {
    if ( v2 == 1 )
      return 4LL;
    return 2LL;
  }
  return 3LL;
}

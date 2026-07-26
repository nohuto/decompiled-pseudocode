/*
 * XREFs of ?NdisTraceLoggingDiscoverOperationalStatus@@YA?AW4_NDIS_TRACEFORMAT_OPERATIONAL_STATUS@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0025288
 * Callers:
 *     ?NdisTraceLoggingDeviceStarted@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_TRACEFORMAT_FAILURE_REASON@@J@Z @ 0x1C0012B7C (-NdisTraceLoggingDeviceStarted@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_TRACEFORMAT_FAILURE_REASON@.c)
 *     ?NdisTraceLoggingDeviceStatusChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0018404 (-NdisTraceLoggingDeviceStatusChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NdisTraceLoggingDiscoverOperationalStatus(__int64 a1)
{
  int v1; // ecx
  __int64 result; // rax
  int v3; // edx
  int v4; // ecx

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
          v3 = *(_DWORD *)(a1 + 4124);
          if ( !v3 )
            return 7LL;
          if ( v3 == 4 )
            return 8LL;
          result = 9LL;
          if ( v3 != 8 )
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
  v4 = v1 - 1;
  if ( !v4 )
    return 3LL;
  if ( v4 != 1 )
    return 2LL;
  return 4LL;
}

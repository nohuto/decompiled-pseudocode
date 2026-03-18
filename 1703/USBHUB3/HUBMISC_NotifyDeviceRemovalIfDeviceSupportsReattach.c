/*
 * XREFs of HUBMISC_NotifyDeviceRemovalIfDeviceSupportsReattach @ 0x1C002A274
 * Callers:
 *     HUBPSM20_Disconnected @ 0x1C000E5C0 (HUBPSM20_Disconnected.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001D40 (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C0038110 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBMISC_NotifyDeviceRemovalIfDeviceSupportsReattach(__int64 a1)
{
  __int64 result; // rax

  result = *(unsigned int *)(a1 + 1336);
  if ( (result & 2) != 0 )
  {
    result = *(_QWORD *)a1;
    if ( (*(_DWORD *)(*(_QWORD *)a1 + 2320LL) & 0x10) == 0 && (*(_BYTE *)(a1 + 192) & 1) == 0 )
    {
      result = *(_QWORD *)(a1 + 1328);
      if ( !_InterlockedExchange((volatile __int32 *)(result + 2224), 1) )
      {
        if ( (*(_DWORD *)(*(_QWORD *)(a1 + 1328) + 1616LL) & 2) == 0 )
          _InterlockedOr((volatile signed __int32 *)(a1 + 1336), 0x10u);
        WPP_RECORDER_SF_(
          *(_QWORD *)(a1 + 1432),
          4u,
          5u,
          0x60u,
          (__int64)&WPP_b6e50536a4fa3dade9fc9443e0bc8f19_Traceguids);
        result = (__int64)g_ExNotifyBootDeviceRemoval;
        if ( g_ExNotifyBootDeviceRemoval )
          return g_ExNotifyBootDeviceRemoval(*(_QWORD *)(*(_QWORD *)(a1 + 1328) + 2216LL));
      }
    }
  }
  return result;
}

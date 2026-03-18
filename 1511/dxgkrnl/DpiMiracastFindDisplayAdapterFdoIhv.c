/*
 * XREFs of DpiMiracastFindDisplayAdapterFdoIhv @ 0x1C00C9644
 * Callers:
 *     DxgkMiracastQueryMiracastSupportInternal @ 0x1C00C94C4 (DxgkMiracastQueryMiracastSupportInternal.c)
 *     DpiMiracastFindDisplayAdapterFdo @ 0x1C016D9B4 (DpiMiracastFindDisplayAdapterFdo.c)
 * Callees:
 *     DpiEnableD3Requests @ 0x1C000B7B0 (DpiEnableD3Requests.c)
 *     DpiCheckForOutstandingD3Requests @ 0x1C000DC2C (DpiCheckForOutstandingD3Requests.c)
 *     DpiMiracastGetFdoFromDevice @ 0x1C00C971C (DpiMiracastGetFdoFromDevice.c)
 */

__int64 __fastcall DpiMiracastFindDisplayAdapterFdoIhv(__int64 *a1)
{
  unsigned int v2; // edi
  __int64 FdoFromDevice; // rbx
  int v4; // ecx

  v2 = -1073741275;
  FdoFromDevice = DpiMiracastGetFdoFromDevice(qword_1C0046F00);
  if ( FdoFromDevice )
  {
    KeEnterCriticalRegion();
    if ( *(_BYTE *)(FdoFromDevice + 483) )
      DpiCheckForOutstandingD3Requests(FdoFromDevice);
    ExAcquireResourceSharedLite(*(PERESOURCE *)(FdoFromDevice + 168), 1u);
    v4 = *(_DWORD *)(FdoFromDevice + 236);
    if ( v4 != 2 && (*(_DWORD *)(FdoFromDevice + 240) != 2 || ((v4 - 3) & 0xFFFFFFFC) != 0 || v4 == 4)
      || *(_DWORD *)(FdoFromDevice + 1888) == -1
      || !*(_QWORD *)(FdoFromDevice + 3352) )
    {
      if ( *(_BYTE *)(FdoFromDevice + 483) )
        DpiEnableD3Requests(*(_QWORD *)(FdoFromDevice + 24));
      ExReleaseResourceLite(*(PERESOURCE *)(FdoFromDevice + 168));
      KeLeaveCriticalRegion();
      FdoFromDevice = 0LL;
    }
    else
    {
      v2 = 0;
    }
  }
  *a1 = FdoFromDevice;
  return v2;
}

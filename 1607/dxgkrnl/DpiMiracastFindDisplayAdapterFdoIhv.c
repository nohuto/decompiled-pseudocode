/*
 * XREFs of DpiMiracastFindDisplayAdapterFdoIhv @ 0x1C00DF444
 * Callers:
 *     DxgkMiracastQueryMiracastSupportInternal @ 0x1C00DF204 (DxgkMiracastQueryMiracastSupportInternal.c)
 *     DpiMiracastFindDisplayAdapterFdo @ 0x1C0197174 (DpiMiracastFindDisplayAdapterFdo.c)
 * Callees:
 *     DpiEnableD3Requests @ 0x1C000C484 (DpiEnableD3Requests.c)
 *     DpiCheckForOutstandingD3Requests @ 0x1C000EA98 (DpiCheckForOutstandingD3Requests.c)
 *     DpiMiracastGetFdoFromDevice @ 0x1C00DF51C (DpiMiracastGetFdoFromDevice.c)
 */

__int64 __fastcall DpiMiracastFindDisplayAdapterFdoIhv(__int64 *a1)
{
  unsigned int v2; // edi
  __int64 FdoFromDevice; // rbx
  int v4; // ecx

  v2 = -1073741275;
  FdoFromDevice = DpiMiracastGetFdoFromDevice(qword_1C00570C0);
  if ( FdoFromDevice )
  {
    KeEnterCriticalRegion();
    if ( *(_BYTE *)(FdoFromDevice + 483) )
      DpiCheckForOutstandingD3Requests(FdoFromDevice);
    ExAcquireResourceSharedLite(*(PERESOURCE *)(FdoFromDevice + 168), 1u);
    v4 = *(_DWORD *)(FdoFromDevice + 236);
    if ( v4 != 2 && (*(_DWORD *)(FdoFromDevice + 240) != 2 || ((v4 - 3) & 0xFFFFFFFC) != 0 || v4 == 4)
      || *(_DWORD *)(FdoFromDevice + 3032) == -1
      || !*(_QWORD *)(FdoFromDevice + 4504) )
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

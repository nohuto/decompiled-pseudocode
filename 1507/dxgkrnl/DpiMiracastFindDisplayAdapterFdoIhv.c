/*
 * XREFs of DpiMiracastFindDisplayAdapterFdoIhv @ 0x1C00B4260
 * Callers:
 *     DxgkMiracastQueryMiracastSupportInternal @ 0x1C00B40C4 (DxgkMiracastQueryMiracastSupportInternal.c)
 *     DpiMiracastFindDisplayAdapterFdo @ 0x1C0169234 (DpiMiracastFindDisplayAdapterFdo.c)
 * Callees:
 *     DpiEnableD3Requests @ 0x1C0005A7C (DpiEnableD3Requests.c)
 *     DpiCheckForOutstandingD3Requests @ 0x1C000C824 (DpiCheckForOutstandingD3Requests.c)
 */

__int64 __fastcall DpiMiracastFindDisplayAdapterFdoIhv(__int64 *a1)
{
  __int64 v1; // rbx
  unsigned int v3; // edi
  int v4; // ecx

  v1 = 0LL;
  v3 = -1073741275;
  if ( qword_1C0046E80 )
  {
    v1 = *(_QWORD *)(qword_1C0046E80 + 64);
    KeEnterCriticalRegion();
    if ( *(_BYTE *)(v1 + 451) )
      DpiCheckForOutstandingD3Requests(v1);
    ExAcquireResourceSharedLite(*(PERESOURCE *)(v1 + 168), 1u);
    v4 = *(_DWORD *)(v1 + 236);
    if ( v4 != 2 && (*(_DWORD *)(v1 + 240) != 2 || ((v4 - 3) & 0xFFFFFFFC) != 0 || v4 == 4)
      || *(_DWORD *)(v1 + 1848) == -1
      || !*(_QWORD *)(v1 + 3288) )
    {
      if ( *(_BYTE *)(v1 + 451) )
        DpiEnableD3Requests(*(_QWORD *)(v1 + 24));
      ExReleaseResourceLite(*(PERESOURCE *)(v1 + 168));
      KeLeaveCriticalRegion();
      v1 = 0LL;
    }
    else
    {
      v3 = 0;
    }
  }
  *a1 = v1;
  return v3;
}

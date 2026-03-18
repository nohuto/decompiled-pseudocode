/*
 * XREFs of ?IsWarpAdapterLuid@CDXGIEnumeration@@QEBA_NU_LUID@@@Z @ 0x180036794
 * Callers:
 *     ?IsWarpAdapterLuid@CDisplayManager@@QEAA_NU_LUID@@@Z @ 0x1800380E0 (-IsWarpAdapterLuid@CDisplayManager@@QEAA_NU_LUID@@@Z.c)
 *     ?GetDisplayInfo@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x180043E68 (-GetDisplayInfo@CPartitionVerticalBlankScheduler@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

char __fastcall CDXGIEnumeration::IsWarpAdapterLuid(CDXGIEnumeration *this, struct _LUID a2)
{
  unsigned int v2; // r10d
  char v3; // r8
  unsigned int v4; // r9d
  __int64 v5; // rcx
  __int64 v6; // rcx

  v2 = *((_DWORD *)this + 22);
  v3 = 0;
  v4 = 0;
  if ( v2 )
  {
    v5 = *((_QWORD *)this + 8);
    while ( a2 != *(_QWORD *)(*(_QWORD *)(v5 + 8LL * v4) + 336LL) )
    {
      if ( ++v4 >= v2 )
        return v3;
    }
    v6 = *(_QWORD *)(v5 + 8LL * v4);
    if ( *(_DWORD *)(v6 + 296) == 5140 )
      return *(_DWORD *)(v6 + 300) == 140;
  }
  return v3;
}

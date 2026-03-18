/*
 * XREFs of ?IsWARPAdapterAtIndex@CDisplaySet@@QEBAJIPEA_N@Z @ 0x18005577C
 * Callers:
 *     ?GetDisplayInfo@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x180065230 (-GetDisplayInfo@CPartitionVerticalBlankScheduler@@AEAAXXZ.c)
 *     ?HasTripleBufferCriteria@CDisplay@@QEBAJPEA_N@Z @ 0x1800909B0 (-HasTripleBufferCriteria@CDisplay@@QEBAJPEA_N@Z.c)
 * Callees:
 *     ?IsWarpAdapterLuid@CDXGIEnumeration@@QEBA_NU_LUID@@@Z @ 0x18005655C (-IsWarpAdapterLuid@CDXGIEnumeration@@QEBA_NU_LUID@@@Z.c)
 */

__int64 __fastcall CDisplaySet::IsWARPAdapterAtIndex(CDisplaySet *this, __int64 a2, bool *a3)
{
  __int64 v3; // rcx
  bool IsWarpAdapterLuid; // al
  bool *v5; // r11

  v3 = *((_QWORD *)this + 2);
  *a3 = 0;
  if ( *(_DWORD *)(v3 + 88) )
  {
    _mm_lfence();
    IsWarpAdapterLuid = CDXGIEnumeration::IsWarpAdapterLuid(
                          (CDXGIEnumeration *)v3,
                          *(struct _LUID *)(**(_QWORD **)(v3 + 64) + 336LL));
    *v5 = IsWarpAdapterLuid;
  }
  return 0LL;
}

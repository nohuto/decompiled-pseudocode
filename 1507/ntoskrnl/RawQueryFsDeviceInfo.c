/*
 * XREFs of RawQueryFsDeviceInfo @ 0x1406C70DC
 * Callers:
 *     RawQueryVolumeInformation @ 0x14040C044 (RawQueryVolumeInformation.c)
 * Callees:
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x140006E40 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     ExAcquireRundownProtectionCacheAwareEx @ 0x14001A6C0 (ExAcquireRundownProtectionCacheAwareEx.c)
 */

__int64 __fastcall RawQueryFsDeviceInfo(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  __int64 v9; // rax
  __int64 v10; // rax

  if ( *a4 < 8u )
    return 2147483653LL;
  v9 = *(_QWORD *)(a1 + 200);
  if ( (!v9 || a2 != v9) && !ExAcquireRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 216), 1u) )
    return 3221226094LL;
  *a4 -= 8;
  *(_QWORD *)a3 = 0LL;
  *(_DWORD *)a3 = 7;
  *(_DWORD *)(a3 + 4) = *(_DWORD *)(*(_QWORD *)(a1 + 176) + 52LL);
  v10 = *(_QWORD *)(a1 + 200);
  if ( !v10 || a2 != v10 )
    ExReleaseRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 216), 1u);
  return 0LL;
}

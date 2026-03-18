/*
 * XREFs of RawQueryFsVolumeInfo @ 0x14040C30C
 * Callers:
 *     RawQueryVolumeInformation @ 0x14040C044 (RawQueryVolumeInformation.c)
 * Callees:
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x140006E40 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     ExAcquireRundownProtectionCacheAwareEx @ 0x14001A6C0 (ExAcquireRundownProtectionCacheAwareEx.c)
 */

__int64 __fastcall RawQueryFsVolumeInfo(__int64 a1, __int64 a2, _QWORD *a3, _DWORD *a4)
{
  __int64 v4; // rax
  __int64 v9; // rax

  v4 = *(_QWORD *)(a1 + 200);
  if ( (!v4 || a2 != v4) && !ExAcquireRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 216), 1u) )
    return 3221226094LL;
  *a4 -= 18;
  *a3 = 0LL;
  a3[1] = 0LL;
  a3[2] = 0LL;
  a3[1] = *(unsigned int *)(*(_QWORD *)(a1 + 184) + 24LL);
  *((_BYTE *)a3 + 16) = 0;
  v9 = *(_QWORD *)(a1 + 200);
  if ( !v9 || a2 != v9 )
    ExReleaseRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 216), 1u);
  return 0LL;
}

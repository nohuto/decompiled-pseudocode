/*
 * XREFs of ?VidSchIsGpuAccessBlocked@VIDSCH_EXPORT@@QEAA_NPEAU_VIDSCH_GLOBAL@@PEAVDXGPROCESS@@@Z @ 0x1C000B9D0
 * Callers:
 *     ?DxgkOpenAdapterFromLuid@@YAJPEAU_D3DKMT_OPENADAPTERFROMLUID@@@Z @ 0x1C00B9FD0 (-DxgkOpenAdapterFromLuid@@YAJPEAU_D3DKMT_OPENADAPTERFROMLUID@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VIDSCH_EXPORT::VidSchIsGpuAccessBlocked(
        VIDSCH_EXPORT *this,
        struct _VIDSCH_GLOBAL *a2,
        struct DXGPROCESS *a3)
{
  __int64 v3; // rbx
  __int64 v7; // rax

  v3 = *((_QWORD *)a3 + 9);
  if ( v3 )
    v3 = *(_QWORD *)(v3 + 8LL * (unsigned int)(*(_DWORD *)this - 1) + 16);
  if ( !v3 )
  {
    v7 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v7 + 24) = 825LL;
    WdLogEvent5_WdAssertion(v7);
  }
  return (*(__int64 (__fastcall **)(struct _VIDSCH_GLOBAL *, __int64))(*((_QWORD *)this + 1) + 728LL))(a2, v3);
}

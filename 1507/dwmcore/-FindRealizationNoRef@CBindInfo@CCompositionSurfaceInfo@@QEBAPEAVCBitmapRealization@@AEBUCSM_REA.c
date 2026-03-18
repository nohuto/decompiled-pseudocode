/*
 * XREFs of ?FindRealizationNoRef@CBindInfo@CCompositionSurfaceInfo@@QEBAPEAVCBitmapRealization@@AEBUCSM_REALIZATION_INFO@@@Z @ 0x18008981C
 * Callers:
 *     ?FindRealization@CCompositionSurfaceInfo@@AEAAJAEBUCSM_SURFACE_UPDATE@@PEAPEAVCBitmapRealization@@@Z @ 0x1800869F8 (-FindRealization@CCompositionSurfaceInfo@@AEAAJAEBUCSM_SURFACE_UPDATE@@PEAPEAVCBitmapRealization.c)
 *     ?ProcessSurfaceUpdate@CCompositionSurfaceInfo@@QEAAJAEBUCSM_SURFACE_UPDATE@@@Z @ 0x180086B28 (-ProcessSurfaceUpdate@CCompositionSurfaceInfo@@QEAAJAEBUCSM_SURFACE_UPDATE@@@Z.c)
 * Callees:
 *     <none>
 */

struct CBitmapRealization *__fastcall CCompositionSurfaceInfo::CBindInfo::FindRealizationNoRef(
        CCompositionSurfaceInfo::CBindInfo *this,
        const struct CSM_REALIZATION_INFO *a2)
{
  unsigned int v2; // r11d
  __int64 v3; // r8
  unsigned int v5; // r10d
  __int64 v6; // rbx
  __int64 v7; // rcx
  int v8; // edx
  int v9; // edx
  bool v10; // zf

  v2 = *((_DWORD *)this + 16);
  v3 = 0LL;
  v5 = 0;
  if ( v2 )
  {
    v6 = *((_QWORD *)this + 5);
    do
    {
      v7 = *(_QWORD *)(v6 + 8LL * v5);
      v8 = *(_DWORD *)(v7 + 296);
      if ( v8 != *(_DWORD *)a2 || *(_DWORD *)(v7 + 300) != *((_DWORD *)a2 + 1) )
        goto LABEL_5;
      v9 = v8 - 1;
      if ( v9 )
      {
        if ( v9 != 1 || *(_DWORD *)(v7 + 312) != *((_DWORD *)a2 + 4) )
          goto LABEL_5;
        v10 = *(_DWORD *)(v7 + 316) == *((_DWORD *)a2 + 5);
      }
      else
      {
        v10 = *(_QWORD *)(v7 + 304) == *((_QWORD *)a2 + 1);
      }
      if ( v10 )
        return *(struct CBitmapRealization **)(v6 + 8LL * v5);
LABEL_5:
      ++v5;
    }
    while ( v5 < v2 );
  }
  return (struct CBitmapRealization *)v3;
}

/*
 * XREFs of ?UpdatePosition@CInteractionTracker@@AEAAXAEBUD2DVector3@@@Z @ 0x18014C614
 * Callers:
 *     ?SetProperty@CInteractionTracker@@MEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x18014B930 (-SetProperty@CInteractionTracker@@MEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 *     ?SetRequestedPosition@CInteractionTracker@@AEAA_NAEBUD2DVector3@@_N@Z @ 0x18014BAF0 (-SetRequestedPosition@CInteractionTracker@@AEAA_NAEBUD2DVector3@@_N@Z.c)
 *     ?SetRequestedScale@CInteractionTracker@@AEAA_NM_N@Z @ 0x18014BB58 (-SetRequestedScale@CInteractionTracker@@AEAA_NM_N@Z.c)
 *     ?SetScale@CInteractionTracker@@AEAAXM@Z @ 0x18014BC54 (-SetScale@CInteractionTracker@@AEAAXM@Z.c)
 * Callees:
 *     ?InvalidateAnimationSources@CResource@@IEAAXI@Z @ 0x18008DB00 (-InvalidateAnimationSources@CResource@@IEAAXI@Z.c)
 */

void __fastcall CInteractionTracker::UpdatePosition(CInteractionTracker *this, const struct D2DVector3 *a2)
{
  unsigned __int64 v2; // r8

  v2 = *((_QWORD *)this + 16) - *(_QWORD *)a2;
  if ( !v2 )
    v2 = *((unsigned int *)this + 34) - (unsigned __int64)*((unsigned int *)a2 + 2);
  if ( v2 )
  {
    *((_QWORD *)this + 16) = *(_QWORD *)a2;
    *((_DWORD *)this + 34) = *((_DWORD *)a2 + 2);
    *((_BYTE *)this + 212) = 1;
    CResource::InvalidateAnimationSources(this, 1);
  }
}

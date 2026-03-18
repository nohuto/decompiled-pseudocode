/*
 * XREFs of ?SetMinPosition@CInteractionTracker@@AEAAXAEBUD2DVector3@@@Z @ 0x18014B6EC
 * Callers:
 *     ?ProcessSetMinPosition@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTIONTRACKER_SETMINPOSITION@@@Z @ 0x18010B75C (-ProcessSetMinPosition@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTIONTRACK.c)
 *     ?SetProperty@CInteractionTracker@@MEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x18014B930 (-SetProperty@CInteractionTracker@@MEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 * Callees:
 *     ?InvalidateAnimationSources@CResource@@IEAAXI@Z @ 0x18008DB00 (-InvalidateAnimationSources@CResource@@IEAAXI@Z.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     ?ResolveNewBoundary@CInteractionTracker@@AEAAXW4ScrollAxis@@@Z @ 0x18014B10C (-ResolveNewBoundary@CInteractionTracker@@AEAAXW4ScrollAxis@@@Z.c)
 *     ?StartIdle@CChainingHelper@@QEAAXPEBVCInteractionTracker@@@Z @ 0x180168ACC (-StartIdle@CChainingHelper@@QEAAXPEBVCInteractionTracker@@@Z.c)
 */

void __fastcall CInteractionTracker::SetMinPosition(CInteractionTracker *this, const struct D2DVector3 *a2)
{
  float v3; // xmm0_4
  unsigned __int64 v4; // rcx
  unsigned __int64 v5; // [rsp+20h] [rbp-28h]

  v5 = __PAIR64__(
         COERCE_UNSIGNED_INT(fminf(*((float *)this + 39), *((float *)a2 + 1))),
         COERCE_UNSIGNED_INT(fminf(*((float *)this + 38), *(float *)a2)));
  v3 = fminf(*((float *)this + 40), *((float *)a2 + 2));
  v4 = *(_QWORD *)((char *)this + 140) - v5;
  if ( !v4 )
    v4 = *((unsigned int *)this + 37) - (unsigned __int64)LODWORD(v3);
  if ( v4 )
  {
    *(_QWORD *)((char *)this + 140) = v5;
    *((float *)this + 37) = v3;
    CInteractionTracker::ResolveNewBoundary(this, 0);
    CInteractionTracker::ResolveNewBoundary(this, 1);
    if ( !*((_DWORD *)this + 51) )
      CChainingHelper::StartIdle((CInteractionTracker *)((char *)this + 376), this);
    CResource::InvalidateAnimationSources(this, 19);
  }
}

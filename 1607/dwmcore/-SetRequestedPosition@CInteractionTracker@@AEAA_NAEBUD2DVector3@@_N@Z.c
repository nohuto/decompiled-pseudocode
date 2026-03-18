/*
 * XREFs of ?SetRequestedPosition@CInteractionTracker@@AEAA_NAEBUD2DVector3@@_N@Z @ 0x18014BAF0
 * Callers:
 *     ?ProcessApplyPositionShift@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTIONTRACKER_APPLYPOSITIONSHIFT@@PEBXI@Z @ 0x18010AFF4 (-ProcessApplyPositionShift@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTIONT.c)
 *     ?ProcessSetRequestedPosition@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTIONTRACKER_SETREQUESTEDPOSITION@@@Z @ 0x18010B168 (-ProcessSetRequestedPosition@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTIO.c)
 *     ?ProcessSetRequestedPositionDelta@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTIONTRACKER_SETREQUESTEDPOSITIONDELTA@@@Z @ 0x18010B234 (-ProcessSetRequestedPositionDelta@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTER.c)
 *     ?SetProperty@CInteractionTracker@@MEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x18014B930 (-SetProperty@CInteractionTracker@@MEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 * Callees:
 *     ?TransitionToIdle@CInteractionTracker@@AEAAXXZ @ 0x18014C300 (-TransitionToIdle@CInteractionTracker@@AEAAXXZ.c)
 *     ?UpdatePosition@CInteractionTracker@@AEAAXAEBUD2DVector3@@@Z @ 0x18014C614 (-UpdatePosition@CInteractionTracker@@AEAAXAEBUD2DVector3@@@Z.c)
 *     ?StartIdle@CChainingHelper@@QEAAXPEBVCInteractionTracker@@@Z @ 0x180168ACC (-StartIdle@CChainingHelper@@QEAAXPEBVCInteractionTracker@@@Z.c)
 */

char __fastcall CInteractionTracker::SetRequestedPosition(
        CInteractionTracker *this,
        const struct D2DVector3 *a2,
        char a3)
{
  int v3; // eax
  char v4; // bl

  v3 = *((_DWORD *)this + 51);
  v4 = 0;
  if ( !v3 )
  {
LABEL_5:
    v4 = 1;
    CInteractionTracker::UpdatePosition(this, a2);
    CChainingHelper::StartIdle((CInteractionTracker *)((char *)this + 376), this);
    return v4;
  }
  if ( (unsigned int)(v3 - 2) <= 1 )
  {
    if ( !a3 )
      CInteractionTracker::TransitionToIdle(this);
    goto LABEL_5;
  }
  return v4;
}

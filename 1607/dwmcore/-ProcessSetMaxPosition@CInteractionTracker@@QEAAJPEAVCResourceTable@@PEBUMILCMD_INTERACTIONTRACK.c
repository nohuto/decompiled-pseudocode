/*
 * XREFs of ?ProcessSetMaxPosition@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTIONTRACKER_SETMAXPOSITION@@@Z @ 0x18010B798
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18003CEA0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?SetMaxPosition@CInteractionTracker@@AEAAXAEBUD2DVector3@@@Z @ 0x18014B59C (-SetMaxPosition@CInteractionTracker@@AEAAXAEBUD2DVector3@@@Z.c)
 */

__int64 __fastcall CInteractionTracker::ProcessSetMaxPosition(
        CInteractionTracker *this,
        struct CResourceTable *a2,
        const struct MILCMD_INTERACTIONTRACKER_SETMAXPOSITION *a3)
{
  int v3; // xmm1_4
  _DWORD v5[6]; // [rsp+20h] [rbp-18h] BYREF

  v3 = *((_DWORD *)a3 + 3);
  v5[0] = *((_DWORD *)a3 + 2);
  v5[2] = 0;
  v5[1] = v3;
  CInteractionTracker::SetMaxPosition(this, (const struct D2DVector3 *)v5);
  return 0LL;
}

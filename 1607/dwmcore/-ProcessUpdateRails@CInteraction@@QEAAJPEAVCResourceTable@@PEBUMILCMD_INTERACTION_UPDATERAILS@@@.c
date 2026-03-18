/*
 * XREFs of ?ProcessUpdateRails@CInteraction@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTION_UPDATERAILS@@@Z @ 0x1800A4C78
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18003CEA0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?SetRailsEnabled@CInteractionProcessor@@QEAAX_N0@Z @ 0x1800A4E58 (-SetRailsEnabled@CInteractionProcessor@@QEAAX_N0@Z.c)
 */

__int64 __fastcall CInteraction::ProcessUpdateRails(
        CInteraction *this,
        struct CResourceTable *a2,
        const struct MILCMD_INTERACTION_UPDATERAILS *a3)
{
  CInteractionProcessor::SetRailsEnabled(
    (CInteraction *)((char *)this + 408),
    *((_DWORD *)a3 + 2) != 0,
    *((_DWORD *)a3 + 3) != 0);
  return 0LL;
}

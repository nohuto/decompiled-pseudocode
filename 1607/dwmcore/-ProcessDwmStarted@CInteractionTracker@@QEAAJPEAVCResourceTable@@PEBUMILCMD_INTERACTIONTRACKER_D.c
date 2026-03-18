/*
 * XREFs of ?ProcessDwmStarted@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTIONTRACKER_DWMSTARTED@@@Z @ 0x18010B98C
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18003CEA0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?AddPendingStateChange@CInteractionTracker@@QEAAXW4ScrollState@@@Z @ 0x180149D28 (-AddPendingStateChange@CInteractionTracker@@QEAAXW4ScrollState@@@Z.c)
 */

__int64 __fastcall CInteractionTracker::ProcessDwmStarted(
        CInteractionTracker *this,
        struct CResourceTable *a2,
        const struct MILCMD_INTERACTIONTRACKER_DWMSTARTED *a3)
{
  *((_DWORD *)this + 93) = *((_DWORD *)a3 + 1);
  *((_DWORD *)this + 92) = *((_DWORD *)a2 + 12);
  if ( *((_DWORD *)a3 + 2) )
  {
    CInteractionTracker::AddPendingStateChange(this, 0LL);
    *((_BYTE *)this + 212) = 1;
  }
  return 0LL;
}

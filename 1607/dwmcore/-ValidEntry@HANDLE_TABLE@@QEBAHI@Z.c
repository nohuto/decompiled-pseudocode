/*
 * XREFs of ?ValidEntry@HANDLE_TABLE@@QEBAHI@Z @ 0x180037E18
 * Callers:
 *     ?GetEntry@CResourceTable@@IEAAPEAUHANDLE_ENTRY@1@I@Z @ 0x18003AA44 (-GetEntry@CResourceTable@@IEAAPEAUHANDLE_ENTRY@1@I@Z.c)
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18003CEA0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 *     ?GetEntry@CHandleTable@@AEBAPEAUHANDLE_ENTRY@1@I@Z @ 0x180047788 (-GetEntry@CHandleTable@@AEBAPEAUHANDLE_ENTRY@1@I@Z.c)
 *     ?ProcessInsertChildAt@CVisual@@UEAAJPEBVCResourceTable@@PEBUMILCMD_VISUAL_INSERTCHILDAT@@@Z @ 0x18004F610 (-ProcessInsertChildAt@CVisual@@UEAAJPEBVCResourceTable@@PEBUMILCMD_VISUAL_INSERTCHILDAT@@@Z.c)
 *     ?GetEntry@CInteraction@@CAPEAUHANDLE_ENTRY@1@I@Z @ 0x1800A639C (-GetEntry@CInteraction@@CAPEAUHANDLE_ENTRY@1@I@Z.c)
 *     ?PostMessageToClient@CConnection@@QEAAJPEBUUCE_RDP_HEADER@@@Z @ 0x1800A84F8 (-PostMessageToClient@CConnection@@QEAAJPEBUUCE_RDP_HEADER@@@Z.c)
 *     ?GetMasterTableEntry@CChannelTable@@QEAAJIPEAPEAUCLIENT_CHANNEL_HANDLE_ENTRY@@@Z @ 0x1800A894C (-GetMasterTableEntry@CChannelTable@@QEAAJIPEAPEAUCLIENT_CHANNEL_HANDLE_ENTRY@@@Z.c)
 *     ?OnConnectionLostNotification@CConnection@@QEAAXJ@Z @ 0x180113A58 (-OnConnectionLostNotification@CConnection@@QEAAXJ@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall HANDLE_TABLE::ValidEntry(HANDLE_TABLE *this, unsigned int a2)
{
  return a2 && a2 < *((_DWORD *)this + 3) && *(_DWORD *)(*((_DWORD *)this + 2) * a2 + *((_QWORD *)this + 3));
}

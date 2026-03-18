/*
 * XREFs of ?ClearActiveManipulation@CInteractionTracker@@AEAAXXZ @ 0x18014A3B4
 * Callers:
 *     ?ProcessSetManipulations@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTIONTRACKER_SETMANIPULATIONS@@PEBXI@Z @ 0x18010B540 (-ProcessSetManipulations@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTIONTRA.c)
 *     ?DestroyScrollAnimations@CInteractionTracker@@AEAAXXZ @ 0x18014A3F0 (-DestroyScrollAnimations@CInteractionTracker@@AEAAXXZ.c)
 *     ?TransitionToInContact@CInteractionTracker@@AEAAXPEAVCManipulation@@@Z @ 0x18014C374 (-TransitionToInContact@CInteractionTracker@@AEAAXPEAVCManipulation@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCInteraction@@@WRL@Microsoft@@IEAAKXZ @ 0x1800A57F0 (-InternalRelease@-$ComPtr@VCInteraction@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@VCManipulation@@@WRL@Microsoft@@IEAAKXZ @ 0x18014AD54 (-InternalRelease@-$ComPtr@VCManipulation@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall CInteractionTracker::ClearActiveManipulation(CInteractionTracker *this)
{
  _QWORD *v2; // rcx

  v2 = (_QWORD *)((char *)this + 544);
  if ( *v2 )
    Microsoft::WRL::ComPtr<CManipulation>::InternalRelease(v2);
  if ( *((_QWORD *)this + 69) )
    Microsoft::WRL::ComPtr<CInteraction>::InternalRelease((__int64 *)this + 69);
}

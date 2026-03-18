/*
 * XREFs of InternalRemoveProp @ 0x1C0054080
 * Callers:
 *     xxxFreeWindow @ 0x1C00543AC (xxxFreeWindow.c)
 *     ?SetRedirectionBitmap@@YAHPEAUtagWND@@QEAUHBITMAP__@@H@Z @ 0x1C0063658 (-SetRedirectionBitmap@@YAHPEAUtagWND@@QEAUHBITMAP__@@H@Z.c)
 *     xxxInheritWindowMonitor @ 0x1C00712C4 (xxxInheritWindowMonitor.c)
 *     DestroyWindowSmIcon @ 0x1C008E0D8 (DestroyWindowSmIcon.c)
 *     xxxFlashWindow @ 0x1C0096FE8 (xxxFlashWindow.c)
 *     ?RemoveAndDeleteProp@CWindowProp@@QEAAXXZ @ 0x1C009991C (-RemoveAndDeleteProp@CWindowProp@@QEAAXXZ.c)
 *     ?SetProp@CWindowProp@@QEAAHPEAUtagWND@@@Z @ 0x1C0099960 (-SetProp@CWindowProp@@QEAAHPEAUtagWND@@@Z.c)
 *     _SetTargetingWindowValue @ 0x1C0120BA4 (_SetTargetingWindowValue.c)
 *     NtUserShutdownBlockReasonCreate @ 0x1C012E380 (NtUserShutdownBlockReasonCreate.c)
 *     NtUserModifyWindowTouchCapability @ 0x1C012F850 (NtUserModifyWindowTouchCapability.c)
 *     _SetTouchWindowFlags @ 0x1C012F8D8 (_SetTouchWindowFlags.c)
 *     NtUserShutdownReasonDestroy @ 0x1C0132DF0 (NtUserShutdownReasonDestroy.c)
 *     xxxDestroyCorrespondingGhostWindow @ 0x1C01480A8 (xxxDestroyCorrespondingGhostWindow.c)
 *     ?_GhostWindow@@YAHPEAUtagWND@@@Z @ 0x1C0148218 (-_GhostWindow@@YAHPEAUtagWND@@@Z.c)
 *     xxxRegisterGhostWindow @ 0x1C0148380 (xxxRegisterGhostWindow.c)
 *     UserRemoveWindowedSwapChain @ 0x1C014E400 (UserRemoveWindowedSwapChain.c)
 *     xxxHandleDestroyGhostWindow @ 0x1C0152B90 (xxxHandleDestroyGhostWindow.c)
 *     UserAssociateHwnd @ 0x1C01DEBC0 (UserAssociateHwnd.c)
 *     ?UnlinkConv@@YAPEAUtagDDECONV@@PEAU1@@Z @ 0x1C01E1AB8 (-UnlinkConv@@YAPEAUtagDDECONV@@PEAU1@@Z.c)
 *     xxxRegisterSiblingFrostWindow @ 0x1C01EE750 (xxxRegisterSiblingFrostWindow.c)
 *     ?DDEImpDecRefInitWorker@@YAXPEAUHWND__@@@Z @ 0x1C02102E0 (-DDEImpDecRefInitWorker@@YAXPEAUHWND__@@@Z.c)
 *     SetDisplayAffinity @ 0x1C0231484 (SetDisplayAffinity.c)
 *     _SetWindowContextHelpId @ 0x1C0234AA0 (_SetWindowContextHelpId.c)
 * Callees:
 *     _FindProp @ 0x1C007B010 (_FindProp.c)
 */

_QWORD *InternalRemoveProp()
{
  _QWORD *result; // rax
  __int64 v1; // r10
  _OWORD *v2; // r8
  __int64 v3; // rdx
  __int64 v4; // rcx

  result = (_QWORD *)FindProp();
  v2 = result;
  if ( result )
  {
    result = (_QWORD *)*result;
    --*(_DWORD *)(*(_QWORD *)(v1 + 168) + 4LL);
    v3 = *(_QWORD *)(v1 + 168);
    v4 = 2LL * *(unsigned int *)(v3 + 4);
    *v2 = *(_OWORD *)(v3 + 16LL * *(unsigned int *)(v3 + 4) + 8);
    *(_QWORD *)(v3 + 8 * v4 + 8) = 0LL;
    *(_QWORD *)(v3 + 8 * v4 + 16) = 0LL;
  }
  return result;
}

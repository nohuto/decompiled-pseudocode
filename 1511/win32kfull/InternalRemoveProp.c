/*
 * XREFs of InternalRemoveProp @ 0x1C007FC50
 * Callers:
 *     xxxFreeWindow @ 0x1C0066C00 (xxxFreeWindow.c)
 *     ?SetRedirectionBitmap@@YAHPEAUtagWND@@QEAUHBITMAP__@@H@Z @ 0x1C007C284 (-SetRedirectionBitmap@@YAHPEAUtagWND@@QEAUHBITMAP__@@H@Z.c)
 *     ?SetProp@CWindowProp@@QEAAHPEAUtagWND@@@Z @ 0x1C0080330 (-SetProp@CWindowProp@@QEAAHPEAUtagWND@@@Z.c)
 *     ?RemoveAndDeleteProp@CWindowProp@@QEAAXXZ @ 0x1C00803A8 (-RemoveAndDeleteProp@CWindowProp@@QEAAXXZ.c)
 *     xxxFlashWindow @ 0x1C00C6ACC (xxxFlashWindow.c)
 *     NtUserShutdownBlockReasonCreate @ 0x1C00D2DD0 (NtUserShutdownBlockReasonCreate.c)
 *     DestroyWindowSmIcon @ 0x1C00F9404 (DestroyWindowSmIcon.c)
 *     _SetTargetingWindowValue @ 0x1C00FF024 (_SetTargetingWindowValue.c)
 *     NtUserModifyWindowTouchCapability @ 0x1C010DF70 (NtUserModifyWindowTouchCapability.c)
 *     _SetTouchWindowFlags @ 0x1C010DFF8 (_SetTouchWindowFlags.c)
 *     NtUserShutdownReasonDestroy @ 0x1C0111D80 (NtUserShutdownReasonDestroy.c)
 *     xxxDestroyCorrespondingGhostWindow @ 0x1C01424F8 (xxxDestroyCorrespondingGhostWindow.c)
 *     ?_GhostWindow@@YAHPEAUtagWND@@@Z @ 0x1C01426D0 (-_GhostWindow@@YAHPEAUtagWND@@@Z.c)
 *     xxxRegisterGhostWindow @ 0x1C0142840 (xxxRegisterGhostWindow.c)
 *     UserRemoveWindowedSwapChain @ 0x1C0149650 (UserRemoveWindowedSwapChain.c)
 *     xxxHandleDestroyGhostWindow @ 0x1C014D320 (xxxHandleDestroyGhostWindow.c)
 *     _SetWindowContextHelpId @ 0x1C014D700 (_SetWindowContextHelpId.c)
 *     UserAssociateHwnd @ 0x1C01E8348 (UserAssociateHwnd.c)
 *     ?UnlinkConv@@YAPEAUtagDDECONV@@PEAU1@@Z @ 0x1C01EAF38 (-UnlinkConv@@YAPEAUtagDDECONV@@PEAU1@@Z.c)
 *     xxxRegisterSiblingFrostWindow @ 0x1C01F7580 (xxxRegisterSiblingFrostWindow.c)
 *     ?DDEImpDecRefInitWorker@@YAXPEAUHWND__@@@Z @ 0x1C0217740 (-DDEImpDecRefInitWorker@@YAXPEAUHWND__@@@Z.c)
 *     SetDisplayAffinity @ 0x1C0239428 (SetDisplayAffinity.c)
 * Callees:
 *     _FindProp @ 0x1C0054934 (_FindProp.c)
 */

_QWORD *__fastcall InternalRemoveProp(__int64 a1, __int16 a2, int a3)
{
  _QWORD *result; // rax
  __int64 v4; // r10
  _OWORD *v5; // r8
  __int64 v6; // rdx
  __int64 v7; // rcx

  result = (_QWORD *)FindProp(a1, a2, a3);
  v5 = result;
  if ( result )
  {
    result = (_QWORD *)*result;
    --*(_DWORD *)(*(_QWORD *)(v4 + 168) + 4LL);
    v6 = *(_QWORD *)(v4 + 168);
    v7 = 2LL * *(unsigned int *)(v6 + 4);
    *v5 = *(_OWORD *)(v6 + 16LL * *(unsigned int *)(v6 + 4) + 8);
    *(_QWORD *)(v6 + 8 * v7 + 8) = 0LL;
    *(_QWORD *)(v6 + 8 * v7 + 16) = 0LL;
  }
  return result;
}

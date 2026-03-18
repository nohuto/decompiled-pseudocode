/*
 * XREFs of InternalRemoveProp @ 0x1C008748C
 * Callers:
 *     ?SetRedirectionBitmap@@YAHPEAUtagWND@@QEAUHBITMAP__@@H@Z @ 0x1C000E358 (-SetRedirectionBitmap@@YAHPEAUtagWND@@QEAUHBITMAP__@@H@Z.c)
 *     xxxFlashWindow @ 0x1C00776EC (xxxFlashWindow.c)
 *     DestroyWindowSmIcon @ 0x1C0086174 (DestroyWindowSmIcon.c)
 *     xxxFreeWindow @ 0x1C0088BC8 (xxxFreeWindow.c)
 *     ?SetProp@CWindowProp@@QEAAHPEAUtagWND@@@Z @ 0x1C00E9EA0 (-SetProp@CWindowProp@@QEAAHPEAUtagWND@@@Z.c)
 *     ?RemoveAndDeleteProp@CWindowProp@@QEAAXXZ @ 0x1C00E9F18 (-RemoveAndDeleteProp@CWindowProp@@QEAAXXZ.c)
 *     _SetTargetingWindowValue @ 0x1C00F9120 (_SetTargetingWindowValue.c)
 *     NtUserModifyWindowTouchCapability @ 0x1C00FFAC0 (NtUserModifyWindowTouchCapability.c)
 *     _SetTouchWindowFlags @ 0x1C00FFB48 (_SetTouchWindowFlags.c)
 *     xxxDestroyCorrespondingGhostWindow @ 0x1C0117594 (xxxDestroyCorrespondingGhostWindow.c)
 *     ?_GhostWindow@@YAHPEAUtagWND@@@Z @ 0x1C011776C (-_GhostWindow@@YAHPEAUtagWND@@@Z.c)
 *     xxxRegisterGhostWindow @ 0x1C01178D0 (xxxRegisterGhostWindow.c)
 *     UserRemoveWindowedSwapChain @ 0x1C0120060 (UserRemoveWindowedSwapChain.c)
 *     xxxHandleDestroyGhostWindow @ 0x1C0124440 (xxxHandleDestroyGhostWindow.c)
 *     _SetWindowContextHelpId @ 0x1C0124760 (_SetWindowContextHelpId.c)
 *     NtUserShutdownBlockReasonCreate @ 0x1C0130DE0 (NtUserShutdownBlockReasonCreate.c)
 *     NtUserShutdownReasonDestroy @ 0x1C0131650 (NtUserShutdownReasonDestroy.c)
 *     UserAssociateHwnd @ 0x1C01E7ED4 (UserAssociateHwnd.c)
 *     ?UnlinkConv@@YAPEAUtagDDECONV@@PEAU1@@Z @ 0x1C01EAA28 (-UnlinkConv@@YAPEAUtagDDECONV@@PEAU1@@Z.c)
 *     xxxRegisterSiblingFrostWindow @ 0x1C01F70C0 (xxxRegisterSiblingFrostWindow.c)
 *     ?DDEImpDecRefInitWorker@@YAXPEAUHWND__@@@Z @ 0x1C02178E0 (-DDEImpDecRefInitWorker@@YAXPEAUHWND__@@@Z.c)
 *     SetDisplayAffinity @ 0x1C0239014 (SetDisplayAffinity.c)
 * Callees:
 *     _FindProp @ 0x1C0065DC0 (_FindProp.c)
 */

_QWORD *__fastcall InternalRemoveProp(__int64 a1, __int16 a2, int a3)
{
  _QWORD *result; // rax
  __int64 v4; // rcx
  __int64 v5; // r10
  _OWORD *v6; // r8
  __int64 v7; // rdx
  __int64 v8; // rcx

  result = (_QWORD *)FindProp(a1, a2, a3);
  v6 = result;
  if ( result )
  {
    result = (_QWORD *)*result;
    --*(_DWORD *)(*(_QWORD *)(v4 + 168) + 4LL);
    v7 = *(_QWORD *)(v5 + 168);
    v8 = 2LL * *(unsigned int *)(v7 + 4);
    *v6 = *(_OWORD *)(v7 + 16LL * *(unsigned int *)(v7 + 4) + 8);
    *(_QWORD *)(v7 + 8 * v8 + 8) = 0LL;
    *(_QWORD *)(v7 + 8 * v8 + 16) = 0LL;
  }
  return result;
}

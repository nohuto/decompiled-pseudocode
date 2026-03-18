/*
 * XREFs of ?SetDelegateAction@PointerList@@YAX_KW4tagDCPACTION@@@Z @ 0x1C01FCBA4
 * Callers:
 *     DelegateReleasePointerMessage @ 0x1C01E1118 (DelegateReleasePointerMessage.c)
 *     ?AddThreadPointerData@@YAHPEAUtagTHREADINPUTPOINTERLIST@@GK_KIPEAUHWND__@@H@Z @ 0x1C01F7798 (-AddThreadPointerData@@YAHPEAUtagTHREADINPUTPOINTERLIST@@GK_KIPEAUHWND__@@H@Z.c)
 *     ?xxxNotifyCaptureChangeIfCaptured@@YAH_KPEAUtagWND@@H@Z @ 0x1C01FAC0C (-xxxNotifyCaptureChangeIfCaptured@@YAH_KPEAUtagWND@@H@Z.c)
 * Callees:
 *     ?SetDelegateActionInt@@YAXPEAUtagPOINTERCAPTUREDATA@@W4tagDCPACTION@@@Z @ 0x1C01FCBBC (-SetDelegateActionInt@@YAXPEAUtagPOINTERCAPTUREDATA@@W4tagDCPACTION@@@Z.c)
 */

__int64 __fastcall PointerList::SetDelegateAction(__int64 a1)
{
  __int64 result; // rax

  if ( *(_QWORD *)(a1 + 40) )
    return SetDelegateActionInt();
  return result;
}

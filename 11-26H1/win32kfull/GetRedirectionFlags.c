/*
 * XREFs of GetRedirectionFlags @ 0x140042B14
 * Callers:
 *     zzzUpdateShadowAlpha @ 0x140011CCC (zzzUpdateShadowAlpha.c)
 *     _SetLayeredWindowAttributes @ 0x140012004 (_SetLayeredWindowAttributes.c)
 *     RecreateRedirectionBitmap @ 0x140041830 (RecreateRedirectionBitmap.c)
 *     _GetLayeredWindowAttributes @ 0x1400420F0 (_GetLayeredWindowAttributes.c)
 *     zzzUpdateLayeredWindow @ 0x1400421A8 (zzzUpdateLayeredWindow.c)
 *     ?zzzApplyShadow@@YAHPEAUtagWND@@0@Z @ 0x1400831B0 (-zzzApplyShadow@@YAHPEAUtagWND@@0@Z.c)
 *     xxxPrintWindow @ 0x14011CB78 (xxxPrintWindow.c)
 *     ?RestoreOldRedirectionBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@@Z @ 0x140293FB4 (-RestoreOldRedirectionBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@@Z.c)
 * Callees:
 *     _GetProp @ 0x14003A810 (_GetProp.c)
 */

__int64 __fastcall GetRedirectionFlags(__int64 a1, __int64 a2)
{
  unsigned int v3; // edi
  __int64 UserSessionState; // rax
  __int64 Prop; // rax

  v3 = 0;
  UserSessionState = W32GetUserSessionState(a1, a2);
  Prop = GetProp(a1, *(unsigned __int16 *)(UserSessionState + 41398), 1u);
  if ( Prop )
    return *(unsigned int *)(Prop + 32);
  return v3;
}

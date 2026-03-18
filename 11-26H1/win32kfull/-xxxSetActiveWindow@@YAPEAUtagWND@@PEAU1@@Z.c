/*
 * XREFs of ?xxxSetActiveWindow@@YAPEAUtagWND@@PEAU1@@Z @ 0x140219A88
 * Callers:
 *     xxxActivateEnabledPopup @ 0x1401AF0B0 (xxxActivateEnabledPopup.c)
 *     NtUserSetActiveWindow @ 0x140219A00 (NtUserSetActiveWindow.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     HMValidateHandleNoSecure @ 0x14004C2D0 (HMValidateHandleNoSecure.c)
 *     ?xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateStrategy@@W4WindowActivateReason@@W4LocalActivationOptions@@@Z @ 0x140191B8C (-xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateSt.c)
 */

struct tagWND *__fastcall xxxSetActiveWindow(struct tagWND *a1)
{
  char *v2; // r8
  _QWORD *v4; // rcx
  __int64 v5; // rdi

  v2 = (char *)PtiCurrent((__int64)a1) + 464;
  if ( a1 && *(_QWORD *)(*((_QWORD *)a1 + 2) + 464LL) != *(_QWORD *)v2 )
    return 0LL;
  v4 = *(_QWORD **)(*(_QWORD *)v2 + 128LL);
  v5 = v4 ? *v4 : 0LL;
  if ( !a1 )
    return 0LL;
  xxxActivateWindowWithOptions((__int64)a1, 0, 0, 1, 0);
  return (struct tagWND *)HMValidateHandleNoSecure(v5, 1);
}

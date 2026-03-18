/*
 * XREFs of ?xxxEndGetWidnowTrackInfoAsync@@YAXPEAUtagWND@@@Z @ 0x1402F0A94
 * Callers:
 *     xxxProcessAsyncSendMessage @ 0x140036C10 (xxxProcessAsyncSendMessage.c)
 * Callees:
 *     xxxInitSendValidateMinMaxInfoEx @ 0x14003144C (xxxInitSendValidateMinMaxInfoEx.c)
 *     ?TrackedWindowTrackingInfo@NotifyShell@@YAXPEAUtagWND@@QEBUtagMINMAXINFO@@@Z @ 0x1402DC110 (-TrackedWindowTrackingInfo@NotifyShell@@YAXPEAUtagWND@@QEBUtagMINMAXINFO@@@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

void __fastcall xxxEndGetWidnowTrackInfoAsync(struct tagWND *this)
{
  const struct tagMINMAXINFO *v2; // r8
  _OWORD v3[2]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v4; // [rsp+40h] [rbp-18h]

  v4 = 0LL;
  memset(v3, 0, sizeof(v3));
  xxxInitSendValidateMinMaxInfoEx(this, (__int64)v3, 0LL);
  NotifyShell::TrackedWindowTrackingInfo(this, (struct tagWND *)v3, v2);
}

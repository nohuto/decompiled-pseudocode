/*
 * XREFs of NtUserGetSendMessageReceiver @ 0x1402B4BB0
 * Callers:
 *     <none>
 * Callees:
 *     Feature_UIPIAlwaysOn2__private_IsEnabledDeviceUsageNoInline @ 0x14029D1AC (Feature_UIPIAlwaysOn2__private_IsEnabledDeviceUsageNoInline.c)
 *     ?_GetSendMessageReceiver@@YAPEAUtagWND@@K@Z @ 0x1402AE56C (-_GetSendMessageReceiver@@YAPEAUtagWND@@K@Z.c)
 *     ?_NtUserGetSendMessageReceiver@@YAPEAUHWND__@@K@Z @ 0x1402AE694 (-_NtUserGetSendMessageReceiver@@YAPEAUHWND__@@K@Z.c)
 */

__int64 __fastcall NtUserGetSendMessageReceiver(unsigned int a1)
{
  __int64 v2; // rbx
  struct tagWND *SendMessageReceiver; // rax
  __int64 v5; // rcx

  v2 = 0LL;
  if ( (unsigned int)Feature_UIPIAlwaysOn2__private_IsEnabledDeviceUsageNoInline() )
    return _NtUserGetSendMessageReceiver(a1);
  EnterCrit(0LL, 0LL);
  SendMessageReceiver = _GetSendMessageReceiver(a1);
  if ( SendMessageReceiver )
    v2 = *(_QWORD *)SendMessageReceiver;
  UserSessionSwitchLeaveCrit(v5);
  return v2;
}

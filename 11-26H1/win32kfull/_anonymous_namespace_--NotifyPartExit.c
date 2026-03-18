/*
 * XREFs of _anonymous_namespace_::NotifyPartExit @ 0x140046D64
 * Callers:
 *     ?HitTestPartUpdate@NotifyShell@@YAXAEBUtagDESKTOP@@PEAUtagWND@@HAEBUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x140046B9C (-HitTestPartUpdate@NotifyShell@@YAXAEBUtagDESKTOP@@PEAUtagWND@@HAEBUtagINPUT_MESSAGE_SOURCE@@@Z.c)
 * Callees:
 *     ?SendNotifyMessageAlways@@YA_NPEAUtagWND@@I_K_JW4SNMAOptions@@@Z @ 0x140046F44 (-SendNotifyMessageAlways@@YA_NPEAUtagWND@@I_K_JW4SNMAOptions@@@Z.c)
 *     ?IsThreadHung@@YA_NPEBUtagTHREADINFO@@@Z @ 0x140046FE4 (-IsThreadHung@@YA_NPEBUtagTHREADINFO@@@Z.c)
 *     _anonymous_namespace_::ResolveWindowManagementTargetWindow @ 0x140295B74 (_anonymous_namespace_--ResolveWindowManagementTargetWindow.c)
 *     _anonymous_namespace_::SeverWindowManagementConnectionToShell @ 0x1402DBAC4 (_anonymous_namespace_--SeverWindowManagementConnectionToShell.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

__int64 __fastcall anonymous_namespace_::NotifyPartExit(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rax
  __int64 v4; // rdi
  _BYTE v5[8]; // [rsp+30h] [rbp-68h] BYREF
  int v6; // [rsp+38h] [rbp-60h]
  __int64 v7; // [rsp+40h] [rbp-58h]
  __int64 v8; // [rsp+48h] [rbp-50h]

  result = *(unsigned int *)(a1 + 380);
  if ( (result & 1) != 0 )
  {
    memset_0(v5, 0, 0x50uLL);
    v3 = *(_QWORD *)(a1 + 24);
    v6 = 10;
    v8 = 0LL;
    v7 = *(unsigned __int16 *)(v3 + 200) << 16;
    result = anonymous_namespace_::ResolveWindowManagementTargetWindow(0LL);
    v4 = result;
    if ( result )
    {
      if ( IsThreadHung(*(const struct tagTHREADINFO **)(result + 16)) )
        result = anonymous_namespace_::SeverWindowManagementConnectionToShell();
      else
        result = SendNotifyMessageAlways(v4, 834LL, 0LL, v5, 3);
    }
    *(_DWORD *)(a1 + 380) &= ~1u;
  }
  return result;
}

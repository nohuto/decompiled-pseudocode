/*
 * XREFs of ?OnSelect@SpeechRuntimeListener@@AEAAJXZ @ 0x180055D48
 * Callers:
 *     ?OnMessageCallbackStatic@SpeechRuntimeListener@@CAJPEAXPEBXH@Z @ 0x180056010 (-OnMessageCallbackStatic@SpeechRuntimeListener@@CAJPEAXPEBXH@Z.c)
 * Callees:
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000742C (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PopulateGenericMPCInputInfo@MPCInputInfoHelper@@SAJW4MPCAugmentedInputGestureType@@W4MPCGestureType@@KAEAUInputInfo@@_N@Z @ 0x180054E7C (-PopulateGenericMPCInputInfo@MPCInputInfoHelper@@SAJW4MPCAugmentedInputGestureType@@W4MPCGesture.c)
 *     __security_check_cookie @ 0x18009CCC0 (__security_check_cookie.c)
 *     memset @ 0x18009D814 (memset.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall SpeechRuntimeListener::OnSelect(SpeechRuntimeListener *this)
{
  int v2; // eax
  __int64 v3; // rcx
  int v4; // eax
  LARGE_INTEGER v6[236]; // [rsp+30h] [rbp-778h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+7A8h] [rbp+0h]

  memset(v6, 0, sizeof(v6));
  v2 = MPCInputInfoHelper::PopulateGenericMPCInputInfo(0, 7u, *((_DWORD *)this + 20), v6, 1);
  if ( v2 < 0 )
  {
    wil::details::in1diag3::_FailFast_Hr(
      retaddr,
      (void *)0x35,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\speechruntimelistener.cpp",
      (const char *)(unsigned int)v2);
    __debugbreak();
  }
  v3 = *((_QWORD *)this + 9);
  v6[164].HighPart = -1;
  v6[163] = v6[2];
  v6[162].LowPart = 1;
  v4 = (*(__int64 (__fastcall **)(__int64, LARGE_INTEGER *))(*(_QWORD *)v3 + 24LL))(v3, v6);
  if ( v4 < 0 )
  {
    wil::details::in1diag3::_FailFast_Hr(
      retaddr,
      (void *)0x3D,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\speechruntimelistener.cpp",
      (const char *)(unsigned int)v4);
    JUMPOUT(0x180055E24LL);
  }
  return 0LL;
}

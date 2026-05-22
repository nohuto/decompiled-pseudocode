/*
 * XREFs of ?Invoke@SpectrumListener@@EEAAJUMPCMatrix4x4@@@Z @ 0x1800555B0
 * Callers:
 *     <none>
 * Callees:
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000742C (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?QueueInput@MPCRawInputProvider@@QEAAJAEAUInputInfo@@@Z @ 0x1800542B8 (-QueueInput@MPCRawInputProvider@@QEAAJAEAUInputInfo@@@Z.c)
 *     ?PopulateGenericMPCInputInfo@MPCInputInfoHelper@@SAJW4MPCAugmentedInputGestureType@@W4MPCGestureType@@KAEAUInputInfo@@_N@Z @ 0x180054E7C (-PopulateGenericMPCInputInfo@MPCInputInfoHelper@@SAJW4MPCAugmentedInputGestureType@@W4MPCGesture.c)
 *     __security_check_cookie @ 0x18009CCC0 (__security_check_cookie.c)
 *     memset @ 0x18009D814 (memset.c)
 */

__int64 __fastcall SpectrumListener::Invoke(__int64 a1, __int128 *a2)
{
  int v4; // eax
  __int128 v5; // xmm0
  MPCRawInputProvider *v6; // rcx
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  int v10; // eax
  LARGE_INTEGER v12[236]; // [rsp+30h] [rbp-778h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+7A8h] [rbp+0h]

  memset(v12, 0, sizeof(v12));
  v4 = MPCInputInfoHelper::PopulateGenericMPCInputInfo(0, 8u, *(_DWORD *)(a1 + 24), v12, 1);
  if ( v4 < 0 )
  {
    wil::details::in1diag3::_FailFast_Hr(
      retaddr,
      (void *)0x67,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\spectrumlistener.cpp",
      (const char *)(unsigned int)v4);
    __debugbreak();
  }
  v5 = *a2;
  v6 = *(MPCRawInputProvider **)(a1 + 16);
  v7 = a2[1];
  BYTE4(v12[85].QuadPart) = 1;
  *(_OWORD *)&v12[162].LowPart = v5;
  v8 = a2[2];
  *(_OWORD *)&v12[164].LowPart = v7;
  v9 = a2[3];
  *(_OWORD *)&v12[166].LowPart = v8;
  *(_OWORD *)&v12[168].LowPart = v9;
  v10 = MPCRawInputProvider::QueueInput(v6, (struct InputInfo *)v12);
  if ( v10 < 0 )
  {
    wil::details::in1diag3::_FailFast_Hr(
      retaddr,
      (void *)0x6A,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\spectrumlistener.cpp",
      (const char *)(unsigned int)v10);
    JUMPOUT(0x1800556AALL);
  }
  return 0LL;
}

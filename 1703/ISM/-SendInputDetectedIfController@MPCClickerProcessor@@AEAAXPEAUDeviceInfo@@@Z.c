/*
 * XREFs of ?SendInputDetectedIfController@MPCClickerProcessor@@AEAAXPEAUDeviceInfo@@@Z @ 0x18004A010
 * Callers:
 *     ?Create@MPCClickerProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z @ 0x1800491E0 (-Create@MPCClickerProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z.c)
 * Callees:
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000742C (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180043938 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?OnInputReport@MPCInputProviderBase@@UEAAJPEAUInputInfo@@@Z @ 0x18004EE10 (-OnInputReport@MPCInputProviderBase@@UEAAJPEAUInputInfo@@@Z.c)
 *     ?PopulateAugmentedInput@MPCInputInfoHelper@@SAJW4MPCAugmentedInputGestureType@@KIGGGPEAUInputInfo@@@Z @ 0x180054C2C (-PopulateAugmentedInput@MPCInputInfoHelper@@SAJW4MPCAugmentedInputGestureType@@KIGGGPEAUInputInf.c)
 *     __security_check_cookie @ 0x18009CCC0 (__security_check_cookie.c)
 *     memset @ 0x18009D814 (memset.c)
 */

void __fastcall MPCClickerProcessor::SendInputDetectedIfController(MPCClickerProcessor *this, struct DeviceInfo *a2)
{
  int v4; // eax
  int v5; // eax
  __int16 v6; // [rsp+20h] [rbp-798h]
  __int16 v7; // [rsp+28h] [rbp-790h]
  _BYTE v8[1888]; // [rsp+40h] [rbp-778h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+7B8h] [rbp+0h]

  memset(v8, 0, sizeof(v8));
  v7 = *((_WORD *)a2 + 26);
  v6 = *((_WORD *)a2 + 25);
  v4 = MPCInputInfoHelper::PopulateAugmentedInput(
         1LL,
         *(unsigned int *)a2,
         *((unsigned int *)a2 + 11),
         *((unsigned __int16 *)a2 + 24),
         v6,
         v7,
         v8);
  if ( v4 < 0 )
  {
    wil::details::in1diag3::_FailFast_Hr(
      retaddr,
      (void *)0x125,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcclickerprocessor.cpp",
      (const char *)(unsigned int)v4);
    JUMPOUT(0x18004A0E6LL);
  }
  v5 = MPCInputProviderBase::OnInputReport(this, (struct InputInfo *)v8);
  if ( v5 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x126,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcclickerprocessor.cpp",
      (const char *)(unsigned int)v5);
}

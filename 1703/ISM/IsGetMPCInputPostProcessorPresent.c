/*
 * XREFs of IsGetMPCInputPostProcessorPresent @ 0x18009E614
 * Callers:
 *     ?Initialize@OneCoreUAPInputHost@@IEAAJPEAX@Z @ 0x180004214 (-Initialize@OneCoreUAPInputHost@@IEAAJPEAX@Z.c)
 *     ?CreateAndInitialize@InputProviderManager@@QEAAJPEAUIRawInputClient@@@Z @ 0x18002C3EC (-CreateAndInitialize@InputProviderManager@@QEAAJPEAUIRawInputClient@@@Z.c)
 *     ?IsMPCGamepadDevice@MPCGamepadProcessor@@SAHPEBUDeviceInfo@@@Z @ 0x18002E5B0 (-IsMPCGamepadDevice@MPCGamepadProcessor@@SAHPEBUDeviceInfo@@@Z.c)
 *     ?IsMPCMouseDevice@MPCMouseProcessor@@SAHPEBUDeviceInfo@@@Z @ 0x180040AC0 (-IsMPCMouseDevice@MPCMouseProcessor@@SAHPEBUDeviceInfo@@@Z.c)
 * Callees:
 *     ApiSetQueryApiSetPresence_0 @ 0x18009E2C0 (ApiSetQueryApiSetPresence_0.c)
 */

char IsGetMPCInputPostProcessorPresent()
{
  char result; // al
  char v1; // [rsp+30h] [rbp+8h] BYREF

  if ( dword_1800D3638 == 1 )
    return 1;
  if ( dword_1800D3638 == 2 )
    return 0;
  v1 = 0;
  if ( (int)ApiSetQueryApiSetPresence_0((__int64)L">@", (__int64)&v1) < 0 )
    return 0;
  result = v1;
  dword_1800D3638 = 2 - (v1 != 0);
  return result;
}

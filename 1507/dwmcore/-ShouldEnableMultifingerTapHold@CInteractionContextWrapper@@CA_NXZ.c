/*
 * XREFs of ?ShouldEnableMultifingerTapHold@CInteractionContextWrapper@@CA_NXZ @ 0x18012F2F4
 * Callers:
 *     ?ConfigureInteractionContext@CInteractionContextWrapper@@AEAAJPEAUHINTERACTIONCONTEXT__@@AEBUSetupInfo@@@Z @ 0x18012EB9C (-ConfigureInteractionContext@CInteractionContextWrapper@@AEAAJPEAUHINTERACTIONCONTEXT__@@AEBUSet.c)
 * Callees:
 *     ?RegGetHKLMDword@@YA_NQEBG0PEAK@Z @ 0x18005E568 (-RegGetHKLMDword@@YA_NQEBG0PEAK@Z.c)
 */

bool CInteractionContextWrapper::ShouldEnableMultifingerTapHold(void)
{
  bool result; // al
  unsigned int v1; // [rsp+30h] [rbp+8h] BYREF

  if ( CInteractionContextWrapper::s_fRegValuesInitialized )
    return CInteractionContextWrapper::s_fEnableMultifingerTapHold;
  v1 = 0;
  RegGetHKLMDword(L"Software\\Microsoft\\Windows\\Dwm", L"MultifingerTapHoldEnabled", &v1);
  CInteractionContextWrapper::s_fRegValuesInitialized = 1;
  result = v1 != 0;
  CInteractionContextWrapper::s_fEnableMultifingerTapHold = v1 != 0;
  return result;
}

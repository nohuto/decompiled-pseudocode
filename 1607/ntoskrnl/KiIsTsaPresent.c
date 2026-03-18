/*
 * XREFs of KiIsTsaPresent @ 0x1401D9E54
 * Callers:
 *     KeOptimizeSpecCtrlSettings @ 0x1401D90FC (KeOptimizeSpecCtrlSettings.c)
 *     KiDetectHardwareSpecControlFeatures @ 0x1401D989C (KiDetectHardwareSpecControlFeatures.c)
 * Callees:
 *     HviIsAnyHypervisorPresent @ 0x14013123C (HviIsAnyHypervisorPresent.c)
 */

_BOOL8 __fastcall KiIsTsaPresent(_BYTE *a1)
{
  _BOOL8 result; // rax
  char v3; // al
  unsigned __int8 v4; // al

  result = 0;
  if ( a1[1597] == 1 && (KeFeatureBits2 & 0xC0000000000LL) != 0xC0000000000LL )
  {
    if ( HviIsAnyHypervisorPresent() )
      return 1;
    v3 = a1[1520];
    if ( v3 >= 25 )
    {
      if ( v3 != 26 )
        return 1;
      v4 = a1[1523];
      if ( v4 > 0x4Fu && (unsigned __int8)(v4 - 96) > 0x1Fu )
        return 1;
    }
  }
  return result;
}

/*
 * XREFs of ?_IsLegacyDevice@Edgy@@YAHPEAX@Z @ 0x1C0229F00
 * Callers:
 *     ?_GetArcData@Edgy@@YA?AUtagARC_DATA@1@AEAUtagEDGY_DATA@@PEBUtagPOINTERINPUTFRAME@@@Z @ 0x1C02297F4 (-_GetArcData@Edgy@@YA-AUtagARC_DATA@1@AEAUtagEDGY_DATA@@PEBUtagPOINTERINPUTFRAME@@@Z.c)
 *     ?_StoreLastUpDataAndPost@Edgy@@YAXAEAUtagEDGY_DATA@@PEBUtagPOINTERINPUTFRAME@@@Z @ 0x1C022A31C (-_StoreLastUpDataAndPost@Edgy@@YAXAEAUtagEDGY_DATA@@PEBUtagPOINTERINPUTFRAME@@@Z.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C0055AB4 (HMValidateHandleNoSecure.c)
 *     ?_GetDWordFromRegistry@Edgy@@YAHPEBG0PEAK@Z @ 0x1C00FE2F8 (-_GetDWordFromRegistry@Edgy@@YAHPEBG0PEAK@Z.c)
 *     _GetTouchValidationStatus @ 0x1C01E0C60 (_GetTouchValidationStatus.c)
 */

__int64 __fastcall Edgy::_IsLegacyDevice(Edgy *this, const unsigned __int16 *a2, __int64 a3, unsigned int *a4)
{
  int v4; // eax
  unsigned int v5; // ebx
  __int64 result; // rax
  int v8; // [rsp+38h] [rbp+10h] BYREF

  v4 = gForceLegacyMode;
  v5 = 0;
  if ( !gForceLegacyMode )
  {
    v8 = 0;
    if ( (unsigned int)Edgy::_GetDWordFromRegistry(this, a2, (unsigned __int16 *)&v8, a4) && v8 == 1 )
    {
      gForceLegacyMode = 1;
      return 1LL;
    }
    v4 = 2;
    gForceLegacyMode = 2;
  }
  if ( v4 == 1 )
    return 1LL;
  result = HMValidateHandleNoSecure((unsigned __int64)this, 19);
  if ( result )
  {
    LOBYTE(v5) = (unsigned int)GetTouchValidationStatus(result) != 1;
    return v5;
  }
  return result;
}

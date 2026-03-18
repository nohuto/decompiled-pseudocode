/*
 * XREFs of AcquireCriticalSectionAndCheckState @ 0x1C00688C0
 * Callers:
 *     NtGdiGetOPMRandomNumber @ 0x1C0067670 (NtGdiGetOPMRandomNumber.c)
 *     NtGdiSetOPMSigningKeyAndSequenceNumbers @ 0x1C0067730 (NtGdiSetOPMSigningKeyAndSequenceNumbers.c)
 *     NtGdiGetOPMInformation @ 0x1C0067B40 (NtGdiGetOPMInformation.c)
 *     AcquireCriticalSectionCheckStateAndUpdateGraphicsDeviceList @ 0x1C0068860 (AcquireCriticalSectionCheckStateAndUpdateGraphicsDeviceList.c)
 *     NtGdiConfigureOPMProtectedOutput @ 0x1C00C0330 (NtGdiConfigureOPMProtectedOutput.c)
 *     NtGdiGetCOPPCompatibleOPMInformation @ 0x1C00C0470 (NtGdiGetCOPPCompatibleOPMInformation.c)
 * Callees:
 *     UserSessionSwitchEnterCrit @ 0x1C0010820 (UserSessionSwitchEnterCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0044B20 (UserSessionSwitchLeaveCrit.c)
 */

__int64 __fastcall AcquireCriticalSectionAndCheckState(__int64 a1)
{
  __int64 result; // rax
  int v2; // ebx

  result = UserSessionSwitchEnterCrit(a1);
  v2 = result;
  if ( (int)result >= 0 )
  {
    if ( gProtocolType )
      v2 = -1071774240;
    if ( v2 < 0 )
    {
      UserSessionSwitchLeaveCrit();
      return (unsigned int)v2;
    }
    else
    {
      return 0LL;
    }
  }
  return result;
}

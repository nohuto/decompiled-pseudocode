/*
 * XREFs of AcquireCriticalSectionAndCheckState @ 0x1C00850F0
 * Callers:
 *     NtGdiGetOPMRandomNumber @ 0x1C0083D70 (NtGdiGetOPMRandomNumber.c)
 *     NtGdiSetOPMSigningKeyAndSequenceNumbers @ 0x1C0083E30 (NtGdiSetOPMSigningKeyAndSequenceNumbers.c)
 *     NtGdiGetOPMInformation @ 0x1C0084210 (NtGdiGetOPMInformation.c)
 *     AcquireCriticalSectionCheckStateAndUpdateGraphicsDeviceList @ 0x1C0085090 (AcquireCriticalSectionCheckStateAndUpdateGraphicsDeviceList.c)
 *     NtGdiConfigureOPMProtectedOutput @ 0x1C00C1530 (NtGdiConfigureOPMProtectedOutput.c)
 *     NtGdiGetCOPPCompatibleOPMInformation @ 0x1C00C1760 (NtGdiGetCOPPCompatibleOPMInformation.c)
 * Callees:
 *     UserSessionSwitchLeaveCrit @ 0x1C001CCF0 (UserSessionSwitchLeaveCrit.c)
 *     UserSessionSwitchEnterCrit @ 0x1C001F9D0 (UserSessionSwitchEnterCrit.c)
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

/*
 * XREFs of AcquireCriticalSectionAndCheckState @ 0x1C0083790
 * Callers:
 *     NtGdiGetOPMRandomNumber @ 0x1C0082330 (NtGdiGetOPMRandomNumber.c)
 *     NtGdiSetOPMSigningKeyAndSequenceNumbers @ 0x1C00823F0 (NtGdiSetOPMSigningKeyAndSequenceNumbers.c)
 *     NtGdiGetOPMInformation @ 0x1C0082800 (NtGdiGetOPMInformation.c)
 *     AcquireCriticalSectionCheckStateAndUpdateGraphicsDeviceList @ 0x1C0083730 (AcquireCriticalSectionCheckStateAndUpdateGraphicsDeviceList.c)
 *     NtGdiConfigureOPMProtectedOutput @ 0x1C00C0D70 (NtGdiConfigureOPMProtectedOutput.c)
 *     NtGdiGetCOPPCompatibleOPMInformation @ 0x1C00C0EB0 (NtGdiGetCOPPCompatibleOPMInformation.c)
 * Callees:
 *     UserSessionSwitchEnterCrit @ 0x1C0021860 (UserSessionSwitchEnterCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0022470 (UserSessionSwitchLeaveCrit.c)
 */

__int64 __fastcall AcquireCriticalSectionAndCheckState(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rdx
  int v3; // ebx

  result = UserSessionSwitchEnterCrit(a1);
  v3 = result;
  if ( (int)result >= 0 )
  {
    if ( gProtocolType )
      v3 = -1071774240;
    if ( v3 < 0 )
    {
      UserSessionSwitchLeaveCrit(0LL, v2);
      return (unsigned int)v3;
    }
    else
    {
      return 0LL;
    }
  }
  return result;
}

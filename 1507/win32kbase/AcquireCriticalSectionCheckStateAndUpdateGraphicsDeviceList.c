/*
 * XREFs of AcquireCriticalSectionCheckStateAndUpdateGraphicsDeviceList @ 0x1C0068860
 * Callers:
 *     NtGdiGetSuggestedOPMProtectedOutputArraySize @ 0x1C00673D0 (NtGdiGetSuggestedOPMProtectedOutputArraySize.c)
 *     NtGdiCreateOPMProtectedOutputs @ 0x1C0067420 (NtGdiCreateOPMProtectedOutputs.c)
 *     NtGdiGetCertificateSize @ 0x1C00674A0 (NtGdiGetCertificateSize.c)
 *     NtGdiGetCertificate @ 0x1C0067550 (NtGdiGetCertificate.c)
 * Callees:
 *     UpdateGraphicsDeviceList @ 0x1C0020CC0 (UpdateGraphicsDeviceList.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0044B20 (UserSessionSwitchLeaveCrit.c)
 *     AcquireCriticalSectionAndCheckState @ 0x1C00688C0 (AcquireCriticalSectionAndCheckState.c)
 */

__int64 AcquireCriticalSectionCheckStateAndUpdateGraphicsDeviceList()
{
  __int64 result; // rax
  int v1; // ebx
  int v2; // [rsp+30h] [rbp+8h] BYREF

  result = AcquireCriticalSectionAndCheckState();
  v1 = result;
  if ( (int)result >= 0 )
  {
    UpdateGraphicsDeviceList(&v2);
    if ( v2 && LODWORD(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) )
    {
      v1 = -1071774232;
LABEL_8:
      UserSessionSwitchLeaveCrit();
      return (unsigned int)v1;
    }
    if ( gProtocolType )
      v1 = -1071774240;
    if ( v1 < 0 )
      goto LABEL_8;
    return 0LL;
  }
  return result;
}

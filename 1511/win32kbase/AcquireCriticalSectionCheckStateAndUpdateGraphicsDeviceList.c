/*
 * XREFs of AcquireCriticalSectionCheckStateAndUpdateGraphicsDeviceList @ 0x1C0083730
 * Callers:
 *     NtGdiGetSuggestedOPMProtectedOutputArraySize @ 0x1C00820B0 (NtGdiGetSuggestedOPMProtectedOutputArraySize.c)
 *     NtGdiCreateOPMProtectedOutputs @ 0x1C0082100 (NtGdiCreateOPMProtectedOutputs.c)
 *     NtGdiGetCertificateSizeByHandle @ 0x1C0082180 (NtGdiGetCertificateSizeByHandle.c)
 *     NtGdiGetCertificateByHandle @ 0x1C0082230 (NtGdiGetCertificateByHandle.c)
 *     NtGdiGetCertificate @ 0x1C00C0F30 (NtGdiGetCertificate.c)
 *     NtGdiGetCertificateSize @ 0x1C00C1060 (NtGdiGetCertificateSize.c)
 * Callees:
 *     UpdateGraphicsDeviceList @ 0x1C0021358 (UpdateGraphicsDeviceList.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0022470 (UserSessionSwitchLeaveCrit.c)
 *     AcquireCriticalSectionAndCheckState @ 0x1C0083790 (AcquireCriticalSectionAndCheckState.c)
 */

__int64 AcquireCriticalSectionCheckStateAndUpdateGraphicsDeviceList()
{
  __int64 result; // rax
  int v1; // ebx
  __int64 v2; // rdx
  __int64 v3; // rcx
  int v4; // [rsp+30h] [rbp+8h] BYREF

  result = AcquireCriticalSectionAndCheckState();
  v1 = result;
  if ( (int)result >= 0 )
  {
    UpdateGraphicsDeviceList(&v4);
    if ( v4 && HIDWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext) )
    {
      v1 = -1071774232;
LABEL_8:
      UserSessionSwitchLeaveCrit(v3, v2);
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

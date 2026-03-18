/*
 * XREFs of AcquireCriticalSectionCheckStateAndUpdateGraphicsDeviceList @ 0x1C0085090
 * Callers:
 *     NtGdiGetSuggestedOPMProtectedOutputArraySize @ 0x1C0083AF0 (NtGdiGetSuggestedOPMProtectedOutputArraySize.c)
 *     NtGdiCreateOPMProtectedOutputs @ 0x1C0083B40 (NtGdiCreateOPMProtectedOutputs.c)
 *     NtGdiGetCertificateSizeByHandle @ 0x1C0083BC0 (NtGdiGetCertificateSizeByHandle.c)
 *     NtGdiGetCertificateByHandle @ 0x1C0083C70 (NtGdiGetCertificateByHandle.c)
 *     NtGdiCreateOPMProtectedOutput @ 0x1C00C1660 (NtGdiCreateOPMProtectedOutput.c)
 *     NtGdiGetCertificate @ 0x1C00C17E0 (NtGdiGetCertificate.c)
 *     NtGdiGetCertificateSize @ 0x1C00C1910 (NtGdiGetCertificateSize.c)
 * Callees:
 *     UpdateGraphicsDeviceList @ 0x1C001611C (UpdateGraphicsDeviceList.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C001CCF0 (UserSessionSwitchLeaveCrit.c)
 *     AcquireCriticalSectionAndCheckState @ 0x1C00850F0 (AcquireCriticalSectionAndCheckState.c)
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
    if ( v2 && LODWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext) )
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

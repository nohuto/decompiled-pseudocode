/*
 * XREFs of NtGdiGetCertificateSize @ 0x1C00674A0
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCrit @ 0x1C0044B20 (UserSessionSwitchLeaveCrit.c)
 *     SafelyCopyKernelModeDataToUserModeData_unsigned_long_ @ 0x1C0067510 (SafelyCopyKernelModeDataToUserModeData_unsigned_long_.c)
 *     AcquireCriticalSectionCheckStateAndUpdateGraphicsDeviceList @ 0x1C0068860 (AcquireCriticalSectionCheckStateAndUpdateGraphicsDeviceList.c)
 *     GetCertificateLengthAndMonitorPDO @ 0x1C0068970 (GetCertificateLengthAndMonitorPDO.c)
 */

__int64 __fastcall NtGdiGetCertificateSize(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 result; // rax
  unsigned int v7; // ebx
  int CertificateLengthAndMonitorPDO; // edi
  char v9; // [rsp+48h] [rbp+20h] BYREF

  result = AcquireCriticalSectionCheckStateAndUpdateGraphicsDeviceList();
  v7 = 0;
  if ( (int)result >= 0 )
  {
    CertificateLengthAndMonitorPDO = GetCertificateLengthAndMonitorPDO(a1, a2, &v9, 0LL);
    if ( CertificateLengthAndMonitorPDO >= 0 )
      CertificateLengthAndMonitorPDO = SafelyCopyKernelModeDataToUserModeData_unsigned_long_(a3, &v9);
    UserSessionSwitchLeaveCrit();
    if ( CertificateLengthAndMonitorPDO < 0 )
      return (unsigned int)CertificateLengthAndMonitorPDO;
    return v7;
  }
  return result;
}

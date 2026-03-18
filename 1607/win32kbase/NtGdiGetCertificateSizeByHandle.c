/*
 * XREFs of NtGdiGetCertificateSizeByHandle @ 0x1C0083BC0
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCrit @ 0x1C001CCF0 (UserSessionSwitchLeaveCrit.c)
 *     SafelyCopyKernelModeDataToUserModeData_unsigned_long_ @ 0x1C0083C30 (SafelyCopyKernelModeDataToUserModeData_unsigned_long_.c)
 *     ?GetCertificateSize@COPM@@QEAAJPEAXW4_DXGKMDT_CERTIFICATE_TYPE@@PEAK@Z @ 0x1C00844F8 (-GetCertificateSize@COPM@@QEAAJPEAXW4_DXGKMDT_CERTIFICATE_TYPE@@PEAK@Z.c)
 *     AcquireCriticalSectionCheckStateAndUpdateGraphicsDeviceList @ 0x1C0085090 (AcquireCriticalSectionCheckStateAndUpdateGraphicsDeviceList.c)
 */

__int64 __fastcall NtGdiGetCertificateSizeByHandle(void *a1, enum _DXGKMDT_CERTIFICATE_TYPE a2, __int64 a3)
{
  __int64 result; // rax
  COPM *v7; // rcx
  unsigned int v8; // ebx
  int CertificateSize; // edi
  unsigned int v10; // [rsp+48h] [rbp+20h] BYREF

  result = AcquireCriticalSectionCheckStateAndUpdateGraphicsDeviceList();
  v8 = 0;
  if ( (int)result >= 0 )
  {
    CertificateSize = COPM::GetCertificateSize(v7, a1, a2, &v10);
    if ( CertificateSize >= 0 )
      CertificateSize = SafelyCopyKernelModeDataToUserModeData_unsigned_long_(a3, &v10);
    UserSessionSwitchLeaveCrit();
    if ( CertificateSize < 0 )
      return (unsigned int)CertificateSize;
    return v8;
  }
  return result;
}

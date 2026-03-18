/*
 * XREFs of NtGdiGetCertificateSizeByHandle @ 0x1C0082180
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCrit @ 0x1C0022470 (UserSessionSwitchLeaveCrit.c)
 *     sub_1C00821F0 @ 0x1C00821F0 (sub_1C00821F0.c)
 *     ?GetCertificateSize@COPM@@QEAAJPEAXW4_DXGKMDT_CERTIFICATE_TYPE@@PEAK@Z @ 0x1C0082AE8 (-GetCertificateSize@COPM@@QEAAJPEAXW4_DXGKMDT_CERTIFICATE_TYPE@@PEAK@Z.c)
 *     AcquireCriticalSectionCheckStateAndUpdateGraphicsDeviceList @ 0x1C0083730 (AcquireCriticalSectionCheckStateAndUpdateGraphicsDeviceList.c)
 */

__int64 __fastcall NtGdiGetCertificateSizeByHandle(void *a1, enum _DXGKMDT_CERTIFICATE_TYPE a2, __int64 a3)
{
  __int64 result; // rax
  COPM *v7; // rcx
  unsigned int v8; // ebx
  __int64 v9; // rdx
  __int64 v10; // rcx
  int CertificateSize; // edi
  unsigned int v12; // [rsp+48h] [rbp+20h] BYREF

  result = AcquireCriticalSectionCheckStateAndUpdateGraphicsDeviceList();
  v8 = 0;
  if ( (int)result >= 0 )
  {
    CertificateSize = COPM::GetCertificateSize(v7, a1, a2, &v12);
    if ( CertificateSize >= 0 )
      CertificateSize = sub_1C00821F0(a3, &v12);
    UserSessionSwitchLeaveCrit(v10, v9);
    if ( CertificateSize < 0 )
      return (unsigned int)CertificateSize;
    return v8;
  }
  return result;
}

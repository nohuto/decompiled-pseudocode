/*
 * XREFs of NtGdiGetCertificateByHandle @ 0x1C0083C70
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCrit @ 0x1C001CCF0 (UserSessionSwitchLeaveCrit.c)
 *     ?OPMAllocateMemory@@YAPEAX_KW4_POOL_TYPE@@@Z @ 0x1C00813D0 (-OPMAllocateMemory@@YAPEAX_KW4_POOL_TYPE@@@Z.c)
 *     ?OPMFreeMemory@@YAXPEAX@Z @ 0x1C00819B0 (-OPMFreeMemory@@YAXPEAX@Z.c)
 *     ?GetCertificate@COPM@@QEAAJPEAXW4_DXGKMDT_CERTIFICATE_TYPE@@PEAEK@Z @ 0x1C0084470 (-GetCertificate@COPM@@QEAAJPEAXW4_DXGKMDT_CERTIFICATE_TYPE@@PEAEK@Z.c)
 *     ?GetCertificateSize@COPM@@QEAAJPEAXW4_DXGKMDT_CERTIFICATE_TYPE@@PEAK@Z @ 0x1C00844F8 (-GetCertificateSize@COPM@@QEAAJPEAXW4_DXGKMDT_CERTIFICATE_TYPE@@PEAK@Z.c)
 *     AcquireCriticalSectionCheckStateAndUpdateGraphicsDeviceList @ 0x1C0085090 (AcquireCriticalSectionCheckStateAndUpdateGraphicsDeviceList.c)
 *     memmove @ 0x1C0089D40 (memmove.c)
 */

__int64 __fastcall NtGdiGetCertificateByHandle(void *a1, enum _DXGKMDT_CERTIFICATE_TYPE a2, void *a3, unsigned int a4)
{
  __int64 result; // rax
  COPM *v9; // rcx
  unsigned int v10; // ebx
  unsigned __int8 *v11; // rsi
  int CertificateSize; // edi
  COPM *v13; // rcx
  SIZE_T Length[5]; // [rsp+30h] [rbp-28h] BYREF

  result = AcquireCriticalSectionCheckStateAndUpdateGraphicsDeviceList();
  v10 = 0;
  if ( (int)result >= 0 )
  {
    v11 = 0LL;
    CertificateSize = COPM::GetCertificateSize(v9, a1, a2, (unsigned int *)Length);
    if ( CertificateSize >= 0 )
    {
      if ( a4 < LODWORD(Length[0]) )
      {
        CertificateSize = -1071774450;
      }
      else
      {
        v11 = (unsigned __int8 *)OPMAllocateMemory(LODWORD(Length[0]), PagedPool);
        Length[1] = (SIZE_T)v11;
        if ( v11 )
        {
          CertificateSize = COPM::GetCertificate(v13, a1, a2, v11, Length[0]);
          if ( CertificateSize >= 0 )
          {
            ProbeForWrite(a3, LODWORD(Length[0]), 1u);
            memmove(a3, v11, LODWORD(Length[0]));
          }
        }
        else
        {
          CertificateSize = -1073741801;
        }
      }
    }
    OPMFreeMemory(v11);
    UserSessionSwitchLeaveCrit();
    if ( CertificateSize < 0 )
      return (unsigned int)CertificateSize;
    return v10;
  }
  return result;
}

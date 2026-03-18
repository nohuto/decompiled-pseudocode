/*
 * XREFs of NtGdiGetCertificateByHandle @ 0x1C0082230
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCrit @ 0x1C0022470 (UserSessionSwitchLeaveCrit.c)
 *     ?OPMFreeMemory@@YAXPEAX@Z @ 0x1C007E0A0 (-OPMFreeMemory@@YAXPEAX@Z.c)
 *     ?GetCertificate@COPM@@QEAAJPEAXW4_DXGKMDT_CERTIFICATE_TYPE@@PEAEK@Z @ 0x1C0082A60 (-GetCertificate@COPM@@QEAAJPEAXW4_DXGKMDT_CERTIFICATE_TYPE@@PEAEK@Z.c)
 *     ?GetCertificateSize@COPM@@QEAAJPEAXW4_DXGKMDT_CERTIFICATE_TYPE@@PEAK@Z @ 0x1C0082AE8 (-GetCertificateSize@COPM@@QEAAJPEAXW4_DXGKMDT_CERTIFICATE_TYPE@@PEAK@Z.c)
 *     AcquireCriticalSectionCheckStateAndUpdateGraphicsDeviceList @ 0x1C0083730 (AcquireCriticalSectionCheckStateAndUpdateGraphicsDeviceList.c)
 *     memmove @ 0x1C0088D80 (memmove.c)
 */

__int64 __fastcall NtGdiGetCertificateByHandle(void *a1, enum _DXGKMDT_CERTIFICATE_TYPE a2, void *a3, unsigned int a4)
{
  __int64 result; // rax
  COPM *v9; // rcx
  unsigned int v10; // ebx
  unsigned __int8 *PoolWithTag; // rsi
  int CertificateSize; // edi
  COPM *v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  SIZE_T NumberOfBytes[5]; // [rsp+30h] [rbp-28h] BYREF

  result = AcquireCriticalSectionCheckStateAndUpdateGraphicsDeviceList();
  v10 = 0;
  if ( (int)result >= 0 )
  {
    PoolWithTag = 0LL;
    CertificateSize = COPM::GetCertificateSize(v9, a1, a2, (unsigned int *)NumberOfBytes);
    if ( CertificateSize >= 0 )
    {
      if ( a4 < LODWORD(NumberOfBytes[0]) )
      {
        CertificateSize = -1071774450;
      }
      else
      {
        PoolWithTag = (unsigned __int8 *)ExAllocatePoolWithTag(PagedPool, LODWORD(NumberOfBytes[0]), 0x4D504F47u);
        NumberOfBytes[1] = (SIZE_T)PoolWithTag;
        if ( PoolWithTag )
        {
          CertificateSize = COPM::GetCertificate(v13, a1, a2, PoolWithTag, NumberOfBytes[0]);
          if ( CertificateSize >= 0 )
          {
            ProbeForWrite(a3, LODWORD(NumberOfBytes[0]), 1u);
            memmove(a3, PoolWithTag, LODWORD(NumberOfBytes[0]));
          }
        }
        else
        {
          CertificateSize = -1073741801;
        }
      }
    }
    OPMFreeMemory(PoolWithTag);
    UserSessionSwitchLeaveCrit(v15, v14);
    if ( CertificateSize < 0 )
      return (unsigned int)CertificateSize;
    return v10;
  }
  return result;
}

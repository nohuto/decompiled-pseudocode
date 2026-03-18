/*
 * XREFs of NtGdiGetCertificate @ 0x1C0067550
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCrit @ 0x1C0044B20 (UserSessionSwitchLeaveCrit.c)
 *     AcquireCriticalSectionCheckStateAndUpdateGraphicsDeviceList @ 0x1C0068860 (AcquireCriticalSectionCheckStateAndUpdateGraphicsDeviceList.c)
 *     GetCertificateLengthAndMonitorPDO @ 0x1C0068970 (GetCertificateLengthAndMonitorPDO.c)
 *     CallMonitor @ 0x1C00689F0 (CallMonitor.c)
 *     ?OPMFreeMemory@@YAXPEAX@Z @ 0x1C0069F28 (-OPMFreeMemory@@YAXPEAX@Z.c)
 *     memmove @ 0x1C0085B00 (memmove.c)
 */

__int64 __fastcall NtGdiGetCertificate(__int64 a1, unsigned int a2, volatile void *a3, unsigned int a4)
{
  __int64 result; // rax
  unsigned int v8; // ebx
  PVOID PoolWithTag; // rsi
  int CertificateLengthAndMonitorPDO; // edi
  SIZE_T NumberOfBytes; // [rsp+30h] [rbp-38h] BYREF
  PVOID Object[3]; // [rsp+38h] [rbp-30h] BYREF
  unsigned int InputBuffer; // [rsp+78h] [rbp+10h] BYREF

  InputBuffer = a2;
  result = AcquireCriticalSectionCheckStateAndUpdateGraphicsDeviceList();
  v8 = 0;
  if ( (int)result >= 0 )
  {
    Object[0] = 0LL;
    PoolWithTag = 0LL;
    CertificateLengthAndMonitorPDO = GetCertificateLengthAndMonitorPDO(a1, InputBuffer, &NumberOfBytes, Object);
    if ( CertificateLengthAndMonitorPDO >= 0 )
    {
      if ( a4 < (unsigned int)NumberOfBytes )
      {
        CertificateLengthAndMonitorPDO = -1071774450;
      }
      else
      {
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, 0x4D504F47u);
        Object[1] = PoolWithTag;
        if ( PoolWithTag )
        {
          CertificateLengthAndMonitorPDO = CallMonitor(
                                             (PDEVICE_OBJECT)Object[0],
                                             0x232487u,
                                             &InputBuffer,
                                             4u,
                                             PoolWithTag,
                                             NumberOfBytes);
          if ( CertificateLengthAndMonitorPDO >= 0 )
          {
            ProbeForWrite(a3, (unsigned int)NumberOfBytes, 1u);
            memmove((void *)a3, PoolWithTag, (unsigned int)NumberOfBytes);
          }
        }
        else
        {
          CertificateLengthAndMonitorPDO = -1073741801;
        }
      }
    }
    if ( Object[0] )
      ObfDereferenceObject(Object[0]);
    OPMFreeMemory(PoolWithTag);
    UserSessionSwitchLeaveCrit();
    if ( CertificateLengthAndMonitorPDO < 0 )
      return (unsigned int)CertificateLengthAndMonitorPDO;
    return v8;
  }
  return result;
}

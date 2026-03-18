/*
 * XREFs of NtGdiGetCertificate @ 0x1C00C17E0
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCrit @ 0x1C001CCF0 (UserSessionSwitchLeaveCrit.c)
 *     ?OPMAllocateMemory@@YAPEAX_KW4_POOL_TYPE@@@Z @ 0x1C00813D0 (-OPMAllocateMemory@@YAPEAX_KW4_POOL_TYPE@@@Z.c)
 *     ?OPMFreeMemory@@YAXPEAX@Z @ 0x1C00819B0 (-OPMFreeMemory@@YAXPEAX@Z.c)
 *     AcquireCriticalSectionCheckStateAndUpdateGraphicsDeviceList @ 0x1C0085090 (AcquireCriticalSectionCheckStateAndUpdateGraphicsDeviceList.c)
 *     CallMonitor @ 0x1C0085320 (CallMonitor.c)
 *     memmove @ 0x1C0089D40 (memmove.c)
 *     GetCertificateLengthAndMonitorPDO @ 0x1C00C14A0 (GetCertificateLengthAndMonitorPDO.c)
 */

__int64 __fastcall NtGdiGetCertificate(struct _UNICODE_STRING *a1, int a2, volatile void *a3, unsigned int a4)
{
  __int64 result; // rax
  unsigned int v8; // ebx
  PVOID v9; // rsi
  int CertificateLengthAndMonitorPDO; // edi
  SIZE_T Length; // [rsp+30h] [rbp-38h] BYREF
  PVOID Object[3]; // [rsp+38h] [rbp-30h] BYREF
  int InputBuffer; // [rsp+78h] [rbp+10h] BYREF

  InputBuffer = a2;
  result = AcquireCriticalSectionCheckStateAndUpdateGraphicsDeviceList();
  v8 = 0;
  if ( (int)result >= 0 )
  {
    Object[0] = 0LL;
    v9 = 0LL;
    CertificateLengthAndMonitorPDO = GetCertificateLengthAndMonitorPDO(
                                       a1,
                                       InputBuffer,
                                       &Length,
                                       (struct _DEVICE_OBJECT **)Object);
    if ( CertificateLengthAndMonitorPDO >= 0 )
    {
      if ( a4 >= (unsigned int)Length )
      {
        v9 = OPMAllocateMemory((unsigned int)Length, PagedPool);
        Object[1] = v9;
        if ( v9 )
        {
          CertificateLengthAndMonitorPDO = CallMonitor(
                                             (PDEVICE_OBJECT)Object[0],
                                             0x232487u,
                                             &InputBuffer,
                                             4u,
                                             v9,
                                             Length);
          if ( CertificateLengthAndMonitorPDO >= 0 )
          {
            ProbeForWrite(a3, (unsigned int)Length, 1u);
            memmove((void *)a3, v9, (unsigned int)Length);
          }
        }
        else
        {
          CertificateLengthAndMonitorPDO = -1073741801;
        }
      }
      else
      {
        CertificateLengthAndMonitorPDO = -1071774450;
      }
    }
    if ( Object[0] )
      ObfDereferenceObject(Object[0]);
    OPMFreeMemory(v9);
    UserSessionSwitchLeaveCrit();
    if ( CertificateLengthAndMonitorPDO < 0 )
      return (unsigned int)CertificateLengthAndMonitorPDO;
    return v8;
  }
  return result;
}

/*
 * XREFs of rimGetQDCActivePathsData @ 0x1C00503A8
 * Callers:
 *     RIMFindMonitorForDigitizer @ 0x1C00073E4 (RIMFindMonitorForDigitizer.c)
 *     RIMOnMonitorNotification @ 0x1C0008E10 (RIMOnMonitorNotification.c)
 *     RIMComputeVirtualHimetricSize @ 0x1C00CF45C (RIMComputeVirtualHimetricSize.c)
 * Callees:
 *     rimFreeQDCActivePathsData @ 0x1C0007458 (rimFreeQDCActivePathsData.c)
 *     DrvQueryDisplayConfig @ 0x1C004C1B0 (DrvQueryDisplayConfig.c)
 *     DrvGetDisplayConfigBufferSizes @ 0x1C004C2C0 (DrvGetDisplayConfigBufferSizes.c)
 *     Win32AllocPoolZInit @ 0x1C004F690 (Win32AllocPoolZInit.c)
 */

__int64 __fastcall rimGetQDCActivePathsData(unsigned int *a1)
{
  unsigned int *v1; // rsi
  int DisplayConfigBufferSizes; // edi
  __int64 v4; // rax
  void *v5; // rax
  __int64 v6; // r8

  v1 = a1 + 1;
  *(_QWORD *)a1 = 0LL;
  *((_QWORD *)a1 + 1) = 0LL;
  *((_QWORD *)a1 + 2) = 0LL;
  DisplayConfigBufferSizes = DrvGetDisplayConfigBufferSizes(0x12u, (__int64)a1, (__int64)(a1 + 1));
  if ( DisplayConfigBufferSizes < 0 )
    goto LABEL_8;
  v4 = *a1;
  if ( (_DWORD)v4 )
  {
    *((_QWORD *)a1 + 1) = Win32AllocPoolZInit(72 * v4);
    v5 = Win32AllocPoolZInit(72LL * *v1);
    v6 = *((_QWORD *)a1 + 1);
    *((_QWORD *)a1 + 2) = v5;
    if ( v6 && v5 )
      DisplayConfigBufferSizes = DrvQueryDisplayConfig(0x80000012, a1, v6, (__int64)v1, (__int64)v5, 0LL);
    else
      DisplayConfigBufferSizes = -1073741801;
  }
  if ( DisplayConfigBufferSizes < 0 )
LABEL_8:
    rimFreeQDCActivePathsData(a1);
  return (unsigned int)DisplayConfigBufferSizes;
}

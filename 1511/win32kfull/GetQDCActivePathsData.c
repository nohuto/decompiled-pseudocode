/*
 * XREFs of GetQDCActivePathsData @ 0x1C01CD86C
 * Callers:
 *     UpdatePointerDevices @ 0x1C0111510 (UpdatePointerDevices.c)
 *     FindMonitorForDigitizer @ 0x1C01CBF70 (FindMonitorForDigitizer.c)
 *     ComputeVirtualHimetricSize @ 0x1C01D0CB0 (ComputeVirtualHimetricSize.c)
 *     ?RealizePendingRecreateTouchInjectionDevices@@YAHPEAUtagPROCESSINFO@@H@Z @ 0x1C01DC31C (-RealizePendingRecreateTouchInjectionDevices@@YAHPEAUtagPROCESSINFO@@H@Z.c)
 *     _InitializeTouchInjection @ 0x1C01DD004 (_InitializeTouchInjection.c)
 * Callees:
 *     FreeQDCActivePathsData @ 0x1C0111570 (FreeQDCActivePathsData.c)
 */

__int64 __fastcall GetQDCActivePathsData(_QWORD *a1)
{
  unsigned int *v1; // rsi
  int DisplayConfigBufferSizes; // edi
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // r8

  v1 = (unsigned int *)a1 + 1;
  *a1 = 0LL;
  a1[1] = 0LL;
  a1[2] = 0LL;
  DisplayConfigBufferSizes = DrvGetDisplayConfigBufferSizes(18LL, a1, (char *)a1 + 4);
  if ( DisplayConfigBufferSizes < 0 )
    goto LABEL_8;
  v4 = *(unsigned int *)a1;
  if ( (_DWORD)v4 )
  {
    a1[1] = Win32AllocPool(72 * v4);
    v5 = Win32AllocPool(72LL * *v1);
    v6 = a1[1];
    a1[2] = v5;
    if ( v6 && v5 )
      DisplayConfigBufferSizes = DrvQueryDisplayConfig(2147483666LL, a1, v6, v1, v5, 0LL);
    else
      DisplayConfigBufferSizes = -1073741801;
  }
  if ( DisplayConfigBufferSizes < 0 )
LABEL_8:
    FreeQDCActivePathsData((__int64)a1);
  return (unsigned int)DisplayConfigBufferSizes;
}

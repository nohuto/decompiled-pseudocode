/*
 * XREFs of GetQDCActivePathsData @ 0x1C01C7F00
 * Callers:
 *     FindMonitorForDigitizer @ 0x1C01C7750 (FindMonitorForDigitizer.c)
 *     ?RealizePendingRecreateTouchInjectionDevices@@YAHPEAUtagPROCESSINFO@@H@Z @ 0x1C01D3D14 (-RealizePendingRecreateTouchInjectionDevices@@YAHPEAUtagPROCESSINFO@@H@Z.c)
 *     _InitializeTouchInjection @ 0x1C01D48E4 (_InitializeTouchInjection.c)
 * Callees:
 *     FreeQDCActivePathsData @ 0x1C01C7D14 (FreeQDCActivePathsData.c)
 */

__int64 __fastcall GetQDCActivePathsData(_QWORD *a1)
{
  unsigned int *v1; // rsi
  __int64 v3; // rdx
  int DisplayConfigBufferSizes; // edi
  __int64 v5; // r8
  __int64 v6; // rax
  __int64 v7; // rax

  v1 = (unsigned int *)a1 + 1;
  *a1 = 0LL;
  a1[1] = 0LL;
  a1[2] = 0LL;
  DisplayConfigBufferSizes = DrvGetDisplayConfigBufferSizes(18LL, a1, (char *)a1 + 4);
  if ( DisplayConfigBufferSizes < 0 )
    goto LABEL_8;
  v6 = *(unsigned int *)a1;
  if ( (_DWORD)v6 )
  {
    a1[1] = Win32AllocPool(72 * v6, 1668313941LL);
    v7 = Win32AllocPool(72LL * *v1, 1668313941LL);
    v5 = a1[1];
    a1[2] = v7;
    if ( v5 && v7 )
      DisplayConfigBufferSizes = DrvQueryDisplayConfig(2147483666LL, a1, v5, v1, v7, 0LL);
    else
      DisplayConfigBufferSizes = -1073741801;
  }
  if ( DisplayConfigBufferSizes < 0 )
LABEL_8:
    FreeQDCActivePathsData(a1, v3, v5);
  return (unsigned int)DisplayConfigBufferSizes;
}

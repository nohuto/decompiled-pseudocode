/*
 * XREFs of FreeQDCActivePathsData @ 0x1C01C7D14
 * Callers:
 *     FindMonitorForDigitizer @ 0x1C01C7750 (FindMonitorForDigitizer.c)
 *     GetQDCActivePathsData @ 0x1C01C7F00 (GetQDCActivePathsData.c)
 *     ?RealizePendingRecreateTouchInjectionDevices@@YAHPEAUtagPROCESSINFO@@H@Z @ 0x1C01D3D14 (-RealizePendingRecreateTouchInjectionDevices@@YAHPEAUtagPROCESSINFO@@H@Z.c)
 *     _InitializeTouchInjection @ 0x1C01D48E4 (_InitializeTouchInjection.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FreeQDCActivePathsData(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 result; // rax

  if ( a1 )
  {
    v4 = a1[2];
    if ( v4 )
      Win32FreePool(v4, a2, a3);
    v5 = a1[1];
    if ( v5 )
      Win32FreePool(v5, a2, a3);
    result = 0LL;
    *a1 = 0LL;
    a1[1] = 0LL;
    a1[2] = 0LL;
  }
  return result;
}

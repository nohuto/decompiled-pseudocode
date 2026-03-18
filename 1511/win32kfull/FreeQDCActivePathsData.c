/*
 * XREFs of FreeQDCActivePathsData @ 0x1C0111570
 * Callers:
 *     UpdatePointerDevices @ 0x1C0111510 (UpdatePointerDevices.c)
 *     FindMonitorForDigitizer @ 0x1C01CBF70 (FindMonitorForDigitizer.c)
 *     GetQDCActivePathsData @ 0x1C01CD86C (GetQDCActivePathsData.c)
 *     ComputeVirtualHimetricSize @ 0x1C01D0CB0 (ComputeVirtualHimetricSize.c)
 *     ?RealizePendingRecreateTouchInjectionDevices@@YAHPEAUtagPROCESSINFO@@H@Z @ 0x1C01DC31C (-RealizePendingRecreateTouchInjectionDevices@@YAHPEAUtagPROCESSINFO@@H@Z.c)
 *     _InitializeTouchInjection @ 0x1C01DD004 (_InitializeTouchInjection.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FreeQDCActivePathsData(__int64 a1)
{
  __int64 result; // rax

  if ( a1 )
    return sub_1C01B0A04();
  return result;
}

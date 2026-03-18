/*
 * XREFs of FreeQDCActivePathsData @ 0x1C0100AA0
 * Callers:
 *     UpdatePointerDevices @ 0x1C0100A40 (UpdatePointerDevices.c)
 *     FindMonitorForDigitizer @ 0x1C01CA390 (FindMonitorForDigitizer.c)
 *     GetQDCActivePathsData @ 0x1C01CBC8C (GetQDCActivePathsData.c)
 *     ComputeVirtualHimetricSize @ 0x1C01CF050 (ComputeVirtualHimetricSize.c)
 *     ?RealizePendingRecreateTouchInjectionDevices@@YAHXZ @ 0x1C01DBCC8 (-RealizePendingRecreateTouchInjectionDevices@@YAHXZ.c)
 *     _InitializeTouchInjection @ 0x1C01DC964 (_InitializeTouchInjection.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FreeQDCActivePathsData(__int64 a1)
{
  __int64 result; // rax

  if ( a1 )
    return sub_1C01A9990();
  return result;
}

/*
 * XREFs of rimFreeQDCActivePathsData @ 0x1C0019054
 * Callers:
 *     RIMOnMonitorNotification @ 0x1C0019AE0 (RIMOnMonitorNotification.c)
 *     rimGetQDCActivePathsData @ 0x1C001ACEC (rimGetQDCActivePathsData.c)
 *     RIMFindMonitorForDigitizer @ 0x1C00731A0 (RIMFindMonitorForDigitizer.c)
 *     RIMComputeVirtualHimetricSize @ 0x1C00CE0EC (RIMComputeVirtualHimetricSize.c)
 * Callees:
 *     Win32FreePool @ 0x1C0033BB0 (Win32FreePool.c)
 */

__int64 __fastcall rimFreeQDCActivePathsData(_QWORD *a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 result; // rax

  if ( a1 )
  {
    v2 = a1[2];
    if ( v2 )
      Win32FreePool(v2);
    v3 = a1[1];
    if ( v3 )
      Win32FreePool(v3);
    result = 0LL;
    *a1 = 0LL;
    a1[1] = 0LL;
    a1[2] = 0LL;
  }
  return result;
}

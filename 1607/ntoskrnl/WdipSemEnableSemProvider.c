/*
 * XREFs of WdipSemEnableSemProvider @ 0x140564FA4
 * Callers:
 *     WdipSemCleanStart @ 0x140564CD0 (WdipSemCleanStart.c)
 * Callees:
 *     WdipSemEnableDisableTrace @ 0x1404C7BCC (WdipSemEnableDisableTrace.c)
 *     EtwRegister @ 0x14054A484 (EtwRegister.c)
 */

__int64 WdipSemEnableSemProvider()
{
  int v0; // ecx
  ULONGLONG RegHandle; // [rsp+40h] [rbp+8h] BYREF

  RegHandle = 0LL;
  v0 = WdipSemEnableDisableTrace(
         _InterlockedExchange(&WdipDiagLoggerId, WdipDiagLoggerId),
         (__int64)&WDI_SEM_PROVIDER,
         0,
         0x200000000LL,
         0,
         1);
  if ( v0 >= 0 )
  {
    v0 = WdipSemEnableDisableTrace(
           _InterlockedExchange(&WdipContextLoggerId, WdipContextLoggerId),
           (__int64)&WDI_SEM_PROVIDER,
           0,
           0x100000000LL,
           0,
           1);
    if ( v0 >= 0 && !WdipSemRegHandle )
    {
      v0 = EtwRegister(&WDI_SEM_PROVIDER, 0LL, 0LL, &RegHandle);
      if ( v0 >= 0 )
        WdipSemRegHandle = RegHandle;
    }
  }
  return (unsigned int)v0;
}

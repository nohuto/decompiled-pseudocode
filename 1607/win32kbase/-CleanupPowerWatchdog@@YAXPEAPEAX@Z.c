/*
 * XREFs of ?CleanupPowerWatchdog@@YAXPEAPEAX@Z @ 0x1C006F8D0
 * Callers:
 *     CleanupPowerRequestList @ 0x1C006F870 (CleanupPowerRequestList.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0089A80 (__security_check_cookie.c)
 *     memset @ 0x1C008A080 (memset.c)
 */

void __fastcall CleanupPowerWatchdog(void **a1)
{
  __int64 v1; // rdi
  _QWORD InputBuffer[10]; // [rsp+30h] [rbp-68h] BYREF

  v1 = (__int64)*a1;
  if ( *a1 )
  {
    memset(InputBuffer, 0, sizeof(InputBuffer));
    *a1 = 0LL;
    LODWORD(InputBuffer[0]) = 21;
    LOBYTE(InputBuffer[9]) = 1;
    InputBuffer[1] = v1;
    ZwPowerInformation(SystemPowerStateLogging|0x40, InputBuffer, 0x50u, 0LL, 0);
  }
}

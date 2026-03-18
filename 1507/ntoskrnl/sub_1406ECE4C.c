/*
 * XREFs of sub_1406ECE4C @ 0x1406ECE4C
 * Callers:
 *     ExpTimeRefreshWork @ 0x1403F7188 (ExpTimeRefreshWork.c)
 * Callees:
 *     EtwWrite @ 0x140014D30 (EtwWrite.c)
 *     EtwRegister @ 0x14054C680 (EtwRegister.c)
 *     EtwUnregister @ 0x140558318 (EtwUnregister.c)
 */

int sub_1406ECE4C()
{
  int result; // eax
  ULONGLONG RegHandle; // [rsp+40h] [rbp+8h] BYREF

  result = EtwRegister(&MS_Windows_LicensingStartServiceTrigger_Provider, 0LL, 0LL, &RegHandle);
  if ( result >= 0 )
  {
    EtwWrite(RegHandle, &LicensingStartServiceTrigger, 0LL, 0, 0LL);
    return EtwUnregister(RegHandle);
  }
  return result;
}

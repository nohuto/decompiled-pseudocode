/*
 * XREFs of sub_1406AEF3C @ 0x1406AEF3C
 * Callers:
 *     ExpTimeRefreshWork @ 0x1403C9110 (ExpTimeRefreshWork.c)
 * Callees:
 *     EtwWrite @ 0x140013320 (EtwWrite.c)
 *     EtwUnregister @ 0x1405488B0 (EtwUnregister.c)
 *     EtwRegister @ 0x140549F44 (EtwRegister.c)
 */

int sub_1406AEF3C()
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

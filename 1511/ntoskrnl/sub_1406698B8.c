/*
 * XREFs of sub_1406698B8 @ 0x1406698B8
 * Callers:
 *     ExpTimeRefreshWork @ 0x1403A6F68 (ExpTimeRefreshWork.c)
 * Callees:
 *     EtwWrite @ 0x14009DEC0 (EtwWrite.c)
 *     EtwRegister @ 0x1404CC744 (EtwRegister.c)
 *     EtwUnregister @ 0x1404D02C4 (EtwUnregister.c)
 */

int sub_1406698B8()
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

/*
 * XREFs of ExpTriggerFastCacheReeval @ 0x1406EDB4C
 * Callers:
 *     ExQueryFastCacheDevLicense @ 0x1405594C8 (ExQueryFastCacheDevLicense.c)
 *     sub_1405874F8 @ 0x1405874F8 (sub_1405874F8.c)
 *     sub_1407DA854 @ 0x1407DA854 (sub_1407DA854.c)
 * Callees:
 *     EtwWrite @ 0x140014D30 (EtwWrite.c)
 *     KeQueryTimeIncrement @ 0x1401011C0 (KeQueryTimeIncrement.c)
 *     EtwRegister @ 0x14054C680 (EtwRegister.c)
 *     EtwUnregister @ 0x140558318 (EtwUnregister.c)
 */

int ExpTriggerFastCacheReeval()
{
  __int64 v0; // rbx
  __int64 v1; // rdi
  __int64 v2; // rcx
  int result; // eax
  REGHANDLE v4; // rdi
  ULONGLONG RegHandle; // [rsp+40h] [rbp+8h] BYREF

  v0 = MEMORY[0xFFFFF78000000320];
  v1 = ExpPreviousReevalTriggerTickCount;
  if ( !ExpPreviousReevalTriggerTickCount
    || (v2 = (v0 - v1) * KeQueryTimeIncrement(), result = 1640261632, v2 >= 36000000000LL) )
  {
    result = EtwRegister(&MS_Windows_WSServiceStartServiceTrigger_Provider, 0LL, 0LL, &RegHandle);
    if ( result >= 0 )
    {
      v4 = RegHandle;
      if ( EtwWrite(RegHandle, &LicensingStartServiceTrigger, 0LL, 0, 0LL) >= 0 )
      {
        _InterlockedExchange64(&ExpPreviousReevalTriggerTickCount, v0);
        v4 = RegHandle;
      }
      return EtwUnregister(v4);
    }
  }
  return result;
}

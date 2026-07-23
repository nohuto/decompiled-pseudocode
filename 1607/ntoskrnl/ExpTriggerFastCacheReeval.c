/*
 * XREFs of ExpTriggerFastCacheReeval @ 0x1406AFC40
 * Callers:
 *     ExQueryFastCacheDevLicense @ 0x1404CA608 (ExQueryFastCacheDevLicense.c)
 *     sub_1406AE02C @ 0x1406AE02C (sub_1406AE02C.c)
 *     ExpInitFastCache @ 0x1407B5348 (ExpInitFastCache.c)
 * Callees:
 *     EtwWrite @ 0x140012EA0 (EtwWrite.c)
 *     KeQueryTimeIncrement @ 0x140087980 (KeQueryTimeIncrement.c)
 *     EtwUnregister @ 0x140548DF0 (EtwUnregister.c)
 *     EtwRegister @ 0x14054A484 (EtwRegister.c)
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

/*
 * XREFs of ExpTriggerFastCacheReeval @ 0x14066A550
 * Callers:
 *     ExQueryFastCacheDevLicense @ 0x1404B8DC0 (ExQueryFastCacheDevLicense.c)
 *     sub_140517000 @ 0x140517000 (sub_140517000.c)
 *     sub_14076255C @ 0x14076255C (sub_14076255C.c)
 * Callees:
 *     EtwWrite @ 0x14009DEC0 (EtwWrite.c)
 *     KeQueryTimeIncrement @ 0x1400C7DB0 (KeQueryTimeIncrement.c)
 *     EtwRegister @ 0x1404CC744 (EtwRegister.c)
 *     EtwUnregister @ 0x1404D02C4 (EtwUnregister.c)
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

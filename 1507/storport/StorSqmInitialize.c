/*
 * XREFs of StorSqmInitialize @ 0x1C0007A38
 * Callers:
 *     RaInitializeDriver @ 0x1C004CBF0 (RaInitializeDriver.c)
 * Callees:
 *     <none>
 */

__int64 StorSqmInitialize()
{
  NTSTATUS v1; // [rsp+30h] [rbp+8h]

  if ( byte_1C0044698 )
    return 3221225701LL;
  v1 = EtwRegister(&StorSqmProvider, 0LL, 0LL, &RegHandle);
  byte_1C0044698 = v1 >= 0;
  if ( v1 >= 0
    && (!EtwProviderEnabled(RegHandle, 0, 0LL)
     || !EtwEventEnabled(RegHandle, &SQM_START_SESSION)
     || !EtwEventEnabled(RegHandle, &SQM_END_SESSION)
     || !EtwEventEnabled(RegHandle, &SQM_SET_DWORD)
     || !EtwEventEnabled(RegHandle, &SQM_INCREMENT_DWORD)
     || !EtwEventEnabled(RegHandle, &SQM_ADDTOAVERAGE_DWORD)
     || !EtwEventEnabled(RegHandle, &SQM_SETIFMAX_DWORD)
     || !EtwEventEnabled(RegHandle, &SQM_SETIFMIN_DWORD)
     || !EtwEventEnabled(RegHandle, &SQM_SET_STRING)
     || !EtwEventEnabled(RegHandle, &SQM_SET_DWORD64)
     || !EtwEventEnabled(RegHandle, &SQM_ADD_STREAMROW_EX)) )
  {
    v1 = -1073741637;
  }
  if ( v1 < 0 )
  {
    if ( byte_1C0044698 )
    {
      EtwUnregister(RegHandle);
      byte_1C0044698 = 0;
    }
  }
  return (unsigned int)v1;
}

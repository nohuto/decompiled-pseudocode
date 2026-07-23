/*
 * XREFs of SbpTraceContextUpdate @ 0x1800F5AA0
 * Callers:
 *     SbUpdateSwitchContextBasedOnDll @ 0x18000ECD0 (SbUpdateSwitchContextBasedOnDll.c)
 *     SbSelectProcedure @ 0x18000EFD0 (SbSelectProcedure.c)
 *     SbObtainTraceHandle @ 0x18007E850 (SbObtainTraceHandle.c)
 * Callees:
 *     EtwEventWrite @ 0x180049CE0 (EtwEventWrite.c)
 *     __security_check_cookie @ 0x180095840 (__security_check_cookie.c)
 *     memset @ 0x1800AB900 (memset.c)
 */

ULONG __fastcall SbpTraceContextUpdate(REGHANDLE RegHandle, __int64 a2, __int16 a3, unsigned __int16 a4, __int64 a5)
{
  ULONG v9; // r8d
  __int16 v11; // [rsp+28h] [rbp-61h] BYREF
  _QWORD UserData[16]; // [rsp+38h] [rbp-51h] BYREF
  unsigned __int16 v13; // [rsp+100h] [rbp+77h] BYREF

  v13 = a4;
  memset(&UserData[1], 0, 0x78uLL);
  v11 = a3;
  UserData[0] = a2;
  UserData[2] = &v11;
  UserData[4] = &v13;
  UserData[1] = 16LL;
  v9 = 3;
  UserData[3] = 2LL;
  UserData[5] = 2LL;
  if ( a4 )
  {
    v9 = 4;
    UserData[6] = a5;
    UserData[7] = a4;
  }
  return EtwEventWrite(RegHandle, &AeSbContextUpdateEvent, v9, (PEVENT_DATA_DESCRIPTOR)UserData);
}

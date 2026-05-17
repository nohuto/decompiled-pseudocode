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

__int64 __fastcall SbpTraceContextUpdate(int a1, __int64 a2, __int16 a3, unsigned __int16 a4, __int64 a5)
{
  int v9; // r8d
  __int16 v11; // [rsp+28h] [rbp-61h] BYREF
  _QWORD v12[16]; // [rsp+38h] [rbp-51h] BYREF
  unsigned __int16 v13; // [rsp+100h] [rbp+77h] BYREF

  v13 = a4;
  memset(&v12[1], 0, 0x78uLL);
  v11 = a3;
  v12[0] = a2;
  v12[2] = &v11;
  v12[4] = &v13;
  v12[1] = 16LL;
  v9 = 3;
  v12[3] = 2LL;
  v12[5] = 2LL;
  if ( a4 )
  {
    v9 = 4;
    v12[6] = a5;
    v12[7] = a4;
  }
  return EtwEventWrite(a1, (int)&AeSbContextUpdateEvent, v9, (__int64)v12);
}

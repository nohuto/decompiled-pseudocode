/*
 * XREFs of PpmEventLPICoreParking @ 0x14020BF6C
 * Callers:
 *     PpmParkCalculateCoreParkingMask @ 0x1400D2A6C (PpmParkCalculateCoreParkingMask.c)
 * Callees:
 *     EtwWrite @ 0x140012EA0 (EtwWrite.c)
 *     EtwEventEnabled @ 0x1400D3370 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

BOOLEAN __fastcall PpmEventLPICoreParking(__int64 a1, int a2)
{
  BOOLEAN result; // al
  REGHANDLE v3; // rbx
  int v4; // [rsp+30h] [rbp-38h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+38h] [rbp-30h] BYREF
  int *v6; // [rsp+48h] [rbp-20h]
  int v7; // [rsp+50h] [rbp-18h]
  int v8; // [rsp+54h] [rbp-14h]
  int v9; // [rsp+78h] [rbp+10h] BYREF

  v9 = a2;
  result = PpmParkLpiCap;
  v4 = PpmParkLpiCap;
  if ( PpmEtwRegistered )
  {
    v3 = PpmEtwHandle;
    result = EtwEventEnabled(PpmEtwHandle, &PPM_ETW_LPI_CORE_PARK);
    if ( result )
    {
      UserData.Reserved = 0;
      v8 = 0;
      UserData.Ptr = (ULONGLONG)&v4;
      UserData.Size = 4;
      v6 = &v9;
      v7 = 4;
      return EtwWrite(v3, &PPM_ETW_LPI_CORE_PARK, 0LL, 2u, &UserData);
    }
  }
  return result;
}

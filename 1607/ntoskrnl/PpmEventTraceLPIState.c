/*
 * XREFs of PpmEventTraceLPIState @ 0x14020CC60
 * Callers:
 *     PpmEventTraceControlCallback @ 0x140581BF8 (PpmEventTraceControlCallback.c)
 * Callees:
 *     EtwWrite @ 0x140012EA0 (EtwWrite.c)
 *     EtwEventEnabled @ 0x1400D3370 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

void PpmEventTraceLPIState()
{
  REGHANDLE v0; // rbx
  int v1; // [rsp+30h] [rbp-38h] BYREF
  int v2; // [rsp+34h] [rbp-34h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+38h] [rbp-30h] BYREF
  int *v4; // [rsp+48h] [rbp-20h]
  int v5; // [rsp+50h] [rbp-18h]
  int v6; // [rsp+54h] [rbp-14h]

  if ( PpmEtwRegistered )
  {
    v0 = PpmEtwHandle;
    if ( EtwEventEnabled(PpmEtwHandle, &PPM_ETW_LPI_RUNDOWN) )
    {
      UserData.Reserved = 0;
      v6 = 0;
      v1 = PpmParkLpiCap;
      v2 = PpmParkLpiEngaged;
      UserData.Size = 4;
      UserData.Ptr = (ULONGLONG)&v1;
      v4 = &v2;
      v5 = 4;
      EtwWrite(v0, &PPM_ETW_LPI_RUNDOWN, 0LL, 2u, &UserData);
    }
  }
}

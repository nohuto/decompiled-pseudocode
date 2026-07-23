/*
 * XREFs of PpmEventVetoReasonRundown @ 0x140674910
 * Callers:
 *     PpmEventTraceControlCallback @ 0x140581BF8 (PpmEventTraceControlCallback.c)
 * Callees:
 *     EtwWrite @ 0x140012EA0 (EtwWrite.c)
 *     EtwEventEnabled @ 0x1400D3370 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

void PpmEventVetoReasonRundown()
{
  REGHANDLE v0; // rdi
  __int64 v1; // r8
  __int64 v2; // rax
  unsigned int v3; // ebx
  __int64 v4; // rax
  int v5; // edx
  __int64 v6; // rax
  unsigned int v7; // [rsp+30h] [rbp-38h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+38h] [rbp-30h] BYREF
  __int64 v9; // [rsp+48h] [rbp-20h]
  int v10; // [rsp+50h] [rbp-18h]
  int v11; // [rsp+54h] [rbp-14h]

  if ( PpmEtwRegistered )
  {
    v0 = PpmEtwHandle;
    if ( EtwEventEnabled(PpmEtwHandle, &PPM_ETW_VETO_NAME_RUNDOWN) )
    {
      v1 = PpmIdleVetoList;
      if ( PpmIdleVetoList )
      {
        UserData.Reserved = 0;
        UserData.Ptr = (ULONGLONG)&v7;
        v2 = 0LL;
        UserData.Size = 4;
        if ( *(_DWORD *)PpmIdleVetoList )
        {
          while ( 1 )
          {
            v3 = v2 + 1;
            v4 = 2 * v2;
            v7 = v3;
            v5 = *(unsigned __int16 *)(v1 + 8 * v4 + 10);
            v6 = *(_QWORD *)(v1 + 8 * v4 + 16);
            v11 = 0;
            v9 = v6;
            v10 = v5;
            EtwWrite(v0, &PPM_ETW_VETO_NAME_RUNDOWN, 0LL, 2u, &UserData);
            v1 = PpmIdleVetoList;
            v2 = v3;
            if ( v3 >= *(_DWORD *)PpmIdleVetoList )
              break;
            v0 = PpmEtwHandle;
          }
        }
      }
    }
  }
}

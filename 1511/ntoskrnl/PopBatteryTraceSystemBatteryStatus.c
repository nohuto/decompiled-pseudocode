/*
 * XREFs of PopBatteryTraceSystemBatteryStatus @ 0x14011B4A0
 * Callers:
 *     PopBatteryApplyCompositeState @ 0x1404F9820 (PopBatteryApplyCompositeState.c)
 *     PopBatteryEtwCallback @ 0x140636AE4 (PopBatteryEtwCallback.c)
 * Callees:
 *     EtwEventEnabled @ 0x140074DA0 (EtwEventEnabled.c)
 *     EtwWrite @ 0x14009DEC0 (EtwWrite.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 */

char __fastcall PopBatteryTraceSystemBatteryStatus(char a1)
{
  const EVENT_DESCRIPTOR *v1; // rbx
  const EVENT_DESCRIPTOR *v2; // rax
  REGHANDLE v3; // rdi
  __int64 v5; // [rsp+30h] [rbp-50h] BYREF
  int v6; // [rsp+38h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-40h] BYREF
  __int64 *v8; // [rsp+50h] [rbp-30h]
  int v9; // [rsp+58h] [rbp-28h]
  int v10; // [rsp+5Ch] [rbp-24h]
  char *v11; // [rsp+60h] [rbp-20h]
  int v12; // [rsp+68h] [rbp-18h]
  int v13; // [rsp+6Ch] [rbp-14h]

  v1 = (const EVENT_DESCRIPTOR *)&BATTERY_EVT_SYSTEM_BATTERY_STATUS_CHANGE;
  v2 = &BATTERY_EVT_SYSTEM_BATTERY_STATUS_RUNDOWN;
  if ( a1 )
    v1 = &BATTERY_EVT_SYSTEM_BATTERY_STATUS_RUNDOWN;
  if ( PopBatteryEtwRegistered )
  {
    v3 = PopBatteryEtwHandle;
    LOBYTE(v2) = EtwEventEnabled(PopBatteryEtwHandle, v1);
    if ( (_BYTE)v2 )
    {
      if ( dword_1402DE3D4 )
      {
        v5 = xmmword_1402DE400;
        v6 = 1;
      }
      else
      {
        v6 = 0;
        v5 = 0LL;
      }
      UserData.Reserved = 0;
      v10 = 0;
      v13 = 0;
      UserData.Ptr = (ULONGLONG)&v6;
      UserData.Size = 4;
      v8 = &v5;
      v9 = 4;
      v11 = (char *)&v5 + 4;
      v12 = 4;
      LOBYTE(v2) = EtwWrite(v3, v1, 0LL, 3u, &UserData);
    }
  }
  return (char)v2;
}

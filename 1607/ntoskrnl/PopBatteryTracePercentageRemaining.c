/*
 * XREFs of PopBatteryTracePercentageRemaining @ 0x14066F4F8
 * Callers:
 *     PopBatteryApplyCompositeState @ 0x1405443F0 (PopBatteryApplyCompositeState.c)
 * Callees:
 *     EtwWrite @ 0x140012EA0 (EtwWrite.c)
 *     EtwEventEnabled @ 0x1400D3370 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

char __fastcall PopBatteryTracePercentageRemaining(int a1, int a2, int a3, int a4)
{
  _UNKNOWN **v4; // rax
  REGHANDLE v6; // rbx
  BOOL v8; // [rsp+38h] [rbp-19h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-9h] BYREF
  int *v10; // [rsp+58h] [rbp+7h]
  int v11; // [rsp+60h] [rbp+Fh]
  int v12; // [rsp+64h] [rbp+13h]
  BOOL *v13; // [rsp+68h] [rbp+17h]
  int v14; // [rsp+70h] [rbp+1Fh]
  int v15; // [rsp+74h] [rbp+23h]
  int *v16; // [rsp+78h] [rbp+27h]
  int v17; // [rsp+80h] [rbp+2Fh]
  int v18; // [rsp+84h] [rbp+33h]
  _UNKNOWN *retaddr; // [rsp+B0h] [rbp+5Fh] BYREF
  int v20; // [rsp+B8h] [rbp+67h] BYREF
  int v21; // [rsp+C0h] [rbp+6Fh] BYREF
  int v22; // [rsp+D0h] [rbp+7Fh] BYREF

  v4 = &retaddr;
  v22 = a4;
  v21 = a2;
  v20 = a1;
  if ( PopBatteryEtwRegistered )
  {
    v6 = PopBatteryEtwHandle;
    LOBYTE(v4) = EtwEventEnabled(PopBatteryEtwHandle, &BATTERY_EVT_BATTERY_PERCENT_REMAINING);
    if ( (_BYTE)v4 )
    {
      UserData.Size = 4;
      v11 = 4;
      UserData.Reserved = 0;
      v12 = 0;
      v15 = 0;
      v18 = 0;
      v8 = a3 == 0;
      UserData.Ptr = (ULONGLONG)&v20;
      v10 = &v21;
      v13 = &v8;
      v16 = &v22;
      v14 = 4;
      v17 = 4;
      LOBYTE(v4) = EtwWrite(v6, &BATTERY_EVT_BATTERY_PERCENT_REMAINING, 0LL, 4u, &UserData);
    }
  }
  return (char)v4;
}

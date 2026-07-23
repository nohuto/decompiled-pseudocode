/*
 * XREFs of PopDiagTraceFxDevicePowerRequirement @ 0x1400BF470
 * Callers:
 *     PopFxProcessWork @ 0x1400BF0DC (PopFxProcessWork.c)
 *     PopFxDeliverDevicePowerRequired @ 0x1401269D4 (PopFxDeliverDevicePowerRequired.c)
 *     PopFxIdleTimeoutDpcRoutine @ 0x140131F58 (PopFxIdleTimeoutDpcRoutine.c)
 *     PopFxUpdateDeviceIdleTimer @ 0x140149238 (PopFxUpdateDeviceIdleTimer.c)
 * Callees:
 *     EtwWriteEx @ 0x140012EE0 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x1400D3370 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

char __fastcall PopDiagTraceFxDevicePowerRequirement(__int64 a1, char a2, unsigned __int8 a3)
{
  const EVENT_DESCRIPTOR *v3; // rbx
  const EVENT_DESCRIPTOR *v4; // rax
  REGHANDLE v6; // rdi
  int v8; // [rsp+40h] [rbp-38h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-30h] BYREF
  int *v10; // [rsp+58h] [rbp-20h]
  int v11; // [rsp+60h] [rbp-18h]
  int v12; // [rsp+64h] [rbp-14h]
  __int64 v13; // [rsp+80h] [rbp+8h] BYREF

  v13 = a1;
  v3 = (const EVENT_DESCRIPTOR *)&POP_ETW_EVENT_DEVICE_POWER_REQUIREMENT_FROM_PEP;
  v4 = &POP_ETW_EVENT_DEVICE_POWER_REQUIREMENT_TO_DEVICE;
  if ( a2 != 1 )
    v3 = &POP_ETW_EVENT_DEVICE_POWER_REQUIREMENT_TO_DEVICE;
  if ( PopDiagHandleRegistered )
  {
    v6 = PopDiagHandle;
    LOBYTE(v4) = EtwEventEnabled(PopDiagHandle, v3);
    if ( (_BYTE)v4 )
    {
      UserData.Reserved = 0;
      v12 = 0;
      v8 = a3;
      UserData.Size = 8;
      UserData.Ptr = (ULONGLONG)&v13;
      v10 = &v8;
      v11 = 4;
      LOBYTE(v4) = EtwWriteEx(v6, v3, 0LL, 1u, 0LL, 0LL, 2u, &UserData);
    }
  }
  return (char)v4;
}

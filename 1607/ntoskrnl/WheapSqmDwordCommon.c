/*
 * XREFs of WheapSqmDwordCommon @ 0x140231A5C
 * Callers:
 *     WheapCreateRecordFromGenericErrorData @ 0x140230B4C (WheapCreateRecordFromGenericErrorData.c)
 *     WheapSqmIncrementDword @ 0x140231AF0 (WheapSqmIncrementDword.c)
 *     WheapSqmCollectWheaPolicyTelemetry @ 0x1406BAFF0 (WheapSqmCollectWheaPolicyTelemetry.c)
 *     WheapPfaMemoryCheck @ 0x1406BB5FC (WheapPfaMemoryCheck.c)
 *     WheapSqmCollectPshedPluginTelemetry @ 0x1406BBE5C (WheapSqmCollectPshedPluginTelemetry.c)
 *     WheapSqmSetDword @ 0x1406BBF78 (WheapSqmSetDword.c)
 * Callees:
 *     EtwWrite @ 0x140012EA0 (EtwWrite.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall WheapSqmDwordCommon(int a1, const EVENT_DESCRIPTOR *a2, int a3, int a4)
{
  int v5; // [rsp+30h] [rbp-9h] BYREF
  int v6; // [rsp+34h] [rbp-5h] BYREF
  int v7; // [rsp+38h] [rbp-1h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp+7h] BYREF
  void *v9; // [rsp+50h] [rbp+17h]
  __int64 v10; // [rsp+58h] [rbp+1Fh]
  int *v11; // [rsp+60h] [rbp+27h]
  __int64 v12; // [rsp+68h] [rbp+2Fh]
  int *v13; // [rsp+70h] [rbp+37h]
  __int64 v14; // [rsp+78h] [rbp+3Fh]

  v7 = a4;
  UserData.Ptr = (ULONGLONG)&v5;
  v5 = a1;
  v9 = &unk_140287218;
  v11 = &v6;
  v13 = &v7;
  v6 = a3;
  *(_QWORD *)&UserData.Size = 4LL;
  v10 = 16LL;
  v12 = 4LL;
  v14 = 4LL;
  return EtwWrite((REGHANDLE)WheapDispatchPtr.DriverObject, a2, 0LL, 4u, &UserData);
}

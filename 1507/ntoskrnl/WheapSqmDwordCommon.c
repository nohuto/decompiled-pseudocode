/*
 * XREFs of WheapSqmDwordCommon @ 0x14026816C
 * Callers:
 *     WheapCreateRecordFromGenericErrorData @ 0x1402671E4 (WheapCreateRecordFromGenericErrorData.c)
 *     WheapSqmIncrementDword @ 0x140268200 (WheapSqmIncrementDword.c)
 *     WheapSqmCollectWheaPolicyTelemetry @ 0x1406FCF9C (WheapSqmCollectWheaPolicyTelemetry.c)
 *     WheapPfaMemoryCheck @ 0x1406FD5B0 (WheapPfaMemoryCheck.c)
 *     WheapSqmCollectPshedPluginTelemetry @ 0x1406FDE14 (WheapSqmCollectPshedPluginTelemetry.c)
 *     WheapSqmSetDword @ 0x1406FDF30 (WheapSqmSetDword.c)
 * Callees:
 *     EtwWrite @ 0x140014D30 (EtwWrite.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
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

  v6 = a4;
  UserData.Ptr = (ULONGLONG)&v7;
  v7 = a1;
  v9 = &unk_1402AD710;
  v11 = &v5;
  v13 = &v6;
  v5 = a3;
  *(_QWORD *)&UserData.Size = 4LL;
  v10 = 16LL;
  v12 = 4LL;
  v14 = 4LL;
  return EtwWrite((REGHANDLE)WheapDispatchPtr.NextDevice, a2, 0LL, 4u, &UserData);
}

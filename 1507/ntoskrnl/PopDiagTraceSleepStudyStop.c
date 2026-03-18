/*
 * XREFs of PopDiagTraceSleepStudyStop @ 0x1406B9DB0
 * Callers:
 *     PopWdiTimerWorkerThread @ 0x14023F3F4 (PopWdiTimerWorkerThread.c)
 * Callees:
 *     EtwWrite @ 0x140014D30 (EtwWrite.c)
 *     EtwEventEnabled @ 0x1400EA070 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 */

void PopDiagTraceSleepStudyStop()
{
  REGHANDLE v0; // rbx
  int v1; // [rsp+30h] [rbp-D0h] BYREF
  int v2; // [rsp+34h] [rbp-CCh] BYREF
  int v3; // [rsp+38h] [rbp-C8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-C0h] BYREF
  void *v5; // [rsp+50h] [rbp-B0h]
  __int64 v6; // [rsp+58h] [rbp-A8h]
  int *v7; // [rsp+60h] [rbp-A0h]
  __int64 v8; // [rsp+68h] [rbp-98h]
  void *v9; // [rsp+70h] [rbp-90h]
  __int64 v10; // [rsp+78h] [rbp-88h]
  void *v11; // [rsp+80h] [rbp-80h]
  __int64 v12; // [rsp+88h] [rbp-78h]
  void *v13; // [rsp+90h] [rbp-70h]
  __int64 v14; // [rsp+98h] [rbp-68h]
  void *v15; // [rsp+A0h] [rbp-60h]
  __int64 v16; // [rsp+A8h] [rbp-58h]
  void *v17; // [rsp+B0h] [rbp-50h]
  __int64 v18; // [rsp+B8h] [rbp-48h]
  void *v19; // [rsp+C0h] [rbp-40h]
  __int64 v20; // [rsp+C8h] [rbp-38h]
  void *v21; // [rsp+D0h] [rbp-30h]
  __int64 v22; // [rsp+D8h] [rbp-28h]
  void *v23; // [rsp+E0h] [rbp-20h]
  __int64 v24; // [rsp+E8h] [rbp-18h]
  void *v25; // [rsp+F0h] [rbp-10h]
  __int64 v26; // [rsp+F8h] [rbp-8h]
  void *v27; // [rsp+100h] [rbp+0h]
  __int64 v28; // [rsp+108h] [rbp+8h]
  int *v29; // [rsp+110h] [rbp+10h]
  __int64 v30; // [rsp+118h] [rbp+18h]
  int *v31; // [rsp+120h] [rbp+20h]
  __int64 v32; // [rsp+128h] [rbp+28h]

  if ( PopDiagHandleRegistered )
  {
    v0 = PopDiagHandle;
    if ( EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_SPM_SCENARIO_STOP) )
    {
      v22 = 1LL;
      v3 = byte_14032D7DC & 1;
      *(_QWORD *)&UserData.Size = 4LL;
      v2 = byte_14032D7DD & 1;
      v1 = ((unsigned __int8)byte_14032D7DD >> 1) & 1;
      UserData.Ptr = (ULONGLONG)&PopWdiScenarioStopEventData;
      v6 = 8LL;
      v5 = &unk_14032D798;
      v8 = 4LL;
      v7 = &v3;
      v9 = &unk_14032D7E0;
      v11 = &unk_14032D7E8;
      v13 = &unk_14032D7F0;
      v15 = &unk_14032D790;
      v17 = &unk_14032D788;
      v19 = &unk_14032D7C8;
      v21 = &unk_14032D800;
      v23 = &unk_14032D784;
      v25 = &unk_14032D7C0;
      v27 = &unk_14032D7D8;
      v29 = &v1;
      v31 = &v2;
      v10 = 8LL;
      v12 = 8LL;
      v14 = 8LL;
      v16 = 8LL;
      v18 = 4LL;
      v20 = 8LL;
      v24 = 4LL;
      v26 = 8LL;
      v28 = 4LL;
      v30 = 4LL;
      v32 = 4LL;
      EtwWrite(v0, &POP_ETW_EVENT_SPM_SCENARIO_STOP, &PopDiagActivityId, 0xFu, &UserData);
    }
  }
}

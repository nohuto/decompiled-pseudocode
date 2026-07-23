/*
 * XREFs of PopDiagTraceSleepStudyStop @ 0x140671D04
 * Callers:
 *     PopWdiTimerWorkerThread @ 0x14020A084 (PopWdiTimerWorkerThread.c)
 * Callees:
 *     EtwWrite @ 0x140012EA0 (EtwWrite.c)
 *     EtwEventEnabled @ 0x1400D3370 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

void PopDiagTraceSleepStudyStop()
{
  REGHANDLE v0; // rbx
  int v1; // [rsp+30h] [rbp-D0h] BYREF
  int v2; // [rsp+34h] [rbp-CCh] BYREF
  int v3; // [rsp+38h] [rbp-C8h] BYREF
  int v4; // [rsp+3Ch] [rbp-C4h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-C0h] BYREF
  void *v6; // [rsp+50h] [rbp-B0h]
  __int64 v7; // [rsp+58h] [rbp-A8h]
  int *v8; // [rsp+60h] [rbp-A0h]
  __int64 v9; // [rsp+68h] [rbp-98h]
  void *v10; // [rsp+70h] [rbp-90h]
  __int64 v11; // [rsp+78h] [rbp-88h]
  void *v12; // [rsp+80h] [rbp-80h]
  __int64 v13; // [rsp+88h] [rbp-78h]
  void *v14; // [rsp+90h] [rbp-70h]
  __int64 v15; // [rsp+98h] [rbp-68h]
  void *v16; // [rsp+A0h] [rbp-60h]
  __int64 v17; // [rsp+A8h] [rbp-58h]
  void *v18; // [rsp+B0h] [rbp-50h]
  __int64 v19; // [rsp+B8h] [rbp-48h]
  void *v20; // [rsp+C0h] [rbp-40h]
  __int64 v21; // [rsp+C8h] [rbp-38h]
  void *v22; // [rsp+D0h] [rbp-30h]
  __int64 v23; // [rsp+D8h] [rbp-28h]
  void *v24; // [rsp+E0h] [rbp-20h]
  __int64 v25; // [rsp+E8h] [rbp-18h]
  void *v26; // [rsp+F0h] [rbp-10h]
  __int64 v27; // [rsp+F8h] [rbp-8h]
  void *v28; // [rsp+100h] [rbp+0h]
  __int64 v29; // [rsp+108h] [rbp+8h]
  int *v30; // [rsp+110h] [rbp+10h]
  __int64 v31; // [rsp+118h] [rbp+18h]
  int *v32; // [rsp+120h] [rbp+20h]
  __int64 v33; // [rsp+128h] [rbp+28h]
  void *v34; // [rsp+130h] [rbp+30h]
  __int64 v35; // [rsp+138h] [rbp+38h]
  int *v36; // [rsp+140h] [rbp+40h]
  __int64 v37; // [rsp+148h] [rbp+48h]
  void *v38; // [rsp+150h] [rbp+50h]
  __int64 v39; // [rsp+158h] [rbp+58h]
  void *v40; // [rsp+160h] [rbp+60h]
  __int64 v41; // [rsp+168h] [rbp+68h]
  void *v42; // [rsp+170h] [rbp+70h]
  __int64 v43; // [rsp+178h] [rbp+78h]

  if ( PopDiagHandleRegistered )
  {
    v0 = PopDiagHandle;
    if ( EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_SPM_SCENARIO_STOP) )
    {
      v23 = 1LL;
      v1 = byte_140302B04 & 1;
      *(_QWORD *)&UserData.Size = 4LL;
      v7 = 8LL;
      v3 = byte_140302B05 & 1;
      v2 = ((unsigned __int8)byte_140302B05 >> 1) & 1;
      v4 = ((unsigned __int8)byte_140302B05 >> 2) & 1;
      UserData.Ptr = (ULONGLONG)&PopWdiScenarioStopEventData;
      v9 = 4LL;
      v6 = &unk_140302AB8;
      v11 = 8LL;
      v8 = &v1;
      v10 = &unk_140302B08;
      v12 = &unk_140302B10;
      v14 = &unk_140302B18;
      v16 = &unk_140302AB0;
      v18 = &unk_140302AA8;
      v20 = &unk_140302AE8;
      v22 = &unk_140302B28;
      v24 = &unk_140302AA4;
      v26 = &unk_140302AE0;
      v28 = &unk_140302B00;
      v30 = &v2;
      v32 = &v3;
      v34 = &unk_140302AF0;
      v36 = &v4;
      v38 = &unk_140302B2C;
      v40 = &unk_140302B30;
      v42 = &unk_140302B34;
      v13 = 8LL;
      v15 = 8LL;
      v17 = 8LL;
      v19 = 4LL;
      v21 = 8LL;
      v25 = 4LL;
      v27 = 8LL;
      v29 = 4LL;
      v31 = 4LL;
      v33 = 4LL;
      v35 = 8LL;
      v37 = 4LL;
      v39 = 4LL;
      v41 = 4LL;
      v43 = 4LL;
      EtwWrite(v0, &POP_ETW_EVENT_SPM_SCENARIO_STOP, &PopDiagActivityId, 0x14u, &UserData);
    }
  }
}

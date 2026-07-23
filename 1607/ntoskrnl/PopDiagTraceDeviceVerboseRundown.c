/*
 * XREFs of PopDiagTraceDeviceVerboseRundown @ 0x14052C35C
 * Callers:
 *     PopDiagTraceFxRundown @ 0x140110D6C (PopDiagTraceFxRundown.c)
 * Callees:
 *     EtwWrite @ 0x140012EA0 (EtwWrite.c)
 *     EtwEventEnabled @ 0x1400D3370 (EtwEventEnabled.c)
 *     PopPepGetDevicePlatformStateDependents @ 0x140110E9C (PopPepGetDevicePlatformStateDependents.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

char __fastcall PopDiagTraceDeviceVerboseRundown(__int64 a1)
{
  _UNKNOWN **v1; // rax
  __int64 v3; // rbx
  __int64 v4; // rcx
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx
  __int16 v9; // [rsp+38h] [rbp-D0h] BYREF
  int v10; // [rsp+3Ch] [rbp-CCh] BYREF
  __int16 v11; // [rsp+40h] [rbp-C8h] BYREF
  int v12; // [rsp+44h] [rbp-C4h] BYREF
  __int64 v13; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v14; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v15; // [rsp+58h] [rbp-B0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+68h] [rbp-A0h] BYREF
  __int16 *v17; // [rsp+78h] [rbp-90h]
  __int64 v18; // [rsp+80h] [rbp-88h]
  __int64 v19; // [rsp+88h] [rbp-80h]
  int v20; // [rsp+90h] [rbp-78h]
  int v21; // [rsp+94h] [rbp-74h]
  int *v22; // [rsp+98h] [rbp-70h]
  __int64 v23; // [rsp+A0h] [rbp-68h]
  __int64 v24; // [rsp+A8h] [rbp-60h]
  int v25; // [rsp+B0h] [rbp-58h]
  int v26; // [rsp+B4h] [rbp-54h]
  __int16 *v27; // [rsp+B8h] [rbp-50h]
  __int64 v28; // [rsp+C0h] [rbp-48h]
  __int64 v29; // [rsp+C8h] [rbp-40h]
  int v30; // [rsp+D0h] [rbp-38h]
  int v31; // [rsp+D4h] [rbp-34h]
  int *v32; // [rsp+D8h] [rbp-30h]
  __int64 v33; // [rsp+E0h] [rbp-28h]
  __int64 *v34; // [rsp+E8h] [rbp-20h]
  __int64 v35; // [rsp+F0h] [rbp-18h]
  __int64 *v36; // [rsp+F8h] [rbp-10h]
  __int64 v37; // [rsp+100h] [rbp-8h]
  _UNKNOWN *retaddr; // [rsp+120h] [rbp+18h] BYREF

  v1 = &retaddr;
  if ( PopDiagHandleRegistered )
  {
    LOBYTE(v1) = EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_DEVICE_VERBOSE_RUNDOWN);
    if ( (_BYTE)v1 )
    {
      v3 = *(_QWORD *)(a1 + 48);
      v4 = *(_QWORD *)(a1 + 56);
      v12 = 0;
      v13 = v3;
      v9 = *(_WORD *)(v3 + 280) >> 1;
      LOWORD(v10) = *(_WORD *)(v3 + 40) >> 1;
      v11 = *(_WORD *)(v3 + 56) >> 1;
      PopPepGetDevicePlatformStateDependents(v4, &v12);
      v15 = *(_QWORD *)(v13 + 16);
      v14 = *(_QWORD *)(v13 + 32);
      UserData.Ptr = (ULONGLONG)&v13;
      v17 = &v9;
      *(_QWORD *)&UserData.Size = 8LL;
      v18 = 2LL;
      v5 = *(unsigned __int16 *)(v3 + 280);
      v19 = *(_QWORD *)(v3 + 288);
      v22 = &v10;
      v20 = v5;
      v21 = 0;
      v23 = 2LL;
      v6 = *(unsigned __int16 *)(v3 + 40);
      v24 = *(_QWORD *)(v3 + 48);
      v27 = &v11;
      v25 = v6;
      v26 = 0;
      v28 = 2LL;
      v7 = *(unsigned __int16 *)(v3 + 56);
      v29 = *(_QWORD *)(v3 + 64);
      v32 = &v12;
      v34 = &v14;
      v36 = &v15;
      v30 = v7;
      v31 = 0;
      v33 = 4LL;
      v35 = 8LL;
      v37 = 8LL;
      LOBYTE(v1) = EtwWrite(PopDiagHandle, &POP_ETW_EVENT_DEVICE_VERBOSE_RUNDOWN, &PopDiagActivityId, 0xAu, &UserData);
    }
  }
  return (char)v1;
}

/*
 * XREFs of PopTransitionTelemetryOsState @ 0x14050BE6C
 * Callers:
 *     EtwpDisallowedGuidAddition @ 0x1404CFA30 (EtwpDisallowedGuidAddition.c)
 *     PopNotifyTelemetryOsState @ 0x1404F7EB8 (PopNotifyTelemetryOsState.c)
 *     PopConnectedStandbySettingCallback @ 0x14050C7FC (PopConnectedStandbySettingCallback.c)
 *     PopDiagInitialize @ 0x1407558FC (PopDiagInitialize.c)
 * Callees:
 *     KiQueryUnbiasedInterruptTime @ 0x140038E1C (KiQueryUnbiasedInterruptTime.c)
 *     TraceLoggingProviderEnabled @ 0x1400923A4 (TraceLoggingProviderEnabled.c)
 *     _TlgKeywordOn @ 0x1400923CC (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x140092474 (_TlgWrite.c)
 *     PopAcquireRwLockExclusive @ 0x140098DC8 (PopAcquireRwLockExclusive.c)
 *     PopReleaseRwLock @ 0x14009D768 (PopReleaseRwLock.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 */

void __fastcall PopTransitionTelemetryOsState(int a1, int a2)
{
  unsigned __int64 v4; // r14
  unsigned __int64 v5; // rsi
  unsigned __int64 v6; // r15
  unsigned __int64 v7; // r12
  bool v8; // cc
  int v9; // r13d
  __int16 v10; // [rsp+30h] [rbp-D0h] BYREF
  __int16 v11; // [rsp+34h] [rbp-CCh] BYREF
  __int16 v12; // [rsp+38h] [rbp-C8h] BYREF
  __int16 v13; // [rsp+3Ch] [rbp-C4h] BYREF
  int v14; // [rsp+40h] [rbp-C0h] BYREF
  int v15; // [rsp+44h] [rbp-BCh]
  int v16; // [rsp+48h] [rbp-B8h] BYREF
  int v17; // [rsp+4Ch] [rbp-B4h]
  __int64 v18; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int64 v19; // [rsp+58h] [rbp-A8h] BYREF
  unsigned __int64 v20; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int64 v21; // [rsp+68h] [rbp-98h] BYREF
  unsigned __int64 v22; // [rsp+70h] [rbp-90h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+80h] [rbp-80h] BYREF
  __int16 *v24; // [rsp+A0h] [rbp-60h]
  __int64 v25; // [rsp+A8h] [rbp-58h]
  __int16 *v26; // [rsp+B0h] [rbp-50h]
  __int64 v27; // [rsp+B8h] [rbp-48h]
  unsigned __int64 *v28; // [rsp+C0h] [rbp-40h]
  __int64 v29; // [rsp+C8h] [rbp-38h]
  int *v30; // [rsp+D0h] [rbp-30h]
  __int64 v31; // [rsp+D8h] [rbp-28h]
  __int64 *v32; // [rsp+E0h] [rbp-20h]
  __int64 v33; // [rsp+E8h] [rbp-18h]
  unsigned __int64 *v34; // [rsp+F0h] [rbp-10h]
  __int64 v35; // [rsp+F8h] [rbp-8h]
  unsigned __int64 *v36; // [rsp+100h] [rbp+0h]
  __int64 v37; // [rsp+108h] [rbp+8h]
  unsigned __int64 *v38; // [rsp+110h] [rbp+10h]
  __int64 v39; // [rsp+118h] [rbp+18h]
  __int16 *v40; // [rsp+120h] [rbp+20h]
  __int64 v41; // [rsp+128h] [rbp+28h]
  __int16 *v42; // [rsp+130h] [rbp+30h]
  __int64 v43; // [rsp+138h] [rbp+38h]
  int *v44; // [rsp+140h] [rbp+40h]
  __int64 v45; // [rsp+148h] [rbp+48h]

  if ( TraceLoggingProviderEnabled(&pCallbackContext, a2, 0x800000000000uLL) && byte_1402DD604 )
  {
    PopAcquireRwLockExclusive((__int64)&PopTelemetryOsState);
    if ( a1 != 5 || dword_1402DD5D0 == 1 || (unsigned int)(dword_1402DD5D0 - 4) <= 1 )
    {
      v4 = (KiQueryUnbiasedInterruptTime() - qword_1402DD5E8) / 0x2710uLL;
      v15 = dword_1402DD5D0;
      v5 = v4 - qword_1402DD5F8;
      v6 = (MEMORY[0xFFFFF78000000008] - qword_1402DD5E0) / 0x2710uLL;
      v17 = dword_1402DD5D4;
      v7 = v6 - qword_1402DD5F0;
      v8 = v4 - qword_1402DD5F8 <= v6 - qword_1402DD5F0;
      qword_1402DD5F0 = v6;
      qword_1402DD5F8 = v4;
      if ( !v8 )
        v5 = v7;
      dword_1402DD5D0 = a1;
      v9 = dword_1402DD600 + 1;
      dword_1402DD5D4 = a2;
      ++dword_1402DD600;
      PopReleaseRwLock((signed __int64 *)&PopTelemetryOsState);
      v18 = qword_1402DD5D8;
      if ( pCallbackContext.LevelPlus1 > 5 )
      {
        if ( TlgKeywordOn(&pCallbackContext, 0x800000000000uLL) )
        {
          v12 = a1;
          v10 = a2;
          v19 = v7;
          v14 = MEMORY[0xFFFFF780000002C4];
          v11 = v15;
          v13 = v17;
          v24 = &v12;
          v26 = &v10;
          v28 = &v19;
          v30 = &v14;
          v32 = &v18;
          v34 = &v22;
          v36 = &v20;
          v38 = &v21;
          v40 = &v11;
          v42 = &v13;
          v44 = &v16;
          v22 = v5;
          v20 = v6;
          v21 = v4;
          v16 = v9;
          v25 = 2LL;
          v27 = 2LL;
          v29 = 8LL;
          v31 = 4LL;
          v33 = 8LL;
          v35 = 8LL;
          v37 = 8LL;
          v39 = 8LL;
          v41 = 2LL;
          v43 = 2LL;
          v45 = 4LL;
          TlgWrite(&pCallbackContext, &unk_140254983, 0LL, 0LL, 0xDu, &pData);
        }
      }
    }
    else
    {
      PopReleaseRwLock((signed __int64 *)&PopTelemetryOsState);
    }
  }
}

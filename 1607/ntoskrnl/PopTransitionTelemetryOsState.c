/*
 * XREFs of PopTransitionTelemetryOsState @ 0x140545DA0
 * Callers:
 *     PopDiagTraceControlCallback @ 0x14052B2D0 (PopDiagTraceControlCallback.c)
 *     PopNotifyTelemetryOsState @ 0x14053056C (PopNotifyTelemetryOsState.c)
 *     PopConnectedStandbySettingCallback @ 0x140547F5C (PopConnectedStandbySettingCallback.c)
 *     PopDiagInitialize @ 0x1407A91B0 (PopDiagInitialize.c)
 * Callees:
 *     _TlgWrite @ 0x14000A598 (_TlgWrite.c)
 *     PopReleaseRwLock @ 0x14000DCD8 (PopReleaseRwLock.c)
 *     TraceLoggingProviderEnabled @ 0x140088D10 (TraceLoggingProviderEnabled.c)
 *     _TlgKeywordOn @ 0x140088D98 (_TlgKeywordOn.c)
 *     KiQueryUnbiasedInterruptTime @ 0x1400F02D4 (KiQueryUnbiasedInterruptTime.c)
 *     PopAcquireRwLockExclusive @ 0x1400FBFA8 (PopAcquireRwLockExclusive.c)
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 */

__int64 __fastcall PopTransitionTelemetryOsState(int a1, int a2)
{
  unsigned int v4; // ebx
  __int64 UnbiasedInterruptTime; // rax
  int v6; // r11d
  int v7; // esi
  unsigned __int64 v8; // r12
  unsigned __int64 v9; // r15
  unsigned __int64 v10; // r13
  unsigned __int64 v11; // rax
  __int16 v13; // [rsp+38h] [rbp-D0h] BYREF
  __int16 v14; // [rsp+3Ch] [rbp-CCh] BYREF
  int v15; // [rsp+40h] [rbp-C8h] BYREF
  int v16; // [rsp+44h] [rbp-C4h] BYREF
  int v17; // [rsp+48h] [rbp-C0h]
  int v18; // [rsp+4Ch] [rbp-BCh]
  int v19; // [rsp+50h] [rbp-B8h]
  int v20; // [rsp+54h] [rbp-B4h] BYREF
  int v21; // [rsp+58h] [rbp-B0h] BYREF
  int v22; // [rsp+5Ch] [rbp-ACh] BYREF
  __int64 v23; // [rsp+60h] [rbp-A8h] BYREF
  unsigned __int64 v24; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v25; // [rsp+70h] [rbp-98h] BYREF
  unsigned __int64 v26; // [rsp+78h] [rbp-90h] BYREF
  unsigned __int64 v27; // [rsp+80h] [rbp-88h] BYREF
  unsigned __int64 v28; // [rsp+88h] [rbp-80h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+98h] [rbp-70h] BYREF
  __int16 *v30; // [rsp+B8h] [rbp-50h]
  __int64 v31; // [rsp+C0h] [rbp-48h]
  __int16 *v32; // [rsp+C8h] [rbp-40h]
  __int64 v33; // [rsp+D0h] [rbp-38h]
  unsigned __int64 *v34; // [rsp+D8h] [rbp-30h]
  __int64 v35; // [rsp+E0h] [rbp-28h]
  int *v36; // [rsp+E8h] [rbp-20h]
  __int64 v37; // [rsp+F0h] [rbp-18h]
  __int64 *v38; // [rsp+F8h] [rbp-10h]
  __int64 v39; // [rsp+100h] [rbp-8h]
  unsigned __int64 *v40; // [rsp+108h] [rbp+0h]
  __int64 v41; // [rsp+110h] [rbp+8h]
  unsigned __int64 *v42; // [rsp+118h] [rbp+10h]
  __int64 v43; // [rsp+120h] [rbp+18h]
  unsigned __int64 *v44; // [rsp+128h] [rbp+20h]
  __int64 v45; // [rsp+130h] [rbp+28h]
  int *v46; // [rsp+138h] [rbp+30h]
  __int64 v47; // [rsp+140h] [rbp+38h]
  int *v48; // [rsp+148h] [rbp+40h]
  __int64 v49; // [rsp+150h] [rbp+48h]
  int *v50; // [rsp+158h] [rbp+50h]
  __int64 v51; // [rsp+160h] [rbp+58h]
  int *v52; // [rsp+168h] [rbp+60h]
  __int64 v53; // [rsp+170h] [rbp+68h]
  __int64 *v54; // [rsp+178h] [rbp+70h]
  __int64 v55; // [rsp+180h] [rbp+78h]

  v4 = 0;
  if ( TraceLoggingProviderEnabled(&pCallbackContext, a2, 0x800000000000uLL) && byte_140302B8C )
  {
    PopAcquireRwLockExclusive((unsigned __int64 *)&PopTelemetryOsState);
    v4 = dword_140302B88;
    if ( a1 != 5 || dword_140302B50 == 1 || (unsigned int)(dword_140302B50 - 4) <= 1 )
    {
      UnbiasedInterruptTime = KiQueryUnbiasedInterruptTime();
      v7 = dword_140302B84;
      v8 = (UnbiasedInterruptTime - qword_140302B68) / 0x2710uLL;
      v9 = v8 - qword_140302B78;
      v10 = (MEMORY[0xFFFFF78000000008] - qword_140302B60) / 0x2710uLL;
      qword_140302B78 = v8;
      v11 = v10 - qword_140302B70;
      v24 = v10 - qword_140302B70;
      qword_140302B70 = v10;
      if ( v9 > v11 )
        v9 = v11;
      v19 = v6 + dword_140302B80;
      dword_140302B80 += v6;
      v17 = dword_140302B50;
      v18 = dword_140302B54;
      if ( a1 != 5 )
      {
        v7 = v6 + dword_140302B84;
        dword_140302B50 = a1;
        dword_140302B84 += v6;
        dword_140302B54 = a2;
      }
      if ( a1 == v6 || a1 == 4 )
      {
        v4 = v6 + dword_140302B88;
        dword_140302B88 += v6;
      }
      else
      {
        v4 = dword_140302B88;
      }
      PopReleaseRwLock(&PopTelemetryOsState);
      v25 = qword_140302B58;
      if ( pCallbackContext.LevelPlus1 > 5 && TlgKeywordOn(&pCallbackContext, 0x800000000000uLL) )
      {
        v13 = a1;
        v14 = a2;
        v20 = MEMORY[0xFFFFF780000002C4];
        LOWORD(v15) = v17;
        LOWORD(v16) = v18;
        v21 = v19;
        v30 = &v13;
        v32 = &v14;
        v34 = &v24;
        v36 = &v20;
        v38 = &v25;
        v40 = &v26;
        v42 = &v27;
        v44 = &v28;
        v46 = &v15;
        v48 = &v16;
        v50 = &v21;
        v52 = &v22;
        v54 = &v23;
        v26 = v9;
        v27 = v10;
        v28 = v8;
        v22 = v7;
        LODWORD(v23) = v4;
        v31 = 2LL;
        v33 = 2LL;
        v35 = 8LL;
        v37 = 4LL;
        v39 = 8LL;
        v41 = 8LL;
        v43 = 8LL;
        v45 = 8LL;
        v47 = 2LL;
        v49 = 2LL;
        v51 = 4LL;
        v53 = 4LL;
        v55 = 4LL;
        TlgWrite(&pCallbackContext, &unk_14027CDAF, 0LL, 0LL, 0xFu, &pData);
      }
    }
    else
    {
      PopReleaseRwLock(&PopTelemetryOsState);
    }
  }
  return v4;
}

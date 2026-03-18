/*
 * XREFs of ?LogTelemetry@CDisplaySet@@SAXPEAV1@0W4Enum@DisplayStateComparison@@@Z @ 0x18008D63C
 * Callers:
 *     ?DeriveCurrentDisplaySet@CDisplayManager@@AEAAJPEAPEAVCDisplaySet@@PEAW4Enum@DisplayStateComparison@@_N@Z @ 0x1800545A4 (-DeriveCurrentDisplaySet@CDisplayManager@@AEAAJPEAPEAVCDisplaySet@@PEAW4Enum@DisplayStateCompari.c)
 * Callees:
 *     _TlgWrite @ 0x1800636A0 (_TlgWrite.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _lambda_9880f9f9ab8bb85f9fd947ddd866f5c6_::operator() @ 0x18008D804 (_lambda_9880f9f9ab8bb85f9fd947ddd866f5c6_--operator().c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

void __fastcall CDisplaySet::LogTelemetry(__int64 a1, __int64 a2, int a3, const GUID *a4)
{
  __int64 v4; // r8
  __int64 v7; // r15
  __int64 v8; // r14
  __int64 v9; // rsi
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rsi
  __int64 v13; // rax
  __int64 v14; // rcx
  unsigned __int16 v15; // [rsp+30h] [rbp-A9h] BYREF
  unsigned __int16 v16; // [rsp+34h] [rbp-A5h] BYREF
  unsigned __int16 v17; // [rsp+38h] [rbp-A1h] BYREF
  unsigned __int16 v18; // [rsp+3Ch] [rbp-9Dh] BYREF
  int v19; // [rsp+40h] [rbp-99h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-89h] BYREF
  GUID *v21; // [rsp+70h] [rbp-69h]
  __int64 v22; // [rsp+78h] [rbp-61h]
  int *v23; // [rsp+80h] [rbp-59h]
  __int64 v24; // [rsp+88h] [rbp-51h]
  unsigned __int16 *v25; // [rsp+90h] [rbp-49h]
  __int64 v26; // [rsp+98h] [rbp-41h]
  __int64 v27; // [rsp+A0h] [rbp-39h]
  int v28; // [rsp+A8h] [rbp-31h]
  int v29; // [rsp+ACh] [rbp-2Dh]
  unsigned __int16 *v30; // [rsp+B0h] [rbp-29h]
  __int64 v31; // [rsp+B8h] [rbp-21h]
  unsigned __int16 *v32; // [rsp+C0h] [rbp-19h]
  __int64 v33; // [rsp+C8h] [rbp-11h]
  __int64 v34; // [rsp+D0h] [rbp-9h]
  int v35; // [rsp+D8h] [rbp-1h]
  int v36; // [rsp+DCh] [rbp+3h]
  unsigned __int16 *v37; // [rsp+E0h] [rbp+7h]
  __int64 v38; // [rsp+E8h] [rbp+Fh]

  v19 = a3;
  v4 = -1LL;
  v18 = 0;
  v17 = 0;
  v15 = 0;
  v16 = 0;
  v7 = 0LL;
  v8 = 0LL;
  if ( a1 )
  {
    v17 = *(_WORD *)(a1 + 72);
    v18 = 12 * v17;
    v9 = 8LL * (unsigned __int16)(12 * v17);
    if ( !is_mul_ok((unsigned __int16)(12 * v17), 8uLL) )
      v9 = -1LL;
    v10 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
            WPF::g_pProcessHeap,
            v9,
            -1LL);
    v7 = v10;
    if ( !v10 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x669u);
      return;
    }
    lambda_9880f9f9ab8bb85f9fd947ddd866f5c6_::operator()(v11, a1, v17, v10);
    v4 = -1LL;
  }
  if ( !a2 )
    goto LABEL_7;
  v16 = *(_WORD *)(a2 + 72);
  v15 = 12 * v16;
  v12 = 8LL * (unsigned __int16)(12 * v16);
  if ( !is_mul_ok((unsigned __int16)(12 * v16), 8uLL) )
    v12 = -1LL;
  v13 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
          WPF::g_pProcessHeap,
          v12,
          -1LL);
  v8 = v13;
  if ( v13 )
  {
    lambda_9880f9f9ab8bb85f9fd947ddd866f5c6_::operator()(v14, a2, v16, v13);
LABEL_7:
    if ( dword_180190A30 > 5u
      && (qword_180190A40 & 0x400000000000LL) != 0
      && (qword_180190A48 & 0x400000000000LL) == qword_180190A48 )
    {
      v22 = 16LL;
      v21 = &gDwmCoreTelemetryActivityId;
      v23 = &v19;
      v25 = &v18;
      v28 = 8 * v18;
      v30 = &v17;
      v32 = &v15;
      v35 = 8 * v15;
      v37 = &v16;
      v24 = 4LL;
      v26 = 2LL;
      v27 = v7;
      v29 = 0;
      v31 = 2LL;
      v33 = 2LL;
      v34 = v8;
      v36 = 0;
      v38 = 2LL;
      TlgWrite((TraceLoggingHProvider)&dword_180190A30, &unk_18016EE1C, (LPCGUID)v4, a4, 0xAu, &pData);
    }
    goto LABEL_8;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x677u);
LABEL_8:
  if ( v7 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, __int64, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      v7,
      v4);
  if ( v8 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, __int64, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      v8,
      v4);
}

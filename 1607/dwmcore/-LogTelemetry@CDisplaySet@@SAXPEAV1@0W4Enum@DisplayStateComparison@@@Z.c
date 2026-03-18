/*
 * XREFs of ?LogTelemetry@CDisplaySet@@SAXPEAV1@0W4Enum@DisplayStateComparison@@@Z @ 0x1800A936C
 * Callers:
 *     ?DeriveCurrentDisplaySet@CDisplayManager@@AEAAJPEAPEAVCDisplaySet@@PEAW4Enum@DisplayStateComparison@@_N@Z @ 0x1800382E4 (-DeriveCurrentDisplaySet@CDisplayManager@@AEAAJPEAPEAVCDisplaySet@@PEAW4Enum@DisplayStateCompari.c)
 *     ?UpdateDXGIEnumeration@CDisplayManager@@QEAAJPEAW4Enum@DisplayStateComparison@@@Z @ 0x180038744 (-UpdateDXGIEnumeration@CDisplayManager@@QEAAJPEAW4Enum@DisplayStateComparison@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     _TlgWrite @ 0x180114534 (_TlgWrite.c)
 *     _lambda_ccb2119b1fe5e44112dd42b40f4f573e_::operator() @ 0x1801619CC (_lambda_ccb2119b1fe5e44112dd42b40f4f573e_--operator().c)
 */

void __fastcall CDisplaySet::LogTelemetry(__int64 a1, __int64 a2, int a3, const GUID *a4)
{
  __int64 v5; // r8
  __int64 v8; // rdi
  __int64 v9; // rbx
  unsigned __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rcx
  unsigned __int16 v17; // [rsp+30h] [rbp-99h] BYREF
  unsigned __int16 v18; // [rsp+34h] [rbp-95h] BYREF
  unsigned __int16 v19; // [rsp+38h] [rbp-91h] BYREF
  unsigned __int16 v20; // [rsp+3Ch] [rbp-8Dh] BYREF
  int v21; // [rsp+40h] [rbp-89h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-79h] BYREF
  GUID *v23; // [rsp+70h] [rbp-59h]
  __int64 v24; // [rsp+78h] [rbp-51h]
  int *v25; // [rsp+80h] [rbp-49h]
  __int64 v26; // [rsp+88h] [rbp-41h]
  unsigned __int16 *v27; // [rsp+90h] [rbp-39h]
  __int64 v28; // [rsp+98h] [rbp-31h]
  __int64 v29; // [rsp+A0h] [rbp-29h]
  int v30; // [rsp+A8h] [rbp-21h]
  int v31; // [rsp+ACh] [rbp-1Dh]
  unsigned __int16 *v32; // [rsp+B0h] [rbp-19h]
  __int64 v33; // [rsp+B8h] [rbp-11h]
  unsigned __int16 *v34; // [rsp+C0h] [rbp-9h]
  __int64 v35; // [rsp+C8h] [rbp-1h]
  __int64 v36; // [rsp+D0h] [rbp+7h]
  int v37; // [rsp+D8h] [rbp+Fh]
  int v38; // [rsp+DCh] [rbp+13h]
  unsigned __int16 *v39; // [rsp+E0h] [rbp+17h]
  __int64 v40; // [rsp+E8h] [rbp+1Fh]

  v5 = -1LL;
  v17 = 0;
  v18 = 0;
  v19 = 0;
  v20 = 0;
  v8 = 0LL;
  v9 = 0LL;
  if ( a1 )
  {
    v18 = *(_WORD *)(a1 + 72);
    v17 = 12 * v18;
    v10 = (unsigned __int16)(12 * v18);
    v11 = 8 * v10;
    if ( !is_mul_ok(v10, 8uLL) )
      v11 = -1LL;
    v12 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
            WPF::g_pProcessHeap,
            v11,
            -1LL);
    v8 = v12;
    if ( !v12 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x5A1u);
      return;
    }
    lambda_ccb2119b1fe5e44112dd42b40f4f573e_::operator()(v13, a1, v18, v12);
    v5 = -1LL;
  }
  if ( !a2 )
    goto LABEL_3;
  v20 = *(_WORD *)(a2 + 72);
  v19 = 12 * v20;
  v14 = 8LL * (unsigned __int16)(12 * v20);
  if ( !is_mul_ok((unsigned __int16)(12 * v20), 8uLL) )
    v14 = -1LL;
  v15 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
          WPF::g_pProcessHeap,
          v14,
          -1LL);
  v9 = v15;
  if ( v15 )
  {
    lambda_ccb2119b1fe5e44112dd42b40f4f573e_::operator()(v16, a2, v20, v15);
LABEL_3:
    if ( hProvider > 5u
      && (qword_1801EA750 & 0x400000000000LL) != 0
      && (qword_1801EA758 & 0x400000000000LL) == qword_1801EA758 )
    {
      v24 = 16LL;
      v23 = &gDwmCoreTelemetryActivityId;
      v25 = &v21;
      v27 = &v17;
      v30 = 8 * v17;
      v32 = &v18;
      v34 = &v19;
      v37 = 8 * v19;
      v39 = &v20;
      v21 = a3;
      v26 = 4LL;
      v28 = 2LL;
      v29 = v8;
      v31 = 0;
      v33 = 2LL;
      v35 = 2LL;
      v36 = v9;
      v38 = 0;
      v40 = 2LL;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1801C515E, (LPCGUID)v5, a4, 0xAu, &pData);
    }
    goto LABEL_5;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x5AFu);
LABEL_5:
  if ( v8 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, __int64, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      v8,
      v5);
  if ( v9 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, __int64, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      v9,
      v5);
}

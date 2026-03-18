/*
 * XREFs of ?SetUpNewInteractionSummary@CTelemetryTouchLatencyAnalysis@@AEAAHPEAUTouchScenarioInfo@1@@Z @ 0x18001C23C
 * Callers:
 *     ?AddToInteractionSummary@CTelemetryTouchLatencyAnalysis@@AEAAXPEAUTouchScenarioInfo@1@I@Z @ 0x18001C628 (-AddToInteractionSummary@CTelemetryTouchLatencyAnalysis@@AEAAXPEAUTouchScenarioInfo@1@I@Z.c)
 * Callees:
 *     memset_0 @ 0x1800BF66E (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CTelemetryTouchLatencyAnalysis::SetUpNewInteractionSummary(
        LARGE_INTEGER *this,
        struct CTelemetryTouchLatencyAnalysis::TouchScenarioInfo *a2)
{
  __int128 v4; // xmm1
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int64 v11; // rsi
  unsigned __int64 v12; // rsi
  __int64 v13; // rax
  wchar_t *v14; // rax
  wchar_t *v15; // rbp
  __int64 v16; // rsi
  unsigned __int64 v17; // rsi
  __int64 v18; // rax
  wchar_t *v19; // rax
  __int64 result; // rax
  _OWORD v21[9]; // [rsp+20h] [rbp-A8h] BYREF

  if ( this[213].QuadPart )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap);
  if ( this[214].QuadPart )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap);
  memset_0(v21, 0, sizeof(v21));
  v4 = v21[1];
  *(_OWORD *)&this[212].LowPart = v21[0];
  v5 = v21[2];
  *(_OWORD *)&this[214].LowPart = v4;
  v6 = v21[3];
  *(_OWORD *)&this[216].LowPart = v5;
  v7 = v21[4];
  *(_OWORD *)&this[218].LowPart = v6;
  v8 = v21[5];
  *(_OWORD *)&this[220].LowPart = v7;
  v9 = v21[6];
  *(_OWORD *)&this[222].LowPart = v8;
  v10 = v21[8];
  *(_OWORD *)&this[224].LowPart = v9;
  *(_OWORD *)&this[226].LowPart = v21[7];
  *(_OWORD *)&this[228].LowPart = v10;
  QueryPerformanceCounter(this + 212);
  v11 = -1LL;
  do
    ++v11;
  while ( *(_WORD *)(*((_QWORD *)a2 + 1) + 2 * v11) );
  v12 = v11 + 1;
  v13 = 2 * v12;
  if ( !is_mul_ok(v12, 2uLL) )
    v13 = -1LL;
  v14 = (wchar_t *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                     WPF::g_pProcessHeap,
                     v13);
  v15 = v14;
  if ( !v14 )
    return 0LL;
  if ( !wcscpy_s(v14, v12, *((const wchar_t **)a2 + 1)) )
  {
    this[213].QuadPart = (LONGLONG)v15;
    v16 = -1LL;
    do
      ++v16;
    while ( *(_WORD *)(*((_QWORD *)a2 + 2) + 2 * v16) );
    v17 = v16 + 1;
    v18 = 2 * v17;
    if ( !is_mul_ok(v17, 2uLL) )
      v18 = -1LL;
    v19 = (wchar_t *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                       WPF::g_pProcessHeap,
                       v18);
    v15 = v19;
    if ( !v19 )
      return 0LL;
    if ( !wcscpy_s(v19, v17, *((const wchar_t **)a2 + 2)) )
    {
      this[214].QuadPart = (LONGLONG)v15;
      result = 1LL;
      this[215].LowPart = *((_DWORD *)a2 + 16);
      this[216].LowPart = *((_DWORD *)a2 + 17);
      this[215].HighPart = *((_DWORD *)a2 + 6);
      return result;
    }
  }
  (*(void (__fastcall **)(WPF::ProcessHeapImpl *, wchar_t *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
    WPF::g_pProcessHeap,
    v15);
  return 0LL;
}

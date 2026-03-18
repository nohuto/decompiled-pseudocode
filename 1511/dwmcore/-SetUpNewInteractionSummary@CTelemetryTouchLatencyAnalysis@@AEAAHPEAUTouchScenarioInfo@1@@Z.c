/*
 * XREFs of ?SetUpNewInteractionSummary@CTelemetryTouchLatencyAnalysis@@AEAAHPEAUTouchScenarioInfo@1@@Z @ 0x1800027F8
 * Callers:
 *     ?AddToInteractionSummary@CTelemetryTouchLatencyAnalysis@@AEAAXPEAUTouchScenarioInfo@1@I@Z @ 0x1800032E8 (-AddToInteractionSummary@CTelemetryTouchLatencyAnalysis@@AEAAXPEAUTouchScenarioInfo@1@I@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     memset_0 @ 0x1800BC8D2 (memset_0.c)
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
  LARGE_INTEGER v11; // rax
  __int64 v12; // r15
  unsigned __int64 v13; // r15
  __int64 v14; // rdi
  wchar_t *v15; // rax
  wchar_t *v16; // rsi
  __int64 v17; // r15
  unsigned __int64 v18; // r15
  __int64 v19; // rdi
  wchar_t *v20; // rax
  __int64 result; // rax
  _OWORD v22[8]; // [rsp+20h] [rbp-B8h] BYREF
  LARGE_INTEGER v23; // [rsp+A0h] [rbp-38h]

  if ( this[213].QuadPart )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, LARGE_INTEGER))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this[213]);
  if ( this[214].QuadPart )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, LARGE_INTEGER))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this[214]);
  *(_QWORD *)&v22[0] = 0LL;
  memset_0((char *)v22 + 8, 0, 0x80uLL);
  v4 = v22[1];
  *(_OWORD *)&this[212].LowPart = v22[0];
  v5 = v22[2];
  *(_OWORD *)&this[214].LowPart = v4;
  v6 = v22[3];
  *(_OWORD *)&this[216].LowPart = v5;
  v7 = v22[4];
  *(_OWORD *)&this[218].LowPart = v6;
  v8 = v22[5];
  *(_OWORD *)&this[220].LowPart = v7;
  v9 = v22[6];
  *(_OWORD *)&this[222].LowPart = v8;
  v10 = v22[7];
  v11 = v23;
  *(_OWORD *)&this[224].LowPart = v9;
  *(_OWORD *)&this[226].LowPart = v10;
  this[228] = v11;
  QueryPerformanceCounter(this + 212);
  v12 = -1LL;
  do
    ++v12;
  while ( *(_WORD *)(*((_QWORD *)a2 + 1) + 2 * v12) );
  v13 = v12 + 1;
  v14 = 2 * v13;
  if ( !is_mul_ok(v13, 2uLL) )
    v14 = -1LL;
  v15 = (wchar_t *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                     WPF::g_pProcessHeap,
                     v14);
  v16 = v15;
  if ( !v15 )
    return 0LL;
  if ( !wcscpy_s(v15, v13, *((const wchar_t **)a2 + 1)) )
  {
    this[213].QuadPart = (LONGLONG)v16;
    v17 = -1LL;
    do
      ++v17;
    while ( *(_WORD *)(*((_QWORD *)a2 + 2) + 2 * v17) );
    v18 = v17 + 1;
    v19 = 2 * v18;
    if ( !is_mul_ok(v18, 2uLL) )
      v19 = -1LL;
    v20 = (wchar_t *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                       WPF::g_pProcessHeap,
                       v19);
    v16 = v20;
    if ( !v20 )
      return 0LL;
    if ( !wcscpy_s(v20, v18, *((const wchar_t **)a2 + 2)) )
    {
      this[214].QuadPart = (LONGLONG)v16;
      result = 1LL;
      this[215].LowPart = *((_DWORD *)a2 + 16);
      this[216].LowPart = *((_DWORD *)a2 + 17);
      this[215].HighPart = *((_DWORD *)a2 + 6);
      return result;
    }
  }
  (*(void (__fastcall **)(WPF::ProcessHeapImpl *, wchar_t *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
    WPF::g_pProcessHeap,
    v16);
  return 0LL;
}

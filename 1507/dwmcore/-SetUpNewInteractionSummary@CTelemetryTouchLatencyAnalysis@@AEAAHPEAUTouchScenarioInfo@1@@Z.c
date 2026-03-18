/*
 * XREFs of ?SetUpNewInteractionSummary@CTelemetryTouchLatencyAnalysis@@AEAAHPEAUTouchScenarioInfo@1@@Z @ 0x1800E58CC
 * Callers:
 *     ?AddToInteractionSummary@CTelemetryTouchLatencyAnalysis@@AEAAXPEAUTouchScenarioInfo@1@I@Z @ 0x1800E44C0 (-AddToInteractionSummary@CTelemetryTouchLatencyAnalysis@@AEAAXPEAUTouchScenarioInfo@1@I@Z.c)
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     memset_0 @ 0x180099BC6 (memset_0.c)
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
  __int64 v9; // r15
  unsigned __int64 v10; // r15
  __int64 v11; // rdi
  wchar_t *v12; // rax
  wchar_t *v13; // rsi
  __int64 result; // rax
  __int64 v15; // r15
  unsigned __int64 v16; // r15
  __int64 v17; // rdi
  wchar_t *v18; // rax
  _OWORD v19[6]; // [rsp+20h] [rbp-88h] BYREF

  if ( this[203].QuadPart )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, LARGE_INTEGER))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this[203]);
  if ( this[204].QuadPart )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, LARGE_INTEGER))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this[204]);
  *(_QWORD *)&v19[0] = 0LL;
  memset_0((char *)v19 + 8, 0, 0x58uLL);
  v4 = v19[1];
  *(_OWORD *)&this[202].LowPart = v19[0];
  v5 = v19[2];
  *(_OWORD *)&this[204].LowPart = v4;
  v6 = v19[3];
  *(_OWORD *)&this[206].LowPart = v5;
  v7 = v19[4];
  *(_OWORD *)&this[208].LowPart = v6;
  v8 = v19[5];
  *(_OWORD *)&this[210].LowPart = v7;
  *(_OWORD *)&this[212].LowPart = v8;
  QueryPerformanceCounter(this + 202);
  v9 = -1LL;
  do
    ++v9;
  while ( *(_WORD *)(*((_QWORD *)a2 + 1) + 2 * v9) );
  v10 = v9 + 1;
  v11 = 2 * v10;
  if ( !is_mul_ok(v10, 2uLL) )
    v11 = -1LL;
  v12 = (wchar_t *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                     WPF::g_pProcessHeap,
                     v11);
  v13 = v12;
  if ( !v12 )
    return 0LL;
  if ( wcscpy_s(v12, v10, *((const wchar_t **)a2 + 1)) )
    goto LABEL_12;
  this[203].QuadPart = (LONGLONG)v13;
  v15 = -1LL;
  do
    ++v15;
  while ( *(_WORD *)(*((_QWORD *)a2 + 2) + 2 * v15) );
  v16 = v15 + 1;
  v17 = 2 * v16;
  if ( !is_mul_ok(v16, 2uLL) )
    v17 = -1LL;
  v18 = (wchar_t *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                     WPF::g_pProcessHeap,
                     v17);
  v13 = v18;
  if ( !v18 )
    return 0LL;
  if ( wcscpy_s(v18, v16, *((const wchar_t **)a2 + 2)) )
  {
LABEL_12:
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, wchar_t *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      v13);
    return 0LL;
  }
  this[204].QuadPart = (LONGLONG)v13;
  result = 1LL;
  this[205].LowPart = *((_DWORD *)a2 + 16);
  this[206].LowPart = *((_DWORD *)a2 + 17);
  this[205].HighPart = *((_DWORD *)a2 + 6);
  return result;
}

/*
 * XREFs of ?LogFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@JPEBG_NPEAG_KPEAD6PEAUFailureInfo@2@@Z @ 0x1800021BC
 * Callers:
 *     ?ReportFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@JPEBGW4ReportFailureOptions@12@@Z @ 0x180002454 (-ReportFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@JPEBGW4ReportFailureOptions@12@@Z.c)
 * Callees:
 *     ?GetFailureLogString@wil@@YAJPEAG_KAEBUFailureInfo@1@@Z @ 0x180001568 (-GetFailureLogString@wil@@YAJPEAG_KAEBUFailureInfo@1@@Z.c)
 *     ?RecordException@details@wil@@YAHJ@Z @ 0x180001880 (-RecordException@details@wil@@YAHJ@Z.c)
 *     ?RecordReturn@details@wil@@YAHJ@Z @ 0x18000189C (-RecordReturn@details@wil@@YAHJ@Z.c)
 *     ?RecordLog@details@wil@@YAHJ@Z @ 0x1800018B8 (-RecordLog@details@wil@@YAHJ@Z.c)
 *     ?RecordFailFast@details@wil@@YAHJ@Z @ 0x1800018E0 (-RecordFailFast@details@wil@@YAHJ@Z.c)
 *     ?ReportFailure_Hr@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J@Z @ 0x18000255C (-ReportFailure_Hr@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J@Z.c)
 *     ?_FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ @ 0x1800027D4 (-_FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ.c)
 *     memset_0 @ 0x180024558 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x180024CF0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall wil::details::LogFailure(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        unsigned int a8,
        _WORD *a9,
        char a10,
        wil *lpOutputString,
        __int64 a12,
        char *a13,
        __int64 a14,
        unsigned __int64 a15)
{
  int v18; // esi
  unsigned int v19; // edi
  int v20; // eax
  char v21; // di
  _WORD *v22; // rax
  DWORD CurrentThreadId; // eax
  wil::details::in1diag3 *v24; // rcx
  const struct wil::FailureInfo *v25; // r9
  const char *ModuleName; // rax
  void (__fastcall *v27)(unsigned __int64, wil *, __int64); // rax

  v18 = 0;
  v19 = a8;
  *(_WORD *)lpOutputString = 0;
  *a13 = 0;
  switch ( a7 )
  {
    case 0:
      v20 = wil::details::RecordException((wil::details *)a8);
      goto LABEL_11;
    case 1:
      v20 = wil::details::RecordReturn((wil::details *)a8);
      goto LABEL_11;
    case 2:
      if ( (a8 & 0x80000000) == 0 )
      {
        v19 = -2147024228;
        wil::details::ReportFailure_Hr(a1, a2, a3);
      }
      v20 = wil::details::RecordLog((wil::details *)v19);
      goto LABEL_11;
    case 3:
      v20 = wil::details::RecordFailFast((wil::details *)a8);
LABEL_11:
      v18 = v20;
      break;
  }
  *(_DWORD *)(a15 + 4) = v19;
  v21 = 1;
  *(_DWORD *)a15 = a7;
  *(_DWORD *)(a15 + 8) = _InterlockedIncrement(&`wil::details::LogFailure'::`2'::s_failureId);
  v22 = a9;
  if ( !a9 || !*a9 )
    v22 = 0LL;
  *(_QWORD *)(a15 + 16) = v22;
  CurrentThreadId = GetCurrentThreadId();
  *(_DWORD *)(a15 + 60) = v18;
  *(_DWORD *)(a15 + 24) = CurrentThreadId;
  *(_QWORD *)(a15 + 32) = a5;
  *(_QWORD *)(a15 + 40) = a4;
  *(_QWORD *)(a15 + 128) = a6;
  *(_QWORD *)(a15 + 48) = a3;
  *(_DWORD *)(a15 + 56) = a2;
  *(_QWORD *)(a15 + 136) = a1;
  *(_QWORD *)(a15 + 64) = 0LL;
  memset_0((void *)(a15 + 72), 0, 0x30uLL);
  if ( wil::details::g_pfnGetModuleName )
    ModuleName = wil::details::g_pfnGetModuleName();
  else
    ModuleName = 0LL;
  *(_QWORD *)(a15 + 120) = ModuleName;
  if ( wil::details::g_pfnGetContextAndNotifyFailure )
    wil::details::g_pfnGetContextAndNotifyFailure((struct wil::FailureInfo *)a15, a13, 0x400uLL);
  if ( wil::details::g_pfnLoggingCallback )
    wil::details::g_pfnLoggingCallback((const struct wil::FailureInfo *)a15);
  if ( *(int *)(a15 + 4) >= 0 )
  {
    if ( a7 != 3 )
      wil::details::in1diag3::_FailFastImmediate_Unexpected(v24);
    *(_DWORD *)(a15 + 4) = -2147418113;
  }
  if ( wil::g_fResultOutputDebugString )
    goto LABEL_32;
  v27 = (void (__fastcall *)(unsigned __int64, wil *, __int64))g_pfnResultLoggingCallback;
  if ( wil::details::g_pfnTelemetryCallback || g_pfnResultLoggingCallback )
  {
    if ( !wil::g_pfnShouldOutputDebugString )
    {
LABEL_31:
      v21 = 0;
      goto LABEL_33;
    }
    if ( !wil::g_pfnShouldOutputDebugString() )
    {
      v27 = (void (__fastcall *)(unsigned __int64, wil *, __int64))g_pfnResultLoggingCallback;
      goto LABEL_31;
    }
LABEL_32:
    v27 = (void (__fastcall *)(unsigned __int64, wil *, __int64))g_pfnResultLoggingCallback;
  }
LABEL_33:
  if ( a10 || v21 )
  {
    if ( v27 && !wil::details::g_resultMessageCallbackSet )
      v27(a15, lpOutputString, 2048LL);
    if ( !*(_WORD *)lpOutputString )
      wil::GetFailureLogString(lpOutputString, (unsigned __int16 *)0x800, a15, v25);
    if ( v21 )
      OutputDebugStringW((LPCWSTR)lpOutputString);
  }
  else if ( v27 )
  {
    if ( !wil::details::g_resultMessageCallbackSet )
      v27(a15, 0LL, 0LL);
  }
}

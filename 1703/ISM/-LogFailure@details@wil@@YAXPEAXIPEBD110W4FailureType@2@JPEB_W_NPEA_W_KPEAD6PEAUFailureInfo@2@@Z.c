/*
 * XREFs of ?LogFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@JPEB_W_NPEA_W_KPEAD6PEAUFailureInfo@2@@Z @ 0x180065344
 * Callers:
 *     ?ReportFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@JPEB_WW4ReportFailureOptions@12@@Z @ 0x1800655B0 (-ReportFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@JPEB_WW4ReportFailureOptions@12@@Z.c)
 * Callees:
 *     ?RecordException@details@wil@@YAHJ@Z @ 0x180002168 (-RecordException@details@wil@@YAHJ@Z.c)
 *     ?RecordReturn@details@wil@@YAHJ@Z @ 0x180002180 (-RecordReturn@details@wil@@YAHJ@Z.c)
 *     ?RecordLog@details@wil@@YAHJ@Z @ 0x180002198 (-RecordLog@details@wil@@YAHJ@Z.c)
 *     ?RecordFailFast@details@wil@@YAHJ@Z @ 0x1800021B0 (-RecordFailFast@details@wil@@YAHJ@Z.c)
 *     ?ReportFailure_Hr@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J@Z @ 0x180002F78 (-ReportFailure_Hr@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J@Z.c)
 *     ?_FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ @ 0x1800032A0 (-_FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ.c)
 *     ?GetFailureLogString@wil@@YAJPEA_W_KAEBUFailureInfo@1@@Z @ 0x1800650E4 (-GetFailureLogString@wil@@YAJPEA_W_KAEBUFailureInfo@1@@Z.c)
 *     memset @ 0x18009D814 (memset.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
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
        __int64 a9,
        char a10,
        wil *lpOutputString,
        __int64 a12,
        char *a13,
        __int64 a14,
        unsigned __int64 a15)
{
  unsigned int v17; // edi
  int v19; // esi
  int v20; // eax
  char v21; // di
  signed __int32 v22; // eax
  DWORD CurrentThreadId; // eax
  wchar_t *v24; // rdx
  wil::details::in1diag3 *v25; // rcx
  const struct wil::FailureInfo *v26; // r9
  const char *ModuleName; // rax
  void (__fastcall *v28)(unsigned __int64, wil *, __int64); // rax

  v17 = a8;
  v19 = 0;
  *(_WORD *)lpOutputString = 0;
  *a13 = 0;
  if ( a7 )
  {
    switch ( a7 )
    {
      case 1:
        v20 = wil::details::RecordReturn((wil::details *)a8);
        break;
      case 2:
        if ( (a8 & 0x80000000) == 0 )
        {
          v17 = -2147024228;
          wil::details::ReportFailure_Hr(a1, a2, a3, 0LL, 0LL, a6, 2, 0x8007029C);
        }
        v20 = wil::details::RecordLog((wil::details *)v17);
        break;
      case 3:
        v20 = wil::details::RecordFailFast((wil::details *)a8);
        break;
      default:
        goto LABEL_12;
    }
  }
  else
  {
    v20 = wil::details::RecordException((wil::details *)a8);
  }
  v19 = v20;
LABEL_12:
  *(_DWORD *)(a15 + 4) = v17;
  v21 = 1;
  *(_DWORD *)a15 = a7;
  v22 = _InterlockedExchangeAdd(&`wil::details::LogFailure'::`2'::s_failureId, 1u);
  *(_QWORD *)(a15 + 16) = 0LL;
  *(_DWORD *)(a15 + 8) = v22 + 1;
  CurrentThreadId = GetCurrentThreadId();
  *(_DWORD *)(a15 + 60) = v19;
  *(_DWORD *)(a15 + 24) = CurrentThreadId;
  *(_QWORD *)(a15 + 128) = a6;
  *(_QWORD *)(a15 + 48) = a3;
  *(_DWORD *)(a15 + 56) = a2;
  *(_QWORD *)(a15 + 32) = 0LL;
  *(_QWORD *)(a15 + 40) = 0LL;
  *(_QWORD *)(a15 + 136) = a1;
  *(_QWORD *)(a15 + 64) = 0LL;
  memset((void *)(a15 + 72), 0, 0x30uLL);
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
      wil::details::in1diag3::_FailFastImmediate_Unexpected(v25);
    *(_DWORD *)(a15 + 4) = -2147418113;
  }
  if ( wil::g_fResultOutputDebugString )
    goto LABEL_29;
  v28 = (void (__fastcall *)(unsigned __int64, wil *, __int64))g_pfnResultLoggingCallback;
  if ( wil::details::g_pfnTelemetryCallback || g_pfnResultLoggingCallback )
  {
    if ( !wil::g_pfnShouldOutputDebugString )
    {
LABEL_28:
      v21 = 0;
      goto LABEL_30;
    }
    if ( !wil::g_pfnShouldOutputDebugString() )
    {
      v28 = (void (__fastcall *)(unsigned __int64, wil *, __int64))g_pfnResultLoggingCallback;
      goto LABEL_28;
    }
LABEL_29:
    v28 = (void (__fastcall *)(unsigned __int64, wil *, __int64))g_pfnResultLoggingCallback;
  }
LABEL_30:
  if ( a10 || v21 )
  {
    if ( v28 && !wil::details::g_resultMessageCallbackSet )
      v28(a15, lpOutputString, 2048LL);
    if ( !*(_WORD *)lpOutputString )
      wil::GetFailureLogString(lpOutputString, v24, a15, v26);
    if ( v21 )
      OutputDebugStringW((LPCWSTR)lpOutputString);
  }
  else if ( v28 )
  {
    if ( !wil::details::g_resultMessageCallbackSet )
      v28(a15, 0LL, 0LL);
  }
}

/*
 * XREFs of ?LogFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@JPEBG_NPEAG_KPEAD6PEAUFailureInfo@2@@Z @ 0x180076B28
 * Callers:
 *     ?ReportFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@JPEBGW4ReportFailureOptions@12@@Z @ 0x180077514 (-ReportFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@JPEBGW4ReportFailureOptions@12@@Z.c)
 * Callees:
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18004EF10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ?RecordFailFast@details@wil@@YAHJ@Z @ 0x180050010 (-RecordFailFast@details@wil@@YAHJ@Z.c)
 *     ?RecordException@details@wil@@YAHJ@Z @ 0x18005004C (-RecordException@details@wil@@YAHJ@Z.c)
 *     ?RecordLog@details@wil@@YAHJ@Z @ 0x180050064 (-RecordLog@details@wil@@YAHJ@Z.c)
 *     ?RecordReturn@details@wil@@YAHJ@Z @ 0x18005007C (-RecordReturn@details@wil@@YAHJ@Z.c)
 *     ?RecordReturnPreRelease@details@wil@@YAHJ@Z @ 0x180050094 (-RecordReturnPreRelease@details@wil@@YAHJ@Z.c)
 *     ?GetContextAndNotifyFailure@ThreadFailureCallbackHolder@details@wil@@SAXPEAUFailureInfo@3@PEAD_K@Z @ 0x180076264 (-GetContextAndNotifyFailure@ThreadFailureCallbackHolder@details@wil@@SAXPEAUFailureInfo@3@PEAD_K.c)
 *     ?GetFailureLogString@wil@@YAJPEAG_KAEBUFailureInfo@1@@Z @ 0x180076334 (-GetFailureLogString@wil@@YAJPEAG_KAEBUFailureInfo@1@@Z.c)
 *     ?ReportFailure_Hr@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J@Z @ 0x180077640 (-ReportFailure_Hr@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800781F0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

void __fastcall wil::details::LogFailure(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        unsigned int a8,
        _WORD *a9,
        char a10,
        WCHAR *lpOutputString,
        __int64 a12,
        char *a13,
        __int64 a14,
        struct wil::FailureInfo *a15)
{
  unsigned int v17; // edi
  int v18; // ebp
  int v19; // eax
  char v20; // si
  _WORD *v21; // rax
  DWORD CurrentThreadId; // eax
  CIconicAnimatedVisual *v23; // rdi
  __int64 v24; // rax
  const char *v25; // r9
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  int v28; // [rsp+88h] [rbp+10h]

  v28 = a2;
  v17 = a8;
  v18 = 0;
  *lpOutputString = 0;
  *a13 = 0;
  switch ( a7 )
  {
    case 0:
      v19 = wil::details::RecordException((wil::details *)a8);
      goto LABEL_13;
    case 1:
      v19 = wil::details::RecordReturn((wil::details *)a8);
      goto LABEL_13;
    case 2:
      v19 = wil::details::RecordReturnPreRelease((wil::details *)a8);
      goto LABEL_13;
    case 3:
      if ( (a8 & 0x80000000) == 0 )
      {
        v17 = -2147024228;
        wil::details::ReportFailure_Hr(a1, a2, a3, a4, a5, a6, 3, -2147024228);
      }
      v19 = wil::details::RecordLog((wil::details *)v17);
      goto LABEL_13;
    case 4:
      v19 = wil::details::RecordFailFast((wil::details *)a8);
LABEL_13:
      v18 = v19;
      break;
  }
  v20 = 1;
  *(_DWORD *)a15 = a7;
  *((_DWORD *)a15 + 1) = v17;
  *((_DWORD *)a15 + 2) = _InterlockedIncrement(&`wil::details::LogFailure'::`2'::s_failureId);
  v21 = a9;
  if ( !a9 || !*a9 )
    v21 = 0LL;
  *((_QWORD *)a15 + 2) = v21;
  CurrentThreadId = GetCurrentThreadId();
  v23 = wil::details::g_pfnGetModuleName;
  *((_DWORD *)a15 + 6) = CurrentThreadId;
  *((_DWORD *)a15 + 14) = v28;
  *((_QWORD *)a15 + 4) = a5;
  *((_QWORD *)a15 + 16) = a6;
  *((_DWORD *)a15 + 15) = v18;
  *((_QWORD *)a15 + 17) = a1;
  *((_QWORD *)a15 + 6) = a3;
  *((_QWORD *)a15 + 5) = a4;
  *((_QWORD *)a15 + 8) = 0LL;
  *((_DWORD *)a15 + 24) = 0;
  *((_QWORD *)a15 + 13) = 0LL;
  *((_QWORD *)a15 + 14) = 0LL;
  *((_DWORD *)a15 + 18) = 0;
  *((_QWORD *)a15 + 10) = 0LL;
  *((_QWORD *)a15 + 11) = 0LL;
  if ( v23 )
    v24 = ((__int64 (__fastcall *)(CIconicAnimatedVisual *))v23)(v23);
  else
    v24 = 0LL;
  *((_QWORD *)a15 + 15) = v24;
  wil::details::ThreadFailureCallbackHolder::GetContextAndNotifyFailure(a15, a13, 0x400uLL);
  if ( wil::details::g_pfnLoggingCallback )
    ((void (__stdcall *)(const struct wil::FailureInfo *))wil::details::g_pfnLoggingCallback)(a15);
  if ( *((int *)a15 + 1) >= 0 && a7 != 4 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0xB52,
      (unsigned int)"internal\\sdk\\inc\\wil\\Result.h",
      v25);
    __debugbreak();
  }
  if ( !wil::g_fResultOutputDebugString && (wil::details::g_pfnTelemetryCallback || wil::g_pfnResultLoggingCallback) )
    v20 = 0;
  if ( a10 || v20 )
  {
    if ( wil::g_pfnResultLoggingCallback )
      ((void (__stdcall *)(struct wil::FailureInfo *, unsigned __int16 *, unsigned __int64))wil::g_pfnResultLoggingCallback)(
        a15,
        lpOutputString,
        0x800uLL);
    if ( !*lpOutputString )
      wil::GetFailureLogString(
        (wil *)lpOutputString,
        (unsigned __int16 *)0x800,
        (__int64)a15,
        (const struct wil::FailureInfo *)v25);
    if ( v20 )
      OutputDebugStringW(lpOutputString);
  }
  else if ( wil::g_pfnResultLoggingCallback )
  {
    if ( !wil::details::g_resultMessageCallbackSet )
      ((void (__stdcall *)(struct wil::FailureInfo *, unsigned __int16 *, unsigned __int64))wil::g_pfnResultLoggingCallback)(
        a15,
        0LL,
        0LL);
  }
}

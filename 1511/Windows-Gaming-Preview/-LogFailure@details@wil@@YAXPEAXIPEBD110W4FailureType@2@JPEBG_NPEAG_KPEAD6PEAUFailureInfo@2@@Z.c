/*
 * XREFs of ?LogFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@JPEBG_NPEAG_KPEAD6PEAUFailureInfo@2@@Z @ 0x180007FB0
 * Callers:
 *     ?ReportFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@JPEBGW4ReportFailureOptions@12@@Z @ 0x180008930 (-ReportFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@JPEBGW4ReportFailureOptions@12@@Z.c)
 * Callees:
 *     ?RecordFailFast@details@wil@@YAHJ@Z @ 0x1800015B0 (-RecordFailFast@details@wil@@YAHJ@Z.c)
 *     ?RecordException@details@wil@@YAHJ@Z @ 0x180007AAC (-RecordException@details@wil@@YAHJ@Z.c)
 *     ?RecordReturn@details@wil@@YAHJ@Z @ 0x180007AC8 (-RecordReturn@details@wil@@YAHJ@Z.c)
 *     ?RecordReturnPreRelease@details@wil@@YAHJ@Z @ 0x180007AE4 (-RecordReturnPreRelease@details@wil@@YAHJ@Z.c)
 *     ?RecordLog@details@wil@@YAHJ@Z @ 0x180007B00 (-RecordLog@details@wil@@YAHJ@Z.c)
 *     ?GetThreadContext@ThreadFailureCallbackHolder@details@wil@@SA_NPEAUFailureInfo@3@PEAV123@PEAD_K@Z @ 0x180007BCC (-GetThreadContext@ThreadFailureCallbackHolder@details@wil@@SA_NPEAUFailureInfo@3@PEAV123@PEAD_K@.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180007CC0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?GetFailureLogString@wil@@YAJPEAG_KAEBUFailureInfo@1@@Z @ 0x180007D7C (-GetFailureLogString@wil@@YAJPEAG_KAEBUFailureInfo@1@@Z.c)
 *     ?ReportFailure_Hr@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J@Z @ 0x180008A54 (-ReportFailure_Hr@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J@Z.c)
 *     ?dummy@Chunk@?$NaiveSplitView@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@4567@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@U?$HashMapOptions@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@EEAAXXZ @ 0x180017C80 (-dummy@Chunk@-$NaiveSplitView@PEAUHSTRING__@@PEAUIInspectable@@U-$DefaultEqualityPredicate@PEAUH.c)
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
  unsigned int v17; // ebx
  int v18; // edi
  int v19; // eax
  char v20; // r14
  _WORD *v21; // rax
  DWORD CurrentThreadId; // eax
  unsigned __int64 v23; // r9
  const char *(*v24)(void); // rbx
  __int64 v25; // rax
  __int64 v26; // rbx
  char v27; // r12
  __int64 i; // rbx
  struct wil::details::ThreadFailureCallbackHolder **v29; // rbp
  char v30; // al
  void (*v31)(bool, const struct wil::FailureInfo *); // rdi
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  int v34; // [rsp+88h] [rbp+10h]

  v34 = a2;
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
  *(_DWORD *)a15 = a7;
  v20 = 1;
  *((_DWORD *)a15 + 1) = v17;
  *((_DWORD *)a15 + 2) = _InterlockedIncrement(&`wil::details::LogFailure'::`2'::s_failureId);
  v21 = a9;
  if ( !a9 || !*a9 )
    v21 = 0LL;
  *((_QWORD *)a15 + 2) = v21;
  CurrentThreadId = GetCurrentThreadId();
  v24 = wil::details::g_pfnGetModuleName;
  *((_DWORD *)a15 + 6) = CurrentThreadId;
  *((_DWORD *)a15 + 14) = v34;
  *((_QWORD *)a15 + 4) = a5;
  *((_QWORD *)a15 + 16) = a6;
  *((_QWORD *)a15 + 6) = a3;
  *((_QWORD *)a15 + 17) = a1;
  *((_DWORD *)a15 + 15) = v18;
  *((_QWORD *)a15 + 5) = a4;
  *((_QWORD *)a15 + 8) = 0LL;
  *((_DWORD *)a15 + 24) = 0;
  *((_QWORD *)a15 + 13) = 0LL;
  *((_QWORD *)a15 + 14) = 0LL;
  *((_DWORD *)a15 + 18) = 0;
  *((_QWORD *)a15 + 10) = 0LL;
  *((_QWORD *)a15 + 11) = 0LL;
  if ( v24 )
    v25 = ((__int64 (__fastcall *)(const char *(*)(void)))v24)(v24);
  else
    v25 = 0LL;
  v26 = wil::details::g_pThreadFailureCallbacks;
  v27 = 0;
  *((_QWORD *)a15 + 15) = v25;
  *a13 = 0;
  if ( v26 )
  {
    v23 = GetCurrentThreadId();
    for ( i = *(_QWORD *)(v26 + 8 * (v23 % 0x14)); i; i = *(_QWORD *)(i + 16) )
    {
      if ( *(_DWORD *)(i + 8) == (_DWORD)v23 )
        goto LABEL_26;
    }
  }
  i = 0LL;
LABEL_26:
  if ( i && *(_QWORD *)i )
  {
    *a13 = 0;
    if ( wil::details::ThreadFailureCallbackHolder::GetThreadContext(
           a15,
           *(struct wil::details::ThreadFailureCallbackHolder ***)i,
           a13,
           0x400uLL) )
    {
      *((_QWORD *)a15 + 8) = a13;
    }
    v29 = *(struct wil::details::ThreadFailureCallbackHolder ***)i;
    do
    {
      v30 = (**(__int64 (__fastcall ***)(struct wil::details::ThreadFailureCallbackHolder *, struct wil::FailureInfo *))v29[1])(
              v29[1],
              a15);
      v29 = (struct wil::details::ThreadFailureCallbackHolder **)v29[2];
      v27 |= v30;
    }
    while ( v29 );
  }
  v31 = wil::details::g_pfnTelemetryCallback;
  if ( wil::details::g_pfnTelemetryCallback )
  {
    wil::details::g_pfnTelemetryCallback(v27, a15);
    v31 = wil::details::g_pfnTelemetryCallback;
  }
  if ( wil::details::g_pfnLoggingCallback )
  {
    wil::details::g_pfnLoggingCallback(a15);
    v31 = wil::details::g_pfnTelemetryCallback;
  }
  if ( *((int *)a15 + 1) >= 0 && a7 != 4 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0xB52,
      (__int64)"internal\\sdk\\inc\\wil\\result.h",
      (const char *)v23);
    JUMPOUT(0x180008308LL);
  }
  if ( !wil::g_fResultOutputDebugString && (v31 || wil::g_pfnResultLoggingCallback) )
    v20 = 0;
  if ( a10 || v20 )
  {
    if ( wil::g_pfnResultLoggingCallback )
      wil::g_pfnResultLoggingCallback(a15, lpOutputString, 0x800uLL);
    if ( !*lpOutputString )
      wil::GetFailureLogString(
        (wil *)lpOutputString,
        (unsigned __int16 *)0x800,
        (__int64)a15,
        (const struct wil::FailureInfo *)v23);
    if ( v20 )
      OutputDebugStringW(lpOutputString);
  }
  else if ( wil::g_pfnResultLoggingCallback )
  {
    if ( !wil::details::g_resultMessageCallbackSet )
      wil::g_pfnResultLoggingCallback(a15, 0LL, 0LL);
  }
}

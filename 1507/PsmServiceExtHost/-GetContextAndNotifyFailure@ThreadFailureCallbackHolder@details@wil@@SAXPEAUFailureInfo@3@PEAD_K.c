/*
 * XREFs of ?GetContextAndNotifyFailure@ThreadFailureCallbackHolder@details@wil@@SAXPEAUFailureInfo@3@PEAD_K@Z @ 0x180049420
 * Callers:
 *     ?LogFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@JPEBG_NPEAG_KPEAD6PEAUFailureInfo@2@@Z @ 0x18004AD94 (-LogFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@JPEBG_NPEAG_KPEAD6PEAUFailureInfo@2@@Z.c)
 * Callees:
 *     PsmInitializeServiceExtension2 @ 0x180024620 (PsmInitializeServiceExtension2.c)
 *     ?GetThreadContext@ThreadFailureCallbackHolder@details@wil@@SA_NPEAUFailureInfo@3@PEAV123@PEAD_K@Z @ 0x180049FFC (-GetThreadContext@ThreadFailureCallbackHolder@details@wil@@SA_NPEAUFailureInfo@3@PEAV123@PEAD_K@.c)
 */

void __fastcall wil::details::ThreadFailureCallbackHolder::GetContextAndNotifyFailure(
        struct wil::FailureInfo *a1,
        char *a2,
        unsigned __int64 a3)
{
  char v6; // r14
  DWORD CurrentThreadId; // eax
  __int64 i; // rbx
  struct wil::details::ThreadFailureCallbackHolder *v9; // rsi
  char v10; // al

  *a2 = 0;
  v6 = 0;
  CurrentThreadId = GetCurrentThreadId();
  for ( i = wil::details::g_threadFailureCallbacks[CurrentThreadId % 0x14uLL];
        i && *(_DWORD *)(i + 8) != CurrentThreadId;
        i = *(_QWORD *)(i + 16) )
  {
    ;
  }
  if ( i && *(_QWORD *)i )
  {
    *a2 = 0;
    if ( wil::details::ThreadFailureCallbackHolder::GetThreadContext(
           a1,
           *(struct wil::details::ThreadFailureCallbackHolder **)i,
           a2,
           a3) )
    {
      *((_QWORD *)a1 + 8) = a2;
    }
    v9 = *(struct wil::details::ThreadFailureCallbackHolder **)i;
    do
    {
      v10 = (***((__int64 (__fastcall ****)(_QWORD, struct wil::FailureInfo *))v9 + 1))(*((_QWORD *)v9 + 1), a1);
      v9 = (struct wil::details::ThreadFailureCallbackHolder *)*((_QWORD *)v9 + 2);
      v6 |= v10;
    }
    while ( v9 );
  }
  if ( wil::details::g_pfnTelemetryCallback )
    wil::details::g_pfnTelemetryCallback(v6, a1);
}

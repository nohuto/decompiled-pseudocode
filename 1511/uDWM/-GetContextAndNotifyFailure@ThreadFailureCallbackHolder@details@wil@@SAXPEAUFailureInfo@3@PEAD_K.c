/*
 * XREFs of ?GetContextAndNotifyFailure@ThreadFailureCallbackHolder@details@wil@@SAXPEAUFailureInfo@3@PEAD_K@Z @ 0x180076264
 * Callers:
 *     ?LogFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@JPEBG_NPEAG_KPEAD6PEAUFailureInfo@2@@Z @ 0x180076B28 (-LogFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@JPEBG_NPEAG_KPEAD6PEAUFailureInfo@2@@Z.c)
 * Callees:
 *     ?GetLocal@?$ThreadStorage@PEAVThreadFailureCallbackHolder@details@wil@@$0BE@@details@wil@@QEAAPEAPEAVThreadFailureCallbackHolder@23@_N@Z @ 0x1800104B4 (-GetLocal@-$ThreadStorage@PEAVThreadFailureCallbackHolder@details@wil@@$0BE@@details@wil@@QEAAPE.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18004EF10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ?GetThreadContext@ThreadFailureCallbackHolder@details@wil@@SA_NPEAUFailureInfo@3@PEAV123@PEAD_K@Z @ 0x180076568 (-GetThreadContext@ThreadFailureCallbackHolder@details@wil@@SA_NPEAUFailureInfo@3@PEAV123@PEAD_K@.c)
 */

void __fastcall wil::details::ThreadFailureCallbackHolder::GetContextAndNotifyFailure(
        struct wil::FailureInfo *a1,
        char *a2,
        unsigned __int64 a3)
{
  char v3; // r14
  struct wil::details::ThreadFailureCallbackHolder **Local; // rbx
  struct wil::details::ThreadFailureCallbackHolder *v8; // rbp
  char v9; // al

  v3 = 0;
  *a2 = 0;
  if ( wil::details::g_pThreadFailureCallbacks )
    Local = (struct wil::details::ThreadFailureCallbackHolder **)wil::details::ThreadStorage<wil::details::ThreadFailureCallbackHolder *,20>::GetLocal(
                                                                   (__int64)a1,
                                                                   0);
  else
    Local = 0LL;
  if ( Local && *Local )
  {
    *a2 = 0;
    if ( wil::details::ThreadFailureCallbackHolder::GetThreadContext(a1, *Local, a2, a3) )
      *((_QWORD *)a1 + 8) = a2;
    v8 = *Local;
    do
    {
      v9 = (***((__int64 (__fastcall ****)(_QWORD, struct wil::FailureInfo *))v8 + 1))(*((_QWORD *)v8 + 1), a1);
      v8 = (struct wil::details::ThreadFailureCallbackHolder *)*((_QWORD *)v8 + 2);
      v3 |= v9;
    }
    while ( v8 );
  }
  if ( wil::details::g_pfnTelemetryCallback )
    ((void (__stdcall *)(bool, const struct wil::FailureInfo *))wil::details::g_pfnTelemetryCallback)(v3, a1);
}

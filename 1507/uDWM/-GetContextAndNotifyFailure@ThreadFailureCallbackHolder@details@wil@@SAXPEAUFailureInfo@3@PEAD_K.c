/*
 * XREFs of ?GetContextAndNotifyFailure@ThreadFailureCallbackHolder@details@wil@@SAXPEAUFailureInfo@3@PEAD_K@Z @ 0x18006E1B4
 * Callers:
 *     ?LogFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@JPEBG_NPEAG_KPEAD6PEAUFailureInfo@2@@Z @ 0x18006E968 (-LogFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@JPEBG_NPEAG_KPEAD6PEAUFailureInfo@2@@Z.c)
 * Callees:
 *     ?GetLocal@?$ThreadStorage@PEAVThreadFailureCallbackHolder@details@wil@@$0BE@@details@wil@@QEAAPEAPEAVThreadFailureCallbackHolder@23@_N@Z @ 0x1800076C4 (-GetLocal@-$ThreadStorage@PEAVThreadFailureCallbackHolder@details@wil@@$0BE@@details@wil@@QEAAPE.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800488B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ?GetThreadContext@ThreadFailureCallbackHolder@details@wil@@SA_NPEAUFailureInfo@3@PEAV123@PEAD_K@Z @ 0x18006E4AC (-GetThreadContext@ThreadFailureCallbackHolder@details@wil@@SA_NPEAUFailureInfo@3@PEAV123@PEAD_K@.c)
 */

void __fastcall wil::details::ThreadFailureCallbackHolder::GetContextAndNotifyFailure(
        struct wil::FailureInfo *a1,
        char *a2,
        unsigned __int64 a3)
{
  char v6; // r14
  struct wil::details::ThreadFailureCallbackHolder **Local; // rax
  struct wil::details::ThreadFailureCallbackHolder **v8; // rbx
  struct wil::details::ThreadFailureCallbackHolder *v9; // rbp
  char v10; // al

  *a2 = 0;
  v6 = 0;
  Local = (struct wil::details::ThreadFailureCallbackHolder **)wil::details::ThreadStorage<wil::details::ThreadFailureCallbackHolder *,20>::GetLocal(
                                                                 (__int64)a1,
                                                                 0);
  v8 = Local;
  if ( Local && *Local )
  {
    *a2 = 0;
    if ( wil::details::ThreadFailureCallbackHolder::GetThreadContext(a1, *Local, a2, a3) )
      *((_QWORD *)a1 + 8) = a2;
    v9 = *v8;
    do
    {
      v10 = (***((__int64 (__fastcall ****)(_QWORD, struct wil::FailureInfo *))v9 + 1))(*((_QWORD *)v9 + 1), a1);
      v9 = (struct wil::details::ThreadFailureCallbackHolder *)*((_QWORD *)v9 + 2);
      v6 |= v10;
    }
    while ( v9 );
  }
  if ( wil::details::g_pfnTelemetryCallback )
    ((void (__stdcall *)(bool, const struct wil::FailureInfo *))wil::details::g_pfnTelemetryCallback)(v6, a1);
}

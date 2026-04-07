/*
 * XREFs of ??1?$ActivityData@VWindowFrameLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VWindowFrameLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18003DB80
 * Callers:
 *     ??1CloneWindow@WindowFrameLoggingTelemetry@@QEAA@XZ @ 0x18003D820 (--1CloneWindow@WindowFrameLoggingTelemetry@@QEAA@XZ.c)
 *     ?reset@?$shared_object@V?$ActivityData@VWindowFrameLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VWindowFrameLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x1800418F0 (-reset@-$shared_object@V-$ActivityData@VWindowFrameLogging@@U_TlgReflectorTag_Param0IsProviderTy.c)
 * Callees:
 *     ?Instance@WindowFrameLogging@@KAPEAV1@XZ @ 0x18003DAA4 (-Instance@WindowFrameLogging@@KAPEAV1@XZ.c)
 *     ?reset@shared_buffer@details@wil@@QEAAXXZ @ 0x1800418CC (-reset@shared_buffer@details@wil@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 *     ??$_TlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_TlgProvider_t@@PEBU_GUID@@@Z @ 0x18007E2E4 (--$_TlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_TlgProvider_t@@PEBU_GUID@@@Z.c)
 */

void __fastcall wil::ActivityBase<WindowFrameLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<WindowFrameLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<WindowFrameLogging,_TlgReflectorTag_Param0IsProviderType>(
        __int64 a1)
{
  struct WindowFrameLogging *v2; // rax

  wil::details::shared_buffer::reset((wil::details::shared_buffer *)(a1 + 224));
  if ( *(_BYTE *)(a1 + 64) )
  {
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      *(_QWORD *)(a1 + 56));
    *(_BYTE *)(a1 + 64) = 0;
  }
  *(_QWORD *)(a1 + 56) = 0LL;
  if ( *(_DWORD *)a1 == 1 )
  {
    *(_DWORD *)a1 = 2;
    v2 = WindowFrameLogging::Instance();
    _TlgWriteActivityAutoStop<0,5>(*((_QWORD *)v2 + 1), a1 + 8);
  }
  *(_DWORD *)a1 = 3;
}

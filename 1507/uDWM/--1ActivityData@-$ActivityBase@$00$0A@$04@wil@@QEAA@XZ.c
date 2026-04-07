/*
 * XREFs of ??1ActivityData@?$ActivityBase@$00$0A@$04@wil@@QEAA@XZ @ 0x180007630
 * Callers:
 *     ?reset@?$shared_object@VActivityData@?$ActivityBase@$00$0A@$04@wil@@@details@wil@@QEAAXXZ @ 0x180007190 (-reset@-$shared_object@VActivityData@-$ActivityBase@$00$0A@$04@wil@@@details@wil@@QEAAXXZ.c)
 *     ??1CloneWindow@WindowFrameLoggingTelemetry@@QEAA@XZ @ 0x180007380 (--1CloneWindow@WindowFrameLoggingTelemetry@@QEAA@XZ.c)
 * Callees:
 *     ?reset@shared_buffer@details@wil@@QEAAXXZ @ 0x1800091A8 (-reset@shared_buffer@details@wil@@QEAAXXZ.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800488B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ??$_TlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_TlgProvider_t@@PEBU_GUID@@@Z @ 0x1800756EC (--$_TlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_TlgProvider_t@@PEBU_GUID@@@Z.c)
 */

void __fastcall wil::ActivityBase<1,0,5>::ActivityData::~ActivityData(__int64 a1)
{
  __int64 v2; // rcx

  wil::details::shared_buffer::reset((wil::details::shared_buffer *)(a1 + 232));
  if ( *(_BYTE *)(a1 + 72) )
  {
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      *(_QWORD *)(a1 + 64));
    *(_BYTE *)(a1 + 72) = 0;
  }
  *(_QWORD *)(a1 + 64) = 0LL;
  if ( *(_DWORD *)a1 == 1 )
  {
    v2 = *(_QWORD *)(a1 + 40);
    *(_DWORD *)a1 = 2;
    _TlgWriteActivityAutoStop<0,5>(v2, a1 + 8);
  }
  *(_DWORD *)a1 = 3;
}

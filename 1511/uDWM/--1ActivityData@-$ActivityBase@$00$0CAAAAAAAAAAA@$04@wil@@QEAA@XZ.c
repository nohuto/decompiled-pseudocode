/*
 * XREFs of ??1ActivityData@?$ActivityBase@$00$0CAAAAAAAAAAA@$04@wil@@QEAA@XZ @ 0x180075B98
 * Callers:
 *     ??1?$ActivityBase@$00$0CAAAAAAAAAAA@$04@wil@@QEAA@XZ @ 0x180075B5C (--1-$ActivityBase@$00$0CAAAAAAAAAAA@$04@wil@@QEAA@XZ.c)
 *     ?reset@?$shared_object@VActivityData@?$ActivityBase@$00$0CAAAAAAAAAAA@$04@wil@@@details@wil@@QEAAXXZ @ 0x1800782C0 (-reset@-$shared_object@VActivityData@-$ActivityBase@$00$0CAAAAAAAAAAA@$04@wil@@@details@wil@@QEA.c)
 * Callees:
 *     ?reset@shared_buffer@details@wil@@QEAAXXZ @ 0x180012AFC (-reset@shared_buffer@details@wil@@QEAAXXZ.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18004EF10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ??$_TlgWriteActivityAutoStop@$0CAAAAAAAAAAA@$04@@YAXPEBU_TlgProvider_t@@PEBU_GUID@@@Z @ 0x1800759BC (--$_TlgWriteActivityAutoStop@$0CAAAAAAAAAAA@$04@@YAXPEBU_TlgProvider_t@@PEBU_GUID@@@Z.c)
 */

void __fastcall wil::ActivityBase<1,35184372088832,5>::ActivityData::~ActivityData(__int64 a1)
{
  const struct _TlgProvider_t *v2; // rcx

  wil::details::shared_buffer::reset((volatile signed __int32 **)(a1 + 232));
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
    v2 = *(const struct _TlgProvider_t **)(a1 + 40);
    *(_DWORD *)a1 = 2;
    _TlgWriteActivityAutoStop<35184372088832,5>(v2, (const GUID *)(a1 + 8));
  }
  *(_DWORD *)a1 = 3;
}

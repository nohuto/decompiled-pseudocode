/*
 * XREFs of ?Localize@?$GitPtrImpl@VGitPtr@Internal@Windows@@@Internal@Windows@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18000D480
 * Callers:
 *     ?Invoke@?$GitInvokeHelper@U?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@VGitPtr@Internal@3@$01@Details@Internal@Windows@@UEAAJPEAUIInspectable@@0@Z @ 0x18000D350 (-Invoke@-$GitInvokeHelper@U-$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@VGitPtr@Intern.c)
 *     ?Invoke@?$GitInvokeHelper@U?$IEventHandler@PEAVAppMemoryUsageLimitChangingEventArgs@System@Windows@@@Foundation@Windows@@VGitPtr@Internal@3@$01@Details@Internal@Windows@@UEAAJPEAUIInspectable@@PEAUIAppMemoryUsageLimitChangingEventArgs@System@4@@Z @ 0x18000D3E0 (-Invoke@-$GitInvokeHelper@U-$IEventHandler@PEAVAppMemoryUsageLimitChangingEventArgs@System@Windo.c)
 * Callees:
 *     _guard_check_icall_nop @ 0x180008AA0 (_guard_check_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::GitPtrImpl<Windows::Internal::GitPtr>::Localize(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  unsigned int v3; // ebp
  __int64 result; // rax

  *a3 = 0LL;
  v3 = *(_DWORD *)(a1 + 8);
  if ( !v3 )
    return 2147942487LL;
  result = *(unsigned int *)(a1 + 12);
  if ( (int)result >= 0 )
    return (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, _QWORD *))(*(_QWORD *)qword_180022720 + 40LL))(
             qword_180022720,
             v3,
             a2,
             a3);
  return result;
}

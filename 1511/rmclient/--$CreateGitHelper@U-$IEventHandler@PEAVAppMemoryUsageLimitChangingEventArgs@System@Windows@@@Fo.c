/*
 * XREFs of ??$CreateGitHelper@U?$IEventHandler@PEAVAppMemoryUsageLimitChangingEventArgs@System@Windows@@@Foundation@Windows@@VGitPtr@Internal@3@@Details@Internal@Windows@@YAJPEAU?$IEventHandler@PEAVAppMemoryUsageLimitChangingEventArgs@System@Windows@@@Foundation@2@PEAPEAU342@@Z @ 0x18000CB40
 * Callers:
 *     ?Add@?$GitEventSource@U?$IEventHandler@PEAVAppMemoryUsageLimitChangingEventArgs@System@Windows@@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@Internal@Windows@@QEAAJPEAU?$IEventHandler@PEAVAppMemoryUsageLimitChangingEventArgs@System@Windows@@@Foundation@3@PEAUEventRegistrationToken@@@Z @ 0x18000D5B8 (-Add@-$GitEventSource@U-$IEventHandler@PEAVAppMemoryUsageLimitChangingEventArgs@System@Windows@@.c)
 * Callees:
 *     ?Revoke@?$GitPtrImpl@VGitPtr@Internal@Windows@@@Internal@Windows@@QEAAJXZ @ 0x180002C0C (-Revoke@-$GitPtrImpl@VGitPtr@Internal@Windows@@@Internal@Windows@@QEAAJXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180008F4C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_check_icall_nop @ 0x180009170 (_guard_check_icall_nop.c)
 *     ??$Register@U?$IEventHandler@PEAVAppMemoryUsageLimitChangingEventArgs@System@Windows@@@Foundation@Windows@@@?$GitPtrImpl@VGitPtr@Internal@Windows@@@Internal@Windows@@IEAAJPEAU?$IEventHandler@PEAVAppMemoryUsageLimitChangingEventArgs@System@Windows@@@Foundation@2@@Z @ 0x18000D028 (--$Register@U-$IEventHandler@PEAVAppMemoryUsageLimitChangingEventArgs@System@Windows@@@Foundatio.c)
 *     ??0?$GitInvokeHelper@U?$IEventHandler@PEAVAppMemoryUsageLimitChangingEventArgs@System@Windows@@@Foundation@Windows@@VGitPtr@Internal@3@$01@Details@Internal@Windows@@QEAA@XZ @ 0x18000D090 (--0-$GitInvokeHelper@U-$IEventHandler@PEAVAppMemoryUsageLimitChangingEventArgs@System@Windows@@@.c)
 */

__int64 __fastcall Windows::Internal::Details::CreateGitHelper<Windows::Foundation::IEventHandler<Windows::System::AppMemoryUsageLimitChangingEventArgs *>,Windows::Internal::GitPtr>(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v4; // rbx
  void *v5; // rax
  int v6; // esi

  *a2 = 0LL;
  v4 = 0LL;
  v5 = operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v5 )
    v4 = Windows::Internal::Details::GitInvokeHelper<Windows::Foundation::IEventHandler<Windows::System::AppMemoryUsageLimitChangingEventArgs *>,Windows::Internal::GitPtr,2>::GitInvokeHelper<Windows::Foundation::IEventHandler<Windows::System::AppMemoryUsageLimitChangingEventArgs *>,Windows::Internal::GitPtr,2>(v5);
  if ( v4 )
  {
    v6 = Windows::Internal::GitPtrImpl<Windows::Internal::GitPtr>::Revoke(v4 + 40);
    if ( v6 >= 0 && a1 )
      v6 = Windows::Internal::GitPtrImpl<Windows::Internal::GitPtr>::Register<Windows::Foundation::IEventHandler<Windows::System::AppMemoryUsageLimitChangingEventArgs *>>(
             v4 + 40,
             a1);
    if ( v6 >= 0 )
      v6 = (**(__int64 (__fastcall ***)(__int64, GUID *, _QWORD *))v4)(
             v4,
             &GUID_6030e7c3_f93f_5e9c_9ba2_9a018d2b09c0,
             a2);
  }
  else
  {
    v6 = -2147024882;
  }
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  return (unsigned int)v6;
}

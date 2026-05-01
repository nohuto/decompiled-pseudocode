/*
 * XREFs of ?Release@?$RuntimeClass@U?$InterfaceList@UIAppMemoryUsageLimitChangingEventArgs@System@Windows@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$00@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800024F0
 * Callers:
 *     ?OnCommitLimitChangeRoutine@CMemoryManager@System@Windows@@CAX_K0@Z @ 0x180002120 (-OnCommitLimitChangeRoutine@CMemoryManager@System@Windows@@CAX_K0@Z.c)
 *     ?Release@AppMemoryUsageLimitChangingEventArgs@System@Windows@@UEAAKXZ @ 0x1800021F0 (-Release@AppMemoryUsageLimitChangingEventArgs@System@Windows@@UEAAKXZ.c)
 *     ??$Make@VAppMemoryUsageLimitChangingEventArgs@System@Windows@@AEA_KAEA_K@Details@WRL@Microsoft@@YA?AV?$ComPtr@VAppMemoryUsageLimitChangingEventArgs@System@Windows@@@12@AEA_K0@Z @ 0x1800023E0 (--$Make@VAppMemoryUsageLimitChangingEventArgs@System@Windows@@AEA_KAEA_K@Details@WRL@Microsoft@@.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIAppMemoryUsageLimitChangingEventArgs@System@Windows@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$00@34@$00$00$0A@@Details@WRL@Microsoft@@W7EAAKXZ @ 0x180006B20 (-Release@-$RuntimeClass@U-$InterfaceList@UIAppMemoryUsageLimitChangingEventArgs@Sys_ea_180006B20.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIAppMemoryUsageLimitChangingEventArgs@System@Windows@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$00@34@$00$00$0A@@Details@WRL@Microsoft@@WBA@EAAKXZ @ 0x180006B30 (-Release@-$RuntimeClass@U-$InterfaceList@UIAppMemoryUsageLimitChangingEventArgs@Sys_ea_180006B30.c)
 * Callees:
 *     ??_EAppMemoryUsageLimitChangingEventArgs@System@Windows@@UEAAPEAXI@Z @ 0x180002200 (--_EAppMemoryUsageLimitChangingEventArgs@System@Windows@@UEAAPEAXI@Z.c)
 *     ?DecrementObjectCount@?$Module@$00V?$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@UEAAKXZ @ 0x180004420 (-DecrementObjectCount@-$Module@$00V-$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@UE.c)
 *     _guard_dispatch_icall_nop @ 0x180006710 (_guard_dispatch_icall_nop.c)
 *     ?SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x1800082E4 (-SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::System::IAppMemoryUsageLimitChangingEventArgs,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<1>,1,1,0>::Release(
        Windows::System::AppMemoryUsageLimitChangingEventArgs *this,
        volatile int *a2)
{
  signed __int64 v2; // rax
  Windows::System::AppMemoryUsageLimitChangingEventArgs *v3; // r10
  unsigned int v4; // ebx
  signed __int64 v5; // rtt
  Windows::System::AppMemoryUsageLimitChangingEventArgs *(__fastcall *v7)(Windows::System::AppMemoryUsageLimitChangingEventArgs *, char); // rax
  __int64 (*v8)(void); // rax

  v2 = *((_QWORD *)this + 6);
  v3 = this;
  while ( v2 >= 0 )
  {
    if ( (_DWORD)v2 == 0x7FFFFFFF )
      return 2147483646LL;
    v4 = v2 - 1;
    v5 = v2;
    v2 = _InterlockedCompareExchange64((volatile signed __int64 *)this + 6, v2 - 1, v2);
    if ( v5 == v2 )
      goto LABEL_8;
  }
  v4 = Microsoft::WRL::Details::SafeUnknownDecrementReference((Microsoft::WRL::Details *)(2 * v2 + 16), a2);
LABEL_8:
  if ( !v4 )
  {
    if ( v3 )
    {
      v7 = *(Windows::System::AppMemoryUsageLimitChangingEventArgs *(__fastcall **)(Windows::System::AppMemoryUsageLimitChangingEventArgs *, char))(*(_QWORD *)v3 + 64LL);
      if ( v7 == Windows::System::AppMemoryUsageLimitChangingEventArgs::`vector deleting destructor' )
        Windows::System::AppMemoryUsageLimitChangingEventArgs::`vector deleting destructor'(v3, 1);
      else
        v7(v3, 1);
    }
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
    {
      v8 = *(__int64 (**)(void))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_ + 16LL);
      if ( v8 == Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::DecrementObjectCount )
      {
        Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::DecrementObjectCount();
        return 0LL;
      }
      v8();
    }
  }
  return v4;
}

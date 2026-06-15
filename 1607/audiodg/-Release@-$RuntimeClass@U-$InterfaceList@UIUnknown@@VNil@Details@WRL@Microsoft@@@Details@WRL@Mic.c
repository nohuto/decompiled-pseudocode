/*
 * XREFs of ?Release@?$RuntimeClass@U?$InterfaceList@UIUnknown@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1400012F0
 * Callers:
 *     ?InternalRelease@?$ComPtr@VCpuManager@@@WRL@Microsoft@@IEAAKXZ @ 0x1400012B8 (-InternalRelease@-$ComPtr@VCpuManager@@@WRL@Microsoft@@IEAAKXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x140019620 (_guard_dispatch_icall_nop.c)
 *     ?SafeDecrementReferenceMultiThread@ATL@@YAKPEAJ@Z @ 0x140028984 (-SafeDecrementReferenceMultiThread@ATL@@YAKPEAJ@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IUnknown,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(
        __int64 a1)
{
  unsigned int v1; // ebx
  __int64 v2; // r10

  v1 = ATL::SafeDecrementReferenceMultiThread((int *)(a1 + 12));
  if ( !v1 )
  {
    if ( v2 )
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v2 + 24LL))(v2, v1 + 1);
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
  }
  return v1;
}

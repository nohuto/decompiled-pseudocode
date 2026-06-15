/*
 * XREFs of ?Release@?$RuntimeClass@U?$InterfaceList@UIUnknown@@U?$InterfaceList@UIAudioStreamingResourceRegistration@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x140001AC0
 * Callers:
 *     ?CreateStreamingResourceManager@@YAJPEAPEAUIAudioStreamingResourceRegistration@@@Z @ 0x140001958 (-CreateStreamingResourceManager@@YAJPEAPEAUIAudioStreamingResourceRegistration@@@Z.c)
 *     ??$MakeAndInitialize@VGraphStreamingResourceManager@@V1@@Details@WRL@Microsoft@@YAJPEAPEAVGraphStreamingResourceManager@@@Z @ 0x1400019F4 (--$MakeAndInitialize@VGraphStreamingResourceManager@@V1@@Details@WRL@Microsoft@@YAJPEAPEAVGraphS.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIUnknown@@U?$InterfaceList@UIAudioStreamingResourceRegistration@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@W7EAAKXZ @ 0x140019810 (-Release@-$RuntimeClass@U-$InterfaceList@UIUnknown@@U-$InterfaceList@UIAudioStreami_ea_140019810.c)
 * Callees:
 *     ??_EGraphStreamingResourceManager@@UEAAPEAXI@Z @ 0x1400038C0 (--_EGraphStreamingResourceManager@@UEAAPEAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x140019620 (_guard_dispatch_icall_nop.c)
 *     ?SafeDecrementReferenceMultiThread@ATL@@YAKPEAJ@Z @ 0x140028984 (-SafeDecrementReferenceMultiThread@ATL@@YAKPEAJ@Z.c)
 */

unsigned int __fastcall Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IUnknown,Microsoft::WRL::Details::InterfaceList<IAudioStreamingResourceRegistration,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(
        __int64 a1)
{
  unsigned int result; // eax
  GraphStreamingResourceManager *v2; // r10
  unsigned int v3; // ebx
  void *(__fastcall *v4)(GraphStreamingResourceManager *__hidden, unsigned int); // rax
  __int64 v5; // rdx

  result = ATL::SafeDecrementReferenceMultiThread((int *)(a1 + 20));
  v3 = result;
  if ( !result )
  {
    if ( v2 )
    {
      v4 = *(void *(__fastcall **)(GraphStreamingResourceManager *__hidden, unsigned int))(*(_QWORD *)v2 + 24LL);
      v5 = v3 + 1;
      if ( v4 == GraphStreamingResourceManager::`vector deleting destructor' )
        GraphStreamingResourceManager::`vector deleting destructor'(v2, v5);
      else
        v4(v2, v5);
    }
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    return v3;
  }
  return result;
}

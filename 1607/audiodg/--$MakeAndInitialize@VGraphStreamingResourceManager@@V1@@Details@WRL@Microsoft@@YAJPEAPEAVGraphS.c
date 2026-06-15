/*
 * XREFs of ??$MakeAndInitialize@VGraphStreamingResourceManager@@V1@@Details@WRL@Microsoft@@YAJPEAPEAVGraphStreamingResourceManager@@@Z @ 0x1400019F4
 * Callers:
 *     ?CreateStreamingResourceManager@@YAJPEAPEAUIAudioStreamingResourceRegistration@@@Z @ 0x140001958 (-CreateStreamingResourceManager@@YAJPEAPEAUIAudioStreamingResourceRegistration@@@Z.c)
 * Callees:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIUnknown@@U?$InterfaceList@UIAudioStreamingResourceRegistration@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x140001AC0 (-Release@-$RuntimeClass@U-$InterfaceList@UIUnknown@@U-$InterfaceList@UIAudioStreamingResourceReg.c)
 *     ??0GraphStreamingResourceManager@@QEAA@XZ @ 0x140003930 (--0GraphStreamingResourceManager@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1400184A8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x140019620 (_guard_dispatch_icall_nop.c)
 *     ?AddRef@?$RuntimeClass@U?$InterfaceList@UIUnknown@@U?$InterfaceList@UIAudioStreamingResourceRegistration@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x140024B30 (-AddRef@-$RuntimeClass@U-$InterfaceList@UIUnknown@@U-$InterfaceList@UIAudioStreamin_ea_140024B30.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<GraphStreamingResourceManager,GraphStreamingResourceManager>(
        GraphStreamingResourceManager **a1)
{
  GraphStreamingResourceManager *v2; // rbx
  GraphStreamingResourceManager *v3; // rax
  GraphStreamingResourceManager *v4; // rax
  void (__fastcall *v5)(GraphStreamingResourceManager *); // rax
  unsigned int v6; // edi
  void (__fastcall *v7)(GraphStreamingResourceManager *); // rax

  *a1 = 0LL;
  v2 = 0LL;
  v3 = (GraphStreamingResourceManager *)operator new(0x120uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v3 )
  {
    v4 = GraphStreamingResourceManager::GraphStreamingResourceManager(v3);
    v2 = v4;
    if ( v4 )
    {
      v5 = *(void (__fastcall **)(GraphStreamingResourceManager *))(*(_QWORD *)v4 + 8LL);
      if ( (char *)v5 == (char *)Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IUnknown,Microsoft::WRL::Details::InterfaceList<IAudioStreamingResourceRegistration,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::AddRef )
        Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IUnknown,Microsoft::WRL::Details::InterfaceList<IAudioStreamingResourceRegistration,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::AddRef(v2);
      else
        v5(v2);
    }
    *a1 = v2;
    v6 = 0;
  }
  else
  {
    v6 = -2147024882;
  }
  if ( v2 )
  {
    v7 = *(void (__fastcall **)(GraphStreamingResourceManager *))(*(_QWORD *)v2 + 16LL);
    if ( (char *)v7 == (char *)Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IUnknown,Microsoft::WRL::Details::InterfaceList<IAudioStreamingResourceRegistration,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release )
      Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IUnknown,Microsoft::WRL::Details::InterfaceList<IAudioStreamingResourceRegistration,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(v2);
    else
      v7(v2);
  }
  return v6;
}

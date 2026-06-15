/*
 * XREFs of ??$MakeAndInitialize@VGraphStreamingResourceManager@@V1@@Details@WRL@Microsoft@@YAJPEAPEAVGraphStreamingResourceManager@@@Z @ 0x140004834
 * Callers:
 *     ?CreateStreamingResourceManager@@YAJPEAPEAUIAudioStreamingResourceRegistration@@@Z @ 0x140004D34 (-CreateStreamingResourceManager@@YAJPEAPEAUIAudioStreamingResourceRegistration@@@Z.c)
 * Callees:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIUnknown@@U?$InterfaceList@UIAudioStreamingResourceRegistration@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1400048F0 (-Release@-$RuntimeClass@U-$InterfaceList@UIUnknown@@U-$InterfaceList@UIAudioStreamingResourceReg.c)
 *     ??0GraphStreamingResourceManager@@QEAA@XZ @ 0x1400095C0 (--0GraphStreamingResourceManager@@QEAA@XZ.c)
 *     ?AddRef@?$RuntimeClass@U?$InterfaceList@UIUnknown@@U?$InterfaceList@UIAudioStreamingResourceRegistration@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x140017CB0 (-AddRef@-$RuntimeClass@U-$InterfaceList@UIUnknown@@U-$InterfaceList@UIAudioStreamingResourceRegi.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x140018F94 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C60 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<GraphStreamingResourceManager,GraphStreamingResourceManager>(
        GraphStreamingResourceManager **a1)
{
  GraphStreamingResourceManager *v2; // rbx
  GraphStreamingResourceManager *v3; // rax
  GraphStreamingResourceManager *v4; // rax
  void (__fastcall *v5)(GraphStreamingResourceManager *); // rdi
  unsigned int v6; // esi
  void (__fastcall *v7)(GraphStreamingResourceManager *); // rdi

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
        Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IUnknown,Microsoft::WRL::Details::InterfaceList<IAudioStreamingResourceRegistration,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::AddRef(v4);
      else
        v5(v4);
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

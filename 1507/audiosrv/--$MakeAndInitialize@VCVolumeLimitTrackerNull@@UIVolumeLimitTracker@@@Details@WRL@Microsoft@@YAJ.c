/*
 * XREFs of ??$MakeAndInitialize@VCVolumeLimitTrackerNull@@UIVolumeLimitTracker@@@Details@WRL@Microsoft@@YAJPEAPEAUIVolumeLimitTracker@@@Z @ 0x180030FBC
 * Callers:
 *     ?CreateInstance@CVolumeLimitTrackerFactory@@SAJPEAPEAUIVolumeLimitTracker@@@Z @ 0x180031CA0 (-CreateInstance@CVolumeLimitTrackerFactory@@SAJPEAPEAUIVolumeLimitTracker@@@Z.c)
 * Callees:
 *     ?QueryInterface@?$RuntimeClass@U?$InterfaceList@UIVolumeLimitTracker@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180031080 (-QueryInterface@-$RuntimeClass@U-$InterfaceList@UIVolumeLimitTracker@@VNil@Details@WRL@Microsoft.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIVolumeLimitTracker@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180031100 (-Release@-$RuntimeClass@U-$InterfaceList@UIVolumeLimitTracker@@VNil@Details@WRL@Microsoft@@@Deta.c)
 *     ??0CDriverListener@@QEAA@XZ @ 0x1800311A8 (--0CDriverListener@@QEAA@XZ.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIVolumeLimitTracker@@VNil@Details@23@V5623@V5623@V5623@V5623@V5623@V5623@V5623@@WRL@Microsoft@@QEAA@XZ @ 0x1800312A0 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIVolumeLimitTracker@@VNil@Details@23@.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800439F4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CVolumeLimitTrackerNull,IVolumeLimitTracker>(_QWORD *a1)
{
  _DWORD *v2; // rax
  _DWORD *v3; // rbx
  __int64 (__fastcall *v4)(_DWORD *, GUID *, _QWORD *); // rsi
  unsigned int Interface; // eax
  unsigned int v6; // esi
  void (__fastcall *v7)(_DWORD *); // rdi

  *a1 = 0LL;
  v2 = operator new(0x220uLL, (const struct std::nothrow_t *)&std::nothrow);
  v3 = v2;
  if ( v2 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IVolumeLimitTracker,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IVolumeLimitTracker,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>(v2);
    v3[4] = 1;
    *(_QWORD *)v3 = &CVolumeLimitTrackerNull::`vftable';
    CDriverListener::CDriverListener((CDriverListener *)(v3 + 6));
    v4 = **(__int64 (__fastcall ***)(_DWORD *, GUID *, _QWORD *))v3;
    if ( (char *)v4 == (char *)Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IVolumeLimitTracker,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::QueryInterface )
      Interface = Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IVolumeLimitTracker,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::QueryInterface(
                    v3,
                    &GUID_caa0a1b0_90b5_451e_b5d6_8c3807017c35,
                    a1);
    else
      Interface = v4(v3, &GUID_caa0a1b0_90b5_451e_b5d6_8c3807017c35, a1);
    v6 = Interface;
    if ( v3 )
    {
      v7 = *(void (__fastcall **)(_DWORD *))(*(_QWORD *)v3 + 16LL);
      if ( (char *)v7 == (char *)Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IVolumeLimitTracker,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release )
        Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IVolumeLimitTracker,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(v3);
      else
        v7(v3);
    }
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v6;
}

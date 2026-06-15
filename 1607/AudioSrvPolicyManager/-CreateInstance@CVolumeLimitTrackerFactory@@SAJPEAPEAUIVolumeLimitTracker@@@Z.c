/*
 * XREFs of ?CreateInstance@CVolumeLimitTrackerFactory@@SAJPEAPEAUIVolumeLimitTracker@@@Z @ 0x180022C40
 * Callers:
 *     ?TsSessionCreate@@YAJKPEAPEAXPEAPEAVTSSession@@@Z @ 0x18001BCF4 (-TsSessionCreate@@YAJKPEAPEAXPEAPEAVTSSession@@@Z.c)
 * Callees:
 *     Template_pt @ 0x180022D94 (Template_pt.c)
 *     Template_dsdp @ 0x180022E10 (Template_dsdp.c)
 *     ??0CDriverListener@@QEAA@XZ @ 0x1800230C4 (--0CDriverListener@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180024BD8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180024CF0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CVolumeLimitTrackerFactory::CreateInstance(struct IVolumeLimitTracker **a1)
{
  unsigned int v2; // edi
  _DWORD *v3; // rax
  __int64 v4; // rcx
  _DWORD *v5; // rbx
  int v6; // ebp
  __int64 v7; // rdx

  v2 = 0;
  if ( !a1 )
  {
    if ( (Microsoft_Windows_EUVolumePolicyEnableBits & 1) != 0 )
      Template_dsdp(
        0,
        (unsigned int)&EUVolumePolicy_Error_Origination,
        -2147467261,
        (unsigned int)"CVolumeLimitTrackerFactory::CreateInstance",
        38,
        0LL,
        -2LL);
    return (unsigned int)-2147467261;
  }
  *a1 = 0LL;
  v3 = operator new(0x220uLL, (const struct std::nothrow_t *)&std::nothrow);
  v5 = v3;
  if ( !v3 )
  {
    v6 = -2147024882;
LABEL_10:
    if ( (Microsoft_Windows_EUVolumePolicyEnableBits & 1) != 0 )
      Template_dsdp(
        v4,
        (unsigned int)&EUVolumePolicy_Error_Propagation,
        v6,
        (unsigned int)"CVolumeLimitTrackerFactory::CreateInstance",
        48,
        0LL,
        -2LL);
    return (unsigned int)v6;
  }
  v3[3] = 1;
  *(_QWORD *)v3 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IVolumeLimitTracker,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable';
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)v5 = &CVolumeLimitTrackerNull::`vftable';
  v5[4] = 1;
  CDriverListener::CDriverListener((CDriverListener *)(v5 + 6));
  v6 = (**(__int64 (__fastcall ***)(_DWORD *, GUID *, struct IVolumeLimitTracker **))v5)(
         v5,
         &GUID_caa0a1b0_90b5_451e_b5d6_8c3807017c35,
         a1);
  (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v5 + 16LL))(v5);
  if ( v6 < 0 )
    goto LABEL_10;
  if ( (Microsoft_Windows_EUVolumePolicyEnableBits & 2) != 0 )
    Template_pt(v4, v7, *a1, 0LL);
  return v2;
}

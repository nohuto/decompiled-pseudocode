/*
 * XREFs of ?GetSubContainers@SettingsContainer@CommonHelper@CreativeFramework@@AEAAJPEAIPEAPEAU?$IIterator@PEAU?$IKeyValuePair@PEAUHSTRING__@@PEAVApplicationDataContainer@Storage@Windows@@@Collections@Foundation@Windows@@@Collections@Foundation@Windows@@@Z @ 0x180069810
 * Callers:
 *     ?ResolveContainers@SettingsContainer@CommonHelper@CreativeFramework@@AEAAXXZ @ 0x180069454 (-ResolveContainers@SettingsContainer@CommonHelper@CreativeFramework@@AEAAXXZ.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002CCC (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$query@U?$IIterable@PEAU?$IKeyValuePair@PEAUHSTRING__@@PEAVApplicationDataContainer@Storage@Windows@@@Collections@Foundation@Windows@@@Collections@Foundation@Windows@@@?$com_ptr_t@U?$IMapView@PEAUHSTRING__@@PEAVApplicationDataContainer@Storage@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@U?$IIterable@PEAU?$IKeyValuePair@PEAUHSTRING__@@PEAVApplicationDataContainer@Storage@Windows@@@Collections@Foundation@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@1@XZ @ 0x180069DD8 (--$query@U-$IIterable@PEAU-$IKeyValuePair@PEAUHSTRING__@@PEAVApplicationDataContainer@Storage@Wi.c)
 *     _guard_dispatch_icall_nop @ 0x180070170 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CreativeFramework::CommonHelper::SettingsContainer::GetSubContainers(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  __int64 v5; // rcx
  int v6; // eax
  unsigned int v7; // ebx
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rax
  _QWORD v13[2]; // [rsp+20h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  int v15; // [rsp+50h] [rbp+20h] BYREF
  __int64 v16; // [rsp+60h] [rbp+30h] BYREF
  __int64 v17; // [rsp+68h] [rbp+38h] BYREF

  v13[1] = -2LL;
  *a3 = 0LL;
  v5 = *(_QWORD *)(a1 + 8);
  v17 = 0LL;
  v6 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v5 + 72LL))(v5, &v17);
  v7 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x68,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\commonhelpers\\applicationsettingshelper.cpp",
      (const char *)(unsigned int)v6);
    goto LABEL_13;
  }
  wil::com_ptr_t<Windows::Foundation::Collections::IMapView<HSTRING__ *,Windows::Storage::ApplicationDataContainer *>,wil::err_exception_policy>::query<Windows::Foundation::Collections::IIterable<Windows::Foundation::Collections::IKeyValuePair<HSTRING__ *,Windows::Storage::ApplicationDataContainer *> *>>(
    &v17,
    v13);
  v16 = 0LL;
  v8 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)v13[0] + 48LL))(v13[0], &v16);
  v7 = v8;
  if ( v8 >= 0 )
  {
    v8 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v17 + 56LL))(v17, &v15);
    v7 = v8;
    if ( v8 >= 0 )
    {
      v11 = v16;
      v10 = 0LL;
      v16 = 0LL;
      *a3 = v11;
      *a2 = v15;
      v7 = 0;
      goto LABEL_9;
    }
    v9 = 109LL;
  }
  else
  {
    v9 = 107LL;
  }
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)v9,
    (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\commonhelpers\\applicationsettingshelper.cpp",
    (const char *)(unsigned int)v8);
  v10 = v16;
LABEL_9:
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  if ( v13[0] )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v13[0] + 16LL))(v13[0]);
LABEL_13:
  if ( v17 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  return v7;
}

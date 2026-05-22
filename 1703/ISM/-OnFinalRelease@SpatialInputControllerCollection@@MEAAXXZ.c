/*
 * XREFs of ?OnFinalRelease@SpatialInputControllerCollection@@MEAAXXZ @ 0x1800784C0
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?lock@critical_section@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x18003CB54 (-lock@critical_section@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180043938 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Close@RIMDeviceCollection@@IEAAXXZ @ 0x180071E48 (-Close@RIMDeviceCollection@@IEAAXXZ.c)
 *     ?Instance@RawInputProvidersTracing@@KAPEAV1@XZ @ 0x180075F74 (-Instance@RawInputProvidersTracing@@KAPEAV1@XZ.c)
 *     ?SetOwner@SpatialInputControllerHeadEventHandler@@QEAAJPEAVSpatialInputControllerCollection@@PEAUIMessageSession@@@Z @ 0x180077984 (-SetOwner@SpatialInputControllerHeadEventHandler@@QEAAJPEAVSpatialInputControllerCollection@@PEA.c)
 *     ?_Erase@?$_Tree@V?$_Tmap_traits@KV?$shared_ptr@VSpatialInteractionController@SpatialInteractionDevices@@@std@@U?$less@K@2@V?$allocator@U?$pair@$$CBKV?$shared_ptr@VSpatialInteractionController@SpatialInteractionDevices@@@std@@@std@@@2@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@$$CBKV?$shared_ptr@VSpatialInteractionController@SpatialInteractionDevices@@@std@@@std@@PEAX@2@@Z @ 0x18007AF0C (-_Erase@-$_Tree@V-$_Tmap_traits@KV-$shared_ptr@VSpatialInteractionController@SpatialInteractionD.c)
 *     __security_check_cookie @ 0x18009CCC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=37
void __fastcall SpatialInputControllerCollection::OnFinalRelease(SpatialInputControllerCollection *this)
{
  struct EventRegistrationToken *v2; // rcx
  volatile signed __int32 *v3; // rcx
  __int64 v4; // rbx
  __int64 *v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rbx
  __int64 *v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rcx
  int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rcx
  char *v18; // rbx
  _DWORD *v19; // rcx
  __int64 v20; // rcx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+38h] [rbp-60h] BYREF
  LPCRITICAL_SECTION v22; // [rsp+40h] [rbp-58h] BYREF
  char *v23; // [rsp+48h] [rbp-50h]
  char *v24; // [rsp+50h] [rbp-48h]
  __int64 v25; // [rsp+58h] [rbp-40h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]

  v25 = -2LL;
  v2 = (struct EventRegistrationToken *)*((_QWORD *)this + 352);
  if ( v2 )
  {
    SpatialInputControllerHeadEventHandler::SetOwner(v2, 0LL, 0LL);
    v3 = (volatile signed __int32 *)*((_QWORD *)this + 352);
    if ( v3 )
    {
      *((_QWORD *)this + 352) = 0LL;
      if ( _InterlockedExchangeAdd(v3 + 3, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v3 + 32LL))(v3, 1LL);
        if ( Microsoft::WRL::Details::ModuleBase::module_ )
          (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                               + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
      }
    }
  }
  v4 = *((_QWORD *)this + 365);
  if ( v4 )
  {
    wil::critical_section::lock((struct _RTL_CRITICAL_SECTION *)(v4 + 48), &lpCriticalSection);
    *(_QWORD *)(v4 + 32) = 0LL;
    v5 = *(__int64 **)(v4 + 24);
    v6 = *(_QWORD *)(v4 + 40);
    v7 = *v5;
    if ( *(_BYTE *)(v4 + 16) )
      (*(void (__fastcall **)(__int64 *, __int64))(v7 + 64))(v5, v6);
    else
      (*(void (__fastcall **)(__int64 *, __int64))(v7 + 80))(v5, v6);
    if ( lpCriticalSection )
      LeaveCriticalSection(lpCriticalSection);
  }
  v8 = *((_QWORD *)this + 366);
  if ( v8 )
  {
    wil::critical_section::lock((struct _RTL_CRITICAL_SECTION *)(v8 + 48), &v22);
    *(_QWORD *)(v8 + 32) = 0LL;
    v9 = *(__int64 **)(v8 + 24);
    v10 = *(_QWORD *)(v8 + 40);
    v11 = *v9;
    if ( *(_BYTE *)(v8 + 16) )
      (*(void (__fastcall **)(__int64 *, __int64))(v11 + 64))(v9, v10);
    else
      (*(void (__fastcall **)(__int64 *, __int64))(v11 + 80))(v9, v10);
    if ( v22 )
      LeaveCriticalSection(v22);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 2832));
  v23 = (char *)this + 2832;
  v12 = *((_QWORD *)this + 367);
  if ( v12 )
  {
    v13 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v12 + 128LL))(v12);
    if ( v13 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x1FC,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialinputcontrollercollection.cpp",
        (const char *)(unsigned int)v13);
  }
  v14 = *((_QWORD *)this + 367);
  if ( v14 )
  {
    *((_QWORD *)this + 367) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  }
  v15 = *((_QWORD *)this + 363);
  if ( v15 )
  {
    *((_QWORD *)this + 363) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  }
  v16 = *((_QWORD *)this + 364);
  if ( v16 )
  {
    *((_QWORD *)this + 364) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  }
  v17 = *((_QWORD *)this + 362);
  if ( v17 )
  {
    *((_QWORD *)this + 362) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  }
  if ( this != (SpatialInputControllerCollection *)-2832LL )
  {
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 2832));
    v23 = 0LL;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)this + 69);
  v24 = (char *)this + 2760;
  v18 = (char *)this + 2800;
  std::_Tree<std::_Tmap_traits<unsigned long,std::shared_ptr<SpatialInteractionDevices::SpatialInteractionController>,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,std::shared_ptr<SpatialInteractionDevices::SpatialInteractionController>>>,0>>::_Erase(
    (char *)this + 2800,
    *(_QWORD *)(*((_QWORD *)this + 350) + 8LL));
  *(_QWORD *)(*(_QWORD *)v18 + 8LL) = *(_QWORD *)v18;
  **(_QWORD **)v18 = *(_QWORD *)v18;
  *(_QWORD *)(*(_QWORD *)v18 + 16LL) = *(_QWORD *)v18;
  *((_QWORD *)this + 351) = 0LL;
  if ( this != (SpatialInputControllerCollection *)-2760LL )
  {
    LeaveCriticalSection((LPCRITICAL_SECTION)this + 69);
    v24 = 0LL;
  }
  v19 = (_DWORD *)*((_QWORD *)RawInputProvidersTracing::Instance() + 1);
  if ( v19 )
  {
    if ( *v19 )
    {
      RawInputProvidersTracing::Instance();
      v20 = *((_QWORD *)RawInputProvidersTracing::Instance() + 1);
      if ( *(_DWORD *)v20 > 4u
        && (*(_BYTE *)(v20 + 16) & 2) != 0
        && (*(_QWORD *)(v20 + 24) & 2LL) == *(_QWORD *)(v20 + 24) )
      {
        TlgWrite((TraceLoggingHProvider)v20, &unk_1800B9DE5, 0LL, 0LL, 2u, &pData);
      }
    }
  }
  RIMDeviceCollection::Close(this);
}

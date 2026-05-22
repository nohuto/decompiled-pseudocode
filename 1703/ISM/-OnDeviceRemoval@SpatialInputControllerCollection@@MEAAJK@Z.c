/*
 * XREFs of ?OnDeviceRemoval@SpatialInputControllerCollection@@MEAAJK@Z @ 0x180078B00
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003188 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003204 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PopulateAugmentedInput@MPCInputInfoHelper@@SAJW4MPCAugmentedInputGestureType@@KIGGGPEAUInputInfo@@@Z @ 0x180054C2C (-PopulateAugmentedInput@MPCInputInfoHelper@@SAJW4MPCAugmentedInputGestureType@@KIGGGPEAUInputInf.c)
 *     ?Instance@RawInputProvidersTracing@@KAPEAV1@XZ @ 0x180075F74 (-Instance@RawInputProvidersTracing@@KAPEAV1@XZ.c)
 *     ?DeviceRemoved_@RawInputProvidersTracing@@QEAAXJKK@Z @ 0x1800761EC (-DeviceRemoved_@RawInputProvidersTracing@@QEAAXJKK@Z.c)
 *     ?TelemetrySpatialInputController_Removed_@RawInputProvidersTracing@@QEAAXQEBG@Z @ 0x180076D74 (-TelemetrySpatialInputController_Removed_@RawInputProvidersTracing@@QEAAXQEBG@Z.c)
 *     ?SetOwner@SpatialInputControllerHeadEventHandler@@QEAAJPEAVSpatialInputControllerCollection@@PEAUIMessageSession@@@Z @ 0x180077984 (-SetOwner@SpatialInputControllerHeadEventHandler@@QEAAJPEAVSpatialInputControllerCollection@@PEA.c)
 *     wil::scope_exit__lambda_fd12116e55b93fce935965703f14cfad___ @ 0x180078AE8 (wil--scope_exit__lambda_fd12116e55b93fce935965703f14cfad___.c)
 *     ?GetCacheEntry@SpatialInputControllerCollection@@AEAAJKPEAV?$shared_ptr@VSpatialInteractionController@SpatialInteractionDevices@@@std@@@Z @ 0x1800793B8 (-GetCacheEntry@SpatialInputControllerCollection@@AEAAJKPEAV-$shared_ptr@VSpatialInteractionContr.c)
 *     ?QueueInputReport@SpatialInputControllerCollection@@AEAAJAEAUInputInfo@@@Z @ 0x18007A4F0 (-QueueInputReport@SpatialInputControllerCollection@@AEAAJAEAUInputInfo@@@Z.c)
 *     ?erase@?$_Tree@V?$_Tmap_traits@KV?$shared_ptr@VSpatialInteractionController@SpatialInteractionDevices@@@std@@U?$less@K@2@V?$allocator@U?$pair@$$CBKV?$shared_ptr@VSpatialInteractionController@SpatialInteractionDevices@@@std@@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKV?$shared_ptr@VSpatialInteractionController@SpatialInteractionDevices@@@std@@@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKV?$shared_ptr@VSpatialInteractionController@SpatialInteractionDevices@@@std@@@std@@@std@@@std@@@2@@Z @ 0x18007AA0C (-erase@-$_Tree@V-$_Tmap_traits@KV-$shared_ptr@VSpatialInteractionController@SpatialInteractionDe.c)
 *     ?StopTracking@SpatialInteractionController@SpatialInteractionDevices@@QEAAXXZ @ 0x18009A84C (-StopTracking@SpatialInteractionController@SpatialInteractionDevices@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x18009CCC0 (__security_check_cookie.c)
 *     memset @ 0x18009D814 (memset.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=24
__int64 __fastcall SpatialInputControllerCollection::OnDeviceRemoval(
        SpatialInputControllerCollection *this,
        unsigned int a2)
{
  int CacheEntry; // eax
  unsigned int v5; // edi
  __int64 v6; // r9
  __int64 v7; // rdx
  SpatialInteractionDevices::SpatialInteractionController *v8; // r15
  int v9; // eax
  int v10; // eax
  __int64 *v11; // rax
  __int64 *v12; // rcx
  __int64 *v13; // r8
  volatile signed __int32 *v14; // rcx
  const WCHAR *StringRawBuffer; // rbx
  _DWORD *v16; // rcx
  RawInputProvidersTracing *v17; // rcx
  SpatialInteractionDevices::SpatialInteractionController *v18; // rbx
  _DWORD *v19; // rcx
  __int64 v21; // [rsp+48h] [rbp-C0h] BYREF
  SpatialInteractionDevices::SpatialInteractionController *v22[2]; // [rsp+50h] [rbp-B8h] BYREF
  char *v23; // [rsp+68h] [rbp-A0h]
  RawInputProvidersTracing *v24[2]; // [rsp+70h] [rbp-98h] BYREF
  unsigned int v25; // [rsp+80h] [rbp-88h]
  char v26; // [rsp+88h] [rbp-80h]
  __int128 v27; // [rsp+90h] [rbp-78h] BYREF
  unsigned int v28; // [rsp+A0h] [rbp-68h]
  __int64 v29; // [rsp+A8h] [rbp-60h]
  __int64 v30; // [rsp+B0h] [rbp-58h]
  __int64 *v31; // [rsp+B8h] [rbp-50h]
  _BYTE v32[72]; // [rsp+C0h] [rbp-48h] BYREF
  _BYTE v33[1888]; // [rsp+108h] [rbp+0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+8A0h] [rbp+798h]

  v29 = -2LL;
  v21 = 0LL;
  *(_QWORD *)&v27 = &v21;
  *((_QWORD *)&v27 + 1) = (char *)&v21 + 4;
  v28 = a2;
  wil::scope_exit__lambda_fd12116e55b93fce935965703f14cfad___((__int64)v24, &v27);
  *(_OWORD *)v22 = 0LL;
  CacheEntry = SpatialInputControllerCollection::GetCacheEntry(this, a2, v22);
  v5 = CacheEntry;
  LODWORD(v21) = CacheEntry;
  if ( CacheEntry < 0 )
  {
    v6 = (unsigned int)CacheEntry;
    v7 = 596LL;
LABEL_19:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v7,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialinputcontrollercollection.cpp",
      (const char *)v6);
    goto LABEL_35;
  }
  v8 = v22[0];
  HIDWORD(v21) = *((_DWORD *)v22[0] + 67);
  SpatialInteractionDevices::SpatialInteractionController::StopTracking(v22[0]);
  memset(v33, 0, sizeof(v33));
  v9 = MPCInputInfoHelper::PopulateAugmentedInput(
         5LL,
         a2,
         SHIDWORD(v21),
         _mm_cvtsi128_si32(*((__m128i *)v8 + 19)),
         _mm_extract_epi16(*((__m128i *)v8 + 19), 1),
         _mm_extract_epi16(*((__m128i *)v8 + 19), 2),
         (__int64)v33);
  v5 = v9;
  LODWORD(v21) = v9;
  if ( v9 < 0 )
  {
    v6 = (unsigned int)v9;
    v7 = 603LL;
    goto LABEL_19;
  }
  v10 = SpatialInputControllerCollection::QueueInputReport(this, (struct InputInfo *)v33);
  v5 = v10;
  LODWORD(v21) = v10;
  if ( v10 < 0 )
  {
    v6 = (unsigned int)v10;
    v7 = 605LL;
    goto LABEL_19;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)this + 69);
  v11 = (__int64 *)*((_QWORD *)this + 350);
  v12 = (__int64 *)v11[1];
  v13 = v11;
  while ( !*((_BYTE *)v12 + 25) )
  {
    if ( *((_DWORD *)v12 + 8) >= a2 )
    {
      v13 = v12;
      v12 = (__int64 *)*v12;
    }
    else
    {
      v12 = (__int64 *)v12[2];
    }
  }
  v30 = *((_QWORD *)this + 350);
  if ( v13 == v11 || a2 < *((_DWORD *)v13 + 8) )
    v13 = v11;
  v31 = v11;
  if ( v13 == v11 )
  {
    v5 = -2147467259;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2D3,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialinputcontrollercollection.cpp",
      (const char *)0x80004005LL);
    if ( this != (SpatialInputControllerCollection *)-2760LL )
      LeaveCriticalSection((LPCRITICAL_SECTION)this + 69);
    LODWORD(v21) = -2147467259;
    v6 = 2147500037LL;
    v7 = 607LL;
    goto LABEL_19;
  }
  std::_Tree<std::_Tmap_traits<unsigned long,std::shared_ptr<SpatialInteractionDevices::SpatialInteractionController>,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,std::shared_ptr<SpatialInteractionDevices::SpatialInteractionController>>>,0>>::erase(
    (char *)this + 2800,
    v32);
  if ( this != (SpatialInputControllerCollection *)-2760LL )
    LeaveCriticalSection((LPCRITICAL_SECTION)this + 69);
  LODWORD(v21) = 0;
  if ( *((_QWORD *)this + 352) )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)this + 69);
    v23 = (char *)this + 2760;
    if ( !*((_QWORD *)this + 351) )
    {
      SpatialInputControllerHeadEventHandler::SetOwner(*((struct EventRegistrationToken **)this + 352), 0LL, 0LL);
      v14 = (volatile signed __int32 *)*((_QWORD *)this + 352);
      if ( v14 )
      {
        *((_QWORD *)this + 352) = 0LL;
        if ( _InterlockedExchangeAdd(v14 + 3, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v14 + 32LL))(v14, 1LL);
          if ( Microsoft::WRL::Details::ModuleBase::module_ )
            (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                                 + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
        }
        v8 = v22[0];
      }
    }
    if ( this != (SpatialInputControllerCollection *)-2760LL )
    {
      LeaveCriticalSection((LPCRITICAL_SECTION)this + 69);
      v23 = 0LL;
    }
  }
  StringRawBuffer = WindowsGetStringRawBuffer(*((HSTRING *)v8 + 68), 0LL);
  v16 = (_DWORD *)*((_QWORD *)RawInputProvidersTracing::Instance() + 1);
  if ( v16 && *v16 )
  {
    RawInputProvidersTracing::Instance();
    RawInputProvidersTracing::TelemetrySpatialInputController_Removed_(v17, StringRawBuffer);
  }
  LODWORD(v21) = 0;
  v5 = 0;
LABEL_35:
  if ( v22[1] )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)v22[1] + 2, 0xFFFFFFFF) == 1 )
    {
      v18 = v22[1];
      (**(void (__fastcall ***)(SpatialInteractionDevices::SpatialInteractionController *))v22[1])(v22[1]);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)v18 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(SpatialInteractionDevices::SpatialInteractionController *))(*(_QWORD *)v22[1] + 8LL))(v22[1]);
    }
  }
  if ( v26 )
  {
    v26 = 0;
    v19 = (_DWORD *)*((_QWORD *)RawInputProvidersTracing::Instance() + 1);
    if ( v19 )
    {
      if ( *v19 )
      {
        RawInputProvidersTracing::Instance();
        RawInputProvidersTracing::DeviceRemoved_(v24[0], *(_DWORD *)v24[0], v25, *(_DWORD *)v24[1]);
      }
    }
  }
  return v5;
}

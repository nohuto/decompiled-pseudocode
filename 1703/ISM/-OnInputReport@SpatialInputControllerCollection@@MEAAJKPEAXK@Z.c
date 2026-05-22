/*
 * XREFs of ?OnInputReport@SpatialInputControllerCollection@@MEAAJKPEAXK@Z @ 0x180078E90
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003204 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Instance@RawInputProvidersTracing@@KAPEAV1@XZ @ 0x180075F74 (-Instance@RawInputProvidersTracing@@KAPEAV1@XZ.c)
 *     ?InputReportReceived_@RawInputProvidersTracing@@QEAAXKK@Z @ 0x180076298 (-InputReportReceived_@RawInputProvidersTracing@@QEAAXKK@Z.c)
 *     ?GetHeadToPoseTransform@SpatialInputControllerCollection@@AEAA?AUMatrix4x4@Numerics@Foundation@Windows@@AEBVSyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@@Z @ 0x18007757C (-GetHeadToPoseTransform@SpatialInputControllerCollection@@AEAA-AUMatrix4x4@Numerics@Foundation@W.c)
 *     ?ParseAndSendReport@SpatialInputControllerCollection@@AEAAXPEAVSpatialInteractionController@SpatialInteractionDevices@@PEADKKPEAUISpatialGraphNodeReference@Holographic@Internal@Windows@@AEBUMatrix4x4@Numerics@Foundation@7@@Z @ 0x1800776FC (-ParseAndSendReport@SpatialInputControllerCollection@@AEAAXPEAVSpatialInteractionController@Spat.c)
 *     ?GetCacheEntry@SpatialInputControllerCollection@@AEAAJKPEAV?$shared_ptr@VSpatialInteractionController@SpatialInteractionDevices@@@std@@@Z @ 0x1800793B8 (-GetCacheEntry@SpatialInputControllerCollection@@AEAAJKPEAV-$shared_ptr@VSpatialInteractionContr.c)
 *     __security_check_cookie @ 0x18009CCC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=12
__int64 __fastcall SpatialInputControllerCollection::OnInputReport(
        SpatialInputControllerCollection *this,
        unsigned int a2,
        char *a3,
        unsigned int a4)
{
  _DWORD *v8; // rcx
  RawInputProvidersTracing *v9; // rcx
  int CacheEntry; // eax
  unsigned int v11; // edi
  struct SpatialInteractionDevices::SpatialInteractionController *v12; // rax
  __int64 v13; // rdi
  struct Windows::Internal::Holographic::ISpatialGraphNodeReference *v14; // rbx
  __int64 (__fastcall ***v15)(_QWORD, GUID *, __int64 *); // r8
  __int128 *HeadToPoseTransform; // rax
  __int64 v17; // rcx
  struct SpatialInteractionDevices::SpatialInteractionController *v18; // rbx
  struct SpatialInteractionDevices::SpatialInteractionController *v20[2]; // [rsp+40h] [rbp-C0h] BYREF
  struct Windows::Internal::Holographic::ISpatialGraphNodeReference *v21; // [rsp+50h] [rbp-B0h]
  char *v22; // [rsp+58h] [rbp-A8h]
  __int64 v23; // [rsp+60h] [rbp-A0h]
  __int128 v24; // [rsp+70h] [rbp-90h] BYREF
  __int128 v25; // [rsp+80h] [rbp-80h]
  __int128 v26; // [rsp+90h] [rbp-70h]
  __int128 v27; // [rsp+A0h] [rbp-60h]
  _OWORD v28[4]; // [rsp+B0h] [rbp-50h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+148h] [rbp+48h]

  v23 = -2LL;
  v8 = (_DWORD *)*((_QWORD *)RawInputProvidersTracing::Instance() + 1);
  if ( v8 && *v8 )
  {
    RawInputProvidersTracing::Instance();
    RawInputProvidersTracing::InputReportReceived_(v9, a2, a4);
  }
  *(_OWORD *)v20 = 0LL;
  CacheEntry = SpatialInputControllerCollection::GetCacheEntry(this, a2, v20);
  v11 = CacheEntry;
  if ( CacheEntry >= 0 )
  {
    v12 = v20[0];
    v13 = *((unsigned __int16 *)v20[0] + 54);
    v14 = 0LL;
    v21 = 0LL;
    v24 = _xmm;
    v25 = _xmm;
    v26 = _xmm;
    v27 = _xmm;
    if ( !*((_BYTE *)v20[0] + 313) )
      goto LABEL_13;
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 2832));
    v22 = (char *)this + 2832;
    HeadToPoseTransform = SpatialInputControllerCollection::GetHeadToPoseTransform(this, v28, v15);
    v24 = *HeadToPoseTransform;
    v25 = HeadToPoseTransform[1];
    v26 = HeadToPoseTransform[2];
    v27 = HeadToPoseTransform[3];
    v17 = *((_QWORD *)this + 362);
    if ( v17 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 8LL))(v17);
    v14 = (struct Windows::Internal::Holographic::ISpatialGraphNodeReference *)*((_QWORD *)this + 362);
    v21 = v14;
    if ( this != (SpatialInputControllerCollection *)-2832LL )
    {
      LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 2832));
      v22 = 0LL;
    }
    while ( 1 )
    {
      v12 = v20[0];
LABEL_13:
      if ( a4 < (unsigned int)v13 )
        break;
      SpatialInputControllerCollection::ParseAndSendReport(
        this,
        v12,
        a3,
        v13,
        a2,
        v14,
        (const struct Windows::Foundation::Numerics::Matrix4x4 *)&v24);
      a4 -= v13;
      a3 += v13;
    }
    v11 = 0;
    if ( v14 )
    {
      v21 = 0LL;
      (*(void (__fastcall **)(struct Windows::Internal::Holographic::ISpatialGraphNodeReference *))(*(_QWORD *)v14 + 16LL))(v14);
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x27D,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialinputcontrollercollection.cpp",
      (const char *)(unsigned int)CacheEntry);
  }
  if ( v20[1] )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)v20[1] + 2, 0xFFFFFFFF) == 1 )
    {
      v18 = v20[1];
      (**(void (__fastcall ***)(struct SpatialInteractionDevices::SpatialInteractionController *))v20[1])(v20[1]);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)v18 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(struct SpatialInteractionDevices::SpatialInteractionController *))(*(_QWORD *)v20[1]
                                                                                                 + 8LL))(v20[1]);
    }
  }
  return v11;
}

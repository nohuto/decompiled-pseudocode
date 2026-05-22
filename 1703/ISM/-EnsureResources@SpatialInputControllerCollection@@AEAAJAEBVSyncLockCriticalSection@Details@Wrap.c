/*
 * XREFs of ?EnsureResources@SpatialInputControllerCollection@@AEAAJAEBVSyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@@Z @ 0x180077834
 * Callers:
 *     ?GetHeadToPoseTransform@SpatialInputControllerCollection@@AEAA?AUMatrix4x4@Numerics@Foundation@Windows@@AEBVSyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@@Z @ 0x18007757C (-GetHeadToPoseTransform@SpatialInputControllerCollection@@AEAA-AUMatrix4x4@Numerics@Foundation@W.c)
 *     ?EnsureDisplayWatcher@SpatialInputControllerCollection@@AEAAJAEBVSyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@@Z @ 0x180079690 (-EnsureDisplayWatcher@SpatialInputControllerCollection@@AEAAJAEBVSyncLockCriticalSection@Details.c)
 *     ?OnDisplayChanged@SpatialInputControllerCollection@@AEAAJAEBVSyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@PEAUIHolographicDisplay@Holographic@Graphics@Windows@@_N@Z @ 0x1800798C4 (-OnDisplayChanged@SpatialInputControllerCollection@@AEAAJAEBVSyncLockCriticalSection@Details@Wra.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003204 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18004391C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     __security_check_cookie @ 0x18009CCC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall SpatialInputControllerCollection::EnsureResources(
        SpatialInputControllerCollection *this,
        const struct Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection *a2)
{
  __int64 *v2; // rbx
  HRESULT v4; // eax
  __int64 v5; // rcx
  HSTRING v6; // rsi
  int ActivationFactory; // ebx
  __int64 v8; // rdx
  __int64 *v10; // rbx
  HRESULT v11; // eax
  __int64 v12; // rcx
  HSTRING v13; // rdi
  HSTRING_HEADER hstringHeader; // [rsp+20h] [rbp-38h] BYREF
  HSTRING string; // [rsp+38h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v2 = (__int64 *)((char *)this + 2904);
  if ( !*((_QWORD *)this + 363) )
  {
    string = 0LL;
    v4 = WindowsCreateStringReference(L"Windows.Perception.PerceptionTimestampHelper", 0x2Cu, &hstringHeader, &string);
    if ( v4 < 0 )
    {
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v4);
      __debugbreak();
    }
    v5 = *v2;
    v6 = string;
    if ( *v2 )
    {
      *v2 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    }
    ActivationFactory = RoGetActivationFactory(v6, &GUID_47a611d4_a9df_4edc_855d_f4d339d967ac, v2);
    if ( ActivationFactory < 0 )
    {
      v8 = 313LL;
LABEL_7:
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)v8,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialinputcontrollercollection.cpp",
        (const char *)(unsigned int)ActivationFactory);
      return (unsigned int)ActivationFactory;
    }
  }
  v10 = (__int64 *)((char *)this + 2912);
  if ( !*((_QWORD *)this + 364) )
  {
    string = 0LL;
    v11 = WindowsCreateStringReference(
            L"Windows.Graphics.Holographic.HolographicDisplay",
            0x2Fu,
            &hstringHeader,
            &string);
    if ( v11 < 0 )
    {
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v11);
      JUMPOUT(0x180077980LL);
    }
    v12 = *v10;
    v13 = string;
    if ( *v10 )
    {
      *v10 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    }
    ActivationFactory = RoGetActivationFactory(v13, &GUID_cb374983_e7b0_4841_8355_3ae5b536e9a4, v10);
    if ( ActivationFactory < 0 )
    {
      v8 = 318LL;
      goto LABEL_7;
    }
  }
  return 0LL;
}

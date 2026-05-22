/*
 * XREFs of ?UpdateControllerNodeReference@SpatialInputControllerCollection@@AEAAJPEAUISpatialGraphNodeReferenceFactory@Holographic@Internal@Windows@@PEAUISpatialGraphDriverClient@345@PEAUHSTRING__@@PEAVSpatialInteractionController@SpatialInteractionDevices@@@Z @ 0x18007A2C0
 * Callers:
 *     ?OnDisplayChanged@SpatialInputControllerCollection@@AEAAJAEBVSyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@PEAUIHolographicDisplay@Holographic@Graphics@Windows@@_N@Z @ 0x1800798C4 (-OnDisplayChanged@SpatialInputControllerCollection@@AEAAJAEBVSyncLockCriticalSection@Details@Wra.c)
 *     ?TryUpdateControllerNodeReference@SpatialInputControllerCollection@@AEAAJPEAVSpatialInteractionController@SpatialInteractionDevices@@@Z @ 0x18007A42C (-TryUpdateControllerNodeReference@SpatialInputControllerCollection@@AEAAJPEAVSpatialInteractionC.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003204 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Instance@SpatialInteractionTrace@SpatialInteractionDevices@@KAPEAV12@XZ @ 0x180063F5C (-Instance@SpatialInteractionTrace@SpatialInteractionDevices@@KAPEAV12@XZ.c)
 *     ?ControllerNodeStartTracking_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXJK@Z @ 0x180098FD0 (-ControllerNodeStartTracking_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXJK@Z.c)
 *     __security_check_cookie @ 0x18009CCC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SpatialInputControllerCollection::UpdateControllerNodeReference(
        SpatialInputControllerCollection *this,
        struct Windows::Internal::Holographic::ISpatialGraphNodeReferenceFactory *a2,
        struct Windows::Internal::Holographic::ISpatialGraphDriverClient *a3,
        HSTRING a4,
        struct SpatialInteractionDevices::SpatialInteractionController *a5)
{
  int v7; // eax
  unsigned int v8; // ebx
  int v9; // eax
  __int64 v10; // rbx
  __int64 v11; // rcx
  _DWORD *v12; // rcx
  SpatialInteractionDevices::SpatialInteractionTrace *v13; // rcx
  __int64 v14; // rcx
  _QWORD v16[2]; // [rsp+30h] [rbp-48h] BYREF
  _BYTE v17[24]; // [rsp+40h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v16[1] = -2LL;
  v7 = (*(__int64 (__fastcall **)(struct Windows::Internal::Holographic::ISpatialGraphDriverClient *, _QWORD, _BYTE *))(*(_QWORD *)a3 + 24LL))(
         a3,
         *((_QWORD *)a5 + 68),
         v17);
  v8 = v7;
  if ( v7 >= 0 )
  {
    v16[0] = 0LL;
    v9 = (*(__int64 (__fastcall **)(struct Windows::Internal::Holographic::ISpatialGraphNodeReferenceFactory *, HSTRING, _BYTE *, _QWORD *))(*(_QWORD *)a2 + 24LL))(
           a2,
           a4,
           v17,
           v16);
    v8 = v9;
    if ( v9 >= 0 )
    {
      v10 = v16[0];
      if ( v16[0] )
        *((_BYTE *)a5 + 313) = 1;
      if ( *((_QWORD *)a5 + 67) != v10 )
      {
        if ( v10 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
        v11 = *((_QWORD *)a5 + 67);
        *((_QWORD *)a5 + 67) = v10;
        if ( v11 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
      }
      v12 = (_DWORD *)*((_QWORD *)SpatialInteractionDevices::SpatialInteractionTrace::Instance() + 1);
      if ( v12 && *v12 )
      {
        SpatialInteractionDevices::SpatialInteractionTrace::Instance();
        SpatialInteractionDevices::SpatialInteractionTrace::ControllerNodeStartTracking_(v13, 0, *((_DWORD *)a5 + 66));
      }
      v8 = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x39D,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialinputcontrollercollection.cpp",
        (const char *)(unsigned int)v9);
    }
    v14 = v16[0];
    if ( v16[0] )
    {
      v16[0] = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x39A,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialinputcontrollercollection.cpp",
      (const char *)(unsigned int)v7);
  }
  return v8;
}

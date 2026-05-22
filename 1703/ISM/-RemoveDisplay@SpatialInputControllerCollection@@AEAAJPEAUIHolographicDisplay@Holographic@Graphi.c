/*
 * XREFs of ?RemoveDisplay@SpatialInputControllerCollection@@AEAAJPEAUIHolographicDisplay@Holographic@Graphics@Windows@@@Z @ 0x18007A564
 * Callers:
 *     ?OnDisplayChanged@SpatialInputControllerCollection@@AEAAJAEBVSyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@PEAUIHolographicDisplay@Holographic@Graphics@Windows@@_N@Z @ 0x1800798C4 (-OnDisplayChanged@SpatialInputControllerCollection@@AEAAJAEBVSyncLockCriticalSection@Details@Wra.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003204 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Xrange@?$vector@V?$ComPtr@UIHolographicDisplayInternal@Internal@Holographic@Graphics@Windows@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIHolographicDisplayInternal@Internal@Holographic@Graphics@Windows@@@WRL@Microsoft@@@std@@@std@@CAXXZ @ 0x18007AEE4 (-_Xrange@-$vector@V-$ComPtr@UIHolographicDisplayInternal@Internal@Holographic@Graphics@Windows@@.c)
 *     __security_check_cookie @ 0x18009CCC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SpatialInputControllerCollection::RemoveDisplay(
        SpatialInputControllerCollection *this,
        struct Windows::Graphics::Holographic::IHolographicDisplay *a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  __int64 v5; // rdx
  unsigned __int64 v6; // r14
  __int64 v7; // rcx
  char *v8; // r15
  char *i; // rdi
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rcx
  _QWORD v16[2]; // [rsp+20h] [rbp-40h] BYREF
  char v17; // [rsp+30h] [rbp-30h] BYREF
  _QWORD v18[2]; // [rsp+38h] [rbp-28h] BYREF
  _QWORD v19[2]; // [rsp+48h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+28h]

  v16[1] = -2LL;
  v16[0] = 0LL;
  v3 = (**(__int64 (__fastcall ***)(struct Windows::Graphics::Holographic::IHolographicDisplay *, GUID *, _QWORD *))a2)(
         a2,
         &GUID_09a4ed86_3c1f_49b9_a85f_ea9b5deb193d,
         v16);
  v4 = v3;
  if ( v3 < 0 )
  {
    v5 = 1007LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v5,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialinputcontrollercollection.cpp",
      (const char *)(unsigned int)v3);
    goto LABEL_25;
  }
  v3 = (*(__int64 (__fastcall **)(_QWORD, _QWORD *))(*(_QWORD *)v16[0] + 48LL))(v16[0], v18);
  v4 = v3;
  if ( v3 < 0 )
  {
    v5 = 1008LL;
    goto LABEL_5;
  }
  v6 = 0LL;
  while ( v6 < (__int64)(*((_QWORD *)this + 369) - *((_QWORD *)this + 368)) >> 3 )
  {
    v7 = *((_QWORD *)this + 368);
    if ( (*((_QWORD *)this + 369) - v7) >> 3 <= v6 )
      std::vector<Microsoft::WRL::ComPtr<Windows::Graphics::Holographic::Internal::IHolographicDisplayInternal>>::_Xrange();
    if ( (*(int (__fastcall **)(_QWORD, _QWORD *))(**(_QWORD **)(v7 + 8 * v6) + 48LL))(*(_QWORD *)(v7 + 8 * v6), v19) >= 0
      && v18[0] == v19[0]
      && v18[1] == v19[1] )
    {
      v8 = (char *)*((_QWORD *)this + 369);
      for ( i = (char *)(*((_QWORD *)this + 368) + 8 * v6 + 8); i != v8; i += 8 )
      {
        v10 = 0LL;
        if ( &v17 != i )
        {
          v10 = *(_QWORD *)i;
          *(_QWORD *)i = 0LL;
        }
        v11 = *((_QWORD *)i - 1);
        *((_QWORD *)i - 1) = v10;
        if ( v11 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
      }
      v12 = *((_QWORD *)this + 369);
      v13 = *(_QWORD *)(v12 - 8);
      if ( v13 )
      {
        *(_QWORD *)(v12 - 8) = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
      }
      *((_QWORD *)this + 369) -= 8LL;
    }
    else
    {
      ++v6;
    }
  }
  v4 = 0;
LABEL_25:
  v14 = v16[0];
  if ( v16[0] )
  {
    v16[0] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  }
  return v4;
}

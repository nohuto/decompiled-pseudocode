/*
 * XREFs of _lambda_2c65abb260ef27506ee9df12d142cee7_::operator() @ 0x180084B30
 * Callers:
 *     ?HitTest3D@MPCInputRouter@@AEAAXPEAUInputInfo@@PEAUIInputTarget@@PEAPEAU3@@Z @ 0x1800847A8 (-HitTest3D@MPCInputRouter@@AEAAXPEAUInputInfo@@PEAUIInputTarget@@PEAPEAU3@@Z.c)
 * Callees:
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000742C (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIMPCInputTarget@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIMPCInputTarget@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x18004DA6C (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIMPCInputTarget@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$Co.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
bool __fastcall lambda_2c65abb260ef27506ee9df12d142cee7_::operator()(
        __int64 **a1,
        __int64 (__fastcall ***a2)(_QWORD, GUID *, __int64 *))
{
  int v4; // eax
  __int64 (__fastcall **v5)(_QWORD, GUID *, __int64 *); // rbx
  __int64 *v6; // rax
  int v7; // eax
  int v8; // eax
  __int64 v9; // rbx
  bool v10; // bl
  __int64 v11; // rcx
  __int64 v12; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  int v15; // [rsp+58h] [rbp+28h] BYREF
  __int64 v16; // [rsp+60h] [rbp+30h] BYREF
  __int64 v17; // [rsp+68h] [rbp+38h] BYREF

  v15 = 0;
  v17 = 0LL;
  v16 = 0LL;
  v4 = (**a2)(a2, &GUID_a4e70d2d_6b93_4143_b95b_67efd0ccda59, &v17);
  if ( v4 < 0 )
  {
    wil::details::in1diag3::_FailFast_Hr(
      retaddr,
      (void *)0x19D,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
      (const char *)(unsigned int)v4);
    __debugbreak();
  }
  v5 = *a2;
  v6 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IMPCInputTarget>>(&v16);
  v7 = (*v5)(a2, &GUID_0ffb2569_1e11_4fce_b7f2_9d15d794e042, v6);
  if ( v7 < 0 )
  {
    wil::details::in1diag3::_FailFast_Hr(
      retaddr,
      (void *)0x19E,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
      (const char *)(unsigned int)v7);
    __debugbreak();
  }
  v8 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v17 + 32LL))(v17, &v15);
  if ( v8 < 0 )
  {
    wil::details::in1diag3::_FailFast_Hr(
      retaddr,
      (void *)0x1A0,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
      (const char *)(unsigned int)v8);
    __debugbreak();
  }
  v9 = **a1;
  v10 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v16 + 64LL))(v16) == *(_QWORD *)(v9 + 824)
     || v15 == *(_DWORD *)(v9 + 832);
  v11 = v16;
  if ( v16 )
  {
    v16 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  }
  v12 = v17;
  if ( v17 )
  {
    v17 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  }
  return v10;
}

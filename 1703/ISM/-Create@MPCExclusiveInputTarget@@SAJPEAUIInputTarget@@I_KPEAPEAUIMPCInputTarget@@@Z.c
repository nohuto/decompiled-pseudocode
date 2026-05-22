/*
 * XREFs of ?Create@MPCExclusiveInputTarget@@SAJPEAUIInputTarget@@I_KPEAPEAUIMPCInputTarget@@@Z @ 0x180087354
 * Callers:
 *     ?CreateMPCTarget@MPCInputRouter@@AEAAXPEAUIInputTarget@@PEAPEAUIMPCInputTarget@@@Z @ 0x1800851E0 (-CreateMPCTarget@MPCInputRouter@@AEAAXPEAUIInputTarget@@PEAPEAUIMPCInputTarget@@@Z.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18000326C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000742C (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Initialize@MPCExclusiveInputTarget@@IEAAJXZ @ 0x180087198 (-Initialize@MPCExclusiveInputTarget@@IEAAJXZ.c)
 *     memset @ 0x18009D814 (memset.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall MPCExclusiveInputTarget::Create(
        struct IInputTarget *a1,
        int a2,
        __int64 a3,
        struct IMPCInputTarget **a4)
{
  _QWORD *v8; // rax
  const char *v9; // r9
  _QWORD *v10; // rbx
  int v11; // eax
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( !a4 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x62,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcexclusiveinputtarget.cpp",
      0LL);
    __debugbreak();
  }
  if ( !a1 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x63,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcexclusiveinputtarget.cpp",
      (const char *)a4);
    __debugbreak();
  }
  v8 = malloc(0x50uLL);
  v10 = v8;
  if ( v8 )
    memset(v8, 0, 0x50uLL);
  if ( !v10 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x67,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcexclusiveinputtarget.cpp",
      v9);
    __debugbreak();
  }
  v10[3] = &RefCountedObject::`vftable';
  *((_DWORD *)v10 + 8) = 1;
  *v10 = &MPCExclusiveInputTarget::`vftable'{for `IMPCInputTarget'};
  v10[1] = &MPCExclusiveInputTarget::`vftable'{for `IFocusInputTarget'};
  v10[2] = &MPCExclusiveInputTarget::`vftable'{for `IDCompInputTarget'};
  v10[3] = &MPCExclusiveInputTarget::`vftable'{for `RefCountedObject'};
  v10[5] = 0LL;
  v10[6] = a1;
  (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)a1 + 8LL))(a1);
  *((_DWORD *)v10 + 14) = a2;
  v10[8] = a3;
  v11 = MPCExclusiveInputTarget::Initialize((MPCExclusiveInputTarget *)v10);
  if ( v11 < 0 )
  {
    wil::details::in1diag3::_FailFast_Hr(
      retaddr,
      (void *)0x69,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcexclusiveinputtarget.cpp",
      (const char *)(unsigned int)v11);
    __debugbreak();
  }
  result = 0LL;
  *a4 = (struct IMPCInputTarget *)v10;
  return result;
}

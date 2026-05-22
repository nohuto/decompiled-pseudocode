/*
 * XREFs of ?GetFocusedTarget@MPCHolographicInputManager@@QEAAPEAUIMPCInputTarget@@XZ @ 0x18004D51C
 * Callers:
 *     ?Process3DInput@MPCGamepadProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x18002D660 (-Process3DInput@MPCGamepadProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 *     ?hydroForwardInputReport@MPCMouseProcessor@@AEAAJPEBUMouseProcessorState@@PEAUInputInfo@@@Z @ 0x1800412B0 (-hydroForwardInputReport@MPCMouseProcessor@@AEAAJPEBUMouseProcessorState@@PEAUInputInfo@@@Z.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18000326C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000742C (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
struct IMPCInputTarget *__fastcall MPCHolographicInputManager::GetFocusedTarget(
        MPCHolographicInputManager *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  __int64 *v4; // rdi
  __int64 v5; // rbx
  __int64 v6; // rax
  int v7; // eax
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rbx
  void (__fastcall ***v11)(_QWORD, GUID *, _QWORD *); // rdx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+8h]
  __int64 v14; // [rsp+50h] [rbp+10h] BYREF
  void (__fastcall ***v15)(_QWORD, GUID *, __int64 *); // [rsp+58h] [rbp+18h] BYREF

  if ( !*((_BYTE *)this + 2160) )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x448,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
      a4);
    __debugbreak();
  }
  v14 = 0LL;
  v15 = 0LL;
  v4 = (__int64 *)*((_QWORD *)this + 262);
  v5 = *v4;
  v6 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 269) + 96LL))(*((_QWORD *)this + 269));
  v7 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, __int64, _QWORD, void (__fastcall ****)(_QWORD, GUID *, __int64 *)))(v5 + 56))(
         v4,
         0LL,
         v6,
         0LL,
         &v15);
  if ( v7 < 0 )
  {
    wil::details::in1diag3::_FailFast_Hr(
      retaddr,
      (void *)0x452,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
      (const char *)(unsigned int)v7);
    __debugbreak();
  }
  v8 = v14;
  if ( v14 )
  {
    v14 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  (**v15)(v15, &GUID_0ffb2569_1e11_4fce_b7f2_9d15d794e042, &v14);
  v9 = v14;
  v10 = v14;
  v11 = v15;
  if ( v15 )
  {
    v15 = 0LL;
    ((void (__fastcall *)(void (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v11)[2])(v11);
    v9 = v14;
  }
  if ( v9 )
  {
    v14 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  return (struct IMPCInputTarget *)v10;
}

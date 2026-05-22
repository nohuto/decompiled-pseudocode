/*
 * XREFs of ?UnInitialize3DComponents@MPCHolographicInputManager@@AEAAXXZ @ 0x18004B028
 * Callers:
 *     ?OnHitTestingStateChanged@MPCHolographicInputManager@@AEAAX_N@Z @ 0x18004D480 (-OnHitTestingStateChanged@MPCHolographicInputManager@@AEAAX_N@Z.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18000326C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000742C (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?UpdateCursorVisibility@MPCCursorManager@@AEAAX_N00@Z @ 0x1800504D4 (-UpdateCursorVisibility@MPCCursorManager@@AEAAX_N00@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009E01C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=10
void __fastcall MPCHolographicInputManager::UnInitialize3DComponents(MPCHolographicInputManager *this)
{
  __int64 *v2; // rbx
  __int64 *v3; // rdi
  __int64 v4; // r14
  __int64 v5; // rdi
  DWORD LastError; // ebx
  __int64 v7; // rdi
  DWORD v8; // ebx
  __int64 v9; // rbx
  const char *v10; // r9
  HMODULE v11; // rcx
  int v12; // eax
  __int64 v13; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( *((_BYTE *)this + 2160) )
  {
    v2 = (__int64 *)*((_QWORD *)this + 264);
    v3 = (__int64 *)*((_QWORD *)this + 265);
    while ( v2 != v3 )
    {
      v4 = *v2;
      if ( *v2 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 248LL))(v4);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
      ++v2;
    }
    if ( !*((_BYTE *)this + 2161) )
    {
      v5 = *((_QWORD *)this + 299);
      if ( v5 )
      {
        LastError = GetLastError();
        RtlUnsubscribeWnfNotificationWaitForCompletion(v5);
        SetLastError(LastError);
      }
      *((_QWORD *)this + 299) = 0LL;
      v7 = *((_QWORD *)this + 300);
      if ( v7 )
      {
        v8 = GetLastError();
        RtlUnsubscribeWnfNotificationWaitForCompletion(v7);
        SetLastError(v8);
      }
      *((_QWORD *)this + 300) = 0LL;
      v9 = *((_QWORD *)this + 273);
      *((_QWORD *)this + 273) = 0LL;
      if ( v9 )
      {
        if ( *(_BYTE *)(v9 + 66) )
        {
          if ( !(unsigned int)MITDisableMouseIntercept(this) )
          {
            wil::details::in1diag3::_FailFast_Unexpected(
              retaddr,
              (void *)0x34,
              (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpccursormanager.cpp",
              v10);
            __debugbreak();
          }
          *(_BYTE *)(v9 + 66) = 0;
          MPCCursorManager::UpdateCursorVisibility((MPCCursorManager *)v9, 1, 1, 1);
        }
        v11 = *(HMODULE *)(v9 + 40);
        if ( v11 )
          FreeLibrary(v11);
        operator delete((void *)v9);
      }
    }
    v12 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 272) + 104LL))(*((_QWORD *)this + 272));
    if ( v12 < 0 )
    {
      wil::details::in1diag3::_FailFast_Hr(
        retaddr,
        (void *)0xA7,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
        (const char *)(unsigned int)v12);
      __debugbreak();
    }
    v13 = *((_QWORD *)this + 269);
    if ( v13 )
    {
      *((_QWORD *)this + 269) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    }
    *((_BYTE *)this + 2160) = 0;
  }
}

/*
 * XREFs of ?Initialize3DComponents@MPCHolographicInputManager@@AEAAXXZ @ 0x18004AD44
 * Callers:
 *     ?OnHitTestingStateChanged@MPCHolographicInputManager@@AEAAX_N@Z @ 0x18004D480 (-OnHitTestingStateChanged@MPCHolographicInputManager@@AEAAX_N@Z.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18000326C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000742C (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_NtStatus@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800117DC (-_FailFast_NtStatus@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18004A848 (-_FailFast_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??0MPCCursorManager@@QEAA@XZ @ 0x1800501FC (--0MPCCursorManager@@QEAA@XZ.c)
 *     ?UpdateCursorVisibility@MPCCursorManager@@AEAAX_N00@Z @ 0x1800504D4 (-UpdateCursorVisibility@MPCCursorManager@@AEAAX_N00@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18009DFE0 (--2@YAPEAX_K@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009E01C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall MPCHolographicInputManager::Initialize3DComponents(MPCHolographicInputManager *this)
{
  int v2; // eax
  bool v3; // al
  MPCCursorManager *v4; // rax
  const char *v5; // r9
  __int64 v6; // rbx
  const char *v7; // r9
  HMODULE v8; // rcx
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  MPCCursorManager **v13; // rdi
  MPCCursorManager **v14; // rsi
  MPCCursorManager *v15; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  char v17; // [rsp+70h] [rbp+8h] BYREF
  MPCCursorManager *v18; // [rsp+78h] [rbp+10h] BYREF

  if ( !*((_BYTE *)this + 2160) )
  {
    v17 = 0;
    v2 = (*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 272) + 64LL))(*((_QWORD *)this + 272), &v17);
    if ( v2 < 0 )
    {
      wil::details::in1diag3::_FailFast_Hr(
        retaddr,
        (void *)0x4F,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
        (const char *)(unsigned int)v2);
      __debugbreak();
    }
    v3 = v17 != 0;
    *((_BYTE *)this + 2161) = v17 != 0;
    if ( !v3 )
    {
      v18 = (MPCCursorManager *)operator new(0x48uLL);
      v4 = MPCCursorManager::MPCCursorManager(v18);
      v6 = *((_QWORD *)this + 273);
      *((_QWORD *)this + 273) = v4;
      if ( v6 )
      {
        if ( *(_BYTE *)(v6 + 66) )
        {
          if ( !(unsigned int)MITDisableMouseIntercept() )
          {
            wil::details::in1diag3::_FailFast_Unexpected(
              retaddr,
              (void *)0x34,
              (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpccursormanager.cpp",
              v7);
            __debugbreak();
          }
          *(_BYTE *)(v6 + 66) = 0;
          MPCCursorManager::UpdateCursorVisibility((MPCCursorManager *)v6, 1, 1, 1);
        }
        v8 = *(HMODULE *)(v6 + 40);
        if ( v8 )
          FreeLibrary(v8);
        operator delete((void *)v6);
      }
      if ( !*((_QWORD *)this + 273) )
      {
        wil::details::in1diag3::_FailFast_NullAlloc(
          retaddr,
          (void *)0x55,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
          v5);
        __debugbreak();
      }
      if ( ((1LL << gdwDeviceFamily) & 0xA) != 0 )
      {
        LODWORD(v18) = 0;
        v9 = RtlQueryWnfStateData(
               &v18,
               WNF_HOLO_USER_DISPLAY_CONTEXT,
               MPCHolographicInputManager::DisplayContextChangeCallback,
               this,
               0LL);
        if ( v9 < 0 )
        {
          wil::details::in1diag3::_FailFast_NtStatus(
            retaddr,
            (void *)0x61,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
            (const char *)(unsigned int)v9);
          __debugbreak();
        }
        v10 = RtlSubscribeWnfStateChangeNotification(
                (char *)this + 2392,
                WNF_HOLO_USER_DISPLAY_CONTEXT,
                (unsigned int)v18,
                MPCHolographicInputManager::DisplayContextChangeCallback,
                this,
                0LL,
                0,
                1);
        if ( v10 < 0 )
        {
          wil::details::in1diag3::_FailFast_NtStatus(
            retaddr,
            (void *)0x6C,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
            (const char *)(unsigned int)v10);
          __debugbreak();
        }
        LODWORD(v18) = 0;
        v11 = RtlQueryWnfStateData(
                &v18,
                WNF_HOLO_SHELL_INPUT_3DSWITCH_DISABLE,
                MPCHolographicInputManager::Input3DSwitchDisableCallback,
                this,
                0LL);
        if ( v11 < 0 )
        {
          wil::details::in1diag3::_FailFast_NtStatus(
            retaddr,
            (void *)0x75,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
            (const char *)(unsigned int)v11);
          __debugbreak();
        }
        v12 = RtlSubscribeWnfStateChangeNotification(
                (char *)this + 2400,
                WNF_HOLO_SHELL_INPUT_3DSWITCH_DISABLE,
                (unsigned int)v18,
                MPCHolographicInputManager::Input3DSwitchDisableCallback,
                this,
                0LL,
                0,
                1);
        if ( v12 < 0 )
        {
          wil::details::in1diag3::_FailFast_NtStatus(
            retaddr,
            (void *)0x80,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
            (const char *)(unsigned int)v12);
          __debugbreak();
        }
      }
    }
    v13 = (MPCCursorManager **)*((_QWORD *)this + 264);
    v14 = (MPCCursorManager **)*((_QWORD *)this + 265);
    while ( v13 != v14 )
    {
      v15 = *v13;
      v18 = v15;
      if ( v15 )
        (*(void (__fastcall **)(MPCCursorManager *))(*(_QWORD *)v15 + 8LL))(v15);
      (*(void (__fastcall **)(MPCCursorManager *))(*(_QWORD *)v15 + 248LL))(v15);
      (*(void (__fastcall **)(MPCCursorManager *))(*(_QWORD *)v15 + 16LL))(v15);
      ++v13;
    }
    *((_BYTE *)this + 2160) = 1;
  }
}

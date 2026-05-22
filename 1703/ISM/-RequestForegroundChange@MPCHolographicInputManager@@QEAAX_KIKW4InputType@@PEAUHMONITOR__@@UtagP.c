/*
 * XREFs of ?RequestForegroundChange@MPCHolographicInputManager@@QEAAX_KIKW4InputType@@PEAUHMONITOR__@@UtagPOINT@@_N@Z @ 0x18004D648
 * Callers:
 *     ?InjectInteractionState@MPCHolographicInputManager@@QEAAJW4InteractionState@1@KAEBUHitTestResult3D@@PEAUIInputTarget@@@Z @ 0x18004C36C (-InjectInteractionState@MPCHolographicInputManager@@QEAAJW4InteractionState@1@KAEBUHitTestResult.c)
 *     ?HitTest3D@MPCInputRouter@@AEAAXPEAUInputInfo@@PEAUIInputTarget@@PEAPEAU3@@Z @ 0x1800847A8 (-HitTest3D@MPCInputRouter@@AEAAXPEAUInputInfo@@PEAUIInputTarget@@PEAPEAU3@@Z.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18000326C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?GetProcessIdFromViewId@ViewHelper@@SAKI@Z @ 0x18002B984 (-GetProcessIdFromViewId@ViewHelper@@SAKI@Z.c)
 *     ?GetThreadIdFromViewId@ViewHelper@@SAKI@Z @ 0x18002BAC0 (-GetThreadIdFromViewId@ViewHelper@@SAKI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

int __fastcall MPCHolographicInputManager::RequestForegroundChange(
        __int64 a1,
        HWND a2,
        unsigned int a3,
        const char *a4,
        unsigned int a5,
        __int64 a6,
        __int64 a7,
        char a8)
{
  __int64 v10; // rax
  unsigned int ThreadIdFromViewId; // ebx
  unsigned int ProcessIdFromViewId; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  LPARAM lParam; // [rsp+50h] [rbp+8h] BYREF

  if ( !*(_BYTE *)(a1 + 2160) )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x464,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
      a4);
    JUMPOUT(0x18004D74DLL);
  }
  v10 = 1LL << gdwDeviceFamily;
  if ( ((1LL << gdwDeviceFamily) & 0x224A) != 0 )
  {
    if ( *(HWND *)(a1 + 2432) != a2 )
    {
      LODWORD(v10) = SetForegroundWindow(a2);
      if ( a8 )
      {
        LODWORD(lParam) = 0;
        LODWORD(v10) = EnumChildWindows(
                         a2,
                         lambda_2a3b4304752dce9f4c34d9f910fd6e17_::_lambda_invoker_cdecl_,
                         (LPARAM)&lParam);
        if ( (_DWORD)lParam )
        {
          ThreadIdFromViewId = ViewHelper::GetThreadIdFromViewId(lParam);
          ProcessIdFromViewId = ViewHelper::GetProcessIdFromViewId(lParam);
          LODWORD(v10) = SetInputFocus(ProcessIdFromViewId, ThreadIdFromViewId, (unsigned int)lParam, a2, 0);
        }
      }
    }
  }
  else
  {
    LODWORD(v10) = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, __int64))(**(_QWORD **)(a1 + 2096)
                                                                                              + 112LL))(
                     *(_QWORD *)(a1 + 2096),
                     a3,
                     (unsigned int)a4,
                     a5,
                     0LL,
                     a7);
  }
  *(_QWORD *)(a1 + 2432) = a2;
  return v10;
}

/*
 * XREFs of ?InjectInteractionState@MPCHolographicInputManager@@QEAAJW4InteractionState@1@KAEBUHitTestResult3D@@PEAUIInputTarget@@@Z @ 0x18004C36C
 * Callers:
 *     ?SendMPCInput@MPCGamepadProcessor@@AEAAXPEAUInputInfo@@_N1@Z @ 0x18002E8C8 (-SendMPCInput@MPCGamepadProcessor@@AEAAXPEAUInputInfo@@_N1@Z.c)
 *     ?hydroForwardInputReport@MPCMouseProcessor@@AEAAJPEBUMouseProcessorState@@PEAUInputInfo@@@Z @ 0x1800412B0 (-hydroForwardInputReport@MPCMouseProcessor@@AEAAJPEBUMouseProcessorState@@PEAUInputInfo@@@Z.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18000326C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000742C (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _lambda_3b92e80685ad1aeeb8378e6fd39eb279_::operator() @ 0x18004C598 (_lambda_3b92e80685ad1aeeb8378e6fd39eb279_--operator().c)
 *     ?IsExclusiveTarget@MPCHolographicInputManager@@SA_NPEAUIInputTarget@@@Z @ 0x18004D0FC (-IsExclusiveTarget@MPCHolographicInputManager@@SA_NPEAUIInputTarget@@@Z.c)
 *     ?RequestForegroundChange@MPCHolographicInputManager@@QEAAX_KIKW4InputType@@PEAUHMONITOR__@@UtagPOINT@@_N@Z @ 0x18004D648 (-RequestForegroundChange@MPCHolographicInputManager@@QEAAX_KIKW4InputType@@PEAUHMONITOR__@@UtagP.c)
 *     __security_check_cookie @ 0x18009CCC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall MPCHolographicInputManager::InjectInteractionState(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        __int64 a4,
        struct IInputTarget *a5)
{
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  int v11; // eax
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  int v14; // eax
  _QWORD v16[2]; // [rsp+40h] [rbp-C0h] BYREF
  _OWORD v17[3]; // [rsp+50h] [rbp-B0h] BYREF
  _OWORD v18[3]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v19[1888]; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE v20[1888]; // [rsp+810h] [rbp+710h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+FA8h] [rbp+EA8h]

  if ( !*(_BYTE *)(a1 + 2160) )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x257,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
      (const char *)a4);
    __debugbreak();
  }
  if ( !MPCHolographicInputManager::IsExclusiveTarget(a5) )
  {
    v16[0] = a1;
    if ( *(_BYTE *)(a1 + 2164) )
    {
      if ( a2 == 1 )
      {
        v9 = *(_OWORD *)(a4 + 80);
        v17[0] = *(_OWORD *)(a4 + 64);
        v10 = *(_OWORD *)(a4 + 96);
        v17[1] = v9;
        v17[2] = v10;
        lambda_3b92e80685ad1aeeb8378e6fd39eb279_::operator()(v16, v19, 4LL, 1LL, a3, v17);
        v11 = (*(__int64 (__fastcall **)(struct IInputTarget *, _BYTE *))(*(_QWORD *)a5 + 24LL))(a5, v19);
        if ( v11 < 0 )
        {
          wil::details::in1diag3::_FailFast_Hr(
            retaddr,
            (void *)0x27D,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
            (const char *)(unsigned int)v11);
          __debugbreak();
        }
        goto LABEL_8;
      }
    }
    else if ( a2 == 1 )
    {
LABEL_8:
      *(_BYTE *)(a1 + 2164) = 1;
      _InterlockedExchange(
        &MPCInputInfoHelper::m_nextSpectrumId,
        (MPCInputInfoHelper::m_nextSpectrumId - 2000000000) % 0x3B9AC9FFu + 2000000001);
      *(_DWORD *)(a1 + 2168) = MPCInputInfoHelper::m_nextSpectrumId;
      if ( !*(_BYTE *)(a4 + 2) )
        MPCHolographicInputManager::RequestForegroundChange(
          a1,
          *(_QWORD *)(a4 + 40),
          *(unsigned int *)(a4 + 268),
          a3,
          512);
      goto LABEL_11;
    }
    *(_BYTE *)(a1 + 2164) = 0;
LABEL_11:
    v12 = *(_OWORD *)(a4 + 80);
    v18[0] = *(_OWORD *)(a4 + 64);
    v13 = *(_OWORD *)(a4 + 96);
    v18[1] = v12;
    v18[2] = v13;
    lambda_3b92e80685ad1aeeb8378e6fd39eb279_::operator()(v16, v20, (unsigned int)(a2 != 1) + 2, a2, a3, v18);
    v14 = (*(__int64 (__fastcall **)(struct IInputTarget *, _BYTE *))(*(_QWORD *)a5 + 24LL))(a5, v20);
    if ( v14 < 0 )
    {
      wil::details::in1diag3::_FailFast_Hr(
        retaddr,
        (void *)0x29A,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
        (const char *)(unsigned int)v14);
      JUMPOUT(0x18004C594LL);
    }
  }
  return 0LL;
}

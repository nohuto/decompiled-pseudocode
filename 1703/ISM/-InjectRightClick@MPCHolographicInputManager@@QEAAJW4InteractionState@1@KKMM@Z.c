/*
 * XREFs of ?InjectRightClick@MPCHolographicInputManager@@QEAAJW4InteractionState@1@KKMM@Z @ 0x18004C694
 * Callers:
 *     ?PostHitTestProcessing@MPCSixDofProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAUInputInfo@@@Z @ 0x180046020 (-PostHitTestProcessing@MPCSixDofProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAUInputInfo@@@.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003204 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18000326C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?SynthesizeMouseInput@MouseProcessor@@SAJPEAUInputInfo@@@Z @ 0x180059894 (-SynthesizeMouseInput@MouseProcessor@@SAJPEAUInputInfo@@@Z.c)
 *     memset @ 0x18009D814 (memset.c)
 */

__int64 __fastcall MPCHolographicInputManager::InjectRightClick(
        __int64 a1,
        int a2,
        int a3,
        const char *a4,
        float a5,
        float a6)
{
  int v6; // ebx
  int v9; // ebx
  __int64 v10; // rdx
  __int16 v12; // ax
  _OWORD v13[118]; // [rsp+48h] [rbp-C0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+7B0h] [rbp+6A8h]

  v6 = (int)a4;
  if ( !*(_BYTE *)(a1 + 2160) )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x2A8,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
      a4);
    __debugbreak();
  }
  memset(v13, 0, sizeof(v13));
  LODWORD(v13[0]) = 2;
  BYTE8(v13[117]) = 1;
  BYTE11(v13[117]) = 1;
  DWORD1(v13[0]) = a3;
  DWORD2(v13[42]) = v6;
  v13[44] = 0u;
  HIDWORD(v13[44]) = (int)a5;
  *(_DWORD *)((char *)&v13[44] + 2) = 1;
  DWORD1(v13[45]) = 0;
  LODWORD(v13[45]) = (int)a6;
  if ( a2 == 1 )
  {
    v9 = MouseProcessor::SynthesizeMouseInput((struct InputInfo *)v13);
    if ( v9 < 0 )
    {
      v10 = 700LL;
LABEL_5:
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)v10,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
        (const char *)(unsigned int)v9);
      return (unsigned int)v9;
    }
    v12 = 4;
  }
  else
  {
    v9 = MouseProcessor::SynthesizeMouseInput((struct InputInfo *)v13);
    if ( v9 < 0 )
    {
      v10 = 708LL;
      goto LABEL_5;
    }
    v12 = 8;
  }
  WORD2(v13[44]) = v12;
  return MouseProcessor::SynthesizeMouseInput((struct InputInfo *)v13);
}

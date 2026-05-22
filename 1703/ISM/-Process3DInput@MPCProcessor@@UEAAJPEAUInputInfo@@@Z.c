/*
 * XREFs of ?Process3DInput@MPCProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x180047270
 * Callers:
 *     <none>
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18000326C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?hfxOnInputReport@MPCProcessor@@AEAAJPEAUInputInfo@@@Z @ 0x180047310 (-hfxOnInputReport@MPCProcessor@@AEAAJPEAUInputInfo@@@Z.c)
 *     ?hydroOnInputReport@MPCProcessor@@AEAAJPEAUInputInfo@@@Z @ 0x180047480 (-hydroOnInputReport@MPCProcessor@@AEAAJPEAUInputInfo@@@Z.c)
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x18004AC9C (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 */

__int64 __fastcall MPCProcessor::Process3DInput(MPCProcessor *this, struct InputInfo *a2)
{
  struct MPCHolographicInputManager *Instance; // rax
  const char *v5; // r9
  MPCProcessor *v6; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  Instance = MPCHolographicInputManager::GetInstance();
  if ( !*((_BYTE *)Instance + 2160) )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0xB1,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
      v5);
    JUMPOUT(0x1800472CBLL);
  }
  v6 = (MPCProcessor *)((char *)this - 16);
  if ( *((_BYTE *)Instance + 2161) )
    return MPCProcessor::hfxOnInputReport(v6, a2);
  else
    return MPCProcessor::hydroOnInputReport(v6, a2);
}

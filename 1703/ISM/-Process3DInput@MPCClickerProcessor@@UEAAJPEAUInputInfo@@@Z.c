/*
 * XREFs of ?Process3DInput@MPCClickerProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x180049410
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003204 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18000326C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?hfxOnInputReport@MPCClickerProcessor@@AEAAJPEAUInputInfo@@@Z @ 0x18004949C (-hfxOnInputReport@MPCClickerProcessor@@AEAAJPEAUInputInfo@@@Z.c)
 *     ?hydroOnInputReport@MPCClickerProcessor@@AEAAJPEAUInputInfo@@@Z @ 0x180049670 (-hydroOnInputReport@MPCClickerProcessor@@AEAAJPEAUInputInfo@@@Z.c)
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x18004AC9C (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 */

__int64 __fastcall MPCClickerProcessor::Process3DInput(MPCClickerProcessor *this, struct InputInfo *a2)
{
  struct MPCHolographicInputManager *Instance; // rax
  const char *v5; // r9
  MPCClickerProcessor *v6; // rcx
  int v7; // ebx
  __int64 v8; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  Instance = MPCHolographicInputManager::GetInstance();
  if ( !*((_BYTE *)Instance + 2160) )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0xB1,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
      v5);
    __debugbreak();
  }
  v6 = (MPCClickerProcessor *)((char *)this - 16);
  if ( *((_BYTE *)Instance + 2161) )
  {
    v7 = MPCClickerProcessor::hfxOnInputReport(v6, a2);
    if ( v7 < 0 )
    {
      v8 = 67LL;
LABEL_5:
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)v8,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcclickerprocessor.cpp",
        (const char *)(unsigned int)v7);
      return (unsigned int)v7;
    }
  }
  else
  {
    v7 = MPCClickerProcessor::hydroOnInputReport(v6, a2);
    if ( v7 < 0 )
    {
      v8 = 71LL;
      goto LABEL_5;
    }
  }
  return 0LL;
}

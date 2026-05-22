/*
 * XREFs of ?ForwardInputReport@MPCMouseProcessor@@UEAAJPEBUMouseProcessorState@@PEAUInputInfo@@@Z @ 0x180040F20
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003204 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18000326C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?hfxForwardInputReport@MPCMouseProcessor@@AEAAJPEBUMouseProcessorState@@PEAUInputInfo@@@Z @ 0x1800410A4 (-hfxForwardInputReport@MPCMouseProcessor@@AEAAJPEBUMouseProcessorState@@PEAUInputInfo@@@Z.c)
 *     ?hydroForwardInputReport@MPCMouseProcessor@@AEAAJPEBUMouseProcessorState@@PEAUInputInfo@@@Z @ 0x1800412B0 (-hydroForwardInputReport@MPCMouseProcessor@@AEAAJPEBUMouseProcessorState@@PEAUInputInfo@@@Z.c)
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x18004AC9C (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall MPCMouseProcessor::ForwardInputReport(
        MPCMouseProcessor *this,
        const struct MouseProcessorState *a2,
        struct InputInfo *a3)
{
  struct MPCHolographicInputManager *Instance; // rax
  const char *v7; // r9
  MPCMouseProcessor *v8; // rcx
  int v9; // esi
  __int64 v10; // rdx
  int v12; // eax
  unsigned int v13; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *((_BYTE *)MPCHolographicInputManager::GetInstance() + 2160)
    && *((_QWORD *)MPCHolographicInputManager::GetInstance() + 269) )
  {
    if ( !*((_BYTE *)this + 277) )
    {
      *((_DWORD *)this + 70) = *(_DWORD *)a2;
      *((_DWORD *)this + 71) = *((_DWORD *)a2 + 1);
      *((_BYTE *)this + 277) = 1;
    }
    *((_DWORD *)this + 72) = *((_DWORD *)a2 + 2);
    *((_DWORD *)this + 73) = *((_DWORD *)a2 + 3);
    if ( (*((_BYTE *)a3 + 706) & 1) != 0 )
    {
      *((_DWORD *)this + 72) = *(_DWORD *)a2 - *((_DWORD *)this + 70);
      *((_DWORD *)this + 73) = *((_DWORD *)a2 + 1) - *((_DWORD *)this + 71);
    }
    Instance = MPCHolographicInputManager::GetInstance();
    if ( !*((_BYTE *)Instance + 2160) )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0xB1,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
        v7);
      JUMPOUT(0x1800410A0LL);
    }
    v8 = (MPCMouseProcessor *)((char *)this - 8);
    if ( *((_BYTE *)Instance + 2161) )
    {
      v9 = MPCMouseProcessor::hfxForwardInputReport(v8, a2, a3);
      if ( v9 < 0 )
      {
        v10 = 167LL;
LABEL_11:
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)v10,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpcmouse\\lib\\mpcmouseprocessor.cpp",
          (const char *)(unsigned int)v9);
        return (unsigned int)v9;
      }
    }
    else
    {
      v9 = MPCMouseProcessor::hydroForwardInputReport(v8, a2, a3);
      if ( v9 < 0 )
      {
        v10 = 171LL;
        goto LABEL_11;
      }
    }
    *((_DWORD *)this + 70) = *(_DWORD *)a2;
    *((_DWORD *)this + 71) = *((_DWORD *)a2 + 1);
    return 0LL;
  }
  if ( (gdwMitConfig & 4) != 0 )
  {
    *((_DWORD *)a3 + 469) = 1;
    return 0LL;
  }
  v12 = (*(__int64 (__fastcall **)(_QWORD, const struct MouseProcessorState *, struct InputInfo *))(**((_QWORD **)this + 28)
                                                                                                  + 24LL))(
          *((_QWORD *)this + 28),
          a2,
          a3);
  v13 = v12;
  if ( v12 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)0x8B,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpcmouse\\lib\\mpcmouseprocessor.cpp",
    (const char *)(unsigned int)v12);
  return v13;
}

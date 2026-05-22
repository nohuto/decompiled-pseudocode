/*
 * XREFs of ?hfxForwardInputReport@MPCMouseProcessor@@AEAAJPEBUMouseProcessorState@@PEAUInputInfo@@@Z @ 0x1800410A4
 * Callers:
 *     ?ForwardInputReport@MPCMouseProcessor@@UEAAJPEBUMouseProcessorState@@PEAUInputInfo@@@Z @ 0x180040F20 (-ForwardInputReport@MPCMouseProcessor@@UEAAJPEBUMouseProcessorState@@PEAUInputInfo@@@Z.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003204 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18000326C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000742C (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x18004AC9C (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x18009CCC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall MPCMouseProcessor::hfxForwardInputReport(
        MPCMouseProcessor *this,
        const struct MouseProcessorState *a2,
        struct InputInfo *a3)
{
  __int64 *v3; // rdi
  struct MPCHolographicInputManager *Instance; // rax
  const char *v8; // r9
  __int64 v9; // rcx
  __int64 v10; // r14
  int v11; // eax
  __int64 v12; // rcx
  int v13; // eax
  bool v14; // di
  __int64 v15; // rcx
  int v16; // eax
  unsigned int v17; // r14d
  __int64 v19; // rcx
  int v20; // eax
  unsigned int v21; // ebx
  __int64 v22; // [rsp+20h] [rbp-30h] BYREF
  int v23; // [rsp+28h] [rbp-28h]
  __int64 v24; // [rsp+30h] [rbp-20h] BYREF
  __int64 v25; // [rsp+38h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]

  v3 = (__int64 *)((char *)this + 200);
  if ( !*((_QWORD *)this + 25) )
  {
    Instance = MPCHolographicInputManager::GetInstance();
    if ( !*((_BYTE *)Instance + 2160) )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x58,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\inc\\mpcholographicinputmanager.h",
        v8);
      __debugbreak();
    }
    v9 = *v3;
    v10 = *((_QWORD *)Instance + 272);
    if ( *v3 )
    {
      *v3 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    }
    v11 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v10 + 32LL))(v10, v3);
    if ( v11 < 0 )
    {
      wil::details::in1diag3::_FailFast_Hr(
        retaddr,
        (void *)0xBE,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpcmouse\\lib\\mpcmouseprocessor.cpp",
        (const char *)(unsigned int)v11);
      __debugbreak();
    }
  }
  v12 = *v3;
  if ( *v3 )
  {
    v24 = 0LL;
    v25 = 0LL;
    v24 = *((_QWORD *)this + 37);
    LODWORD(v25) = *((_DWORD *)a2 + 4);
    HIDWORD(v25) = *((unsigned __int16 *)a3 + 355);
    v22 = 0LL;
    v23 = 0;
    v13 = (*(__int64 (__fastcall **)(__int64, __int64 *, __int64 *))(*(_QWORD *)v12 + 24LL))(v12, &v24, &v22);
    if ( v13 < 0 )
    {
      wil::details::in1diag3::_FailFast_Hr(
        retaddr,
        (void *)0xD5,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpcmouse\\lib\\mpcmouseprocessor.cpp",
        (const char *)(unsigned int)v13);
      JUMPOUT(0x1800412ACLL);
    }
    v14 = v23 != 0;
    if ( v23 == 2 )
      *((_QWORD *)a3 + 8) = v22;
    if ( *((_BYTE *)this + 284) == 1 && !v14 )
    {
      *((_DWORD *)a3 + 14) = 0;
      v15 = *((_QWORD *)this + 29);
      if ( v15 )
      {
        v16 = (*(__int64 (__fastcall **)(__int64, const struct MouseProcessorState *, struct InputInfo *))(*(_QWORD *)v15 + 24LL))(
                v15,
                a2,
                a3);
        v17 = v16;
        if ( v16 < 0 )
        {
          wil::details::in1diag3::Return_Hr_NoOriginate(
            retaddr,
            (void *)0xEE,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpcmouse\\lib\\mpcmouseprocessor.cpp",
            (const char *)(unsigned int)v16);
          return v17;
        }
      }
    }
    *((_BYTE *)this + 284) = v14;
    if ( !v14 )
      return 0LL;
  }
  v19 = *((_QWORD *)this + 29);
  if ( !v19 )
    return 0LL;
  v20 = (*(__int64 (__fastcall **)(__int64, const struct MouseProcessorState *, struct InputInfo *))(*(_QWORD *)v19 + 24LL))(
          v19,
          a2,
          a3);
  v21 = v20;
  if ( v20 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)0xF7,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpcmouse\\lib\\mpcmouseprocessor.cpp",
    (const char *)(unsigned int)v20);
  return v21;
}

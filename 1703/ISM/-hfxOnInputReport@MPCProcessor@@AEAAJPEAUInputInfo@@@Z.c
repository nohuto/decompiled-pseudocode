/*
 * XREFs of ?hfxOnInputReport@MPCProcessor@@AEAAJPEAUInputInfo@@@Z @ 0x180047310
 * Callers:
 *     ?Process3DInput@MPCProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x180047270 (-Process3DInput@MPCProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003204 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18000326C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$LogMPCInputReport@AEAPEAUInputInfo@@@ISMTracing@@SAXAEAPEAUInputInfo@@@Z @ 0x180046960 (--$LogMPCInputReport@AEAPEAUInputInfo@@@ISMTracing@@SAXAEAPEAUInputInfo@@@Z.c)
 *     ?Process@MPCTracer@@QEAAXPEAUInputInfo@@@Z @ 0x180047198 (-Process@MPCTracer@@QEAAXPEAUInputInfo@@@Z.c)
 *     ?CacheHandInput@MPCProcessor@@AEAAXPEAUInputInfo@@PEA_N@Z @ 0x18004789C (-CacheHandInput@MPCProcessor@@AEAAXPEAUInputInfo@@PEA_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall MPCProcessor::hfxOnInputReport(MPCProcessor *this, struct InputInfo *a2)
{
  __int64 v4; // rsi
  const char *v5; // r9
  __int64 v6; // rcx
  int v7; // eax
  unsigned int v8; // ebx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  __int64 v14; // [rsp+70h] [rbp+20h] BYREF
  struct InputInfo *v15; // [rsp+78h] [rbp+28h] BYREF

  v15 = a2;
  LOBYTE(v14) = 0;
  ISMTracing::LogMPCInputReport<InputInfo * &>((__int64 *)&v15);
  MPCProcessor::CacheHandInput(this, a2, (bool *)&v14);
  MPCTracer::Process((MPCProcessor *)((char *)this + 192), a2);
  if ( (_BYTE)v14 )
    return 0LL;
  v14 = 0LL;
  v4 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 3) + 56LL))(*((_QWORD *)this + 3));
  if ( !v4 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x6D,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcprocessor.cpp",
      v5);
    __debugbreak();
  }
  v6 = v14;
  if ( v14 )
  {
    v14 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  v7 = (*(__int64 (__fastcall **)(__int64, _QWORD, struct InputInfo *, _QWORD, _QWORD, __int64 *))(*(_QWORD *)v4 + 48LL))(
         v4,
         *((_QWORD *)this + 5),
         a2,
         0LL,
         0LL,
         &v14);
  v8 = v7;
  if ( v7 >= 0 )
  {
    v10 = v14;
    if ( v14 && *((_DWORD *)a2 + 176) != 8 )
    {
      v7 = (*(__int64 (__fastcall **)(__int64, struct InputInfo *, __int64))(*(_QWORD *)v4 + 64LL))(v4, a2, v14);
      v8 = v7;
      if ( v7 < 0 )
      {
        v9 = 125LL;
        goto LABEL_12;
      }
      v10 = v14;
    }
    if ( v10 )
    {
      v14 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    }
    return 0LL;
  }
  v9 = 118LL;
LABEL_12:
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)v9,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcprocessor.cpp",
    (const char *)(unsigned int)v7);
  v11 = v14;
  if ( v14 )
  {
    v14 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  }
  return v8;
}

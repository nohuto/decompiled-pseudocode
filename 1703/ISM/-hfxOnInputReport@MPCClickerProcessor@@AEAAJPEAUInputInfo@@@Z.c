/*
 * XREFs of ?hfxOnInputReport@MPCClickerProcessor@@AEAAJPEAUInputInfo@@@Z @ 0x18004949C
 * Callers:
 *     ?Process3DInput@MPCClickerProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x180049410 (-Process3DInput@MPCClickerProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003204 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18000326C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$LogMPCInputReport@AEAPEAUInputInfo@@@ISMTracing@@SAXAEAPEAUInputInfo@@@Z @ 0x180046960 (--$LogMPCInputReport@AEAPEAUInputInfo@@@ISMTracing@@SAXAEAPEAUInputInfo@@@Z.c)
 *     ?Process@MPCTracer@@QEAAXPEAUInputInfo@@@Z @ 0x180047198 (-Process@MPCTracer@@QEAAXPEAUInputInfo@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall MPCClickerProcessor::hfxOnInputReport(MPCClickerProcessor *this, struct InputInfo *a2)
{
  _OWORD *v4; // rax
  struct InputInfo *v5; // r8
  __int64 v6; // rcx
  __int64 v7; // rsi
  const char *v8; // r9
  __int64 v9; // rcx
  int v10; // eax
  unsigned int v11; // ebx
  __int64 v12; // rdx
  __int64 v13; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v16; // [rsp+60h] [rbp+8h] BYREF
  struct InputInfo *v17; // [rsp+68h] [rbp+10h] BYREF

  v17 = a2;
  ISMTracing::LogMPCInputReport<InputInfo * &>((__int64 *)&v17);
  v4 = (_OWORD *)((char *)this + 168);
  v5 = a2;
  v6 = 14LL;
  do
  {
    *v4 = *(_OWORD *)v5;
    v4[1] = *((_OWORD *)v5 + 1);
    v4[2] = *((_OWORD *)v5 + 2);
    v4[3] = *((_OWORD *)v5 + 3);
    v4[4] = *((_OWORD *)v5 + 4);
    v4[5] = *((_OWORD *)v5 + 5);
    v4[6] = *((_OWORD *)v5 + 6);
    v4 += 8;
    *(v4 - 1) = *((_OWORD *)v5 + 7);
    v5 = (struct InputInfo *)((char *)v5 + 128);
    --v6;
  }
  while ( v6 );
  *v4 = *(_OWORD *)v5;
  v4[1] = *((_OWORD *)v5 + 1);
  v4[2] = *((_OWORD *)v5 + 2);
  v4[3] = *((_OWORD *)v5 + 3);
  v4[4] = *((_OWORD *)v5 + 4);
  v4[5] = *((_OWORD *)v5 + 5);
  MPCTracer::Process((MPCClickerProcessor *)((char *)this + 2064), a2);
  v16 = 0LL;
  v7 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 3) + 56LL))(*((_QWORD *)this + 3));
  if ( !v7 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x5B,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcclickerprocessor.cpp",
      v8);
    __debugbreak();
  }
  v9 = v16;
  if ( v16 )
  {
    v16 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  v10 = (*(__int64 (__fastcall **)(__int64, _QWORD, struct InputInfo *, _QWORD, _QWORD, __int64 *))(*(_QWORD *)v7 + 48LL))(
          v7,
          *((_QWORD *)this + 5),
          a2,
          0LL,
          0LL,
          &v16);
  v11 = v10;
  if ( v10 < 0 )
  {
    v12 = 100LL;
LABEL_12:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v12,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcclickerprocessor.cpp",
      (const char *)(unsigned int)v10);
    v13 = v16;
    goto LABEL_15;
  }
  v13 = v16;
  if ( v16 )
  {
    v10 = (*(__int64 (__fastcall **)(__int64, struct InputInfo *, __int64))(*(_QWORD *)v7 + 64LL))(v7, a2, v16);
    v11 = v10;
    if ( v10 < 0 )
    {
      v12 = 107LL;
      goto LABEL_12;
    }
    v13 = v16;
  }
  v11 = 0;
LABEL_15:
  if ( v13 )
  {
    v16 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  }
  return v11;
}

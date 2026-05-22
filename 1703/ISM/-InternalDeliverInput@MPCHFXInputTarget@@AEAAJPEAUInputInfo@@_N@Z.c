/*
 * XREFs of ?InternalDeliverInput@MPCHFXInputTarget@@AEAAJPEAUInputInfo@@_N@Z @ 0x180085F38
 * Callers:
 *     ?DeliverInput@MPCHFXInputTarget@@UEAAJPEAUInputInfo@@@Z @ 0x180085F20 (-DeliverInput@MPCHFXInputTarget@@UEAAJPEAUInputInfo@@@Z.c)
 *     ?DeliverInput@MPCHFXInputTarget@@UEAAJPEAUInputInfo@@_N@Z @ 0x180085F30 (-DeliverInput@MPCHFXInputTarget@@UEAAJPEAUInputInfo@@_N@Z.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003204 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18000326C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     Template_qqqq @ 0x180005870 (Template_qqqq.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180043938 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Instance@ISMTracing@@KAPEAV1@XZ @ 0x180043FD0 (-Instance@ISMTracing@@KAPEAV1@XZ.c)
 *     ?MPCHFXInputTarget_DeliverInput_@ISMTracing@@QEAAXPEAUIInputTarget@@KPEAUInputInfo@@_N@Z @ 0x1800856DC (-MPCHFXInputTarget_DeliverInput_@ISMTracing@@QEAAXPEAUIInputTarget@@KPEAUInputInfo@@_N@Z.c)
 *     __security_check_cookie @ 0x18009CCC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall MPCHFXInputTarget::InternalDeliverInput(
        MPCHFXInputTarget *this,
        struct InputInfo *a2,
        bool a3,
        const char *a4)
{
  __int64 v7; // rdx
  struct InputInfo *v8; // rax
  char *v9; // rcx
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  int v22; // eax
  __int64 v23; // rcx
  int v24; // eax
  unsigned int v25; // esi
  struct IInputTarget *v27; // rsi
  _DWORD *v28; // rcx
  ISMTracing *v29; // rcx
  int v30; // [rsp+30h] [rbp-798h] BYREF
  char v31; // [rsp+38h] [rbp-790h] BYREF
  __int64 v32; // [rsp+2E8h] [rbp-4E0h]
  wil::details::in1diag3 *retaddr; // [rsp+7C8h] [rbp+0h]

  if ( !a2 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0xB9,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpchfxinputtarget.cpp",
      a4);
    JUMPOUT(0x18008613DLL);
  }
  if ( (Microsoft_OneCore_MinInputEnableBits & 4) != 0 )
    Template_qqqq((__int64)this, &MinInput_Log_InputInfo, 9, *(_DWORD *)a2, *((_DWORD *)a2 + 1), *((_DWORD *)a2 + 2));
  if ( !a3 )
  {
    v7 = 14LL;
    v30 = 3;
    v8 = a2;
    v9 = &v31;
    do
    {
      v10 = *((_OWORD *)v8 + 1);
      *(_OWORD *)v9 = *(_OWORD *)v8;
      v11 = *((_OWORD *)v8 + 2);
      *((_OWORD *)v9 + 1) = v10;
      v12 = *((_OWORD *)v8 + 3);
      *((_OWORD *)v9 + 2) = v11;
      v13 = *((_OWORD *)v8 + 4);
      *((_OWORD *)v9 + 3) = v12;
      v14 = *((_OWORD *)v8 + 5);
      *((_OWORD *)v9 + 4) = v13;
      v15 = *((_OWORD *)v8 + 6);
      *((_OWORD *)v9 + 5) = v14;
      v16 = *((_OWORD *)v8 + 7);
      v8 = (struct InputInfo *)((char *)v8 + 128);
      *((_OWORD *)v9 + 6) = v15;
      v9 += 128;
      *((_OWORD *)v9 - 1) = v16;
      --v7;
    }
    while ( v7 );
    v17 = *((_OWORD *)v8 + 1);
    *(_OWORD *)v9 = *(_OWORD *)v8;
    v18 = *((_OWORD *)v8 + 2);
    *((_OWORD *)v9 + 1) = v17;
    v19 = *((_OWORD *)v8 + 3);
    *((_OWORD *)v9 + 2) = v18;
    v20 = *((_OWORD *)v8 + 4);
    *((_OWORD *)v9 + 3) = v19;
    v21 = *((_OWORD *)v8 + 5);
    *((_OWORD *)v9 + 4) = v20;
    *((_OWORD *)v9 + 5) = v21;
    v32 = 0LL;
    v22 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, int *, int))(**((_QWORD **)this + 5) + 152LL))(
            *((_QWORD *)this + 5),
            *((unsigned int *)this + 25),
            4LL,
            &v30,
            1896);
    if ( v22 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xCF,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpchfxinputtarget.cpp",
        (const char *)(unsigned int)v22);
  }
  v23 = *((_QWORD *)this + 6);
  if ( !v23
    || *((_BYTE *)a2 + 785)
    || *((_BYTE *)this + 96)
    || (v24 = (*(__int64 (__fastcall **)(__int64, struct InputInfo *))(*(_QWORD *)v23 + 24LL))(v23, a2),
        v25 = v24,
        v24 >= 0) )
  {
    v27 = (struct IInputTarget *)*((_QWORD *)this + 6);
    v28 = (_DWORD *)*((_QWORD *)ISMTracing::Instance() + 1);
    if ( v28 )
    {
      if ( *v28 )
      {
        ISMTracing::Instance();
        ISMTracing::MPCHFXInputTarget_DeliverInput_(v29, v27, *((_DWORD *)this + 14), a2, a3);
      }
    }
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0xD7,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpchfxinputtarget.cpp",
      (const char *)(unsigned int)v24);
    return v25;
  }
}

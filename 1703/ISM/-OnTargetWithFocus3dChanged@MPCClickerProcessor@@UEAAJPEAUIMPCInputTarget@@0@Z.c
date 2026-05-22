/*
 * XREFs of ?OnTargetWithFocus3dChanged@MPCClickerProcessor@@UEAAJPEAUIMPCInputTarget@@0@Z @ 0x180049DB0
 * Callers:
 *     <none>
 * Callees:
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000742C (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Instance@ISMTracing@@KAPEAV1@XZ @ 0x180043FD0 (-Instance@ISMTracing@@KAPEAV1@XZ.c)
 *     ?MPCProcessor_FocusHandLost_@ISMTracing@@QEAAXPEAUIInputTarget@@PEAUInputInfo@@@Z @ 0x180044AF0 (-MPCProcessor_FocusHandLost_@ISMTracing@@QEAAXPEAUIInputTarget@@PEAUInputInfo@@@Z.c)
 *     ?MPCProcessor_FocusHandDetected_@ISMTracing@@QEAAXPEAUIInputTarget@@PEAUInputInfo@@@Z @ 0x180044C8C (-MPCProcessor_FocusHandDetected_@ISMTracing@@QEAAXPEAUIInputTarget@@PEAUInputInfo@@@Z.c)
 *     ?PopulateGenericMPCInputInfo@MPCInputInfoHelper@@SAJW4MPCAugmentedInputGestureType@@W4MPCGestureType@@KAEAUInputInfo@@_N@Z @ 0x180054E7C (-PopulateGenericMPCInputInfo@MPCInputInfoHelper@@SAJW4MPCAugmentedInputGestureType@@W4MPCGesture.c)
 *     __security_check_cookie @ 0x18009CCC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall MPCClickerProcessor::OnTargetWithFocus3dChanged(
        MPCClickerProcessor *this,
        struct IMPCInputTarget *a2,
        struct IMPCInputTarget *a3)
{
  bool v6; // bp
  bool v7; // al
  bool v8; // bp
  __int64 v9; // rdx
  _OWORD *v10; // rax
  _OWORD *v11; // rcx
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  struct IMPCInputTarget *v24; // rax
  int v25; // eax
  __int64 v26; // r8
  _DWORD *v27; // rcx
  ISMTracing *v28; // rcx
  int v29; // eax
  __int64 v30; // r8
  _DWORD *v31; // rcx
  ISMTracing *v32; // rcx
  int v34; // [rsp+20h] [rbp-798h]
  _QWORD v35[236]; // [rsp+30h] [rbp-788h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+7B8h] [rbp+0h]

  v6 = a2 && !(*(unsigned int (__fastcall **)(struct IMPCInputTarget *))(*(_QWORD *)a2 + 56LL))(a2);
  v7 = a3 && !(*(unsigned int (__fastcall **)(struct IMPCInputTarget *))(*(_QWORD *)a3 + 56LL))(a3);
  v8 = v6 && v7;
  v9 = 14LL;
  v10 = (_OWORD *)((char *)this + 168);
  v11 = v35;
  do
  {
    v12 = v10[1];
    *v11 = *v10;
    v13 = v10[2];
    v11[1] = v12;
    v14 = v10[3];
    v11[2] = v13;
    v15 = v10[4];
    v11[3] = v14;
    v16 = v10[5];
    v11[4] = v15;
    v17 = v10[6];
    v11[5] = v16;
    v18 = v10[7];
    v10 += 8;
    v11[6] = v17;
    v11 += 8;
    *(v11 - 1) = v18;
    --v9;
  }
  while ( v9 );
  v19 = v10[1];
  *v11 = *v10;
  v20 = v10[2];
  v11[1] = v19;
  v21 = v10[3];
  v11[2] = v20;
  v22 = v10[4];
  v11[3] = v21;
  v23 = v10[5];
  v11[4] = v22;
  v11[5] = v23;
  if ( a2 )
  {
    v24 = (struct IMPCInputTarget *)*((_QWORD *)this + 18);
    if ( v24 && a2 == v24 )
    {
      *((_BYTE *)this + 2076) = 1;
    }
    else
    {
      v25 = MPCInputInfoHelper::PopulateGenericMPCInputInfo(5LL, 0LL, HIDWORD(v35[0]), v35, 0);
      if ( v25 < 0 )
      {
        wil::details::in1diag3::_FailFast_Hr(
          retaddr,
          (void *)0xFF,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcclickerprocessor.cpp",
          (const char *)(unsigned int)v25);
        __debugbreak();
      }
      LOBYTE(v26) = v8;
      (*(void (__fastcall **)(struct IMPCInputTarget *, _QWORD *, __int64))(*(_QWORD *)a2 + 48LL))(a2, v35, v26);
      v27 = (_DWORD *)*((_QWORD *)ISMTracing::Instance() + 1);
      if ( v27 && *v27 )
      {
        ISMTracing::Instance();
        ISMTracing::MPCProcessor_FocusHandLost_(v28, a2, (struct InputInfo *)v35);
      }
    }
  }
  if ( a3 )
  {
    if ( *((_BYTE *)this + 2076) && a3 == *((struct IMPCInputTarget **)this + 18) )
      *((_BYTE *)this + 2076) = 0;
    LOBYTE(v34) = 0;
    v29 = MPCInputInfoHelper::PopulateGenericMPCInputInfo(1LL, 0LL, HIDWORD(v35[0]), v35, v34);
    if ( v29 < 0 )
    {
      wil::details::in1diag3::_FailFast_Hr(
        retaddr,
        (void *)0x10E,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcclickerprocessor.cpp",
        (const char *)(unsigned int)v29);
      __debugbreak();
    }
    LOBYTE(v30) = v8;
    (*(void (__fastcall **)(struct IMPCInputTarget *, _QWORD *, __int64))(*(_QWORD *)a3 + 48LL))(a3, v35, v30);
    v31 = (_DWORD *)*((_QWORD *)ISMTracing::Instance() + 1);
    if ( v31 && *v31 )
    {
      ISMTracing::Instance();
      ISMTracing::MPCProcessor_FocusHandDetected_(v32, a3, (struct InputInfo *)v35);
    }
  }
  return 0LL;
}

/*
 * XREFs of ?Initialize@MPCExclusiveInputTarget@@IEAAJXZ @ 0x180087198
 * Callers:
 *     ?Create@MPCExclusiveInputTarget@@SAJPEAUIInputTarget@@I_KPEAPEAUIMPCInputTarget@@@Z @ 0x180087354 (-Create@MPCExclusiveInputTarget@@SAJPEAUIInputTarget@@I_KPEAPEAUIMPCInputTarget@@@Z.c)
 * Callees:
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000742C (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z @ 0x180086E0C (-_FailFast_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z.c)
 *     __security_check_cookie @ 0x18009CCC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall MPCExclusiveInputTarget::Initialize(MPCExclusiveInputTarget *this)
{
  __int64 v2; // rcx
  int v3; // eax
  __int64 v4; // rax
  __int128 v5; // xmm2
  __int128 v6; // xmm1
  __int64 v7; // xmm4_8
  unsigned int ImplicitCompositionInputSink; // eax
  __int64 v9; // rcx
  _QWORD v11[2]; // [rsp+28h] [rbp-E0h] BYREF
  __int128 v12; // [rsp+38h] [rbp-D0h]
  _QWORD v13[3]; // [rsp+78h] [rbp-90h] BYREF
  __int128 v14; // [rsp+90h] [rbp-78h]
  __int128 v15; // [rsp+A0h] [rbp-68h]
  __int64 v16; // [rsp+B0h] [rbp-58h]
  __int128 v17; // [rsp+B8h] [rbp-50h]
  __int128 v18; // [rsp+C8h] [rbp-40h]
  __int128 v19; // [rsp+D8h] [rbp-30h]
  __int64 v20; // [rsp+E8h] [rbp-20h]
  __int128 v21; // [rsp+F0h] [rbp-18h]
  __int128 v22; // [rsp+100h] [rbp-8h]
  __int128 v23; // [rsp+110h] [rbp+8h]
  __int64 v24; // [rsp+120h] [rbp+18h]
  __int128 v25; // [rsp+128h] [rbp+20h]
  __int128 v26; // [rsp+138h] [rbp+30h]
  __int128 v27; // [rsp+148h] [rbp+40h]
  __int64 v28; // [rsp+158h] [rbp+50h]
  _BYTE v29[40]; // [rsp+168h] [rbp+60h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1A0h] [rbp+98h]

  v11[1] = -2LL;
  v11[0] = 0LL;
  if ( (***((int (__fastcall ****)(_QWORD, GUID *, _QWORD *))this + 6))(
         *((_QWORD *)this + 6),
         &GUID_05b38163_1229_4e7b_a0fc_5b47c4e7b631,
         v11) >= 0 )
  {
    v2 = *((_QWORD *)this + 5);
    if ( v2 )
    {
      *((_QWORD *)this + 5) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
    }
    v3 = CoreUICreate((char *)this + 40);
    if ( v3 < 0 )
    {
      wil::details::in1diag3::_FailFast_Hr(
        retaddr,
        (void *)0x39,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcexclusiveinputtarget.cpp",
        (const char *)(unsigned int)v3);
      __debugbreak();
    }
    LODWORD(v13[0]) = 232;
    HIDWORD(v13[0]) = *((_DWORD *)this + 14);
    *((_QWORD *)&v12 + 1) = *((_QWORD *)this + 8);
    v4 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(*(_QWORD *)v11[0] + 96LL))(v11[0], v29);
    v5 = *(_OWORD *)v4;
    v6 = *(_OWORD *)(v4 + 16);
    v7 = *(_QWORD *)(v4 + 32);
    LODWORD(v12) = 3 - (((1LL << gdwDeviceFamily) & 0x224A) != 0);
    v17 = v12;
    v18 = v5;
    v19 = v6;
    v20 = v7;
    v25 = v12;
    v26 = v5;
    v27 = v6;
    v28 = v7;
    v21 = v12;
    v22 = v5;
    v23 = v6;
    v24 = v7;
    *(_OWORD *)&v13[1] = v12;
    v14 = v5;
    v15 = v6;
    v16 = v7;
    ImplicitCompositionInputSink = NtCreateImplicitCompositionInputSink(v13, (char *)this + 72);
    if ( ImplicitCompositionInputSink )
      wil::details::in1diag3::_FailFast_Win32(
        retaddr,
        (void *)0x52,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcexclusiveinputtarget.cpp",
        (const char *)ImplicitCompositionInputSink);
  }
  v9 = v11[0];
  if ( v11[0] )
  {
    v11[0] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  return 0LL;
}

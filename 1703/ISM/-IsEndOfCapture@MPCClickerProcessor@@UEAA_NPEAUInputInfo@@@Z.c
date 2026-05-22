/*
 * XREFs of ?IsEndOfCapture@MPCClickerProcessor@@UEAA_NPEAUInputInfo@@@Z @ 0x18004A1B0
 * Callers:
 *     <none>
 * Callees:
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000742C (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180043938 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Instance@ISMTracing@@KAPEAV1@XZ @ 0x180043FD0 (-Instance@ISMTracing@@KAPEAV1@XZ.c)
 *     ?MPCProcessor_FocusHandLost_@ISMTracing@@QEAAXPEAUIInputTarget@@PEAUInputInfo@@@Z @ 0x180044AF0 (-MPCProcessor_FocusHandLost_@ISMTracing@@QEAAXPEAUIInputTarget@@PEAUInputInfo@@@Z.c)
 *     ?PopulateGenericMPCInputInfo@MPCInputInfoHelper@@SAJW4MPCAugmentedInputGestureType@@W4MPCGestureType@@KAEAUInputInfo@@_N@Z @ 0x180054E7C (-PopulateGenericMPCInputInfo@MPCInputInfoHelper@@SAJW4MPCAugmentedInputGestureType@@W4MPCGesture.c)
 *     __security_check_cookie @ 0x18009CCC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall MPCClickerProcessor::IsEndOfCapture(MPCClickerProcessor *this, struct InputInfo *a2)
{
  char v3; // si
  struct IInputTarget *v4; // rbx
  _OWORD *v5; // rax
  _OWORD *v6; // rcx
  __int64 v7; // rdx
  int v8; // eax
  __int64 v9; // r8
  int v10; // eax
  _DWORD *v11; // rcx
  ISMTracing *v12; // rcx
  char v14; // [rsp+20h] [rbp-798h]
  _QWORD v15[236]; // [rsp+40h] [rbp-778h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+7B8h] [rbp+0h]

  v3 = 0;
  if ( (unsigned int)(*((_DWORD *)a2 + 177) - 4) <= 1 )
  {
    v3 = 1;
    if ( *((_BYTE *)this + 2060) )
    {
      v4 = (struct IInputTarget *)*((_QWORD *)this + 16);
      if ( v4 )
      {
        (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)v4 + 8LL))(v4);
        v5 = (_OWORD *)((char *)this + 152);
        v6 = v15;
        v7 = 14LL;
        do
        {
          *v6 = *v5;
          v6[1] = v5[1];
          v6[2] = v5[2];
          v6[3] = v5[3];
          v6[4] = v5[4];
          v6[5] = v5[5];
          v6[6] = v5[6];
          v6 += 8;
          *(v6 - 1) = v5[7];
          v5 += 8;
          --v7;
        }
        while ( v7 );
        *v6 = *v5;
        v6[1] = v5[1];
        v6[2] = v5[2];
        v6[3] = v5[3];
        v6[4] = v5[4];
        v6[5] = v5[5];
        v14 = 0;
        v8 = MPCInputInfoHelper::PopulateGenericMPCInputInfo(5LL, 0LL, HIDWORD(v15[0]), v15, v14);
        if ( v8 < 0 )
        {
          wil::details::in1diag3::_FailFast_Hr(
            retaddr,
            (void *)0x17A,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcclickerprocessor.cpp",
            (const char *)(unsigned int)v8);
          __debugbreak();
        }
        LOBYTE(v9) = 1;
        v10 = (*(__int64 (__fastcall **)(struct IInputTarget *, _QWORD *, __int64))(*(_QWORD *)v4 + 48LL))(v4, v15, v9);
        if ( v10 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x17B,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcclickerprocessor.cpp",
            (const char *)(unsigned int)v10);
        v11 = (_DWORD *)*((_QWORD *)ISMTracing::Instance() + 1);
        if ( v11 && *v11 )
        {
          ISMTracing::Instance();
          ISMTracing::MPCProcessor_FocusHandLost_(v12, v4, (struct InputInfo *)v15);
        }
      }
      if ( v4 )
        (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)v4 + 16LL))(v4);
    }
    *((_BYTE *)this + 2060) = 0;
  }
  return v3;
}

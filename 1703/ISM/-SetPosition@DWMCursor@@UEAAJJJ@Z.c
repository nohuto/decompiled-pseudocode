/*
 * XREFs of ?SetPosition@DWMCursor@@UEAAJJJ@Z @ 0x18001F860
 * Callers:
 *     <none>
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000742C (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetInstance@MPC3DStateHelper@@SAPEAV1@XZ @ 0x1800075AC (-GetInstance@MPC3DStateHelper@@SAPEAV1@XZ.c)
 *     ?GetPostProcessor@MPC3DStateHelper@@QEAAPEAUIMPCInputPostProcessor@@XZ @ 0x180007B34 (-GetPostProcessor@MPC3DStateHelper@@QEAAPEAUIMPCInputPostProcessor@@XZ.c)
 *     __security_check_cookie @ 0x18009CCC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall DWMCursor::SetPosition(DWMCursor *this, unsigned int a2, unsigned int a3)
{
  int v6; // eax
  __int64 v7; // rcx
  unsigned int v8; // ebx
  int v9; // r9d
  __int64 v10; // rcx
  RTL_SRWLOCK *v11; // rax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  RTL_SRWLOCK *v16; // rax
  struct IMPCInputPostProcessor *PostProcessor; // rax
  int v18; // eax
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v23; // [rsp+30h] [rbp-50h] BYREF
  int v24[2]; // [rsp+38h] [rbp-48h] BYREF
  int v25; // [rsp+40h] [rbp-40h] BYREF
  int v26; // [rsp+44h] [rbp-3Ch] BYREF
  int v27; // [rsp+48h] [rbp-38h] BYREF
  __int64 v28; // [rsp+50h] [rbp-30h]
  _DWORD v29[6]; // [rsp+58h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+28h]

  v28 = -2LL;
  *((_DWORD *)this + 26) = a2;
  *((_DWORD *)this + 27) = a3;
  v6 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 11) + 40LL))(*((_QWORD *)this + 11), 2LL);
  v8 = v6;
  if ( v6 >= 0 )
  {
    v6 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(**((_QWORD **)this + 11) + 40LL))(
           *((_QWORD *)this + 11),
           2LL,
           1LL);
    v8 = v6;
    if ( v6 < 0 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
        return v8;
      v9 = 189;
      goto LABEL_4;
    }
    v6 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 10) + 24LL))(*((_QWORD *)this + 10));
    v8 = v6;
    if ( v6 < 0 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
        return v8;
      v9 = 190;
      goto LABEL_4;
    }
    v10 = *((_QWORD *)this + 6);
    if ( v10 )
      (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v10 + 24LL))(v10, a2, a3);
    MPC3DStateHelper::GetInstance();
    if ( MPC3DStateHelper::GetPostProcessor(v11) )
    {
      v25 = 0;
      v26 = 0;
      v27 = 0;
      *(_QWORD *)v24 = 0LL;
      v12 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, int *))(**(_QWORD **)(*((_QWORD *)this + 4)
                                                                                           + 1392LL)
                                                                             + 56LL))(
              *(_QWORD *)(*((_QWORD *)this + 4) + 1392LL),
              0LL,
              0LL,
              0LL,
              v24);
      if ( v12 < 0 )
      {
        wil::details::in1diag3::_FailFast_Hr(
          retaddr,
          (void *)0xD3,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\lib\\dwmcursor.cpp",
          (const char *)(unsigned int)v12);
        __debugbreak();
      }
      v23 = 0LL;
      if ( *(_QWORD *)v24
        && (***(int (__fastcall ****)(_QWORD, GUID *, __int64 *))v24)(
             *(_QWORD *)v24,
             &GUID_a4e70d2d_6b93_4143_b95b_67efd0ccda59,
             &v23) >= 0 )
      {
        v13 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v23 + 32LL))(v23, &v25);
        if ( v13 < 0 )
        {
          wil::details::in1diag3::_FailFast_Hr(
            retaddr,
            (void *)0xD8,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\lib\\dwmcursor.cpp",
            (const char *)(unsigned int)v13);
          __debugbreak();
        }
        v14 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v23 + 40LL))(v23, &v26);
        if ( v14 < 0 )
        {
          wil::details::in1diag3::_FailFast_Hr(
            retaddr,
            (void *)0xD9,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\lib\\dwmcursor.cpp",
            (const char *)(unsigned int)v14);
          __debugbreak();
        }
        v15 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v23 + 48LL))(v23, &v27);
        if ( v15 < 0 )
        {
          wil::details::in1diag3::_FailFast_Hr(
            retaddr,
            (void *)0xDA,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\lib\\dwmcursor.cpp",
            (const char *)(unsigned int)v15);
          __debugbreak();
        }
      }
      v29[0] = v25;
      v29[1] = v26;
      v29[2] = v27;
      v29[3] = a2;
      v29[4] = a3;
      MPC3DStateHelper::GetInstance();
      PostProcessor = MPC3DStateHelper::GetPostProcessor(v16);
      v18 = (*(__int64 (__fastcall **)(struct IMPCInputPostProcessor *, _DWORD *))(*(_QWORD *)PostProcessor + 56LL))(
              PostProcessor,
              v29);
      v8 = v18;
      if ( v18 < 0 && (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
        Template_qqq(v19, &MinInput_Warning_CheckResult, 0, 229, v18);
      v20 = v23;
      if ( v23 )
      {
        v23 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
      }
      v21 = *(_QWORD *)v24;
      if ( *(_QWORD *)v24 )
      {
        *(_QWORD *)v24 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
      }
    }
  }
  else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
  {
    v9 = 188;
LABEL_4:
    Template_qqq(v7, &MinInput_Warning_CheckResult, 0, v9, v6);
  }
  return v8;
}

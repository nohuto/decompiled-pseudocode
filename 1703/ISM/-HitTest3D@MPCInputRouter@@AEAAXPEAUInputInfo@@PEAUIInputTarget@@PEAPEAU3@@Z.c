/*
 * XREFs of ?HitTest3D@MPCInputRouter@@AEAAXPEAUInputInfo@@PEAUIInputTarget@@PEAPEAU3@@Z @ 0x1800847A8
 * Callers:
 *     ?HitTestInternal@MPCInputRouter@@AEAAJPEAUIInputDisplay@@PEAUInputInfo@@KPEAUIInputTarget@@PEAPEAU4@@Z @ 0x18008444C (-HitTestInternal@MPCInputRouter@@AEAAJPEAUIInputDisplay@@PEAUInputInfo@@KPEAUIInputTarget@@PEAPE.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18000326C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000742C (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateAndRegisterTarget@DWMInputRouter@@IEAAJKKKK_KPEAPEAUIInputTarget@@@Z @ 0x180013E50 (-CreateAndRegisterTarget@DWMInputRouter@@IEAAJKKKK_KPEAPEAUIInputTarget@@@Z.c)
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x18004AC9C (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     ?RequestForegroundChange@MPCHolographicInputManager@@QEAAX_KIKW4InputType@@PEAUHMONITOR__@@UtagPOINT@@_N@Z @ 0x18004D648 (-RequestForegroundChange@MPCHolographicInputManager@@QEAAX_KIKW4InputType@@PEAUHMONITOR__@@UtagP.c)
 *     _lambda_2c65abb260ef27506ee9df12d142cee7_::operator() @ 0x180084B30 (_lambda_2c65abb260ef27506ee9df12d142cee7_--operator().c)
 *     ?CreateMPCTarget@MPCInputRouter@@AEAAXPEAUIInputTarget@@PEAPEAUIMPCInputTarget@@@Z @ 0x1800851E0 (-CreateMPCTarget@MPCInputRouter@@AEAAXPEAUIInputTarget@@PEAPEAUIMPCInputTarget@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall MPCInputRouter::HitTest3D(
        MPCInputRouter *this,
        struct InputInfo *a2,
        struct IInputTarget *a3,
        struct IInputTarget **a4)
{
  int v7; // eax
  struct InputInfo *v8; // rdi
  char v9; // r14
  char v10; // al
  int v11; // eax
  char v12; // al
  int v13; // eax
  struct IMPCInputTarget *v14; // rdi
  int v15; // eax
  int v16; // eax
  __int64 v17; // rax
  unsigned __int64 v18; // [rsp+28h] [rbp-38h]
  struct IInputTarget *v19; // [rsp+40h] [rbp-20h] BYREF
  struct IMPCInputTarget *v20[3]; // [rsp+48h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+28h]
  struct InputInfo *v22; // [rsp+98h] [rbp+38h] BYREF
  struct InputInfo **v23; // [rsp+A8h] [rbp+48h] BYREF

  v22 = a2;
  v20[1] = (struct IMPCInputTarget *)-2LL;
  if ( !a4 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x172,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
      0LL);
    __debugbreak();
  }
  if ( !*((_BYTE *)this + 1044) )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x175,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
      (const char *)a4);
    __debugbreak();
  }
  if ( *((_BYTE *)this + 1032) )
  {
    v8 = v22;
  }
  else
  {
    v7 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(**((_QWORD **)this + 123) + 40LL))(
           *((_QWORD *)this + 123),
           (__int64)v22 + 720,
           (__int64)v22 + 784);
    if ( v7 < 0 )
    {
      wil::details::in1diag3::_FailFast_Hr(
        retaddr,
        (void *)0x17D,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
        (const char *)(unsigned int)v7);
      __debugbreak();
    }
    v8 = v22;
    *((_DWORD *)this + 259) = *((_DWORD *)v22 + 204);
  }
  v9 = 1;
  if ( *((_BYTE *)this + 1032) || *((_BYTE *)v8 + 784) || !*((_BYTE *)v8 + 848) )
  {
    if ( !*((_QWORD *)this + 121) )
      goto LABEL_37;
    v16 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, struct IInputTarget **))this + 121))(
            *((_QWORD *)this + 121),
            &GUID_9586ac30_9ca0_43dc_8c1c_f977b92a1fd3,
            a4);
    if ( v16 < 0 )
    {
      wil::details::in1diag3::_FailFast_Hr(
        retaddr,
        (void *)0x18A,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
        (const char *)(unsigned int)v16);
      __debugbreak();
    }
  }
  else
  {
    *((_QWORD *)v8 + 69) = *((_QWORD *)v8 + 103);
    *((_DWORD *)v22 + 156) = 1;
    v23 = &v22;
    if ( *((_QWORD *)this + 121) )
      v10 = lambda_2c65abb260ef27506ee9df12d142cee7_::operator()(&v23);
    else
      v10 = 0;
    if ( v10 )
    {
      v11 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, struct IInputTarget **))this + 121))(
              *((_QWORD *)this + 121),
              &GUID_9586ac30_9ca0_43dc_8c1c_f977b92a1fd3,
              a4);
      if ( v11 < 0 )
      {
        wil::details::in1diag3::_FailFast_Hr(
          retaddr,
          (void *)0x1AD,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
          (const char *)(unsigned int)v11);
        __debugbreak();
      }
    }
    else
    {
      if ( a3 )
        v12 = lambda_2c65abb260ef27506ee9df12d142cee7_::operator()(&v23);
      else
        v12 = 0;
      if ( v12 )
      {
        if ( a3 )
        {
          (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)a3 + 8LL))(a3);
          (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)a3 + 8LL))(a3);
        }
        *a4 = a3;
      }
      else
      {
        v19 = 0LL;
        v13 = DWMInputRouter::CreateAndRegisterTarget(
                this,
                *((_DWORD *)v22 + 208),
                0,
                *((_DWORD *)v22 + 263),
                0,
                *((_QWORD *)v22 + 103),
                &v19);
        if ( v13 < 0 )
        {
          wil::details::in1diag3::_FailFast_Hr(
            retaddr,
            (void *)0x1BF,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
            (const char *)(unsigned int)v13);
          __debugbreak();
        }
        v20[0] = 0LL;
        a3 = v19;
        MPCInputRouter::CreateMPCTarget(this, v19, v20);
        v14 = v20[0];
        v15 = (**(__int64 (__fastcall ***)(struct IMPCInputTarget *, GUID *, struct IInputTarget **))v20[0])(
                v20[0],
                &GUID_9586ac30_9ca0_43dc_8c1c_f977b92a1fd3,
                a4);
        if ( v15 < 0 )
          wil::details::in1diag3::_FailFast_Hr(
            retaddr,
            (void *)0x1C6,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
            (const char *)(unsigned int)v15);
        (*(void (__fastcall **)(struct IMPCInputTarget *))(*(_QWORD *)v14 + 16LL))(v14);
      }
      if ( a3 )
        (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)a3 + 16LL))(a3);
    }
  }
  v8 = v22;
LABEL_37:
  if ( *((_BYTE *)v8 + 848)
    && !*((_BYTE *)v8 + 786)
    && ((unsigned int)(*((_DWORD *)v8 + 176) - 1) <= 1 || *((_DWORD *)v8 + 177) == 2)
    && *((_DWORD *)this + 260) != *((_QWORD *)v8 + 103) )
  {
    *((_DWORD *)this + 260) = *((_DWORD *)v8 + 263);
    if ( !*((_BYTE *)v8 + 785) || *((_DWORD *)v8 + 204) )
      v9 = 0;
    MPCHolographicInputManager::GetInstance();
    MPCHolographicInputManager::RequestForegroundChange(
      v17,
      *((HWND *)v8 + 103),
      *((_DWORD *)v8 + 263),
      (const char *)*((unsigned int *)v22 + 1),
      *(_DWORD *)v22,
      v18,
      0LL,
      v9);
  }
}

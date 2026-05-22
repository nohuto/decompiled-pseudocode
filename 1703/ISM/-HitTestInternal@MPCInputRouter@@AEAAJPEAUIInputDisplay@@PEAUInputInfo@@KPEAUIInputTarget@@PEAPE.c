/*
 * XREFs of ?HitTestInternal@MPCInputRouter@@AEAAJPEAUIInputDisplay@@PEAUInputInfo@@KPEAUIInputTarget@@PEAPEAU4@@Z @ 0x18008444C
 * Callers:
 *     ?HitTest@MPCInputRouter@@UEAAJPEAUIInputDisplay@@PEAUInputInfo@@KPEAUIInputTarget@@PEAPEAU4@@Z @ 0x1800843C0 (-HitTest@MPCInputRouter@@UEAAJPEAUIInputDisplay@@PEAUInputInfo@@KPEAUIInputTarget@@PEAPEAU4@@Z.c)
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18000326C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000742C (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?HitTest@DWMInputRouter@@UEAAJPEAUIInputDisplay@@PEAUInputInfo@@KPEAUIInputTarget@@PEAPEAU4@@Z @ 0x1800148E0 (-HitTest@DWMInputRouter@@UEAAJPEAUIInputDisplay@@PEAUInputInfo@@KPEAUIInputTarget@@PEAPEAU4@@Z.c)
 *     ?HitTest3D@MPCInputRouter@@AEAAXPEAUInputInfo@@PEAUIInputTarget@@PEAPEAU3@@Z @ 0x1800847A8 (-HitTest3D@MPCInputRouter@@AEAAXPEAUInputInfo@@PEAUIInputTarget@@PEAPEAU3@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall MPCInputRouter::HitTestInternal(
        MPCInputRouter *this,
        struct IInputDisplay *a2,
        struct InputInfo *a3,
        const char *a4,
        struct IInputTarget *a5,
        struct IInputTarget **a6)
{
  unsigned int v6; // ebx
  int v8; // eax
  __int64 v9; // rcx
  int v10; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v6 = 0;
  if ( !a6 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0xF1,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
      a4);
    __debugbreak();
  }
  if ( *((_BYTE *)a3 + 684) )
  {
    MPCInputRouter::HitTest3D(this, a3, a5, a6);
  }
  else
  {
    *((_DWORD *)a3 + 170) = *((_DWORD *)this + 259);
    v8 = DWMInputRouter::HitTest(this, a2, a3, (unsigned int)a4, a5, a6);
    v6 = v8;
    if ( *((_BYTE *)this + 1032) )
    {
      if ( !*a6 || v8 < 0 )
      {
        v10 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, struct IInputTarget **))this + 121))(
                *((_QWORD *)this + 121),
                &GUID_9586ac30_9ca0_43dc_8c1c_f977b92a1fd3,
                a6);
        if ( v10 < 0 )
        {
          wil::details::in1diag3::_FailFast_Hr(
            retaddr,
            (void *)0x10A,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
            (const char *)(unsigned int)v10);
          JUMPOUT(0x18008454DLL);
        }
      }
    }
    else if ( v8 < 0 && (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      Template_qqq(v9, &MinInput_Warning_CheckResult, 0, 270, v8);
    }
  }
  return v6;
}

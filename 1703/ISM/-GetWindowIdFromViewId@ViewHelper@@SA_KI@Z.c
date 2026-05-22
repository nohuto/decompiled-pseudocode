/*
 * XREFs of ?GetWindowIdFromViewId@ViewHelper@@SA_KI@Z @ 0x18002B84C
 * Callers:
 *     ?CreateMPCTarget@MPCInputRouter@@AEAAXPEAUIInputTarget@@PEAPEAUIMPCInputTarget@@@Z @ 0x1800851E0 (-CreateMPCTarget@MPCInputRouter@@AEAAXPEAUIInputTarget@@PEAPEAUIMPCInputTarget@@@Z.c)
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000742C (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FindWindowA@ViewHelper@@SAJPEAUIMonitorView@Server@Navigation@@V?$function@$$A6A_NPEAUIServerWindow@Server@Navigation@@@Z@std@@PEAPEAUIServerWindow@34@@Z @ 0x18002BEE8 (-FindWindowA@ViewHelper@@SAJPEAUIMonitorView@Server@Navigation@@V-$function@$$A6A_NPEAUIServerWi.c)
 *     ?Create@ViewHeirarchy@@SA?AV?$ComPtr@UIViewHeirarchy@@@WRL@Microsoft@@XZ @ 0x18006D108 (-Create@ViewHeirarchy@@SA-AV-$ComPtr@UIViewHeirarchy@@@WRL@Microsoft@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall ViewHelper::GetWindowIdFromViewId(unsigned int a1)
{
  __int64 v2; // rdi
  _QWORD *v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rcx
  int WindowA; // eax
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 *v9; // rbx
  int v10; // eax
  _QWORD v12[2]; // [rsp+30h] [rbp-50h] BYREF
  _QWORD v13[8]; // [rsp+40h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]
  unsigned int v15; // [rsp+A8h] [rbp+28h] BYREF
  __int64 v16; // [rsp+B0h] [rbp+30h] BYREF
  __int64 *v17; // [rsp+B8h] [rbp+38h] BYREF

  v12[1] = -2LL;
  v2 = 0LL;
  v3 = (_QWORD *)ViewHeirarchy::Create(v12);
  (*(void (__fastcall **)(_QWORD, __int64 *, _QWORD))(*(_QWORD *)*v3 + 32LL))(*v3, &v16, a1);
  v4 = v12[0];
  if ( v12[0] )
  {
    v12[0] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  v5 = v16;
  if ( v16 )
  {
    v17 = 0LL;
    v13[0] = off_1800A5728;
    v13[7] = v13;
    WindowA = ViewHelper::FindWindowA(v16, v13, &v17);
    if ( WindowA >= 0 )
    {
      v9 = v17;
      if ( v17 )
      {
        v10 = (*(__int64 (__fastcall **)(__int64 *, unsigned int *))(*v17 + 24))(v17, &v15);
        if ( v10 < 0 )
        {
          wil::details::in1diag3::_FailFast_Hr(
            retaddr,
            (void *)0x71,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\viewhelper\\lib\\viewhelper.cpp",
            (const char *)(unsigned int)v10);
          __debugbreak();
        }
        v2 = v15;
      }
      if ( !v9 )
        goto LABEL_16;
      v8 = *v9;
    }
    else
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
        Template_qqq(v7, &MinInput_Warning_CheckResult, 0, 108, WindowA);
      if ( !v17 )
        goto LABEL_16;
      v8 = *v17;
    }
    (*(void (**)(void))(v8 + 16))();
LABEL_16:
    v5 = v16;
  }
  if ( v5 )
  {
    v16 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  return v2;
}

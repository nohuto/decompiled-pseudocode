/*
 * XREFs of ?OnTargetWithFocus3dChanged@MPCSixDofProcessor@@UEAAJPEAUIMPCInputTarget@@0@Z @ 0x180045B90
 * Callers:
 *     <none>
 * Callees:
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000742C (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Instance@ISMTracing@@KAPEAV1@XZ @ 0x180043FD0 (-Instance@ISMTracing@@KAPEAV1@XZ.c)
 *     ?MPCProcessor_FocusHandLost_@ISMTracing@@QEAAXPEAUIInputTarget@@PEAUInputInfo@@@Z @ 0x180044AF0 (-MPCProcessor_FocusHandLost_@ISMTracing@@QEAAXPEAUIInputTarget@@PEAUInputInfo@@@Z.c)
 *     ?MPCProcessor_FocusHandDetected_@ISMTracing@@QEAAXPEAUIInputTarget@@PEAUInputInfo@@@Z @ 0x180044C8C (-MPCProcessor_FocusHandDetected_@ISMTracing@@QEAAXPEAUIInputTarget@@PEAUInputInfo@@@Z.c)
 *     ?PopulateGenericMPCInputInfo@MPCInputInfoHelper@@SAJW4MPCAugmentedInputGestureType@@W4MPCGestureType@@KAEAUInputInfo@@_N@Z @ 0x180054E7C (-PopulateGenericMPCInputInfo@MPCInputInfoHelper@@SAJW4MPCAugmentedInputGestureType@@W4MPCGesture.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall MPCSixDofProcessor::OnTargetWithFocus3dChanged(
        MPCSixDofProcessor *this,
        struct IMPCInputTarget *a2,
        struct IMPCInputTarget *a3)
{
  struct InputInfo *v6; // rbp
  int v7; // eax
  _DWORD *v8; // rcx
  ISMTracing *v9; // rcx
  int v10; // eax
  _DWORD *v11; // rcx
  ISMTracing *v12; // rcx
  int v14; // [rsp+20h] [rbp-18h]
  char v15; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( a2 )
  {
    v6 = (MPCSixDofProcessor *)((char *)this + 296);
    v15 = 0;
    v7 = MPCInputInfoHelper::PopulateGenericMPCInputInfo(
           5LL,
           0LL,
           *((unsigned int *)this + 75),
           (char *)this + 296,
           v15);
    if ( v7 < 0 )
    {
      wil::details::in1diag3::_FailFast_Hr(
        retaddr,
        (void *)0x178,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcsixdofprocessor.cpp",
        (const char *)(unsigned int)v7);
      __debugbreak();
    }
    (*(void (__fastcall **)(struct IMPCInputTarget *, struct InputInfo *, _QWORD))(*(_QWORD *)a2 + 48LL))(a2, v6, 0LL);
    v8 = (_DWORD *)*((_QWORD *)ISMTracing::Instance() + 1);
    if ( v8 && *v8 )
    {
      ISMTracing::Instance();
      ISMTracing::MPCProcessor_FocusHandLost_(v9, a2, v6);
    }
  }
  *((_WORD *)this + 138) = 257;
  if ( a3 )
  {
    LOBYTE(v14) = 0;
    v10 = MPCInputInfoHelper::PopulateGenericMPCInputInfo(
            1LL,
            0LL,
            *((unsigned int *)this + 75),
            (char *)this + 296,
            v14);
    if ( v10 < 0 )
    {
      wil::details::in1diag3::_FailFast_Hr(
        retaddr,
        (void *)0x184,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcsixdofprocessor.cpp",
        (const char *)(unsigned int)v10);
      JUMPOUT(0x180045CC7LL);
    }
    (*(void (__fastcall **)(struct IMPCInputTarget *, char *, _QWORD))(*(_QWORD *)a3 + 48LL))(
      a3,
      (char *)this + 296,
      0LL);
    v11 = (_DWORD *)*((_QWORD *)ISMTracing::Instance() + 1);
    if ( v11 && *v11 )
    {
      ISMTracing::Instance();
      ISMTracing::MPCProcessor_FocusHandDetected_(v12, a3, (MPCSixDofProcessor *)((char *)this + 296));
    }
  }
  return 0LL;
}

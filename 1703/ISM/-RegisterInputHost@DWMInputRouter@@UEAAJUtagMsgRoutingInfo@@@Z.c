/*
 * XREFs of ?RegisterInputHost@DWMInputRouter@@UEAAJUtagMsgRoutingInfo@@@Z @ 0x180013940
 * Callers:
 *     <none>
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003204 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000742C (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateAndRegisterTarget@DWMInputRouter@@IEAAJKKKK_KPEAPEAUIInputTarget@@@Z @ 0x180013E50 (-CreateAndRegisterTarget@DWMInputRouter@@IEAAJKKKK_KPEAPEAUIInputTarget@@@Z.c)
 *     ?InformTargetOfAttachedDevices@DWMInputRouter@@IEAAJPEAUIInputTarget@@@Z @ 0x1800143C0 (-InformTargetOfAttachedDevices@DWMInputRouter@@IEAAJPEAUIInputTarget@@@Z.c)
 *     ?ExistsValueForKey@?$DynamicSizeMap@UtagMsgRoutingInfo@@PEAUIInputTarget@@$00@@QEAA_NAEBUtagMsgRoutingInfo@@@Z @ 0x1800188A0 (-ExistsValueForKey@-$DynamicSizeMap@UtagMsgRoutingInfo@@PEAUIInputTarget@@$00@@QEAA_NAEBUtagMsgR.c)
 *     ?SetValueForKey@?$DynamicSizeMap@UtagMsgRoutingInfo@@PEAUIInputTarget@@$00@@QEAAJAEBUtagMsgRoutingInfo@@AEBQEAUIInputTarget@@@Z @ 0x1800189CC (-SetValueForKey@-$DynamicSizeMap@UtagMsgRoutingInfo@@PEAUIInputTarget@@$00@@QEAAJAEBUtagMsgRouti.c)
 *     ?Create@DWMInputTarget@@SAJAEBUtagMsgRoutingInfo@@PEAXPEAPEAUIInputTarget@@@Z @ 0x180019FE4 (-Create@DWMInputTarget@@SAJAEBUtagMsgRoutingInfo@@PEAXPEAPEAUIInputTarget@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DWMInputRouter::RegisterInputHost(__int64 a1, __int64 a2)
{
  unsigned int v4; // esi
  int v5; // eax
  __int64 v6; // rcx
  __int64 v7; // rax
  struct IInputTarget *v8; // rbx
  DWMInputRouter *v9; // r15
  int v10; // eax
  __int64 v11; // rcx
  int v12; // eax
  __int64 v13; // rcx
  __int64 (__fastcall ***v14)(_QWORD, GUID *, struct IInputTarget **); // rcx
  unsigned int v15; // r14d
  unsigned int v16; // edi
  int v17; // eax
  int v18; // eax
  __int64 v19; // rax
  int v20; // eax
  int v21; // eax
  int v22; // eax
  int v23; // eax
  unsigned int v24; // edi
  struct IInputTarget *v25; // rcx
  struct IInputTarget *v27; // rdi
  int v28; // eax
  struct IInputTarget *v29; // rcx
  struct IInputTarget *v30; // [rsp+40h] [rbp-30h] BYREF
  int v31; // [rsp+48h] [rbp-28h] BYREF
  unsigned int v32; // [rsp+4Ch] [rbp-24h] BYREF
  unsigned int v33; // [rsp+50h] [rbp-20h] BYREF
  unsigned __int64 v34; // [rsp+58h] [rbp-18h] BYREF
  struct IInputTarget *v35; // [rsp+60h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]

  v4 = 0;
  if ( (unsigned __int8)DynamicSizeMap<tagMsgRoutingInfo,IInputTarget *,1>::ExistsValueForKey(a1 + 24) )
    return v4;
  v30 = 0LL;
  v5 = DWMInputTarget::Create((const struct tagMsgRoutingInfo *)a2, 0LL, &v30);
  v4 = v5;
  if ( v5 < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      Template_qqq(v6, &MinInput_Warning_CheckResult, 0, 666, v5);
    if ( !v30 )
      return v4;
    v7 = *(_QWORD *)v30;
    goto LABEL_37;
  }
  v8 = v30;
  v9 = (DWMInputRouter *)(a1 - 56);
  v10 = DWMInputRouter::InformTargetOfAttachedDevices((DWMInputRouter *)(a1 - 56), v30);
  v4 = v10;
  if ( v10 < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      Template_qqq(v11, &MinInput_Warning_CheckResult, 0, 675, v10);
    if ( !v8 )
      return v4;
    goto LABEL_36;
  }
  (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)v8 + 8LL))(v8);
  v34 = (unsigned __int64)v8;
  v12 = DynamicSizeMap<tagMsgRoutingInfo,IInputTarget *,1>::SetValueForKey(a1 + 24, a2, &v34);
  v4 = v12;
  if ( v12 < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      Template_qqq(v13, &MinInput_Warning_CheckResult, 0, 681, v12);
    if ( IsDebuggerPresent() )
      __debugbreak();
    __fastfail(7u);
  }
  v14 = *(__int64 (__fastcall ****)(_QWORD, GUID *, struct IInputTarget **))(a1 + 176);
  if ( !v14 )
  {
LABEL_36:
    v7 = *(_QWORD *)v8;
LABEL_37:
    (*(void (**)(void))(v7 + 16))();
    return v4;
  }
  v31 = 0;
  v30 = 0LL;
  v15 = *(_DWORD *)a2;
  v16 = *(_DWORD *)(a2 + 4);
  v17 = (**v14)(v14, &GUID_a4e70d2d_6b93_4143_b95b_67efd0ccda59, &v30);
  if ( v17 < 0 )
  {
    wil::details::in1diag3::_FailFast_Hr(
      retaddr,
      (void *)0x2BD,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
      (const char *)(unsigned int)v17);
    __debugbreak();
  }
  v18 = (*(__int64 (__fastcall **)(struct IInputTarget *, int *))(*(_QWORD *)v30 + 32LL))(v30, &v31);
  if ( v18 < 0 )
  {
    wil::details::in1diag3::_FailFast_Hr(
      retaddr,
      (void *)0x2BF,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
      (const char *)(unsigned int)v18);
    __debugbreak();
  }
  if ( v15 != v31 )
  {
LABEL_34:
    v29 = v30;
    v30 = 0LL;
    if ( v29 )
      (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)v29 + 16LL))(v29);
    goto LABEL_36;
  }
  v33 = 0;
  v32 = 0;
  v34 = 0LL;
  v19 = *(_QWORD *)v30;
  v35 = 0LL;
  v20 = (*(__int64 (__fastcall **)(struct IInputTarget *, unsigned int *))(v19 + 48))(v30, &v33);
  if ( v20 < 0 )
  {
    wil::details::in1diag3::_FailFast_Hr(
      retaddr,
      (void *)0x2CC,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
      (const char *)(unsigned int)v20);
    __debugbreak();
  }
  v21 = (*(__int64 (__fastcall **)(struct IInputTarget *, unsigned int *))(*(_QWORD *)v30 + 56LL))(v30, &v32);
  if ( v21 < 0 )
  {
    wil::details::in1diag3::_FailFast_Hr(
      retaddr,
      (void *)0x2CE,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
      (const char *)(unsigned int)v21);
    __debugbreak();
  }
  v22 = (*(__int64 (__fastcall **)(struct IInputTarget *, unsigned __int64 *))(*(_QWORD *)v30 + 64LL))(v30, &v34);
  if ( v22 < 0 )
  {
    wil::details::in1diag3::_FailFast_Hr(
      retaddr,
      (void *)0x2D0,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
      (const char *)(unsigned int)v22);
    __debugbreak();
  }
  v23 = DWMInputRouter::CreateAndRegisterTarget(v9, v15, v16, v33, v32, v34, &v35);
  v24 = v23;
  if ( v23 >= 0 )
  {
    v27 = v35;
    v28 = (*(__int64 (__fastcall **)(DWMInputRouter *, struct IInputTarget *))(*(_QWORD *)v9 + 120LL))(v9, v35);
    if ( v28 < 0 )
    {
      wil::details::in1diag3::_FailFast_Hr(
        retaddr,
        (void *)0x2DB,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
        (const char *)(unsigned int)v28);
      JUMPOUT(0x180013CD5LL);
    }
    if ( v27 )
      (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)v27 + 16LL))(v27);
    goto LABEL_34;
  }
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)0x2D8,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
    (const char *)(unsigned int)v23);
  if ( v35 )
    (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)v35 + 16LL))(v35);
  v25 = v30;
  v30 = 0LL;
  if ( v25 )
    (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)v25 + 16LL))(v25);
  (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)v8 + 16LL))(v8);
  return v24;
}

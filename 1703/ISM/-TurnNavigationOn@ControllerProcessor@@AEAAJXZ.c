/*
 * XREFs of ?TurnNavigationOn@ControllerProcessor@@AEAAJXZ @ 0x180033154
 * Callers:
 *     ?UpdateNavigationState@ControllerProcessor@@AEAAJW4ControllerNavigationTrigger@@PEAUtagRECT@@PEAUtagPOINT@@@Z @ 0x180032A9C (-UpdateNavigationState@ControllerProcessor@@AEAAJW4ControllerNavigationTrigger@@PEAUtagRECT@@PEA.c)
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     ?CreateChildInputProcessor@@YAJW4InputType@@PEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z @ 0x18002C8B0 (-CreateChildInputProcessor@@YAJW4InputType@@PEAUInputProcessorCreateParams@@PEAPEAUIInputProcess.c)
 *     ?SetPointerPosition@ControllerProcessor@@AEAAJUtagPOINT@@_N@Z @ 0x18003425C (-SetPointerPosition@ControllerProcessor@@AEAAJUtagPOINT@@_N@Z.c)
 *     ?LiftPressedVirtualKeys@ControllerProcessor@@AEAAJ_N@Z @ 0x180034670 (-LiftPressedVirtualKeys@ControllerProcessor@@AEAAJ_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ControllerProcessor::TurnNavigationOn(ControllerProcessor *this)
{
  _QWORD *v2; // rsi
  __int64 v3; // rax
  int ChildInputProcessor; // eax
  __int64 v5; // rcx
  int v6; // ebx
  int v7; // r9d
  int v8; // eax
  __int64 v9; // rcx
  unsigned int v10; // ebx
  int v11; // r9d
  _QWORD v13[4]; // [rsp+30h] [rbp-48h] BYREF
  int v14; // [rsp+50h] [rbp-28h]
  char v15; // [rsp+54h] [rbp-24h]

  ControllerProcessor::LiftPressedVirtualKeys(this, 1);
  v2 = (_QWORD *)((char *)this + 256);
  if ( *((_QWORD *)this + 32) )
    goto LABEL_15;
  v3 = *((_QWORD *)this + 4);
  v13[3] = 0LL;
  v14 = -1;
  v13[0] = v3;
  v13[1] = *((_QWORD *)this + 3);
  v13[2] = this;
  v15 = 0;
  ChildInputProcessor = CreateChildInputProcessor(2, (__int64)v13, (__int64)this + 256);
  v6 = ChildInputProcessor;
  if ( ChildInputProcessor < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      goto LABEL_12;
    v7 = 368;
    goto LABEL_11;
  }
  ChildInputProcessor = (**(__int64 (__fastcall ***)(_QWORD, GUID *, char *))*v2)(
                          *v2,
                          &GUID_10ab2921_3041_4a95_a1fd_33dc19a24aab,
                          (char *)this + 264);
  v6 = ChildInputProcessor;
  if ( ChildInputProcessor < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      goto LABEL_12;
    v7 = 372;
    goto LABEL_11;
  }
  ChildInputProcessor = (**(__int64 (__fastcall ***)(_QWORD, GUID *, char *))*v2)(
                          *v2,
                          &GUID_925481d1_82a9_4761_95ea_d779b9de7e6b,
                          (char *)this + 272);
  v6 = ChildInputProcessor;
  if ( ChildInputProcessor < 0 && (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
  {
    v7 = 376;
LABEL_11:
    Template_qqq(v5, &MinInput_Warning_CheckResult, 12, v7, ChildInputProcessor);
  }
LABEL_12:
  if ( v6 < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      Template_qqq(v5, &MinInput_Warning_CheckResult, 12, 918, v6);
LABEL_23:
    if ( IsDebuggerPresent() )
      __debugbreak();
    __fastfail(7u);
  }
LABEL_15:
  v8 = ControllerProcessor::SetPointerPosition(this, *(struct tagPOINT *)((char *)this + 316), 1);
  v10 = v8;
  if ( v8 < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      goto LABEL_23;
    v11 = 921;
LABEL_22:
    Template_qqq(v9, &MinInput_Warning_CheckResult, 12, v11, v8);
    goto LABEL_23;
  }
  if ( (*((_BYTE *)this + 312) & 0x20) == 0 )
  {
    v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 181) + 80LL))(
           *((_QWORD *)this + 181),
           0LL,
           *((_QWORD *)this + 184));
    v10 = v8;
    if ( v8 < 0 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
        goto LABEL_23;
      v11 = 927;
      goto LABEL_22;
    }
  }
  return v10;
}

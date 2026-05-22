/*
 * XREFs of ?RouteNextInputToTarget@GestureTargetingTarget@@QEAAJIPEAX0AEBUtagMsgRoutingInfo@@@Z @ 0x18000F80C
 * Callers:
 *     ?RouteInputToTarget@GestureTargetingComponent@@AEAAJIPEAX0IAEBUtagMsgRoutingInfo@@IPEAI@Z @ 0x18000E714 (-RouteInputToTarget@GestureTargetingComponent@@AEAAJIPEAX0IAEBUtagMsgRoutingInfo@@IPEAI@Z.c)
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     Template_q @ 0x18000D640 (Template_q.c)
 *     ?InContactPointersPresent@GestureTargetingTarget@@AEAA_NPEAUInputInfo@@@Z @ 0x180010078 (-InContactPointersPresent@GestureTargetingTarget@@AEAA_NPEAUInputInfo@@@Z.c)
 *     ?CheckAndSendCaptureEnded@GestureTargetingTarget@@AEAAJPEAUInputInfo@@@Z @ 0x180010110 (-CheckAndSendCaptureEnded@GestureTargetingTarget@@AEAAJPEAUInputInfo@@@Z.c)
 *     ?DropInvalidContacts@GestureTargetingTarget@@AEAAJPEAUInputInfo@@@Z @ 0x1800102D4 (-DropInvalidContacts@GestureTargetingTarget@@AEAAJPEAUInputInfo@@@Z.c)
 *     ?DropDepartingContacts@GestureTargetingTarget@@AEAAJPEAUInputInfo@@@Z @ 0x180010478 (-DropDepartingContacts@GestureTargetingTarget@@AEAAJPEAUInputInfo@@@Z.c)
 *     ?CreateRoutingTarget@GestureTargetingTarget@@AEAAJAEBUtagMsgRoutingInfo@@PEAXPEAPEAUIInputTarget@@@Z @ 0x1800105C4 (-CreateRoutingTarget@GestureTargetingTarget@@AEAAJAEBUtagMsgRoutingInfo@@PEAXPEAPEAUIInputTarget.c)
 *     ?Enqueue@?$DynamicSizeQueue@UChainedTarget@GestureTargetingTarget@@$00@@QEAAJAEBUChainedTarget@GestureTargetingTarget@@@Z @ 0x1800108B0 (-Enqueue@-$DynamicSizeQueue@UChainedTarget@GestureTargetingTarget@@$00@@QEAAJAEBUChainedTarget@G.c)
 *     ?MoveToTail@?$DynamicSizeQueue@UChainedTarget@GestureTargetingTarget@@$00@@QEAAJI@Z @ 0x180010A9C (-MoveToTail@-$DynamicSizeQueue@UChainedTarget@GestureTargetingTarget@@$00@@QEAAJI@Z.c)
 *     ?Tail@?$DynamicSizeQueue@UChainedTarget@GestureTargetingTarget@@$00@@QEAAJPEAPEAUChainedTarget@GestureTargetingTarget@@@Z @ 0x180010DDC (-Tail@-$DynamicSizeQueue@UChainedTarget@GestureTargetingTarget@@$00@@QEAAJPEAPEAUChainedTarget@G.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall GestureTargetingTarget::RouteNextInputToTarget(
        GestureTargetingTarget *this,
        int a2,
        void *a3,
        void *a4,
        const struct tagMsgRoutingInfo *a5)
{
  char v7; // al
  int v8; // r9d
  __int64 v9; // rsi
  int v10; // eax
  __int64 v11; // rcx
  int v12; // r9d
  __int64 v13; // rcx
  GestureTargetingTarget *v14; // rcx
  struct IInputTarget *v15; // rax
  __int64 v16; // rcx
  _QWORD *v17; // r14
  char *v18; // r13
  int v19; // eax
  __int64 v20; // rcx
  int v21; // r9d
  GestureTargetingTarget *v22; // rcx
  GestureTargetingTarget *v23; // rcx
  int v24; // eax
  __int64 v25; // rcx
  unsigned int v26; // ebx
  unsigned int v27; // r12d
  unsigned int v28; // r14d
  __int64 (__fastcall ***v29)(_QWORD, GUID *, struct IInputTarget **); // rcx
  int v30; // eax
  __int64 v31; // rcx
  int v32; // eax
  __int64 v33; // rcx
  struct IInputTarget *v34; // rcx
  __int64 v35; // rcx
  __int64 v36; // rcx
  int v37; // eax
  __int64 v38; // rcx
  int v39; // eax
  __int64 v40; // rcx
  _OWORD *v41; // rax
  __int64 v42; // rcx
  __int64 v43; // rcx
  _QWORD v45[245]; // [rsp+40h] [rbp-7A8h] BYREF
  __int64 v46; // [rsp+7F0h] [rbp+8h] BYREF
  struct IInputTarget *v47; // [rsp+800h] [rbp+18h] BYREF
  _QWORD *v48; // [rsp+808h] [rbp+20h] BYREF

  v46 = 0LL;
  v48 = 0LL;
  *((_DWORD *)this + 28) = a2;
  *((_QWORD *)this + 15) = a3;
  if ( !*((_DWORD *)this + 15) )
  {
    v7 = Microsoft_OneCore_MinInputEnableBits;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      Template_qqq((__int64)this, &MinInput_Warning_CheckResult, 4, 155, 5);
      v7 = Microsoft_OneCore_MinInputEnableBits;
    }
    if ( (v7 & 2) == 0 )
      goto LABEL_7;
    v8 = 282;
    goto LABEL_6;
  }
  v9 = *((_QWORD *)this + 5) + 1888LL * *((unsigned int *)this + 13);
  v46 = 0LL;
  if ( !*((_DWORD *)this + 21) )
  {
    v10 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 4))(
            *((_QWORD *)this + 4),
            &GUID_05b38163_1229_4e7b_a0fc_5b47c4e7b631,
            &v46);
    if ( v10 < 0 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
        goto LABEL_15;
      v12 = 296;
      goto LABEL_14;
    }
    v11 = v46;
    if ( !v46 )
    {
      LOBYTE(v10) = -1;
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      {
        v12 = 300;
LABEL_14:
        Template_qqq(v11, &MinInput_Warning_CheckResult, 4, v12, v10);
        goto LABEL_15;
      }
      goto LABEL_15;
    }
    if ( (*(unsigned __int8 (__fastcall **)(__int64, const struct tagMsgRoutingInfo *, void *))(*(_QWORD *)v46 + 32LL))(
           v46,
           a5,
           a4) )
    {
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 4) + 8LL))(*((_QWORD *)this + 4));
      v15 = (struct IInputTarget *)*((_QWORD *)this + 4);
    }
    else
    {
      v47 = 0LL;
      v10 = GestureTargetingTarget::CreateRoutingTarget(v14, a5, a4, &v47);
      if ( v10 < 0 )
      {
        if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
        {
          v12 = 327;
          goto LABEL_14;
        }
LABEL_15:
        if ( IsDebuggerPresent() )
          __debugbreak();
        __fastfail(7u);
      }
      v15 = v47;
      a4 = 0LL;
    }
    v45[0] = v15;
    v10 = DynamicSizeQueue<GestureTargetingTarget::ChainedTarget,1>::Enqueue((char *)this + 64, v45);
    if ( v10 >= 0 )
    {
      v10 = DynamicSizeQueue<GestureTargetingTarget::ChainedTarget,1>::Tail((char *)this + 64, &v48);
      if ( v10 >= 0 )
      {
        v16 = v46;
        v46 = 0LL;
        if ( v16 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
        v17 = v48;
        goto LABEL_101;
      }
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      {
        v12 = 335;
        goto LABEL_14;
      }
    }
    else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      v12 = 334;
      goto LABEL_14;
    }
    goto LABEL_15;
  }
  v18 = (char *)this + 64;
  v19 = DynamicSizeQueue<GestureTargetingTarget::ChainedTarget,1>::Tail((char *)this + 64, &v48);
  if ( v19 < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      v21 = 341;
      goto LABEL_41;
    }
    goto LABEL_42;
  }
  v17 = v48;
  v19 = (**(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*v48)(
          *v48,
          &GUID_05b38163_1229_4e7b_a0fc_5b47c4e7b631,
          &v46);
  if ( v19 < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      v21 = 345;
      goto LABEL_41;
    }
    goto LABEL_42;
  }
  v20 = v46;
  if ( !v46 )
  {
    LOBYTE(v19) = -1;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      v21 = 349;
      goto LABEL_41;
    }
    goto LABEL_42;
  }
  if ( (*(unsigned __int8 (__fastcall **)(__int64, const struct tagMsgRoutingInfo *, void *))(*(_QWORD *)v46 + 32LL))(
         v46,
         a5,
         a4) )
  {
    goto LABEL_99;
  }
  if ( !GestureTargetingTarget::InContactPointersPresent(v22, (struct InputInfo *)(v17 + 1)) )
  {
    *((_BYTE *)v17 + 1896) = 0;
    goto LABEL_59;
  }
  *((_BYTE *)v17 + 1896) = 1;
  *((_DWORD *)v17 + 136) = 2;
  v24 = GestureTargetingTarget::DropDepartingContacts(v23, (struct InputInfo *)(v17 + 1));
  v26 = v24;
  if ( v24 >= 0 )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD *))(*(_QWORD *)*v17 + 24LL))(*v17, v17 + 1);
    *(_DWORD *)(v9 + 536) = 1;
LABEL_59:
    v27 = *((_DWORD *)this + 21);
    if ( v27 <= 1 )
    {
LABEL_88:
      v47 = 0LL;
      v19 = GestureTargetingTarget::CreateRoutingTarget(v23, a5, a4, &v47);
      if ( v19 >= 0 )
      {
        v45[0] = v47;
        v19 = DynamicSizeQueue<GestureTargetingTarget::ChainedTarget,1>::Enqueue(v18, v45);
        if ( v19 >= 0 )
        {
          a4 = 0LL;
          goto LABEL_95;
        }
        if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
        {
          v21 = 475;
          goto LABEL_41;
        }
      }
      else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      {
        v21 = 471;
        goto LABEL_41;
      }
LABEL_42:
      if ( IsDebuggerPresent() )
        __debugbreak();
      __fastfail(7u);
    }
    v47 = 0LL;
    v28 = 0;
    while ( 1 )
    {
      v47 = 0LL;
      if ( v28 >= *((_DWORD *)v18 + 5) )
        break;
      v29 = *(__int64 (__fastcall ****)(_QWORD, GUID *, struct IInputTarget **))(*(_QWORD *)v18
                                                                               + 1904LL
                                                                               * ((v28 + *((_DWORD *)v18 + 3))
                                                                                % *((_DWORD *)v18 + 2)));
      v30 = (**v29)(v29, &GUID_05b38163_1229_4e7b_a0fc_5b47c4e7b631, &v47);
      if ( v30 < 0 )
      {
        if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
          Template_qqq(v31, &MinInput_Warning_CheckResult, 4, 416, v30);
        goto LABEL_85;
      }
      if ( !v47 )
      {
        if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
          Template_qqq(0LL, &MinInput_Warning_CheckResult, 4, 420, 255);
        goto LABEL_85;
      }
      if ( (*(unsigned __int8 (__fastcall **)(struct IInputTarget *, const struct tagMsgRoutingInfo *, void *))(*(_QWORD *)v47 + 32LL))(
             v47,
             a5,
             a4) )
      {
        v32 = DynamicSizeQueue<GestureTargetingTarget::ChainedTarget,1>::MoveToTail(v18, v28);
        if ( v32 < 0 )
        {
          if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
            Template_qqq(v33, &MinInput_Warning_CheckResult, 4, 431, v32);
          goto LABEL_85;
        }
        v34 = v47;
        v47 = 0LL;
        if ( v34 )
          (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)v34 + 16LL))(v34);
        if ( a4 && (Microsoft_OneCore_MinInputEnableBits & 4) != 0 )
          Template_q((__int64)v34, &MinInput_Log_PointerFrameRouting_ReroutedToTarget);
LABEL_95:
        v19 = DynamicSizeQueue<GestureTargetingTarget::ChainedTarget,1>::Tail(v18, &v48);
        if ( v19 < 0 )
        {
          if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
          {
            v21 = 480;
LABEL_41:
            Template_qqq(v20, &MinInput_Warning_CheckResult, 4, v21, v19);
          }
          goto LABEL_42;
        }
        v17 = v48;
LABEL_99:
        v36 = v46;
        v46 = 0LL;
        if ( v36 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v36 + 16LL))(v36);
LABEL_101:
        if ( a4 )
        {
          v37 = GestureTargetingTarget::DropInvalidContacts(this, (struct InputInfo *)v9);
          v26 = v37;
          if ( v37 < 0 )
          {
            if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
              Template_qqq(v38, &MinInput_Warning_CheckResult, 4, 486, v37);
            goto LABEL_116;
          }
        }
        if ( *((_DWORD *)this + 21) > 1u )
        {
          v39 = GestureTargetingTarget::CheckAndSendCaptureEnded(this, (struct InputInfo *)v9);
          if ( v39 < 0 )
          {
            if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
              Template_qqq(v40, &MinInput_Warning_CheckResult, 4, 497, v39);
            goto LABEL_7;
          }
        }
        (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*v17 + 24LL))(*v17, v9);
        v41 = v17 + 1;
        v42 = 14LL;
        do
        {
          *v41 = *(_OWORD *)v9;
          v41[1] = *(_OWORD *)(v9 + 16);
          v41[2] = *(_OWORD *)(v9 + 32);
          v41[3] = *(_OWORD *)(v9 + 48);
          v41[4] = *(_OWORD *)(v9 + 64);
          v41[5] = *(_OWORD *)(v9 + 80);
          v41[6] = *(_OWORD *)(v9 + 96);
          v41 += 8;
          *(v41 - 1) = *(_OWORD *)(v9 + 112);
          v9 += 128LL;
          --v42;
        }
        while ( v42 );
        *v41 = *(_OWORD *)v9;
        v41[1] = *(_OWORD *)(v9 + 16);
        v41[2] = *(_OWORD *)(v9 + 32);
        v41[3] = *(_OWORD *)(v9 + 48);
        v41[4] = *(_OWORD *)(v9 + 64);
        v41[5] = *(_OWORD *)(v9 + 80);
        v43 = *((unsigned int *)this + 15);
        if ( (_DWORD)v43 )
        {
          *((_DWORD *)this + 13) = (unsigned int)(*((_DWORD *)this + 13) + 1) % *((_DWORD *)this + 12);
          *((_DWORD *)this + 15) = v43 - 1;
          v26 = 0;
          goto LABEL_116;
        }
        if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0
          || (Template_qqq(v43, &MinInput_Warning_CheckResult, v43 + 4, v43 + 93, 5),
              (Microsoft_OneCore_MinInputEnableBits & 2) == 0) )
        {
LABEL_7:
          if ( IsDebuggerPresent() )
            __debugbreak();
          __fastfail(7u);
        }
        v8 = 505;
LABEL_6:
        Template_qqq((__int64)this, &MinInput_Warning_CheckResult, 4, v8, 5);
        goto LABEL_7;
      }
      v23 = v47;
      v47 = 0LL;
      if ( v23 )
        (*(void (__fastcall **)(GestureTargetingTarget *))(*(_QWORD *)v23 + 16LL))(v23);
      if ( ++v28 >= v27 )
        goto LABEL_88;
    }
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      Template_qqq((__int64)v23, &MinInput_Warning_CheckResult, 4, 175, 87);
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
        Template_qqq(v35, &MinInput_Warning_CheckResult, 4, 412, 87);
    }
LABEL_85:
    if ( IsDebuggerPresent() )
      __debugbreak();
    __fastfail(7u);
  }
  if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    Template_qqq(v25, &MinInput_Warning_CheckResult, 4, 382, v24);
  v13 = v46;
  v46 = 0LL;
  if ( v13 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
LABEL_116:
  if ( a4 )
    CloseHandle(a4);
  return v26;
}

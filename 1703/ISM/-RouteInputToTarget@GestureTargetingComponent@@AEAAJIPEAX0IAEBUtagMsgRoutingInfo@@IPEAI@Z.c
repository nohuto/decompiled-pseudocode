/*
 * XREFs of ?RouteInputToTarget@GestureTargetingComponent@@AEAAJIPEAX0IAEBUtagMsgRoutingInfo@@IPEAI@Z @ 0x18000E714
 * Callers:
 *     ?RouteInputToTargetStatic@GestureTargetingComponent@@SAJPEAX@Z @ 0x18000DDC0 (-RouteInputToTargetStatic@GestureTargetingComponent@@SAJPEAX@Z.c)
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     Template_qqqqq @ 0x18000D49C (Template_qqqqq.c)
 *     Template_q @ 0x18000D640 (Template_q.c)
 *     ?SetValueForKey@?$DynamicSizeMap@IUInputFrame@GestureTargetingComponent@@$04@@QEAAJAEBIAEBUInputFrame@GestureTargetingComponent@@@Z @ 0x18000ECC4 (-SetValueForKey@-$DynamicSizeMap@IUInputFrame@GestureTargetingComponent@@$04@@QEAAJAEBIAEBUInput.c)
 *     ?GetLastTarget@GestureTargetingTarget@@QEAAJIPEAXPEAPEAUIDCompInputTarget@@@Z @ 0x18000F71C (-GetLastTarget@GestureTargetingTarget@@QEAAJIPEAXPEAPEAUIDCompInputTarget@@@Z.c)
 *     ?RouteNextInputToTarget@GestureTargetingTarget@@QEAAJIPEAX0AEBUtagMsgRoutingInfo@@@Z @ 0x18000F80C (-RouteNextInputToTarget@GestureTargetingTarget@@QEAAJIPEAX0AEBUtagMsgRoutingInfo@@@Z.c)
 *     ?SetValueForKey@?$DynamicSizeMap@I_N$09@@QEAAJAEBIAEB_N@Z @ 0x180010E64 (-SetValueForKey@-$DynamicSizeMap@I_N$09@@QEAAJAEBIAEB_N@Z.c)
 *     __security_check_cookie @ 0x18009CCC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall GestureTargetingComponent::RouteInputToTarget(
        __int64 this,
        int a2,
        HANDLE a3,
        void *a4,
        unsigned int a5,
        const struct tagMsgRoutingInfo *a6,
        unsigned int a7,
        unsigned int *a8)
{
  int v9; // ebx
  char *v10; // r14
  unsigned int v11; // edx
  __int64 v12; // r8
  __int64 v13; // rcx
  GestureTargetingTarget *v14; // r13
  unsigned int v15; // r15d
  int LastTarget; // eax
  __int64 v17; // r8
  struct IDCompInputTarget *v18; // rsi
  __int64 v19; // rax
  __int64 v20; // rax
  int v21; // ebx
  int v22; // ebx
  __int64 v24; // rsi
  int v25; // r8d
  __int64 v26; // rdx
  int v27; // esi
  HANDLE v28; // rbx
  int InputToTarget; // eax
  __int64 v30; // rcx
  unsigned int v31; // ebx
  unsigned int v32; // edx
  __int64 v33; // r8
  int v34; // r9d
  int v35; // eax
  __int64 v36; // rcx
  char v38[4]; // [rsp+40h] [rbp-108h] BYREF
  int v39; // [rsp+44h] [rbp-104h]
  struct IDCompInputTarget *v40; // [rsp+48h] [rbp-100h] BYREF
  void *v41; // [rsp+50h] [rbp-F8h] BYREF
  int v42; // [rsp+58h] [rbp-F0h] BYREF
  GestureTargetingTarget *v43[2]; // [rsp+60h] [rbp-E8h] BYREF
  _BYTE v44[48]; // [rsp+70h] [rbp-D8h]
  HANDLE hObject[2]; // [rsp+A0h] [rbp-A8h]
  __int64 v46; // [rsp+B0h] [rbp-98h]
  __int128 v47; // [rsp+B8h] [rbp-90h] BYREF
  __int128 v48; // [rsp+C8h] [rbp-80h]
  __int64 v49; // [rsp+D8h] [rbp-70h]
  char v50[40]; // [rsp+E0h] [rbp-68h] BYREF

  v46 = -2LL;
  v9 = a2;
  v39 = a2;
  v42 = a2;
  v41 = a4;
  v47 = *(_OWORD *)a6;
  v48 = *((_OWORD *)a6 + 1);
  v49 = *((_QWORD *)a6 + 4);
  v10 = (char *)(this + 80);
  if ( a2 == *(_DWORD *)(this + 96) )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      Template_qqq(this, &MinInput_Warning_CheckResult, 4, 116, 87);
    if ( IsDebuggerPresent() )
      __debugbreak();
    __fastfail(7u);
  }
  v11 = 0;
  if ( !*(_DWORD *)(this + 88) )
  {
LABEL_72:
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      Template_qqq(this, &MinInput_Warning_CheckResult, 4, 133, 5);
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      goto LABEL_77;
    v34 = 700;
    goto LABEL_76;
  }
  v12 = *(_QWORD *)v10;
  while ( 1 )
  {
    this = 88LL * v11;
    if ( *(_DWORD *)(this + v12) == v9 )
      break;
    if ( ++v11 >= *((_DWORD *)v10 + 2) )
      goto LABEL_72;
  }
  v13 = 88LL * v11;
  *(_OWORD *)v43 = *(_OWORD *)(v13 + v12 + 8);
  *(_OWORD *)v44 = *(_OWORD *)(v13 + v12 + 24);
  *(_OWORD *)&v44[16] = *(_OWORD *)(v13 + v12 + 40);
  *(_OWORD *)&v44[32] = *(_OWORD *)(v13 + v12 + 56);
  *(_OWORD *)hObject = *(_OWORD *)(v13 + v12 + 72);
  v14 = v43[0];
  if ( !a3 || v41 )
  {
    v15 = a5;
  }
  else
  {
    v40 = 0LL;
    v15 = a5;
    LastTarget = GestureTargetingTarget::GetLastTarget(v43[0], a5, a3, &v40);
    v18 = v40;
    if ( LastTarget >= 0 && v40 )
    {
      v19 = (*(__int64 (__fastcall **)(struct IDCompInputTarget *, char *))(*(_QWORD *)v40 + 96LL))(v40, v50);
      v47 = *(_OWORD *)v19;
      v48 = *(_OWORD *)(v19 + 16);
      v49 = *(_QWORD *)(v19 + 32);
      v20 = (*(__int64 (__fastcall **)(struct IDCompInputTarget *))(*(_QWORD *)v18 + 80LL))(v18);
      v21 = NtDuplicateCompositionInputSink(v20, &v41);
      if ( v21 < 0 )
      {
        v22 = v21 | 0x10000000;
        if ( v22 < 0 )
        {
          if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
            Template_qqq(v13, &MinInput_Warning_CheckResult, 4, 719, v22);
          if ( IsDebuggerPresent() )
            __debugbreak();
          __fastfail(7u);
        }
      }
      v9 = v39;
    }
    else
    {
      v15 = 0;
      a3 = 0LL;
    }
    if ( (Microsoft_OneCore_MinInputEnableBits & 4) != 0 )
      Template_qqqqq(v13, &MinInput_Log_PointerFrameRouting_InvalidTargetRecovery, v17, v9, (char)a3, v15, a7);
    v40 = 0LL;
    if ( v18 )
      (*(void (__fastcall **)(struct IDCompInputTarget *))(*(_QWORD *)v18 + 16LL))(v18);
  }
  if ( a7 )
  {
    v24 = a7;
    do
    {
      if ( a3 )
      {
        v25 = *a8;
        LODWORD(v40) = v25;
        v13 = (__int64)v14 + 88;
        if ( v25 == *((_DWORD *)v14 + 26) || (v26 = 0LL, !*((_DWORD *)v14 + 24)) )
        {
LABEL_37:
          v38[0] = 1;
          DynamicSizeMap<unsigned int,bool,10>::SetValueForKey(v13, &v40, v38);
        }
        else
        {
          while ( *(_DWORD *)(*(_QWORD *)v13 + 8 * v26) != v25 )
          {
            v26 = (unsigned int)(v26 + 1);
            if ( (unsigned int)v26 >= *((_DWORD *)v14 + 24) )
              goto LABEL_37;
          }
        }
      }
      ++a8;
      --v24;
    }
    while ( v24 );
  }
  v27 = HIDWORD(v43[1]);
  if ( a7 > HIDWORD(v43[1]) )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      Template_qqq(v13, &MinInput_Warning_CheckResult, 4, 755, 1);
    goto LABEL_77;
  }
  if ( LODWORD(v43[1]) != HIDWORD(v43[1]) )
  {
    v28 = hObject[0];
    if ( a3 && hObject[0] )
    {
      if ( a3 == hObject[0] )
        goto LABEL_50;
      if ( (Microsoft_OneCore_MinInputEnableBits & 4) != 0 )
        Template_q(v13, &MinInput_Log_PointerFrameRouting_FrameSplitting);
      a3 = v28;
    }
    if ( a3 == v28 )
    {
LABEL_50:
      if ( hObject[1] )
      {
        CloseHandle(hObject[1]);
        hObject[1] = 0LL;
      }
      goto LABEL_56;
    }
    if ( v28 )
    {
      v15 = *(_DWORD *)v44;
      a3 = v28;
      v47 = *(_OWORD *)&v44[8];
      v48 = *(_OWORD *)&v44[24];
      v49 = *(_QWORD *)&v44[40];
      v41 = hObject[1];
    }
    if ( (Microsoft_OneCore_MinInputEnableBits & 4) != 0 )
      Template_q(v13, &MinInput_Log_PointerFrameRouting_PartialNullRouting);
  }
LABEL_56:
  if ( v27 == a7 )
  {
    InputToTarget = GestureTargetingTarget::RouteNextInputToTarget(
                      v14,
                      v15,
                      a3,
                      v41,
                      (const struct tagMsgRoutingInfo *)&v47);
    if ( InputToTarget < 0 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
        Template_qqq(v30, &MinInput_Warning_CheckResult, 4, 822, InputToTarget);
      goto LABEL_77;
    }
    v31 = 0;
    v32 = 0;
    if ( *((_DWORD *)v10 + 2) )
    {
      v33 = *(_QWORD *)v10;
      while ( 1 )
      {
        v30 = 88LL * v32;
        if ( *(_DWORD *)(v30 + v33) == v39 )
          break;
        if ( ++v32 >= *((_DWORD *)v10 + 2) )
          goto LABEL_66;
      }
      *(_DWORD *)(88LL * v32 + v33) = *((_DWORD *)v10 + 4);
      --*((_DWORD *)v10 + 3);
      (*(void (__fastcall **)(GestureTargetingTarget *))(*(_QWORD *)v14 + 16LL))(v14);
      return v31;
    }
LABEL_66:
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      goto LABEL_77;
    Template_qqq(v30, &MinInput_Warning_CheckResult, 4, 220, 5);
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      goto LABEL_77;
    v34 = 828;
LABEL_76:
    Template_qqq(this, &MinInput_Warning_CheckResult, 4, v34, 5);
    goto LABEL_77;
  }
  hObject[0] = a3;
  *(_OWORD *)&v44[8] = v47;
  *(_OWORD *)&v44[24] = v48;
  *(_QWORD *)&v44[40] = v49;
  *(_DWORD *)v44 = v15;
  hObject[1] = v41;
  HIDWORD(v43[1]) = v27 - a7;
  v35 = DynamicSizeMap<unsigned int,GestureTargetingComponent::InputFrame,5>::SetValueForKey(v10, &v42, v43);
  v31 = v35;
  if ( v35 < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      Template_qqq(v36, &MinInput_Warning_CheckResult, 4, 842, v35);
LABEL_77:
    if ( IsDebuggerPresent() )
      __debugbreak();
    __fastfail(7u);
  }
  return v31;
}

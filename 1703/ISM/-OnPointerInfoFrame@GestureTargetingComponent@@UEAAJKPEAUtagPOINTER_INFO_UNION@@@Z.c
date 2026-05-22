/*
 * XREFs of ?OnPointerInfoFrame@GestureTargetingComponent@@UEAAJKPEAUtagPOINTER_INFO_UNION@@@Z @ 0x18000E420
 * Callers:
 *     <none>
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     Template_qqqq @ 0x180005870 (Template_qqqq.c)
 *     Template_qqqqqq @ 0x18000D530 (Template_qqqqqq.c)
 *     ?SetValueForKey@?$DynamicSizeMap@IUInputFrame@GestureTargetingComponent@@$04@@QEAAJAEBIAEBUInputFrame@GestureTargetingComponent@@@Z @ 0x18000ECC4 (-SetValueForKey@-$DynamicSizeMap@IUInputFrame@GestureTargetingComponent@@$04@@QEAAJAEBIAEBUInput.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009E01C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x18009E024 (--_U@YAPEAX_K@Z.c)
 *     memcpy_0 @ 0x18009EAF8 (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall GestureTargetingComponent::OnPointerInfoFrame(
        GestureTargetingComponent *this,
        unsigned int a2,
        struct tagPOINTER_INFO_UNION *a3)
{
  __int64 v4; // rsi
  __int64 (__fastcall ***v6)(_QWORD, GUID *, __int64 *); // rcx
  int v7; // r9d
  int v8; // eax
  __int64 v9; // rcx
  __int64 v10; // rcx
  _QWORD *v11; // rbx
  __int64 v12; // rdi
  int v13; // eax
  __int64 v14; // rcx
  char v15; // al
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  _DWORD *v19; // rbx
  __int64 v20; // rdi
  __int64 v21; // rcx
  __int64 v22; // rdi
  _QWORD *v23; // rbx
  __int64 v24; // rcx
  __int64 v26; // [rsp+50h] [rbp-68h] BYREF
  int v27; // [rsp+58h] [rbp-60h]
  int v28; // [rsp+5Ch] [rbp-5Ch]
  int v29; // [rsp+60h] [rbp-58h]
  __int64 v30; // [rsp+90h] [rbp-28h]
  __int64 v31; // [rsp+98h] [rbp-20h]
  int v32; // [rsp+C0h] [rbp+8h] BYREF
  __int64 v33; // [rsp+D8h] [rbp+20h] BYREF

  v4 = a2;
  v32 = 0;
  v33 = 0LL;
  v6 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 6);
  if ( !v6 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      goto LABEL_5;
    v7 = 608;
    goto LABEL_4;
  }
  v8 = (**v6)(v6, &GUID_05b38163_1229_4e7b_a0fc_5b47c4e7b631, &v33);
  if ( v8 < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      Template_qqq(v9, &MinInput_Warning_CheckResult, 4, 617, v8);
    goto LABEL_5;
  }
  v10 = v33;
  if ( !v33 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      v7 = 621;
LABEL_4:
      Template_qqq(0LL, &MinInput_Warning_CheckResult, 4, v7, 255);
    }
LABEL_5:
    if ( IsDebuggerPresent() )
      __debugbreak();
    __fastfail(7u);
  }
  if ( (_DWORD)v4 )
  {
    v11 = (_QWORD *)((char *)a3 + 24);
    v12 = v4;
    while ( 1 )
    {
      *v11 = (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v10 + 88LL))(v10);
      v11 += 18;
      if ( !--v12 )
        break;
      v10 = v33;
    }
  }
  v32 = *((_DWORD *)a3 + 2);
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 6) + 8LL))(*((_QWORD *)this + 6));
  v26 = *((_QWORD *)this + 6);
  v27 = v4;
  v28 = v4;
  v30 = 0LL;
  v29 = 0;
  v31 = 0LL;
  v13 = DynamicSizeMap<unsigned int,GestureTargetingComponent::InputFrame,5>::SetValueForKey(
          (char *)this + 72,
          &v32,
          &v26);
  if ( v13 < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      Template_qqq(v14, &MinInput_Warning_CheckResult, 4, 650, v13);
    goto LABEL_5;
  }
  v15 = Microsoft_OneCore_MinInputEnableBits;
  if ( (Microsoft_OneCore_MinInputEnableBits & 4) != 0 )
  {
    Template_qqqq(v14, &MinInput_Log_PointerInfoFrame, 4, *((_DWORD *)a3 + 16), *((_DWORD *)a3 + 2), v4);
    v15 = Microsoft_OneCore_MinInputEnableBits;
    if ( (Microsoft_OneCore_MinInputEnableBits & 4) != 0 )
    {
      if ( (_DWORD)v4 )
      {
        v19 = (_DWORD *)((char *)a3 + 36);
        v20 = v4;
        do
        {
          if ( (v15 & 4) != 0 )
          {
            Template_qqqqqq(v17, v16, v18, *(v19 - 8), *(v19 - 6), *(v19 - 1), *v19, *(v19 - 3));
            v15 = Microsoft_OneCore_MinInputEnableBits;
          }
          v19 += 36;
          --v20;
        }
        while ( v20 );
      }
    }
  }
  v21 = *((_QWORD *)this + 7);
  v22 = *(_QWORD *)(v21 + 24);
  if ( !GestureTargetingComponent::s_pfnMTCallback )
  {
    if ( (v15 & 2) != 0 )
      Template_qqq(v21, &MinInput_Warning_CheckResult, 4, 160, 255);
    if ( IsDebuggerPresent() )
      __debugbreak();
    __fastfail(7u);
  }
  v23 = operator new[]((unsigned int)(144 * (v4 - 1) + 160));
  *(_DWORD *)v23 = v4;
  v23[1] = v22;
  memcpy_0(v23 + 2, a3, 144 * v4);
  ((void (__fastcall *)(_QWORD *))GestureTargetingComponent::s_pfnMTCallback)(v23);
  operator delete(v23);
  v24 = v33;
  v33 = 0LL;
  if ( v24 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
  return 0LL;
}

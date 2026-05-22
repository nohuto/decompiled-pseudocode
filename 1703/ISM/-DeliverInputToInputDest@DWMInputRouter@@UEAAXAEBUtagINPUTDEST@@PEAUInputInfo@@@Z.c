/*
 * XREFs of ?DeliverInputToInputDest@DWMInputRouter@@UEAAXAEBUtagINPUTDEST@@PEAUInputInfo@@@Z @ 0x180014DD0
 * Callers:
 *     <none>
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     ?CreateFromINPUTDEST@DWMInputTarget@@SAJAEBUtagINPUTDEST@@PEAPEAUIInputTarget@@@Z @ 0x18001A10C (-CreateFromINPUTDEST@DWMInputTarget@@SAJAEBUtagINPUTDEST@@PEAPEAUIInputTarget@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall DWMInputRouter::DeliverInputToInputDest(
        DWMInputRouter *this,
        const struct tagINPUTDEST *a2,
        struct InputInfo *a3)
{
  struct IInputTarget **v6; // rbx
  void (__fastcall ***v7)(_QWORD, GUID *, __int64 *); // rcx
  int v8; // eax
  __int64 v9; // rcx
  int v10; // r9d
  int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rcx
  struct IInputTarget *v15; // rcx
  struct IInputTarget **v16; // r14
  void (__fastcall ***v17)(_QWORD, GUID *, __int64 *); // rcx
  int v18; // ebx
  int v19; // eax
  __int64 v20; // rcx
  __int64 v21; // rcx
  int v22; // eax
  __int64 v23; // rcx
  __int64 v24; // [rsp+70h] [rbp+30h] BYREF

  if ( *(_DWORD *)a3 != 4096 )
  {
    v16 = (struct IInputTarget **)((char *)this + 736);
    v17 = (void (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 92);
    if ( v17 )
    {
      v24 = 0LL;
      (**v17)(v17, &GUID_05b38163_1229_4e7b_a0fc_5b47c4e7b631, &v24);
      if ( !(*(unsigned __int8 (__fastcall **)(__int64, const struct tagINPUTDEST *))(*(_QWORD *)v24 + 56LL))(v24, a2) )
      {
        v18 = *((_DWORD *)a3 + 14);
        *((_DWORD *)a3 + 14) = 4;
        (*(void (__fastcall **)(struct IInputTarget *, struct InputInfo *))(*(_QWORD *)*v16 + 24LL))(*v16, a3);
        *((_DWORD *)a3 + 14) = v18;
        if ( *v16 )
          (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)*v16 + 16LL))(*v16);
        *v16 = 0LL;
        v19 = (*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 28) + 32LL))(
                *((_QWORD *)this + 28),
                (char *)a3 + 656);
        if ( v19 < 0 )
        {
          if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
            Template_qqq(v20, &MinInput_Warning_CheckResult, 0, 1399, v19);
          if ( IsDebuggerPresent() )
            __debugbreak();
          __fastfail(7u);
        }
      }
      v21 = v24;
      v24 = 0LL;
      if ( v21 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
    }
    if ( !*v16 )
    {
      v8 = DWMInputTarget::CreateFromINPUTDEST(a2, v16);
      if ( v8 < 0 )
      {
        if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
        {
          v10 = 1405;
LABEL_6:
          Template_qqq(v9, &MinInput_Warning_CheckResult, 0, v10, v8);
          return;
        }
        return;
      }
      v22 = (*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 28) + 32LL))(
              *((_QWORD *)this + 28),
              (char *)a3 + 656);
      if ( v22 < 0 )
      {
        if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
          Template_qqq(v23, &MinInput_Warning_CheckResult, 0, 1407, v22);
        if ( IsDebuggerPresent() )
          __debugbreak();
        __fastfail(7u);
      }
    }
    v15 = *v16;
LABEL_39:
    if ( v15 )
      (*(void (__fastcall **)(struct IInputTarget *, struct InputInfo *))(*(_QWORD *)v15 + 24LL))(v15, a3);
    return;
  }
  v6 = (struct IInputTarget **)((char *)this + 744);
  v7 = (void (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 93);
  if ( !v7 )
  {
    v8 = DWMInputTarget::CreateFromINPUTDEST(a2, v6);
    if ( v8 < 0 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
        return;
      v10 = 1360;
      goto LABEL_6;
    }
    goto LABEL_15;
  }
  v24 = 0LL;
  (**v7)(v7, &GUID_05b38163_1229_4e7b_a0fc_5b47c4e7b631, &v24);
  if ( (*(unsigned __int8 (__fastcall **)(__int64, const struct tagINPUTDEST *))(*(_QWORD *)v24 + 56LL))(v24, a2)
    || (v11 = DWMInputTarget::CreateFromINPUTDEST(a2, v6), v11 >= 0) )
  {
    v14 = v24;
    v24 = 0LL;
    if ( v14 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
LABEL_15:
    v15 = *v6;
    goto LABEL_39;
  }
  if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    Template_qqq(v12, &MinInput_Warning_CheckResult, 0, 1368, v11);
  v13 = v24;
  v24 = 0LL;
  if ( v13 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
}

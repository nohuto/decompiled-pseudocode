/*
 * XREFs of ?Initialize@Win32kInterop@@QEAAJPEAUIRawInputClient@@PEAUISystemInputRouter@@@Z @ 0x18000AF54
 * Callers:
 *     ?Create@Win32kInterop@@SAJPEAUIRawInputClient@@PEAUISystemInputRouter@@PEAPEAV1@@Z @ 0x18000AD58 (-Create@Win32kInterop@@SAJPEAUIRawInputClient@@PEAUISystemInputRouter@@PEAPEAV1@@Z.c)
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     ?Initialize@CursorNotificationProcessor@@QEAAJPEAUICursorBroker@@@Z @ 0x18000CD2C (-Initialize@CursorNotificationProcessor@@QEAAJPEAUICursorBroker@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Win32kInterop::Initialize(
        Win32kInterop *this,
        struct IRawInputClient *a2,
        struct ISystemInputRouter *a3)
{
  __int64 v6; // rcx
  __int64 v7; // rcx
  int v8; // eax
  __int64 v9; // rcx
  unsigned int v10; // ebx
  int v11; // r9d
  int v12; // eax
  __int64 v13; // rcx
  int v14; // r9d
  struct ICursorBroker *v15; // rcx
  __int64 v16; // rcx
  struct ICursorBroker *v18; // [rsp+60h] [rbp+20h] BYREF
  __int64 v19; // [rsp+68h] [rbp+28h] BYREF

  if ( a2 )
    (*(void (__fastcall **)(struct IRawInputClient *))(*(_QWORD *)a2 + 8LL))(a2);
  v6 = *((_QWORD *)this + 6);
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  *((_QWORD *)this + 6) = a2;
  if ( a3 )
    (*(void (__fastcall **)(struct ISystemInputRouter *))(*(_QWORD *)a3 + 8LL))(a3);
  v7 = *((_QWORD *)this + 5);
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  *((_QWORD *)this + 5) = a3;
  *((_BYTE *)this + 32) = 0;
  v19 = 0LL;
  v8 = (**(__int64 (__fastcall ***)(struct ISystemInputRouter *, GUID *, __int64 *))a3)(
         a3,
         &GUID_fb9e888a_e52b_424f_8fab_f05676d1b357,
         &v19);
  v10 = v8;
  if ( v8 < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      goto LABEL_26;
    v11 = 101;
    goto LABEL_12;
  }
  v8 = (*(__int64 (__fastcall **)(__int64, __int64, char *))(*(_QWORD *)v19 + 56LL))(v19, 2LL, (char *)this + 8);
  v10 = v8;
  if ( v8 >= 0 )
  {
    if ( (gdwMitConfig & 1) == 0 )
      goto LABEL_26;
    v18 = 0LL;
    v12 = (*(__int64 (__fastcall **)(_QWORD, struct ICursorBroker **))(**((_QWORD **)this + 5) + 72LL))(
            *((_QWORD *)this + 5),
            &v18);
    v10 = v12;
    if ( v12 >= 0 )
    {
      v12 = CursorNotificationProcessor::Initialize((Win32kInterop *)((char *)this + 96), v18);
      v10 = v12;
      if ( v12 >= 0 || (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      {
LABEL_24:
        v15 = v18;
        v18 = 0LL;
        if ( v15 )
          (*(void (__fastcall **)(struct ICursorBroker *))(*(_QWORD *)v15 + 16LL))(v15);
        goto LABEL_26;
      }
      v14 = 112;
    }
    else
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
        goto LABEL_24;
      v14 = 111;
    }
    Template_qqq(v13, &MinInput_Warning_CheckResult, 0, v14, v12);
    goto LABEL_24;
  }
  if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
  {
    v11 = 105;
LABEL_12:
    Template_qqq(v9, &MinInput_Warning_CheckResult, 0, v11, v8);
  }
LABEL_26:
  v16 = v19;
  if ( v19 )
  {
    v19 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  }
  return v10;
}

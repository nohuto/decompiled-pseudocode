/*
 * XREFs of ?Initialize@CursorNotificationProcessor@@QEAAJPEAUICursorBroker@@@Z @ 0x18000CD2C
 * Callers:
 *     ?Initialize@Win32kInterop@@QEAAJPEAUIRawInputClient@@PEAUISystemInputRouter@@@Z @ 0x18000AF54 (-Initialize@Win32kInterop@@QEAAJPEAUIRawInputClient@@PEAUISystemInputRouter@@@Z.c)
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     __security_check_cookie @ 0x18009CCC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CursorNotificationProcessor::Initialize(CursorNotificationProcessor *this, struct ICursorBroker *a2)
{
  int v4; // eax
  __int64 v5; // rcx
  unsigned int v6; // ebx
  int v7; // r9d
  int v8; // eax
  __int64 v9; // rcx
  __int64 v10; // rsi
  __int64 v11; // rcx
  __int64 v12; // rbx
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rcx
  unsigned int v17; // [rsp+30h] [rbp-50h] BYREF
  __int64 v18; // [rsp+38h] [rbp-48h] BYREF
  _QWORD v19[2]; // [rsp+40h] [rbp-40h] BYREF
  _BYTE v20[40]; // [rsp+50h] [rbp-30h] BYREF

  v19[1] = -2LL;
  v19[0] = 0LL;
  v17 = 0;
  v18 = 0LL;
  v4 = CoreUICreate(&v18);
  v6 = v4;
  if ( v4 < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      goto LABEL_31;
    v7 = 17;
LABEL_4:
    Template_qqq(v5, &MinInput_Warning_CheckResult, 0, v7, v4);
    goto LABEL_31;
  }
  v4 = (*(__int64 (__fastcall **)(__int64, const wchar_t *, _QWORD *))(*(_QWORD *)v18 + 64LL))(
         v18,
         L"Kernel\\MIT\\InputPort",
         v19);
  v6 = v4;
  if ( v4 < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      goto LABEL_31;
    v7 = 20;
    goto LABEL_4;
  }
  v4 = (*(__int64 (__fastcall **)(__int64, __int64 (__fastcall *)(CursorNotificationProcessor *, const void *, int), CursorNotificationProcessor *, _QWORD, unsigned int *))(*(_QWORD *)v18 + 80LL))(
         v18,
         CursorNotificationProcessor::OnMitMessageReceived,
         this,
         v19[0],
         &v17);
  v6 = v4;
  if ( v4 < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      goto LABEL_31;
    v7 = 27;
    goto LABEL_4;
  }
  v4 = (*(__int64 (__fastcall **)(__int64, _QWORD, _BYTE *))(*(_QWORD *)v18 + 112LL))(v18, v17, v20);
  v6 = v4;
  if ( v4 < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      goto LABEL_31;
    v7 = 31;
    goto LABEL_4;
  }
  v8 = MITCoreMsgKOpenConnectionTo(0LL, v20);
  v6 = v8 | 0x10000000;
  if ( v8 >= 0 )
  {
    if ( a2 )
      (*(void (__fastcall **)(struct ICursorBroker *))(*(_QWORD *)a2 + 8LL))(a2);
    if ( *(_QWORD *)this )
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)this + 16LL))(*(_QWORD *)this);
    *(_QWORD *)this = a2;
    v10 = v18;
    if ( v18 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 8LL))(v18);
    v11 = *((_QWORD *)this + 1);
    if ( v11 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    *((_QWORD *)this + 1) = v10;
    v12 = v19[0];
    v19[0] = 0LL;
    if ( v12 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
    v13 = *((_QWORD *)this + 3);
    if ( v13 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    *((_QWORD *)this + 3) = v12;
    *((_DWORD *)this + 8) = v17;
    v17 = 0;
    v6 = 0;
  }
  else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
  {
    Template_qqq(v9, &MinInput_Warning_CheckResult, 0, 35, v8);
  }
LABEL_31:
  if ( v17 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 144LL))(v18);
  v14 = v18;
  v18 = 0LL;
  if ( v14 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  v15 = v19[0];
  v19[0] = 0LL;
  if ( v15 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  return v6;
}

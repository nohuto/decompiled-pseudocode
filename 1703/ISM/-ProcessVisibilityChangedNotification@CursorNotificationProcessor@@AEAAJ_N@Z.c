/*
 * XREFs of ?ProcessVisibilityChangedNotification@CursorNotificationProcessor@@AEAAJ_N@Z @ 0x18000D268
 * Callers:
 *     ?OnMitMessageReceived@CursorNotificationProcessor@@CAJPEAXPEBXH@Z @ 0x18000D050 (-OnMitMessageReceived@CursorNotificationProcessor@@CAJPEAXPEBXH@Z.c)
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     __security_check_cookie @ 0x18009CCC0 (__security_check_cookie.c)
 *     memset @ 0x18009D814 (memset.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CursorNotificationProcessor::ProcessVisibilityChangedNotification(
        CursorNotificationProcessor *this,
        char a2)
{
  int v4; // ebx
  int v5; // eax
  __int64 v6; // rcx
  int v7; // r9d
  __int64 v8; // rcx
  int v9; // eax
  __int64 v10; // rcx
  int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // rcx
  int v15; // [rsp+38h] [rbp-39h] BYREF
  _QWORD v16[2]; // [rsp+40h] [rbp-31h] BYREF
  _QWORD v17[3]; // [rsp+50h] [rbp-21h] BYREF
  _QWORD v18[8]; // [rsp+68h] [rbp-9h] BYREF

  v16[1] = -2LL;
  v16[0] = 0LL;
  memset(v18, 0, sizeof(v18));
  v4 = 0;
  v17[0] = 0LL;
  v15 = 0;
  if ( *((_DWORD *)this + 4) )
    goto LABEL_13;
  if ( (*(unsigned int (__fastcall **)(_QWORD))(**(_QWORD **)this + 56LL))(*(_QWORD *)this) )
  {
    v5 = (*(__int64 (__fastcall **)(_QWORD, _QWORD *))(**((_QWORD **)this + 1) + 24LL))(*((_QWORD *)this + 1), v17);
    v4 = v5;
    if ( v5 < 0 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
        goto LABEL_11;
      v7 = 193;
      goto LABEL_6;
    }
    v5 = (*(__int64 (__fastcall **)(_QWORD, const wchar_t *, __int64, int *))(*(_QWORD *)v17[0] + 24LL))(
           v17[0],
           L"System\\Input\\CursorManagerEndpoint",
           1LL,
           &v15);
    v4 = v5;
    if ( v5 >= 0 )
    {
      *((_DWORD *)this + 4) = v15;
      v15 = 0;
      v4 = 0;
    }
    else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      v7 = 198;
LABEL_6:
      Template_qqq(v6, &MinInput_Warning_CheckResult, 0, v7, v5);
    }
  }
LABEL_11:
  if ( v15 )
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 1) + 144LL))(*((_QWORD *)this + 1));
LABEL_13:
  v8 = v17[0];
  v17[0] = 0LL;
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  if ( v4 >= 0 )
  {
    v9 = (*(__int64 (__fastcall **)(_QWORD, _QWORD *))(**(_QWORD **)this + 40LL))(*(_QWORD *)this, v16);
    v4 = v9;
    if ( v9 >= 0 )
    {
      LOBYTE(v18[0]) = 3;
      *(_OWORD *)&v18[1] = *(_OWORD *)(*(__int64 (__fastcall **)(_QWORD, _QWORD *))(*(_QWORD *)v16[0] + 40LL))(
                                        v16[0],
                                        v17);
      LOBYTE(v18[3]) = a2;
      v11 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD *, __int64))(**((_QWORD **)this + 1) + 160LL))(
              *((_QWORD *)this + 1),
              *((unsigned int *)this + 4),
              v18,
              64LL);
      v4 = v11;
      if ( v11 >= 0 )
      {
        v4 = 0;
      }
      else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      {
        Template_qqq(v12, &MinInput_Warning_CheckResult, 0, 237, v11);
      }
    }
    else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      Template_qqq(v10, &MinInput_Warning_CheckResult, 0, 228, v9);
    }
  }
  else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
  {
    Template_qqq(v8, &MinInput_Warning_CheckResult, 0, 226, v4);
  }
  v13 = v16[0];
  v16[0] = 0LL;
  if ( v13 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  return (unsigned int)v4;
}

/*
 * XREFs of ?OnMitMessageReceived@CursorNotificationProcessor@@CAJPEAXPEBXH@Z @ 0x18000D050
 * Callers:
 *     <none>
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     ?ProcessVisibilityChangedNotification@CursorNotificationProcessor@@AEAAJ_N@Z @ 0x18000D268 (-ProcessVisibilityChangedNotification@CursorNotificationProcessor@@AEAAJ_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CursorNotificationProcessor::OnMitMessageReceived(
        CursorNotificationProcessor *this,
        _DWORD *a2,
        int a3)
{
  _DWORD *v3; // rdi
  unsigned int v4; // ebx
  int v5; // r9d
  int v6; // eax
  __int64 v7; // rcx
  int v8; // eax
  __int64 v9; // rcx
  int v10; // r9d
  __int64 v11; // rcx
  int v12; // eax
  __int64 v13; // rcx
  int v14; // r9d
  _QWORD v16[3]; // [rsp+30h] [rbp-18h] BYREF
  __int64 v17; // [rsp+68h] [rbp+20h] BYREF

  v16[1] = -2LL;
  v3 = a2;
  if ( a3 != 24 )
  {
    v4 = -2147024809;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      v5 = 79;
LABEL_4:
      Template_qqq((__int64)this, &MinInput_Warning_CheckResult, 0, v5, 87);
      return v4;
    }
    return v4;
  }
  v4 = 0;
  switch ( *a2 )
  {
    case 0:
      CursorNotificationProcessor::ProcessVisibilityChangedNotification(this, a2[2] != 0);
      return v4;
    case 1:
      v16[0] = 0LL;
      v12 = (*(__int64 (__fastcall **)(_QWORD, _QWORD *))(**(_QWORD **)this + 40LL))(*(_QWORD *)this, v16);
      if ( v12 >= 0 )
      {
        v12 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)v16[0] + 24LL))(
                v16[0],
                (unsigned int)v3[2],
                (unsigned int)v3[3]);
        if ( v12 >= 0 || (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
          goto LABEL_31;
        v14 = 152;
      }
      else
      {
        if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
        {
LABEL_31:
          v11 = v16[0];
          v16[0] = 0LL;
LABEL_32:
          if ( v11 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
          return v4;
        }
        v14 = 150;
      }
      Template_qqq(v13, &MinInput_Warning_CheckResult, 0, v14, v12);
      goto LABEL_31;
    case 2:
      v17 = 0LL;
      v8 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)this + 40LL))(*(_QWORD *)this, &v17);
      if ( v8 >= 0 )
      {
        v8 = (*(__int64 (__fastcall **)(__int64, _DWORD *))(*(_QWORD *)v17 + 96LL))(v17, v3 + 2);
        if ( v8 >= 0 || (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
          goto LABEL_23;
        v10 = 170;
      }
      else
      {
        if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
        {
LABEL_23:
          v11 = v17;
          v17 = 0LL;
          goto LABEL_32;
        }
        v10 = 168;
      }
      Template_qqq(v9, &MinInput_Warning_CheckResult, 0, v10, v8);
      goto LABEL_23;
    case 3:
      LOBYTE(a2) = a2[2] != 0;
      v6 = (*(__int64 (__fastcall **)(_QWORD, _DWORD *, _QWORD))(**(_QWORD **)this + 48LL))(
             *(_QWORD *)this,
             a2,
             *((_QWORD *)v3 + 2));
      if ( v6 < 0 && (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
        Template_qqq(v7, &MinInput_Warning_CheckResult, 0, 136, v6);
      break;
    default:
      v4 = -2147024809;
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      {
        Template_qqq((unsigned int)(*a2 - 2), &MinInput_Warning_CheckResult, 0, 118, 87);
        if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
        {
          v5 = 83;
          goto LABEL_4;
        }
      }
      break;
  }
  return v4;
}

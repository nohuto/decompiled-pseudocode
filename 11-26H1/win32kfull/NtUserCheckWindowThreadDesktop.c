/*
 * XREFs of NtUserCheckWindowThreadDesktop @ 0x1402B01C0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     GetConsoleDesktop @ 0x1401C6DA0 (GetConsoleDesktop.c)
 *     Feature_NoEndTaskCriticalProcess__private_IsEnabledDeviceUsageNoInline @ 0x1402AF1F4 (Feature_NoEndTaskCriticalProcess__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall NtUserCheckWindowThreadDesktop(__int64 a1, unsigned int a2)
{
  int v4; // edi
  __int64 v5; // rcx
  __int64 v6; // rbx
  __int64 v7; // rsi
  _QWORD v9[5]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v10; // [rsp+60h] [rbp+18h] BYREF
  __int64 v11; // [rsp+68h] [rbp+20h] BYREF

  v4 = 0;
  EnterSharedCrit(0LL, 1LL);
  v6 = ValidateHwnd(a1);
  if ( v6 )
  {
    v7 = PtiFromThreadId(a2);
    if ( v7 )
    {
      if ( (unsigned int)Feature_NoEndTaskCriticalProcess__private_IsEnabledDeviceUsageNoInline() )
      {
        if ( *(_QWORD *)(v6 + 16) == v7 || *(_QWORD *)(v6 + 24) == *(_QWORD *)(v7 + 488) )
          v4 = 1;
      }
      else
      {
        v4 = ValidatePwndDesktop(v6, v7);
      }
    }
    else
    {
      v11 = 0LL;
      v10 = 0LL;
      if ( (int)GetConsoleDesktop(a2, v9, &v10, &v11) < 0 )
        UserSetLastError(87);
      else
        LOBYTE(v4) = *(_QWORD *)(v6 + 24) == v10;
    }
  }
  UserSessionSwitchLeaveCrit(v5);
  return v4;
}

/*
 * XREFs of NtUserNotifyIMEStatus @ 0x1C00473B0
 * Callers:
 *     <none>
 * Callees:
 *     xxxNotifyIMEStatus @ 0x1C0047454 (xxxNotifyIMEStatus.c)
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 */

__int64 __fastcall NtUserNotifyIMEStatus(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  unsigned int v9; // ebx
  __int64 v10; // rdx
  __int64 v11; // rcx
  _QWORD v13[5]; // [rsp+20h] [rbp-28h] BYREF

  EnterCrit(1LL);
  v6 = ValidateHwnd(a1);
  v9 = 0;
  if ( v6 )
  {
    v13[0] = *(_QWORD *)(gptiCurrent + 376LL);
    *(_QWORD *)(gptiCurrent + 376LL) = v13;
    v13[1] = v6;
    ++*(_DWORD *)(v6 + 8);
    if ( (*gpsi & 4) != 0 )
    {
      xxxNotifyIMEStatus(v6, a2, a3);
      v9 = 1;
    }
    else
    {
      UserSetLastError(120LL);
    }
    ThreadUnlock1(v11, v10);
  }
  UserSessionSwitchLeaveCrit(v8, v7);
  return v9;
}

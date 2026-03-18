/*
 * XREFs of NtUserGetWindowFeedbackSetting @ 0x1402B5450
 * Callers:
 *     <none>
 * Callees:
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x1400208C4 (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     SetLastNtError @ 0x14005AAC4 (SetLastNtError.c)
 *     FeedbackGetWindowSetting @ 0x1401FFAEC (FeedbackGetWindowSetting.c)
 *     ?ProbeAlignment@?$UserModePointer@I@@QEBAX_KK@Z @ 0x1402AE4CC (-ProbeAlignment@-$UserModePointer@I@@QEBAX_KK@Z.c)
 *     RtlReadULongFromUser @ 0x1403E2204 (RtlReadULongFromUser.c)
 *     RtlWriteULongToUser @ 0x1403E236C (RtlWriteULongToUser.c)
 */

__int64 __fastcall NtUserGetWindowFeedbackSetting(__int64 a1, int a2, int a3, __int64 a4, _DWORD *Address)
{
  __int64 v9; // rcx
  __int64 v10; // r12
  int WindowSetting; // ebx
  unsigned int ULongFromUser; // esi
  _DWORD *v13; // rdi
  _QWORD v15[4]; // [rsp+20h] [rbp-48h] BYREF
  int v16; // [rsp+44h] [rbp-24h]
  __int64 v17; // [rsp+88h] [rbp+20h] BYREF

  v17 = a4;
  EnterLeaveCritShared::EnterLeaveCritShared(v15, 1LL);
  v10 = ValidateHwnd(a1);
  if ( v10 )
  {
    if ( a2 && a2 <= 13 && a4 && (a3 & 0xFFFFFFFE) == 0 )
    {
      UserModePointer<unsigned int>::ProbeAlignment(&v17);
      ULongFromUser = RtlReadULongFromUser(a4);
      if ( ULongFromUser != 4 )
      {
        UserModePointer<unsigned int>::ProbeAlignment(&v17);
        RtlWriteULongToUser(a4, 4LL);
      }
      v13 = Address;
      if ( Address && ULongFromUser < 4 )
      {
        WindowSetting = 0;
        v16 = 0;
        UserSetLastError(122);
      }
      else
      {
        LODWORD(v15[0]) = 0;
        WindowSetting = FeedbackGetWindowSetting(v10, (unsigned int)a2, a3, v15);
        if ( v13 )
        {
          ProbeForWrite(v13, 4uLL, 4u);
          v9 = LODWORD(v15[0]);
          *v13 = v15[0];
        }
      }
    }
    else
    {
      WindowSetting = 0;
      UserSetLastError(87);
    }
  }
  else
  {
    WindowSetting = 0;
  }
  UserSessionSwitchLeaveCrit(v9);
  return WindowSetting;
}

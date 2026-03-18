/*
 * XREFs of NtUserGetClipboardData @ 0x1C014AE60
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 *     PushW32ThreadLock @ 0x1C0051990 (PushW32ThreadLock.c)
 *     PopAndFreeW32ThreadLock @ 0x1C0064370 (PopAndFreeW32ThreadLock.c)
 *     ?InForegroundQueue@@YAHPEAUtagTHREADINFO@@@Z @ 0x1C008CE08 (-InForegroundQueue@@YAHPEAUtagTHREADINFO@@@Z.c)
 *     CheckClipboardAccess @ 0x1C00DBFC0 (CheckClipboardAccess.c)
 *     xxxGetClipboardData @ 0x1C014B3E8 (xxxGetClipboardData.c)
 */

__int64 __fastcall NtUserGetClipboardData(int a1, _OWORD *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  void *v6; // r14
  int v7; // eax
  __int64 ClipboardData; // rbx
  __int128 v10; // [rsp+38h] [rbp-30h]
  _QWORD v11[3]; // [rsp+48h] [rbp-20h] BYREF

  v10 = 0uLL;
  EnterCrit(0LL, 1LL);
  v6 = (void *)CheckClipboardAccess();
  if ( !v6 )
    goto LABEL_13;
  if ( (*(_DWORD *)(gptiCurrent + 440LL) & 0x20000000) != 0 )
    v7 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 376LL) + 728LL) + 24LL) & 2;
  else
    v7 = 0;
  if ( v7 )
  {
    UserSetLastError(5);
LABEL_13:
    ClipboardData = 0LL;
    goto LABEL_11;
  }
  if ( !*(_DWORD *)(*(_QWORD *)(gptiCurrent + 376LL) + 836LL)
    || (unsigned int)InForegroundQueue(gptiCurrent) && (a1 == 1 || a1 == 13) )
  {
    PushW32ThreadLock((__int64)v6, v11, UserDereferenceObject);
    ObfReferenceObject(v6);
    LODWORD(v10) = a1;
    ClipboardData = xxxGetClipboardData((struct tagWINDOWSTATION *)v6);
    if ( ClipboardData )
    {
      if ( (unsigned __int64)a2 >= W32UserProbeAddress )
        a2 = (_OWORD *)W32UserProbeAddress;
      *a2 = v10;
    }
    PopAndFreeW32ThreadLock((__int64)v11);
  }
  else
  {
    ClipboardData = 0LL;
    UserSetLastError(5);
  }
LABEL_11:
  UserSessionSwitchLeaveCrit(v5, v4);
  return ClipboardData;
}

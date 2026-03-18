/*
 * XREFs of NtUserGetClipboardData @ 0x1C0150380
 * Callers:
 *     <none>
 * Callees:
 *     PopAndFreeW32ThreadLock @ 0x1C00579A0 (PopAndFreeW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C009F990 (PushW32ThreadLock.c)
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     CheckClipboardAccess @ 0x1C00F9194 (CheckClipboardAccess.c)
 *     ?InForegroundQueue@@YAHPEBUtagTHREADINFO@@H@Z @ 0x1C011E870 (-InForegroundQueue@@YAHPEBUtagTHREADINFO@@H@Z.c)
 *     xxxGetClipboardData @ 0x1C0150964 (xxxGetClipboardData.c)
 */

__int64 __fastcall NtUserGetClipboardData(int a1, _OWORD *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r9
  void *v11; // r14
  int v12; // eax
  __int64 v13; // rdx
  __int64 ClipboardData; // rbx
  __int64 v15; // r8
  __int64 v16; // r9
  __int128 v18; // [rsp+38h] [rbp-30h]
  _QWORD v19[3]; // [rsp+48h] [rbp-20h] BYREF

  v18 = 0uLL;
  EnterCrit(0LL, 1LL);
  v11 = (void *)CheckClipboardAccess(v5, v4, v6, v7);
  if ( !v11 )
    goto LABEL_13;
  if ( (*(_DWORD *)(gptiCurrent + 440LL) & 0x20000000) != 0 )
    v12 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 376LL) + 720LL) + 24LL) & 2;
  else
    v12 = 0;
  if ( v12 )
  {
    UserSetLastError(5LL);
LABEL_13:
    ClipboardData = 0LL;
    goto LABEL_11;
  }
  if ( !*(_DWORD *)(*(_QWORD *)(gptiCurrent + 376LL) + 828LL)
    || (unsigned int)InForegroundQueue(gptiCurrent, 1) && (a1 == 1 || a1 == 13) )
  {
    PushW32ThreadLock((__int64)v11, v19, UserDereferenceObject, v10);
    ObfReferenceObject(v11);
    LODWORD(v18) = a1;
    ClipboardData = xxxGetClipboardData((struct tagWINDOWSTATION *)v11);
    if ( ClipboardData )
    {
      if ( (unsigned __int64)a2 >= W32UserProbeAddress )
        a2 = (_OWORD *)W32UserProbeAddress;
      *a2 = v18;
    }
    PopAndFreeW32ThreadLock((__int64)v19, v13, v15, v16);
  }
  else
  {
    ClipboardData = 0LL;
    UserSetLastError(5LL);
  }
LABEL_11:
  UserSessionSwitchLeaveCrit(v9, v8);
  return ClipboardData;
}

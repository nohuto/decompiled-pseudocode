/*
 * XREFs of ?xxxCleanupDdeConv@@YAXPEAUtagWND@@@Z @ 0x1402CD114
 * Callers:
 *     xxxDDETrackGetMessageHook @ 0x140290AA0 (xxxDDETrackGetMessageHook.c)
 * Callees:
 *     ??$ManualUnlock@X@?$Win32HMThreadLockBase@UtagMENU@@$0A@$00@@QEAAPEAUtagMENU@@XZ @ 0x14000A29C (--$ManualUnlock@X@-$Win32HMThreadLockBase@UtagMENU@@$0A@$00@@QEAAPEAUtagMENU@@XZ.c)
 *     ??$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14002AEA0 (--$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     _GetProp @ 0x14003A810 (_GetProp.c)
 *     ??1?$Win32HMThreadLockBase@UtagDDECONV@@$0A@$00@@QEAA@XZ @ 0x1402CC428 (--1-$Win32HMThreadLockBase@UtagDDECONV@@$0A@$00@@QEAA@XZ.c)
 *     ?xxxFreeListFree@@YAXPEAUtagFREELIST@@@Z @ 0x1402CD650 (-xxxFreeListFree@@YAXPEAUtagFREELIST@@@Z.c)
 *     xxxFreeDdeConv @ 0x1402CE020 (xxxFreeDdeConv.c)
 */

void __fastcall xxxCleanupDdeConv(struct tagWND *a1, __int64 a2)
{
  __int64 UserSessionState; // rax
  __int64 i; // rbx
  __int64 v5; // rcx
  bool v6; // zf
  int v7; // edi
  struct tagTHREADINFO *v8; // rax
  struct tagFREELIST *v9; // rcx
  ULONG_PTR BugCheckParameter3[3]; // [rsp+20h] [rbp-18h] BYREF

LABEL_1:
  UserSessionState = W32GetUserSessionState(a1, a2);
  for ( i = GetProp((__int64)a1, *(unsigned __int16 *)(UserSessionState + 41376), 1u); i; i = *(_QWORD *)(i + 24) )
  {
    if ( (*(_BYTE *)(i + 80) & 7) == 7 )
    {
      v5 = *(_QWORD *)(i + 32);
      if ( (*(_DWORD *)(v5 + 80) & 2) != 0 )
      {
        v6 = *(_QWORD *)(i + 72) == 0LL;
        BugCheckParameter3[1] = 0LL;
        BugCheckParameter3[0] = -1LL;
        if ( v6 )
        {
          v7 = 0;
        }
        else
        {
          v7 = 1;
          v8 = PtiCurrent(v5);
          Win32HM_LockIntoThread<0>((__int64)v8, i, BugCheckParameter3);
          v9 = *(struct tagFREELIST **)(i + 72);
          *(_QWORD *)(i + 72) = 0LL;
          xxxFreeListFree(v9);
        }
        if ( (*(_BYTE *)(_HMPheFromObject(i) + 25) & 1) == 0 )
        {
          *(_QWORD *)(i + 32) = xxxFreeDdeConv(*(struct tagDDECONV **)(i + 32));
          xxxFreeDdeConv((struct tagDDECONV *)i);
        }
        if ( v7 )
          Win32HMThreadLockBase<tagMENU,0,1>::ManualUnlock<void>(BugCheckParameter3);
        Win32HMThreadLockBase<tagDDECONV,0,1>::~Win32HMThreadLockBase<tagDDECONV,0,1>(BugCheckParameter3);
        goto LABEL_1;
      }
    }
  }
}

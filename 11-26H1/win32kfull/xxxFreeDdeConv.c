/*
 * XREFs of xxxFreeDdeConv @ 0x1402CE020
 * Callers:
 *     xxxDDETrackGetMessageHook @ 0x140290AA0 (xxxDDETrackGetMessageHook.c)
 *     ?xxxCleanupDdeConv@@YAXPEAUtagWND@@@Z @ 0x1402CD114 (-xxxCleanupDdeConv@@YAXPEAUtagWND@@@Z.c)
 *     xxxCleanupAndFreeDdeConv @ 0x1402CDDB0 (xxxCleanupAndFreeDdeConv.c)
 *     xxxDDETrackWindowDying @ 0x1402CDDE4 (xxxDDETrackWindowDying.c)
 * Callees:
 *     _PostMessage @ 0x14001F780 (_PostMessage.c)
 *     ??$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x140032860 (--$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ??$ManualUnlock@X@?$Win32HMThreadLockBase@UtagCURSOR@@$00$00@@QEAAPEAUtagCURSOR@@XZ @ 0x140034424 (--$ManualUnlock@X@-$Win32HMThreadLockBase@UtagCURSOR@@$00$00@@QEAAPEAUtagCURSOR@@XZ.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??1?$Win32HMThreadLockBase@UtagMONITOR@@$00$00@@QEAA@XZ @ 0x1401EE9DC (--1-$Win32HMThreadLockBase@UtagMONITOR@@$00$00@@QEAA@XZ.c)
 *     ?PopState@@YAXPEAUtagDDECONV@@@Z @ 0x1402CCA14 (-PopState@@YAXPEAUtagDDECONV@@@Z.c)
 *     ?UnlinkConv@@YAPEAUtagDDECONV@@PEAU1@@Z @ 0x1402CCB9C (-UnlinkConv@@YAPEAUtagDDECONV@@PEAU1@@Z.c)
 */

struct tagDDECONV *__fastcall xxxFreeDdeConv(struct tagDDECONV *a1, __int64 a2)
{
  struct tagDDECONV *v2; // rbx
  __int64 v3; // rcx
  struct tagTHREADINFO *v4; // rax
  __int64 *v5; // r8
  __int64 v6; // r8
  __int64 v7; // rax
  __int64 v8; // rcx
  ULONG_PTR BugCheckParameter3[3]; // [rsp+20h] [rbp-18h] BYREF

  v2 = a1;
  if ( !a1 )
    return 0LL;
  if ( (*((_DWORD *)a1 + 20) & 2) == 0 && (*(_BYTE *)(_HMPheFromObject(*((_QWORD *)a1 + 6)) + 25) & 1) == 0 )
  {
    v4 = PtiCurrent(v3);
    Win32HM_LockIntoThread<1>((__int64)v4, (__int64)v2, (__int64 *)BugCheckParameter3);
    v5 = (__int64 *)*((_QWORD *)v2 + 5);
    if ( v5 )
      v6 = *v5;
    else
      LODWORD(v6) = 0;
    PostMessage(*((_QWORD *)v2 + 6), 993, v6, 0);
    v2 = (struct tagDDECONV *)Win32HMThreadLockBase<tagCURSOR,1,1>::ManualUnlock<void>(BugCheckParameter3);
    if ( !v2 )
    {
      Win32HMThreadLockBase<tagMONITOR,1,1>::~Win32HMThreadLockBase<tagMONITOR,1,1>(BugCheckParameter3);
      return 0LL;
    }
    Win32HMThreadLockBase<tagMONITOR,1,1>::~Win32HMThreadLockBase<tagMONITOR,1,1>(BugCheckParameter3);
  }
  if ( *((_QWORD *)v2 + 4)
    && (_InterlockedCompareExchange((volatile signed __int32 *)(*((_QWORD *)v2 + 2) + 520LL), 0, 0) & 1) != 0 )
  {
    *(_DWORD *)(*((_QWORD *)v2 + 4) + 80LL) |= 2u;
  }
  UnlinkConv(v2, a2);
  v7 = *((_QWORD *)v2 + 11);
  if ( v7 )
  {
    --*(_WORD *)(v7 + 90);
    v8 = *((_QWORD *)v2 + 11);
    if ( !*(_WORD *)(v8 + 90) && !*(_WORD *)(v8 + 88) )
    {
      SeDeleteClientSecurity(v8 + 16);
      Win32FreePool(*((void **)v2 + 11));
    }
    *((_QWORD *)v2 + 11) = 0LL;
  }
  HMAssignmentUnlock((char *)v2 + 32);
  HMAssignmentUnlock((char *)v2 + 48);
  HMAssignmentUnlock((char *)v2 + 40);
  if ( !(unsigned int)HMMarkObjectDestroy(v2) )
    return v2;
  while ( *((_QWORD *)v2 + 7) )
    PopState(v2);
  HMFreeObject(v2);
  return 0LL;
}

/*
 * XREFs of ?xxxCloseApplication@@YAXPEAUtagTHREADINFO@@@Z @ 0x1402E1990
 * Callers:
 *     xxxRealDefWindowProc @ 0x14012F36C (xxxRealDefWindowProc.c)
 * Callees:
 *     ??1?$Win32HMOptionalThreadLockAlways@UtagMENU@@@@QEAA@XZ @ 0x14000A21C (--1-$Win32HMOptionalThreadLockAlways@UtagMENU@@@@QEAA@XZ.c)
 *     ??$ManualUnlock@X@?$Win32HMThreadLockBase@UtagMENU@@$0A@$00@@QEAAPEAUtagMENU@@XZ @ 0x14000A29C (--$ManualUnlock@X@-$Win32HMThreadLockBase@UtagMENU@@$0A@$00@@QEAAPEAUtagMENU@@XZ.c)
 *     _PostMessage @ 0x14001F780 (_PostMessage.c)
 *     ??$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14002AEA0 (--$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ?xxxSetFocus@@YAPEAUtagWND@@PEAU1@@Z @ 0x14012B3C8 (-xxxSetFocus@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     GetNonChildAncestor @ 0x14017A1F0 (GetNonChildAncestor.c)
 */

void __fastcall xxxCloseApplication(struct tagTHREADINFO *a1)
{
  struct tagTHREADINFO *v1; // r9
  __int64 v2; // rcx
  struct tagWND *v3; // rbx
  __int64 v4; // rcx
  ULONG_PTR BugCheckParameter3[3]; // [rsp+20h] [rbp-18h] BYREF

  v1 = a1;
  v2 = *((_QWORD *)a1 + 58);
  v3 = *(struct tagWND **)(v2 + 128);
  if ( v3 && (*(_BYTE *)(*(_QWORD *)(*((_QWORD *)v3 + 17) + 8LL) + 9LL) & 2) == 0 )
  {
    if ( (v4 = *(_QWORD *)(v2 + 120)) != 0 && (struct tagWND *)GetNonChildAncestor(v4) == v3
      || (Win32HM_LockIntoThread<0>((__int64)v1, (__int64)v3, BugCheckParameter3),
          xxxSetFocus(v3),
          v3 = (struct tagWND *)Win32HMThreadLockBase<tagMENU,0,1>::ManualUnlock<void>(BugCheckParameter3),
          Win32HMOptionalThreadLockAlways<tagMENU>::~Win32HMOptionalThreadLockAlways<tagMENU>(BugCheckParameter3),
          v3) )
    {
      PostMessage((int)v3, 274, 61536, 0);
    }
  }
}

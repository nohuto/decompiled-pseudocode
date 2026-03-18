/*
 * XREFs of xxxDDETrackWindowDying @ 0x1402CDDE4
 * Callers:
 *     ?xxxFreeWindow_Phase2@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@@Z @ 0x140044D70 (-xxxFreeWindow_Phase2@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@@Z.c)
 * Callees:
 *     ??$ManualUnlock@X@?$Win32HMThreadLockBase@UtagMENU@@$0A@$00@@QEAAPEAUtagMENU@@XZ @ 0x14000A29C (--$ManualUnlock@X@-$Win32HMThreadLockBase@UtagMENU@@$0A@$00@@QEAAPEAUtagMENU@@XZ.c)
 *     _PostMessage @ 0x14001F780 (_PostMessage.c)
 *     ??$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14002AEA0 (--$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ??$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x140032860 (--$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ??$ManualUnlock@X@?$Win32HMThreadLockBase@UtagCURSOR@@$00$00@@QEAAPEAUtagCURSOR@@XZ @ 0x140034424 (--$ManualUnlock@X@-$Win32HMThreadLockBase@UtagCURSOR@@$00$00@@QEAAPEAUtagCURSOR@@XZ.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     PopAndFreeW32ThreadLock @ 0x14004B8D0 (PopAndFreeW32ThreadLock.c)
 *     GetAppCompatFlags2 @ 0x14004E590 (GetAppCompatFlags2.c)
 *     ??1?$Win32HMThreadLockBase@UtagMONITOR@@$00$00@@QEAA@XZ @ 0x1401EE9DC (--1-$Win32HMThreadLockBase@UtagMONITOR@@$00$00@@QEAA@XZ.c)
 *     ??1?$Win32HMThreadLockBase@UtagDDECONV@@$0A@$00@@QEAA@XZ @ 0x1402CC428 (--1-$Win32HMThreadLockBase@UtagDDECONV@@$0A@$00@@QEAA@XZ.c)
 *     ?UnlinkConv@@YAPEAUtagDDECONV@@PEAU1@@Z @ 0x1402CCB9C (-UnlinkConv@@YAPEAUtagDDECONV@@PEAU1@@Z.c)
 *     xxxFreeDdeConv @ 0x1402CE020 (xxxFreeDdeConv.c)
 */

void __fastcall xxxDDETrackWindowDying(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  __int64 v3; // rbx
  __int64 v4; // r14
  struct tagTHREADINFO *v5; // rax
  __int64 v6; // rcx
  struct tagTHREADINFO *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 *v11; // rax
  __int64 v12; // r8
  __int128 *v13; // rcx
  int v14; // ebx
  __int64 v15; // rsi
  struct tagTHREADINFO *v16; // rax
  struct tagTHREADINFO *v17; // rax
  int v18; // eax
  struct tagDDECONV *v19; // rax
  ULONG_PTR BugCheckParameter3[2]; // [rsp+20h] [rbp-29h] BYREF
  ULONG_PTR v21[2]; // [rsp+30h] [rbp-19h] BYREF
  __int128 v22; // [rsp+40h] [rbp-9h] BYREF
  __int64 v23; // [rsp+50h] [rbp+7h]
  __int128 v24; // [rsp+58h] [rbp+Fh] BYREF
  __int64 v25; // [rsp+68h] [rbp+1Fh]

  if ( a2 )
  {
    v2 = a2;
    do
    {
      v3 = *(_QWORD *)(v2 + 24);
      v4 = 0LL;
      v5 = PtiCurrent(a1);
      Win32HM_LockIntoThread<1>((__int64)v5, v3, (__int64 *)v21);
      v7 = PtiCurrent(v6);
      Win32HM_LockIntoThread<0>((__int64)v7, v2, BugCheckParameter3);
      if ( (*(_DWORD *)(v2 + 80) & 2) == 0 )
      {
        if ( (GetAppCompatFlags2(1024LL) & 0x20) == 0
          || (v9 = *(_QWORD *)(v2 + 48)) == 0
          || (v10 = *(_QWORD *)(v9 + 16), *(_DWORD *)(v10 + 664) > 0x400u)
          || (*(_DWORD *)(v10 + 680) & 0x20) == 0 )
        {
          v11 = *(__int64 **)(v2 + 40);
          if ( v11 )
            v12 = *v11;
          else
            LODWORD(v12) = 0;
          PostMessage(*(_QWORD *)(v2 + 48), 993, v12, 0);
        }
      }
      v13 = *(__int128 **)(v2 + 32);
      if ( v13 )
      {
        if ( (v13[5] & 0xA) != 0 )
        {
          v4 = *((_QWORD *)v13 + 9);
          v14 = 1;
          *((_QWORD *)v13 + 9) = 0LL;
        }
        else
        {
          v14 = 0;
        }
        *(_DWORD *)(*(_QWORD *)(v2 + 32) + 80LL) |= 6u;
      }
      else
      {
        v14 = 1;
      }
      v15 = *(_QWORD *)(v2 + 72);
      *(_QWORD *)(v2 + 72) = 0LL;
      v25 = -1LL;
      v24 = 0LL;
      if ( v15 )
      {
        v16 = PtiCurrent((__int64)v13);
        *(_QWORD *)&v24 = *((_QWORD *)v16 + 47);
        v13 = &v24;
        *((_QWORD *)v16 + 47) = &v24;
        *((_QWORD *)&v24 + 1) = v15;
        v25 = (__int64)xxxFreeListFree;
      }
      v23 = -1LL;
      v22 = 0LL;
      if ( v4 )
      {
        v17 = PtiCurrent((__int64)v13);
        *(_QWORD *)&v22 = *((_QWORD *)v17 + 47);
        *((_QWORD *)v17 + 47) = &v22;
        *((_QWORD *)&v22 + 1) = v4;
        v23 = (__int64)xxxFreeListFree;
      }
      v18 = *(_DWORD *)(v2 + 80);
      if ( (v18 & 2) != 0 && v14 || (v18 & 4) != 0 )
      {
        if ( (*(_BYTE *)(_HMPheFromObject(v2) + 25) & 1) == 0 )
          *(_QWORD *)(v2 + 32) = xxxFreeDdeConv(*(struct tagDDECONV **)(v2 + 32));
        v19 = (struct tagDDECONV *)Win32HMThreadLockBase<tagMENU,0,1>::ManualUnlock<void>(BugCheckParameter3);
        if ( v19 )
          xxxFreeDdeConv(v19);
      }
      else
      {
        UnlinkConv((struct tagDDECONV *)v2, v8);
        Win32HMThreadLockBase<tagMENU,0,1>::ManualUnlock<void>(BugCheckParameter3);
      }
      v2 = Win32HMThreadLockBase<tagCURSOR,1,1>::ManualUnlock<void>(v21);
      if ( v23 != -1 )
      {
        PopAndFreeW32ThreadLock((__int64)&v22);
        v23 = -1LL;
      }
      if ( v25 != -1 )
      {
        PopAndFreeW32ThreadLock((__int64)&v24);
        v25 = -1LL;
      }
      Win32HMThreadLockBase<tagDDECONV,0,1>::~Win32HMThreadLockBase<tagDDECONV,0,1>(BugCheckParameter3);
      Win32HMThreadLockBase<tagMONITOR,1,1>::~Win32HMThreadLockBase<tagMONITOR,1,1>(v21);
    }
    while ( v2 );
  }
}

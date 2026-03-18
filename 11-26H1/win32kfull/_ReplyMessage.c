/*
 * XREFs of _ReplyMessage @ 0x1400550E0
 * Callers:
 *     NtUserReplyMessage @ 0x1400550A0 (NtUserReplyMessage.c)
 * Callees:
 *     ??$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x140032860 (--$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??1?$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ @ 0x140039F3C (--1-$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ.c)
 *     xxxInterSendMsgEx @ 0x140051EE4 (xxxInterSendMsgEx.c)
 *     SetWakeBit @ 0x140055960 (SetWakeBit.c)
 */

__int64 __fastcall ReplyMessage(__int64 a1)
{
  struct tagTHREADINFO *v2; // r9
  __int64 v3; // rbx
  int v4; // edx
  __int64 v5; // rcx
  int v7; // edx
  bool v8; // cf
  __int64 v9; // rdx
  int v10; // eax
  ULONG_PTR BugCheckParameter3[2]; // [rsp+50h] [rbp-48h] BYREF
  __int64 v12; // [rsp+60h] [rbp-38h] BYREF
  __int64 v13; // [rsp+68h] [rbp-30h]
  __int64 v14; // [rsp+70h] [rbp-28h]
  __int64 v15; // [rsp+78h] [rbp-20h]
  __int128 v16; // [rsp+80h] [rbp-18h]

  v2 = PtiCurrent(a1);
  v3 = *((_QWORD *)v2 + 68);
  if ( !v3 )
    return 0LL;
  v4 = *(_DWORD *)(v3 + 84);
  if ( (v4 & 1) != 0 )
    return 0LL;
  v5 = *(_QWORD *)(v3 + 32);
  if ( v5 )
  {
    *(_QWORD *)(v3 + 72) = a1;
    *(_DWORD *)(v3 + 84) = v4 | 1;
    SetWakeBit(v5, 512LL);
  }
  else if ( (v4 & 0x100) != 0 )
  {
    v7 = v4 | 1;
    HIDWORD(v12) = 0;
    *(_DWORD *)(v3 + 84) = v7;
    v16 = 0LL;
    if ( (v7 & 4) == 0 )
    {
      v8 = (v7 & 0x400) != 0;
      v15 = a1;
      v9 = *(_QWORD *)(v3 + 112);
      v10 = 33;
      if ( v8 )
        v10 = 289;
      LODWORD(v12) = v10;
      v13 = *(_QWORD *)(v3 + 48);
      v14 = *(_QWORD *)(v3 + 56);
      Win32HM_LockIntoThread<1>((__int64)v2, v9, (__int64 *)BugCheckParameter3);
      xxxInterSendMsgEx(
        *(struct tagWND **)(v3 + 112),
        *(_DWORD *)(v3 + 104),
        0LL,
        0LL,
        0,
        *(_QWORD *)(v3 + 64),
        (__int64)&v12,
        1,
        (*(_WORD *)(v3 + 86) & 1) == 0);
      Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((__int64 *)BugCheckParameter3);
    }
  }
  return 1LL;
}

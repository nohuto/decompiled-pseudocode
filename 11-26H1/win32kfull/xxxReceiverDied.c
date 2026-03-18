/*
 * XREFs of xxxReceiverDied @ 0x140054ED4
 * Callers:
 *     ?InterQueueMsgCleanup@@YAXK@Z @ 0x1401F1FAC (-InterQueueMsgCleanup@@YAXK@Z.c)
 *     SuspendThreadQueue @ 0x1402A7460 (SuspendThreadQueue.c)
 * Callees:
 *     ??0?$Win32HMThreadLockBase@UtagMENU@@$00$0A@@@QEAA@PEAUtagMENU@@@Z @ 0x14000E1F8 (--0-$Win32HMThreadLockBase@UtagMENU@@$00$0A@@@QEAA@PEAUtagMENU@@@Z.c)
 *     ??1?$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ @ 0x140039F3C (--1-$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ.c)
 *     xxxInterSendMsgEx @ 0x140051EE4 (xxxInterSendMsgEx.c)
 *     SetWakeBit @ 0x140055960 (SetWakeBit.c)
 *     UnlinkSendListSms @ 0x140056568 (UnlinkSendListSms.c)
 */

__int64 __fastcall xxxReceiverDied(__int64 a1)
{
  __int64 v2; // rcx
  __int64 result; // rax
  int v4; // ecx
  _QWORD *v5; // rax
  __int64 v6; // r8
  _QWORD *v7; // rdx
  int v8; // ecx
  __int64 v9; // rdx
  int v10; // eax
  ULONG_PTR BugCheckParameter3[2]; // [rsp+50h] [rbp-48h] BYREF
  __int64 v12; // [rsp+60h] [rbp-38h] BYREF
  __int64 v13; // [rsp+68h] [rbp-30h]
  __int64 v14; // [rsp+70h] [rbp-28h]
  __int64 v15; // [rsp+78h] [rbp-20h]
  __int128 v16; // [rsp+80h] [rbp-18h]

  v2 = *(_QWORD *)(a1 + 40);
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_DWORD *)(a1 + 84) |= 2u;
  if ( (_InterlockedCompareExchange((volatile signed __int32 *)(v2 + 520), 0, 0) & 1) != 0 )
  {
    *(_DWORD *)(a1 + 84) &= ~0x4000u;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
  else
  {
    if ( (*(_DWORD *)(a1 + 84) & 0x8010) == 0 )
    {
      --*(_DWORD *)(v2 + 568);
      v5 = (_QWORD *)(a1 + 16);
      v6 = *(_QWORD *)(a1 + 16);
      if ( *(_QWORD *)(v6 + 8) != a1 + 16 || (v7 = *(_QWORD **)(a1 + 24), (_QWORD *)*v7 != v5) )
        __fastfail(3u);
      *v7 = v6;
      *(_QWORD *)(v6 + 8) = v7;
      *v5 = 0LL;
    }
    if ( *(_QWORD *)(v2 + 552) == v2 + 552 )
    {
      _InterlockedAnd((volatile signed __int32 *)(*(_QWORD *)(v2 + 480) + 8LL), 0xFFFFFFBF);
      _InterlockedAnd((volatile signed __int32 *)(*(_QWORD *)(v2 + 480) + 4LL), 0xFFFFFFBF);
    }
  }
  result = *(_QWORD *)(a1 + 32);
  v4 = *(_DWORD *)(a1 + 84);
  if ( result )
  {
    if ( (v4 & 1) != 0 )
    {
      *(_DWORD *)(a1 + 84) = v4 & 0xFFFFFFF7;
    }
    else
    {
      *(_DWORD *)(a1 + 84) = v4 | 0x8001;
      *(_QWORD *)(a1 + 72) = 0LL;
      *(_QWORD *)(a1 + 40) = 0LL;
    }
    SetWakeBit(result, 512LL);
    return HMAssignmentUnlock(a1 + 112);
  }
  else
  {
    if ( (v4 & 4) == 0 )
    {
      result = v4 & 0x101;
      if ( (_DWORD)result == 256 )
      {
        v8 = v4 | 1;
        HIDWORD(v12) = 0;
        *(_DWORD *)(a1 + 84) = v8;
        v9 = *(_QWORD *)(a1 + 112);
        v10 = 33;
        v15 = 0LL;
        if ( (v8 & 0x400) != 0 )
          v10 = 289;
        LODWORD(v12) = v10;
        v13 = *(_QWORD *)(a1 + 48);
        v14 = *(_QWORD *)(a1 + 56);
        v16 = 0LL;
        Win32HMThreadLockBase<tagMENU,1,0>::Win32HMThreadLockBase<tagMENU,1,0>(BugCheckParameter3, v9);
        xxxInterSendMsgEx(
          *(struct tagWND **)(a1 + 112),
          *(_DWORD *)(a1 + 104),
          0LL,
          0LL,
          0,
          *(_QWORD *)(a1 + 64),
          (__int64)&v12,
          1,
          *(_DWORD *)(a1 + 84) & 0x10000);
        result = Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((__int64 *)BugCheckParameter3);
      }
    }
    if ( (*(_DWORD *)(a1 + 84) & 0x4000) == 0 )
      return UnlinkSendListSms(a1);
  }
  return result;
}

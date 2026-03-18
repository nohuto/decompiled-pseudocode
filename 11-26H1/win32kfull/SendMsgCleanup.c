/*
 * XREFs of SendMsgCleanup @ 0x140056310
 * Callers:
 *     xxxRestoreCsrssThreadDesktop @ 0x140057630 (xxxRestoreCsrssThreadDesktop.c)
 * Callees:
 *     ??0?$Win32HMThreadLockBase@UtagMENU@@$00$0A@@@QEAA@PEAUtagMENU@@@Z @ 0x14000E1F8 (--0-$Win32HMThreadLockBase@UtagMENU@@$00$0A@@@QEAA@PEAUtagMENU@@@Z.c)
 *     ??1?$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ @ 0x140039F3C (--1-$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ.c)
 *     xxxInterSendMsgEx @ 0x140051EE4 (xxxInterSendMsgEx.c)
 *     SetWakeBit @ 0x140055960 (SetWakeBit.c)
 *     UnlinkSendListSms @ 0x140056568 (UnlinkSendListSms.c)
 *     ?SenderDied@@YAXPEAUtagSMS@@@Z @ 0x1400566D4 (-SenderDied@@YAXPEAUtagSMS@@@Z.c)
 */

void __fastcall SendMsgCleanup(__int64 a1, __int64 a2)
{
  _QWORD **v3; // r14
  _QWORD *v4; // rdi
  _QWORD *v5; // rbx
  __int64 v6; // rcx
  int v7; // edx
  __int64 v8; // rcx
  unsigned int v9; // edx
  _QWORD *v10; // rax
  __int64 v11; // r8
  _QWORD *v12; // rdx
  int v13; // edx
  bool v14; // cf
  __int64 v15; // rdx
  int v16; // eax
  ULONG_PTR BugCheckParameter3[2]; // [rsp+50h] [rbp-58h] BYREF
  __int64 v18; // [rsp+60h] [rbp-48h] BYREF
  __int64 v19; // [rsp+68h] [rbp-40h]
  __int64 v20; // [rsp+70h] [rbp-38h]
  __int64 v21; // [rsp+78h] [rbp-30h]
  __int128 v22; // [rsp+80h] [rbp-28h]

  v3 = (_QWORD **)(W32GetUserSessionState(a1, a2) + 69048);
  v4 = *v3;
  while ( v4 != v3 )
  {
    v5 = v4;
    v4 = (_QWORD *)*v4;
    if ( v5[4] == a1 || v5[8] == a1 )
    {
      SenderDied((struct tagSMS *)v5);
    }
    else
    {
      v6 = v5[5];
      if ( v6 == a1 )
      {
        v5[5] = 0LL;
        *((_DWORD *)v5 + 21) |= 2u;
        if ( (_InterlockedCompareExchange((volatile signed __int32 *)(v6 + 520), 0, 0) & 1) != 0 )
        {
          *((_DWORD *)v5 + 21) &= ~0x4000u;
          v7 = *((_DWORD *)v5 + 21);
          v5[2] = 0LL;
        }
        else
        {
          v7 = *((_DWORD *)v5 + 21);
          if ( (v7 & 0x8010) == 0 )
          {
            --*(_DWORD *)(v6 + 568);
            v10 = v5 + 2;
            v11 = v5[2];
            if ( *(_QWORD **)(v11 + 8) != v5 + 2 || (v12 = (_QWORD *)v5[3], (_QWORD *)*v12 != v10) )
              __fastfail(3u);
            *v12 = v11;
            *(_QWORD *)(v11 + 8) = v12;
            v7 = *((_DWORD *)v5 + 21);
            *v10 = 0LL;
          }
          if ( *(_QWORD *)(v6 + 552) == v6 + 552 )
          {
            _InterlockedAnd((volatile signed __int32 *)(*(_QWORD *)(v6 + 480) + 8LL), 0xFFFFFFBF);
            _InterlockedAnd((volatile signed __int32 *)(*(_QWORD *)(v6 + 480) + 4LL), 0xFFFFFFBF);
            v7 = *((_DWORD *)v5 + 21);
          }
        }
        v8 = v5[4];
        if ( v8 )
        {
          if ( (v7 & 1) != 0 )
          {
            v9 = v7 & 0xFFFFFFF7;
          }
          else
          {
            v5[9] = 0LL;
            v9 = v7 | 0x8001;
            v5[5] = 0LL;
          }
          *((_DWORD *)v5 + 21) = v9;
          SetWakeBit(v8, 512LL);
          HMAssignmentUnlock(v5 + 14);
        }
        else
        {
          if ( (v7 & 4) == 0 && (v7 & 0x101) == 0x100 )
          {
            v13 = v7 | 1;
            HIDWORD(v18) = 0;
            *((_DWORD *)v5 + 21) = v13;
            v14 = (v13 & 0x400) != 0;
            v21 = 0LL;
            v15 = v5[14];
            v16 = 33;
            if ( v14 )
              v16 = 289;
            LODWORD(v18) = v16;
            v19 = v5[6];
            v20 = v5[7];
            v22 = 0LL;
            Win32HMThreadLockBase<tagMENU,1,0>::Win32HMThreadLockBase<tagMENU,1,0>(BugCheckParameter3, v15);
            xxxInterSendMsgEx(
              (struct tagWND *)v5[14],
              *((_DWORD *)v5 + 26),
              0LL,
              0LL,
              0,
              v5[8],
              (__int64)&v18,
              1,
              *((_DWORD *)v5 + 21) & 0x10000);
            Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((__int64 *)BugCheckParameter3);
          }
          if ( (*((_DWORD *)v5 + 21) & 0x4000) == 0 )
            UnlinkSendListSms(v5);
        }
      }
    }
  }
}

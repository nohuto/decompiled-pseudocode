/*
 * XREFs of ClearSendMessages @ 0x1400538B0
 * Callers:
 *     ?FreeWindow_Phase3@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@PEAU?$Win32HMOptionalThreadLockAlways@UtagWND@@@@@Z @ 0x140045780 (-FreeWindow_Phase3@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@PEAU-$Win32HMOptionalThreadLockAlways@Utag.c)
 * Callees:
 *     ??0?$Win32HMThreadLockBase@UtagMENU@@$00$0A@@@QEAA@PEAUtagMENU@@@Z @ 0x14000E1F8 (--0-$Win32HMThreadLockBase@UtagMENU@@$00$0A@@@QEAA@PEAUtagMENU@@@Z.c)
 *     ??1?$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ @ 0x140039F3C (--1-$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ.c)
 *     xxxInterSendMsgEx @ 0x140051EE4 (xxxInterSendMsgEx.c)
 *     SetWakeBit @ 0x140055960 (SetWakeBit.c)
 */

__int64 __fastcall ClearSendMessages(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  _QWORD *v4; // rsi
  _QWORD *v5; // rdi
  int v6; // ecx
  int v7; // ecx
  _QWORD *v8; // rbx
  __int64 v9; // rdx
  _QWORD *v10; // rax
  __int64 v11; // r8
  _QWORD *v12; // rdx
  __int64 v13; // rcx
  int v14; // ecx
  int v15; // eax
  ULONG_PTR BugCheckParameter3[2]; // [rsp+50h] [rbp-48h] BYREF
  __int64 v17; // [rsp+60h] [rbp-38h] BYREF
  __int64 v18; // [rsp+68h] [rbp-30h]
  __int64 v19; // [rsp+70h] [rbp-28h]
  __int64 v20; // [rsp+78h] [rbp-20h]
  __int128 v21; // [rsp+80h] [rbp-18h]

  result = W32GetUserSessionState(a1, a2);
  v4 = (_QWORD *)(result + 69048);
  v5 = *(_QWORD **)(result + 69048);
  while ( v5 != v4 )
  {
    v8 = v5;
    v5 = (_QWORD *)*v5;
    v9 = v8[14];
    if ( v9 == a1 )
    {
      v6 = *((_DWORD *)v8 + 21);
      if ( (v6 & 4) != 0 )
      {
        v7 = v6 | 9;
        goto LABEL_8;
      }
      if ( (v6 & 1) != 0 )
        goto LABEL_9;
      if ( (v6 & 0x100) != 0 )
      {
        v14 = v6 | 1;
        HIDWORD(v17) = 0;
        *((_DWORD *)v8 + 21) = v14;
        v20 = 0LL;
        v15 = 33;
        if ( (v14 & 0x400) != 0 )
          v15 = 289;
        LODWORD(v17) = v15;
        v18 = v8[6];
        v19 = v8[7];
        v21 = 0LL;
        Win32HMThreadLockBase<tagMENU,1,0>::Win32HMThreadLockBase<tagMENU,1,0>(BugCheckParameter3, v9);
        xxxInterSendMsgEx(
          (struct tagWND *)v8[14],
          *((_DWORD *)v8 + 26),
          0LL,
          0LL,
          0,
          v8[8],
          (__int64)&v17,
          1,
          *((_DWORD *)v8 + 21) & 0x10000);
        Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((__int64 *)BugCheckParameter3);
      }
      else
      {
        if ( (v6 & 0x4000) != 0 )
          goto LABEL_9;
        if ( !v8[4] )
        {
          v7 = v6 | 1;
LABEL_8:
          *((_DWORD *)v8 + 21) = v7;
          goto LABEL_9;
        }
        --*(_DWORD *)(v8[5] + 568LL);
        v10 = v8 + 2;
        v11 = v8[2];
        if ( *(_QWORD **)(v11 + 8) != v8 + 2 || (v12 = (_QWORD *)v8[3], (_QWORD *)*v12 != v10) )
          __fastfail(3u);
        *v12 = v11;
        *(_QWORD *)(v11 + 8) = v12;
        *v10 = 0LL;
        *((_DWORD *)v8 + 21) |= 0x8001u;
        v13 = v8[4];
        v8[9] = 0LL;
        SetWakeBit(v13, 512LL);
      }
LABEL_9:
      result = HMAssignmentUnlock(v8 + 14);
    }
  }
  return result;
}

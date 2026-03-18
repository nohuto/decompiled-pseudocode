/*
 * XREFs of _ReplyMessage @ 0x1C005DE60
 * Callers:
 *     <none>
 * Callees:
 *     SetWakeBit @ 0x1C005B6A0 (SetWakeBit.c)
 *     xxxInterSendMsgEx @ 0x1C0085BE0 (xxxInterSendMsgEx.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0088728 (W32GetCurrentThreadDpiAwarenessContext.c)
 */

__int64 __fastcall ReplyMessage(__int64 a1)
{
  __int64 v2; // rdi
  int v3; // ecx
  __int64 v4; // rax
  int v6; // ecx
  int v7; // eax
  __int64 v8; // rcx
  BOOL v9; // ebx
  int CurrentThreadDpiAwarenessContext; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  _QWORD v13[3]; // [rsp+50h] [rbp-58h] BYREF
  int v14; // [rsp+68h] [rbp-40h] BYREF
  __int64 v15; // [rsp+70h] [rbp-38h]
  __int64 v16; // [rsp+78h] [rbp-30h]
  __int64 v17; // [rsp+80h] [rbp-28h]

  v2 = *(_QWORD *)(gptiCurrent + 464LL);
  if ( !v2 )
    return 0LL;
  v3 = *(_DWORD *)(v2 + 84);
  if ( (v3 & 1) != 0 )
    return 0LL;
  v4 = *(_QWORD *)(v2 + 32);
  if ( v4 )
  {
    *(_QWORD *)(v2 + 72) = a1;
    *(_DWORD *)(v2 + 84) = v3 | 1;
    SetWakeBit(v4, 512LL, a1);
  }
  else if ( (v3 & 0x100) != 0 )
  {
    v6 = v3 | 1;
    *(_DWORD *)(v2 + 84) = v6;
    if ( (v6 & 4) == 0 )
    {
      v17 = a1;
      v7 = 33;
      if ( (v6 & 0x400) != 0 )
        v7 = 289;
      v8 = *(_QWORD *)(v2 + 112);
      v14 = v7;
      v15 = *(_QWORD *)(v2 + 48);
      v16 = *(_QWORD *)(v2 + 56);
      v13[0] = *(_QWORD *)(gptiCurrent + 368LL);
      *(_QWORD *)(gptiCurrent + 368LL) = v13;
      v13[1] = v8;
      if ( v8 )
        ++*(_DWORD *)(v8 + 8);
      v9 = (*(_DWORD *)(v2 + 84) & 0x10000) == 0;
      CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(v8, gptiCurrent, a1);
      xxxInterSendMsgEx(
        *(_QWORD *)(v2 + 112),
        *(_DWORD *)(v2 + 104),
        0,
        0,
        0LL,
        CurrentThreadDpiAwarenessContext,
        *(_QWORD *)(v2 + 64),
        (__int64)&v14,
        1,
        v9);
      ThreadUnlock1(v12, v11);
    }
  }
  return 1LL;
}

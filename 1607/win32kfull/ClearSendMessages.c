/*
 * XREFs of ClearSendMessages @ 0x1C00567F4
 * Callers:
 *     xxxFreeWindow @ 0x1C00543AC (xxxFreeWindow.c)
 * Callees:
 *     SetWakeBit @ 0x1C005B6A0 (SetWakeBit.c)
 *     RemoveSMSReceiveList @ 0x1C007F5F4 (RemoveSMSReceiveList.c)
 *     xxxInterSendMsgEx @ 0x1C0085BE0 (xxxInterSendMsgEx.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0088728 (W32GetCurrentThreadDpiAwarenessContext.c)
 */

_QWORD *__fastcall ClearSendMessages(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *result; // rax
  _QWORD *v5; // rsi
  int v6; // ecx
  int v7; // ecx
  _QWORD *v8; // rdi
  __int64 v9; // rdx
  int v10; // ecx
  int v11; // eax
  int v12; // ebx
  int CurrentThreadDpiAwarenessContext; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rcx
  _QWORD v17[3]; // [rsp+50h] [rbp-58h] BYREF
  int v18; // [rsp+68h] [rbp-40h] BYREF
  __int64 v19; // [rsp+70h] [rbp-38h]
  __int64 v20; // [rsp+78h] [rbp-30h]
  __int64 v21; // [rsp+80h] [rbp-28h]

  result = (_QWORD *)gsmsList;
  v5 = (_QWORD *)gsmsList;
  while ( v5 != result )
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
        v10 = v6 | 1;
        v11 = 33;
        *((_DWORD *)v8 + 21) = v10;
        if ( (v10 & 0x400) != 0 )
          v11 = 289;
        v21 = 0LL;
        v18 = v11;
        v19 = v8[6];
        v20 = v8[7];
        v17[0] = *(_QWORD *)(gptiCurrent + 368LL);
        *(_QWORD *)(gptiCurrent + 368LL) = v17;
        v17[1] = v9;
        if ( v9 )
          ++*(_DWORD *)(v9 + 8);
        v12 = *((_DWORD *)v8 + 21) & 0x10000;
        CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(gptiCurrent, v9, a3);
        xxxInterSendMsgEx(
          v8[14],
          *((_DWORD *)v8 + 26),
          0,
          0,
          0LL,
          CurrentThreadDpiAwarenessContext,
          v8[8],
          (__int64)&v18,
          1,
          v12);
        ThreadUnlock1(v15, v14);
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
        RemoveSMSReceiveList(v8, v8[5]);
        v16 = v8[4];
        *((_DWORD *)v8 + 21) |= 0x8001u;
        v8[9] = 0LL;
        SetWakeBit(v16, 512LL);
      }
LABEL_9:
      HMAssignmentUnlock(v8 + 14);
      result = (_QWORD *)gsmsList;
    }
  }
  return result;
}

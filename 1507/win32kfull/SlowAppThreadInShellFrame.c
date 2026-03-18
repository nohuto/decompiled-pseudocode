/*
 * XREFs of SlowAppThreadInShellFrame @ 0x1C00091C4
 * Callers:
 *     xxxRealInternalGetMessage @ 0x1C00698F0 (xxxRealInternalGetMessage.c)
 *     xxxMNLoop @ 0x1C010B494 (xxxMNLoop.c)
 *     xxxMoveSize @ 0x1C020D52C (xxxMoveSize.c)
 * Callees:
 *     LogMDAQueueOp @ 0x1C00433CC (LogMDAQueueOp.c)
 *     IsDebuggerAttached @ 0x1C00454B4 (IsDebuggerAttached.c)
 *     ?OtherThreadsKeyboardInput@@YAPEAUtagTHREADINFO@@PEAUtagQ@@PEAUtagQMSG@@@Z @ 0x1C01E1B28 (-OtherThreadsKeyboardInput@@YAPEAUtagTHREADINFO@@PEAUtagQ@@PEAUtagQMSG@@@Z.c)
 */

struct tagTHREADINFO *__fastcall SlowAppThreadInShellFrame(
        struct tagTHREADINFO *a1,
        struct tagTHREADINFO *a2,
        __int64 a3,
        int a4)
{
  __int64 *v4; // r15
  __int64 v6; // rbp
  __int64 v7; // rbx
  __int64 v8; // r9
  struct tagTHREADINFO *v9; // r8
  __int64 v10; // r12
  unsigned __int64 v11; // r14
  __int64 v12; // rcx
  __int64 v13; // rcx
  unsigned int v14; // edi
  struct tagTHREADINFO *v15; // rsi
  _DWORD *v16; // rsi
  __int64 v17; // r9
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // r9
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // rdx
  __int64 v28; // r9
  __int64 v29; // rax
  int v30; // ecx

  v4 = (__int64 *)*((_QWORD *)a1 + 49);
  v6 = a4;
  v7 = 0LL;
  v8 = a3;
  v9 = a2;
  v10 = *v4;
  v11 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  v12 = v4[9];
  if ( v12 )
  {
    v13 = *(_QWORD *)(v12 + 16);
    if ( v13 )
    {
      if ( (unsigned int)IsDebuggerAttached(*(_QWORD *)(v13 + 384)) )
        goto LABEL_13;
      v9 = a2;
      v8 = a3;
    }
  }
  if ( (_DWORD)v6 )
  {
    v19 = *((_QWORD *)a1 + 75);
    v14 = gdwMDAQThreshold / 0xAu;
    if ( v19 && (*(_DWORD *)(v19 + 180) & 0x100000) != 0 )
      v14 = gdwMDAQThreshold / 0x14u;
  }
  else
  {
    v14 = gdwMDAQTimeoutDefenseInDepth;
  }
  v15 = (struct tagTHREADINFO *)v4[3];
  if ( v15 )
  {
    if ( v15 != a1 && v15 == v9 )
    {
      v20 = v4[4];
      if ( v20 )
      {
        if ( v8 == v20 )
        {
          if ( (unsigned int)IsDebuggerAttached(*((_QWORD *)v15 + 48)) )
            goto LABEL_13;
          if ( v10 && (int)v11 - *(_DWORD *)(*v4 + 48) >= v14 )
          {
            v21 = 1LL;
LABEL_26:
            v22 = 216LL;
LABEL_27:
            LogMDAQueueOp(v22, v6, v14, v21);
            return v15;
          }
          v23 = *((_QWORD *)v15 + 92);
          if ( v23 && (int)v11 - *(_DWORD *)(v23 + 48) >= v14 )
          {
            v21 = 2LL;
            goto LABEL_26;
          }
          if ( (int)v11 - *(_DWORD *)(*(_QWORD *)(v4[3] + 408) + 12LL) >= v14 )
          {
            v21 = 4LL;
            goto LABEL_26;
          }
        }
      }
    }
  }
  if ( v10 )
  {
    v15 = *(struct tagTHREADINFO **)(v10 + 96);
    if ( v15 )
    {
      if ( (unsigned int)IsDebuggerAttached(*((_QWORD *)v15 + 48)) )
        goto LABEL_13;
      if ( (v15 != a1 || (v15 = OtherThreadsKeyboardInput((struct tagQ *)v4, (struct tagQMSG *)v10)) != 0LL)
        && ((_DWORD)v6 || (*(_WORD *)(*((_QWORD *)a1 + 51) + 6LL) & 0x1084) != 0) )
      {
        if ( (int)v11 - *(_DWORD *)(v10 + 48) >= v14 )
        {
          v21 = 8LL;
          goto LABEL_26;
        }
        if ( (unsigned int)(*((_DWORD *)v4 + 4) + *((_DWORD *)v15 + 188)) > 0x100 )
        {
          v21 = 19LL;
          goto LABEL_26;
        }
      }
    }
  }
  v15 = (struct tagTHREADINFO *)v4[3];
  if ( !v15 || v15 == a1 )
    goto LABEL_10;
  if ( (unsigned int)IsDebuggerAttached(*((_QWORD *)v15 + 48)) )
  {
LABEL_13:
    v17 = 0LL;
    goto LABEL_12;
  }
  v24 = v4[4];
  if ( v24 )
  {
    v25 = *((_QWORD *)v15 + 92);
    if ( v24 == v25 && (int)v11 - *(_DWORD *)(v25 + 48) >= v14 )
    {
      v21 = 16LL;
      goto LABEL_26;
    }
    if ( v24 == *v4 && (int)v11 - *(_DWORD *)(*v4 + 48) >= v14 )
    {
      v21 = 32LL;
      goto LABEL_26;
    }
  }
  if ( (_DWORD)v6 )
  {
    if ( (int)v11 - *(_DWORD *)(*((_QWORD *)v15 + 51) + 12LL) >= v14 )
    {
      v21 = 64LL;
      goto LABEL_26;
    }
    if ( (unsigned int)(*((_DWORD *)v4 + 4) + *((_DWORD *)v15 + 188)) > 0x100 )
    {
      v22 = 218LL;
      v21 = 259LL;
      goto LABEL_27;
    }
  }
LABEL_10:
  LogMDAQueueOp(220LL, v6, v14, 3841LL);
  v16 = (_DWORD *)*((_QWORD *)a1 + 75);
  if ( !v16 || (v16[45] & 0x100000) == 0 )
  {
LABEL_11:
    v17 = 4095LL;
LABEL_12:
    LogMDAQueueOp(222LL, 0LL, 0LL, v17);
    return 0LL;
  }
  LogMDAQueueOp(220LL, (unsigned int)v16[77], (unsigned int)v16[78], 3842LL);
  v26 = (unsigned int)v16[78];
  if ( (unsigned int)v26 < 3 || v16[77] / (unsigned int)v26 <= v14 )
  {
    LogMDAQueueOp(220LL, (unsigned int)v16[76], v26, 3843LL);
    v30 = v16[76];
    if ( v30 && (int)v11 - v30 >= 4 * v14 )
    {
      v26 = (unsigned int)v16[78];
      v27 = (unsigned int)v16[76];
      v28 = 261LL;
      goto LABEL_60;
    }
    goto LABEL_11;
  }
  v27 = (unsigned int)v16[77];
  v28 = 260LL;
LABEL_60:
  LogMDAQueueOp(220LL, v27, v26, v28);
  v29 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 49) + 80LL) + 96LL);
  if ( v29 )
    return *(struct tagTHREADINFO **)(v29 + 16);
  return (struct tagTHREADINFO *)v7;
}

/*
 * XREFs of SlowAppThreadInShellFrame @ 0x1C000C438
 * Callers:
 *     xxxRealInternalGetMessage @ 0x1C0080E80 (xxxRealInternalGetMessage.c)
 *     xxxMNLoop @ 0x1C0141414 (xxxMNLoop.c)
 *     xxxMoveSize @ 0x1C0204D60 (xxxMoveSize.c)
 * Callees:
 *     IsDebuggerAttached @ 0x1C00AAB24 (IsDebuggerAttached.c)
 *     ?OtherThreadsKeyboardInput@@YAPEAUtagTHREADINFO@@PEAUtagQ@@PEAUtagQMSG@@@Z @ 0x1C01D8278 (-OtherThreadsKeyboardInput@@YAPEAUtagTHREADINFO@@PEAUtagQ@@PEAUtagQMSG@@@Z.c)
 */

struct tagTHREADINFO *__fastcall SlowAppThreadInShellFrame(
        struct tagTHREADINFO *a1,
        struct tagTHREADINFO *a2,
        __int64 a3,
        int a4)
{
  __int64 *v4; // r14
  __int64 v6; // rbx
  __int64 v8; // r13
  unsigned __int64 v9; // rbp
  __int64 v10; // rcx
  unsigned int v11; // esi
  struct tagTHREADINFO *v12; // rdi
  int v13; // r12d
  _DWORD *v14; // rcx
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rdx
  unsigned int v22; // r8d
  __int64 v23; // rax
  int v24; // eax
  __int64 v25; // [rsp+70h] [rbp+18h]
  int v26; // [rsp+78h] [rbp+20h]

  v26 = a4;
  v25 = a3;
  v4 = (__int64 *)*((_QWORD *)a1 + 48);
  v6 = 0LL;
  v8 = *v4;
  v9 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  v10 = v4[10];
  if ( v10 )
  {
    v16 = *(_QWORD *)(v10 + 16);
    if ( v16 )
    {
      if ( (unsigned int)IsDebuggerAttached(*(_QWORD *)(v16 + 376)) )
        return 0LL;
      a3 = v25;
      a4 = v26;
    }
  }
  if ( a4 )
  {
    v17 = *((_QWORD *)a1 + 74);
    v11 = gdwMDAQThreshold / 0xAu;
    if ( v17 && (*(_DWORD *)(v17 + 180) & 0x100000) != 0 )
      v11 = gdwMDAQThreshold / 0x14u;
  }
  else
  {
    v11 = gdwMDAQTimeoutDefenseInDepth;
  }
  v12 = (struct tagTHREADINFO *)v4[4];
  if ( v12 )
  {
    if ( v12 != a1 && v12 == a2 )
    {
      v18 = v4[5];
      if ( v18 )
      {
        if ( a3 == v18 )
        {
          if ( (unsigned int)IsDebuggerAttached(*((_QWORD *)v12 + 47)) )
            return 0LL;
          if ( v8 && (int)v9 - *(_DWORD *)(*v4 + 48) >= v11 )
            return v12;
          v19 = *((_QWORD *)v12 + 91);
          if ( v19 )
          {
            if ( (int)v9 - *(_DWORD *)(v19 + 48) >= v11 )
              return v12;
          }
          if ( (int)v9 - *(_DWORD *)(*(_QWORD *)(v4[4] + 400) + 12LL) >= v11 )
            return v12;
        }
      }
    }
  }
  if ( !v8 )
    goto LABEL_6;
  v12 = *(struct tagTHREADINFO **)(v8 + 104);
  if ( !v12 )
    goto LABEL_6;
  if ( (unsigned int)IsDebuggerAttached(*((_QWORD *)v12 + 47)) )
    return 0LL;
  if ( v12 != a1 || (v12 = OtherThreadsKeyboardInput((struct tagQ *)v4, (struct tagQMSG *)v8)) != 0LL )
  {
    v13 = v26;
    if ( (v26 || (*(_WORD *)(*((_QWORD *)a1 + 50) + 6LL) & 0x1084) != 0)
      && ((int)v9 - *(_DWORD *)(v8 + 48) >= v11 || (unsigned int)(*((_DWORD *)v4 + 4) + *((_DWORD *)v12 + 186)) > 0x100) )
    {
      return v12;
    }
  }
  else
  {
LABEL_6:
    v13 = v26;
  }
  v12 = (struct tagTHREADINFO *)v4[4];
  if ( !v12 || v12 == a1 )
    goto LABEL_8;
  if ( (unsigned int)IsDebuggerAttached(*((_QWORD *)v12 + 47)) )
    return 0LL;
  v20 = v4[5];
  if ( v20 )
  {
    v21 = *((_QWORD *)v12 + 91);
    if ( v20 == v21 && (int)v9 - *(_DWORD *)(v21 + 48) >= v11 )
      return v12;
    if ( v20 == *v4 && (int)v9 - *(_DWORD *)(*v4 + 48) >= v11 )
      return v12;
  }
  if ( v13
    && ((int)v9 - *(_DWORD *)(*((_QWORD *)v12 + 50) + 12LL) >= v11
     || (unsigned int)(*((_DWORD *)v4 + 4) + *((_DWORD *)v12 + 186)) > 0x100) )
  {
    return v12;
  }
LABEL_8:
  v14 = (_DWORD *)*((_QWORD *)a1 + 74);
  if ( !v14 || (v14[45] & 0x100000) == 0 )
    return 0LL;
  v22 = v14[78];
  if ( v22 < 3 || v14[77] / v22 <= v11 )
  {
    v24 = v14[76];
    if ( !v24 || (int)v9 - v24 < 4 * v11 )
      return 0LL;
  }
  v23 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 48) + 88LL) + 96LL);
  if ( v23 )
    return *(struct tagTHREADINFO **)(v23 + 16);
  return (struct tagTHREADINFO *)v6;
}

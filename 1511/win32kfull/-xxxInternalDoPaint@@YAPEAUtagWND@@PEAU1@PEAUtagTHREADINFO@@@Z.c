/*
 * XREFs of ?xxxInternalDoPaint@@YAPEAUtagWND@@PEAU1@PEAUtagTHREADINFO@@@Z @ 0x1C0056220
 * Callers:
 *     xxxDoPaint @ 0x1C0055FF8 (xxxDoPaint.c)
 *     ?xxxInternalDoPaint@@YAPEAUtagWND@@PEAU1@PEAUtagTHREADINFO@@@Z @ 0x1C0056220 (-xxxInternalDoPaint@@YAPEAUtagWND@@PEAU1@PEAUtagTHREADINFO@@@Z.c)
 * Callees:
 *     ?xxxInternalDoPaint@@YAPEAUtagWND@@PEAU1@PEAUtagTHREADINFO@@@Z @ 0x1C0056220 (-xxxInternalDoPaint@@YAPEAUtagWND@@PEAU1@PEAUtagTHREADINFO@@@Z.c)
 *     ThreadLockExchange @ 0x1C006D548 (ThreadLockExchange.c)
 *     xxxCompositedPaint @ 0x1C0224568 (xxxCompositedPaint.c)
 */

struct tagWND *__fastcall xxxInternalDoPaint(struct tagWND *a1, struct tagTHREADINFO *a2)
{
  struct tagWND *v4; // rcx
  struct tagWND *v5; // rcx
  __int64 v8; // rbx
  struct tagWND *v9; // rax
  __int64 v10; // rcx
  struct tagWND *v11; // rsi
  __int64 v12; // [rsp+20h] [rbp-28h] BYREF
  struct tagWND *v13; // [rsp+28h] [rbp-20h]

  v4 = (struct tagWND *)gptiCurrent;
  v12 = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = &v12;
  v13 = a1;
  if ( !a1 )
    return (struct tagWND *)ThreadUnlock1(v4, a2);
  ++*((_DWORD *)a1 + 2);
  while ( 1 )
  {
    if ( *((struct tagTHREADINFO **)a1 + 2) == a2 )
    {
      if ( (*((_BYTE *)a1 + 51) & 2) != 0 )
      {
        xxxCompositedPaint(a1);
        a1 = (struct tagWND *)*((_QWORD *)a1 + 9);
        ThreadLockExchange(a1, &v12);
        goto LABEL_10;
      }
      if ( *((_QWORD *)a1 + 20) || (*((_BYTE *)a1 + 41) & 0x10) != 0 )
        break;
    }
    v5 = (struct tagWND *)*((_QWORD *)a1 + 12);
    if ( v5 )
    {
      v9 = xxxInternalDoPaint(v5, a2);
      v11 = v9;
      if ( v9 )
      {
        if ( v9 == a1 )
          return (struct tagWND *)ThreadUnlock1(v10, a2);
        ThreadUnlock1(v10, a2);
        return v11;
      }
    }
    a1 = (struct tagWND *)*((_QWORD *)a1 + 9);
    v4 = v13;
    v13 = a1;
    if ( a1 )
      ++*((_DWORD *)a1 + 2);
    if ( v4 )
    {
      if ( (*((_DWORD *)v4 + 2))-- == 1 )
        HMUnlockObjectInternal(v4);
    }
LABEL_10:
    if ( !a1 )
      return (struct tagWND *)ThreadUnlock1(v4, a2);
  }
  if ( (*((_BYTE *)a1 + 48) & 0x20) == 0 )
    return (struct tagWND *)ThreadUnlock1(v4, a2);
  v8 = *((_QWORD *)a1 + 9);
  if ( !v8 )
    return (struct tagWND *)ThreadUnlock1(v4, a2);
  while ( *(struct tagTHREADINFO **)(v8 + 16) != a2
       || !*(_QWORD *)(v8 + 160) && (*(_BYTE *)(v8 + 41) & 0x10) == 0
       || (*(_BYTE *)(v8 + 48) & 0x20) != 0 )
  {
    v8 = *(_QWORD *)(v8 + 72);
    if ( !v8 )
      return (struct tagWND *)ThreadUnlock1(v4, a2);
  }
  ThreadUnlock1(v4, a2);
  return (struct tagWND *)v8;
}

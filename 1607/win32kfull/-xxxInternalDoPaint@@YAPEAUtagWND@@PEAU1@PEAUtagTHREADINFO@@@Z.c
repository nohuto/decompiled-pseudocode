/*
 * XREFs of ?xxxInternalDoPaint@@YAPEAUtagWND@@PEAU1@PEAUtagTHREADINFO@@@Z @ 0x1C005BA70
 * Callers:
 *     xxxDoPaint @ 0x1C005B83C (xxxDoPaint.c)
 *     ?xxxInternalDoPaint@@YAPEAUtagWND@@PEAU1@PEAUtagTHREADINFO@@@Z @ 0x1C005BA70 (-xxxInternalDoPaint@@YAPEAUtagWND@@PEAU1@PEAUtagTHREADINFO@@@Z.c)
 * Callees:
 *     ?xxxInternalDoPaint@@YAPEAUtagWND@@PEAU1@PEAUtagTHREADINFO@@@Z @ 0x1C005BA70 (-xxxInternalDoPaint@@YAPEAUtagWND@@PEAU1@PEAUtagTHREADINFO@@@Z.c)
 *     ThreadLockExchange @ 0x1C00777C4 (ThreadLockExchange.c)
 *     xxxCompositedPaint @ 0x1C0225130 (xxxCompositedPaint.c)
 */

struct tagWND *__fastcall xxxInternalDoPaint(struct tagWND *a1, struct tagTHREADINFO *a2)
{
  struct tagWND *v4; // rcx
  struct tagWND *v5; // rcx
  struct tagWND *v8; // rax
  __int64 v9; // rcx
  struct tagWND *v10; // rsi
  __int64 v11; // rbx
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
      v8 = xxxInternalDoPaint(v5, a2);
      v10 = v8;
      if ( v8 )
      {
        if ( v8 == a1 )
          return (struct tagWND *)ThreadUnlock1(v9, a2);
        ThreadUnlock1(v9, a2);
        return v10;
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
  v11 = *((_QWORD *)a1 + 9);
  if ( !v11 )
    return (struct tagWND *)ThreadUnlock1(v4, a2);
  while ( *(struct tagTHREADINFO **)(v11 + 16) != a2
       || !*(_QWORD *)(v11 + 160) && (*(_BYTE *)(v11 + 41) & 0x10) == 0
       || (*(_BYTE *)(v11 + 48) & 0x20) != 0 )
  {
    v11 = *(_QWORD *)(v11 + 72);
    if ( !v11 )
      return (struct tagWND *)ThreadUnlock1(v4, a2);
  }
  ThreadUnlock1(v4, a2);
  return (struct tagWND *)v11;
}

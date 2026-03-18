/*
 * XREFs of ?InternalBuildHwndList@@YAPEAUtagBWL@@PEAU1@PEAUtagWND@@I@Z @ 0x1C008D6F0
 * Callers:
 *     BuildHwndList @ 0x1C0076E50 (BuildHwndList.c)
 *     ?InternalBuildHwndList@@YAPEAUtagBWL@@PEAU1@PEAUtagWND@@I@Z @ 0x1C008D6F0 (-InternalBuildHwndList@@YAPEAUtagBWL@@PEAU1@PEAUtagWND@@I@Z.c)
 * Callees:
 *     ?InternalBuildHwndList@@YAPEAUtagBWL@@PEAU1@PEAUtagWND@@I@Z @ 0x1C008D6F0 (-InternalBuildHwndList@@YAPEAUtagBWL@@PEAU1@PEAUtagWND@@I@Z.c)
 *     IsWindowSubjectToShellWindowBehavior @ 0x1C009E938 (IsWindowSubjectToShellWindowBehavior.c)
 *     IsNonImmersiveBand @ 0x1C00AC030 (IsNonImmersiveBand.c)
 */

struct tagBWL *__fastcall InternalBuildHwndList(struct tagBWL *a1, struct tagWND *a2, __int64 a3, __int64 a4)
{
  char v4; // bp
  struct tagWND *v5; // rbx
  int v7; // eax
  __int64 v8; // rsi
  __int64 v9; // rsi
  __int64 v11; // rsi
  __int64 v12; // rax
  __int64 v13; // rsi
  int v14; // [rsp+30h] [rbp+8h]

  v4 = a3;
  v5 = a2;
  if ( a2 )
  {
    v7 = a3 & 0x20;
    v14 = v7;
    do
    {
      v8 = *((_QWORD *)a1 + 3);
      if ( (!v7 || (unsigned int)IsNonImmersiveBand(v5, a2, a3, a4))
        && ((v4 & 0x40) == 0
         || (*((_BYTE *)v5 + 55) & 0x11) != 0x10
         || (*((_BYTE *)v5 + 44) & 0x40) != 0
         || !(unsigned int)IsWindowSubjectToShellWindowBehavior(v5, 127LL))
        && (!v8 || v8 == *((_QWORD *)v5 + 2)) )
      {
        **((_QWORD **)a1 + 1) = *(_QWORD *)v5;
        *((_QWORD *)a1 + 1) += 8LL;
        v9 = *((_QWORD *)a1 + 1);
        if ( v9 == *((_QWORD *)a1 + 2) )
        {
          v11 = v9 - (_QWORD)a1;
          v12 = UserReAllocPool(a1, (unsigned int)v11 + 8LL, (unsigned int)v11 + 72LL, 1819767637LL);
          if ( !v12 )
            return a1;
          v13 = v12 + v11;
          a1 = (struct tagBWL *)v12;
          *(_QWORD *)(v12 + 8) = v13;
          *(_QWORD *)(v12 + 16) = v13 + 64;
        }
      }
      if ( (v4 & 1) != 0 )
      {
        a2 = (struct tagWND *)*((_QWORD *)v5 + 12);
        if ( a2 )
        {
          a1 = InternalBuildHwndList(a1, a2, 3u);
          if ( *((_QWORD *)a1 + 1) >= *((_QWORD *)a1 + 2) )
            break;
        }
      }
      if ( (v4 & 2) == 0 )
        break;
      v5 = (struct tagWND *)*((_QWORD *)v5 + 9);
      v7 = v14;
    }
    while ( v5 );
  }
  return a1;
}

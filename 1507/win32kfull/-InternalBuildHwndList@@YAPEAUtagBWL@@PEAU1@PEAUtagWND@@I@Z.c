/*
 * XREFs of ?InternalBuildHwndList@@YAPEAUtagBWL@@PEAU1@PEAUtagWND@@I@Z @ 0x1C0076840
 * Callers:
 *     BuildHwndList @ 0x1C0062640 (BuildHwndList.c)
 *     ?InternalBuildHwndList@@YAPEAUtagBWL@@PEAU1@PEAUtagWND@@I@Z @ 0x1C0076840 (-InternalBuildHwndList@@YAPEAUtagBWL@@PEAU1@PEAUtagWND@@I@Z.c)
 * Callees:
 *     IsNonImmersiveBand @ 0x1C0045A6C (IsNonImmersiveBand.c)
 *     ?InternalBuildHwndList@@YAPEAUtagBWL@@PEAU1@PEAUtagWND@@I@Z @ 0x1C0076840 (-InternalBuildHwndList@@YAPEAUtagBWL@@PEAU1@PEAUtagWND@@I@Z.c)
 *     IsWindowSubjectToShellWindowBehavior @ 0x1C0081EAC (IsWindowSubjectToShellWindowBehavior.c)
 */

struct tagBWL *__fastcall InternalBuildHwndList(struct tagBWL *a1, struct tagWND *a2, char a3)
{
  struct tagWND *v4; // rbx
  int v6; // eax
  __int64 v7; // rsi
  __int64 v8; // rsi
  struct tagWND *v9; // rdx
  __int64 v11; // rsi
  __int64 v12; // rax
  __int64 v13; // rsi
  int v14; // [rsp+30h] [rbp+8h]

  v4 = a2;
  if ( a2 )
  {
    v6 = a3 & 0x20;
    v14 = v6;
    do
    {
      v7 = *((_QWORD *)a1 + 3);
      if ( (!v6 || IsNonImmersiveBand((__int64)v4))
        && ((a3 & 0x40) == 0
         || (*((_BYTE *)v4 + 55) & 0x11) != 0x10
         || (*((_BYTE *)v4 + 44) & 0x40) != 0
         || !(unsigned int)IsWindowSubjectToShellWindowBehavior(v4, 63LL))
        && (!v7 || v7 == *((_QWORD *)v4 + 2)) )
      {
        **((_QWORD **)a1 + 1) = *(_QWORD *)v4;
        *((_QWORD *)a1 + 1) += 8LL;
        v8 = *((_QWORD *)a1 + 1);
        if ( v8 == *((_QWORD *)a1 + 2) )
        {
          v11 = v8 - (_QWORD)a1;
          v12 = UserReAllocPool(a1, (unsigned int)v11 + 8LL, (unsigned int)v11 + 72LL, 1819767637LL);
          if ( !v12 )
            return a1;
          v13 = v12 + v11;
          a1 = (struct tagBWL *)v12;
          *(_QWORD *)(v12 + 8) = v13;
          *(_QWORD *)(v12 + 16) = v13 + 64;
        }
      }
      if ( (a3 & 1) != 0 )
      {
        v9 = (struct tagWND *)*((_QWORD *)v4 + 12);
        if ( v9 )
        {
          a1 = InternalBuildHwndList(a1, v9, 3u);
          if ( *((_QWORD *)a1 + 1) >= *((_QWORD *)a1 + 2) )
            break;
        }
      }
      if ( (a3 & 2) == 0 )
        break;
      v4 = (struct tagWND *)*((_QWORD *)v4 + 9);
      v6 = v14;
    }
    while ( v4 );
  }
  return a1;
}

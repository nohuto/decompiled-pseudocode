/*
 * XREFs of ImeSetTopmost @ 0x1C0090288
 * Callers:
 *     ImeCheckTopmost @ 0x1C0090238 (ImeCheckTopmost.c)
 * Callees:
 *     UnlinkWindow @ 0x1C0055CCC (UnlinkWindow.c)
 *     LinkWindow @ 0x1C00564E4 (LinkWindow.c)
 *     SetOrClrWF @ 0x1C0080070 (SetOrClrWF.c)
 *     ?GetLastTopMostWindowNoIME@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C0090440 (-GetLastTopMostWindowNoIME@@YAPEAUtagWND@@PEAU1@@Z.c)
 */

void __fastcall ImeSetTopmost(__int64 a1, int a2, __int64 a3)
{
  __int64 v3; // r14
  struct tagWND *LastTopMostWindowNoIME; // rbx
  __int64 v8; // rdi
  __int64 v9; // r12
  char v10; // al
  __int64 v11; // rcx
  bool v12; // zf
  __int64 v13; // rdx
  struct tagWND *i; // rcx
  __int64 v15; // r8
  struct tagWND *v16; // r15
  __int64 v17; // rsi
  __int64 v18; // rdx
  __int64 v19; // rcx

  v3 = *(_QWORD *)(a1 + 88);
  LastTopMostWindowNoIME = 0LL;
  if ( !v3 )
    return;
  v8 = *(_QWORD *)(v3 + 96);
  v9 = gpsi;
  if ( !a2 )
  {
    LastTopMostWindowNoIME = GetLastTopMostWindowNoIME((struct tagWND *)a1);
    if ( a3 )
    {
      v10 = 0;
      if ( !LastTopMostWindowNoIME )
        return;
      do
      {
        v11 = *((_QWORD *)LastTopMostWindowNoIME + 9);
        if ( v11 == a3 )
          break;
        v12 = LastTopMostWindowNoIME == (struct tagWND *)a1;
        LastTopMostWindowNoIME = (struct tagWND *)*((_QWORD *)LastTopMostWindowNoIME + 9);
        if ( v12 )
          v10 = 1;
      }
      while ( v11 );
      if ( !LastTopMostWindowNoIME || v10 )
        return;
    }
    v13 = *(_QWORD *)(a1 + 104);
    if ( (*(_BYTE *)(v13 + 44) & 0x20) != 0 )
    {
      for ( i = LastTopMostWindowNoIME; i; i = (struct tagWND *)*((_QWORD *)i + 9) )
      {
        if ( i == (struct tagWND *)v13 )
          break;
        v15 = *((_QWORD *)i + 19);
        if ( (*(_BYTE *)(v15 + 86) & 1) == 0 && *(_WORD *)(v15 + 8) != *(_WORD *)(gpsi + 882LL) )
          LastTopMostWindowNoIME = i;
      }
    }
  }
  v16 = LastTopMostWindowNoIME;
  while ( v8 )
  {
    v17 = *(_QWORD *)(v8 + 72);
    if ( *(_QWORD *)(v8 + 16) == *(_QWORD *)(a1 + 16) )
    {
      v18 = *(_QWORD *)(v8 + 152);
      if ( ((*(_BYTE *)(v18 + 86) & 1) != 0 || *(_WORD *)(v18 + 8) == *(_WORD *)(*(_QWORD *)v9 + 882LL))
        && (struct tagWND *)v8 != LastTopMostWindowNoIME )
      {
        v19 = v8;
        while ( v19 != a1
             || LastTopMostWindowNoIME && *((_QWORD *)LastTopMostWindowNoIME + 11) != *(_QWORD *)(v8 + 88)
             || *(_QWORD *)(v8 + 88) != v3 )
        {
          v19 = *(_QWORD *)(v19 + 104);
          if ( !v19 )
            goto LABEL_31;
        }
        UnlinkWindow(v8, v3);
        SetOrClrWF(a2 != 0, (_DWORD *)v8, 0x808u, 1);
        LinkWindow((struct tagWND *)v8, (__int64)LastTopMostWindowNoIME, v3);
        v9 = gpsi;
        LastTopMostWindowNoIME = (struct tagWND *)v8;
      }
    }
LABEL_31:
    v8 = v17;
    if ( !v17 )
      break;
    if ( (struct tagWND *)v17 == v16 )
      v8 = *((_QWORD *)LastTopMostWindowNoIME + 9);
  }
}

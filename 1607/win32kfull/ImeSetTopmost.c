/*
 * XREFs of ImeSetTopmost @ 0x1C0063C38
 * Callers:
 *     ImeCheckTopmost @ 0x1C0064DCC (ImeCheckTopmost.c)
 * Callees:
 *     UnlinkWindow @ 0x1C0063380 (UnlinkWindow.c)
 *     ?GetLastTopMostWindowNoIME@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C0064E1C (-GetLastTopMostWindowNoIME@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     LinkWindow @ 0x1C007B12C (LinkWindow.c)
 *     SetOrClrWF @ 0x1C00964B4 (SetOrClrWF.c)
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
  struct tagWND *v14; // r15
  __int64 v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // rcx
  struct tagWND *i; // rcx
  __int64 v19; // r8

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
        v19 = *((_QWORD *)i + 19);
        if ( (*(_BYTE *)(v19 + 86) & 1) == 0 && *(_WORD *)(v19 + 8) != *(_WORD *)(gpsi + 882LL) )
          LastTopMostWindowNoIME = i;
      }
    }
  }
  v14 = LastTopMostWindowNoIME;
  while ( v8 )
  {
    v15 = *(_QWORD *)(v8 + 72);
    if ( *(_QWORD *)(v8 + 16) == *(_QWORD *)(a1 + 16) )
    {
      v16 = *(_QWORD *)(v8 + 152);
      if ( ((*(_BYTE *)(v16 + 86) & 1) != 0 || *(_WORD *)(v16 + 8) == *(_WORD *)(*(_QWORD *)v9 + 882LL))
        && (struct tagWND *)v8 != LastTopMostWindowNoIME )
      {
        v17 = v8;
        while ( v17 != a1
             || LastTopMostWindowNoIME && *((_QWORD *)LastTopMostWindowNoIME + 11) != *(_QWORD *)(v8 + 88)
             || *(_QWORD *)(v8 + 88) != v3 )
        {
          v17 = *(_QWORD *)(v17 + 104);
          if ( !v17 )
            goto LABEL_14;
        }
        UnlinkWindow(v8, v3);
        SetOrClrWF(a2 != 0, v8, 2056LL, 1LL);
        LinkWindow((struct tagWND *)v8);
        v9 = gpsi;
        LastTopMostWindowNoIME = (struct tagWND *)v8;
      }
    }
LABEL_14:
    v8 = v15;
    if ( !v15 )
      break;
    if ( (struct tagWND *)v15 == v14 )
      v8 = *((_QWORD *)LastTopMostWindowNoIME + 9);
  }
}

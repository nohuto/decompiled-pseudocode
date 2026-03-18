/*
 * XREFs of CalcForegroundInsertAfter @ 0x1C00A8A68
 * Callers:
 *     xxxCreateWindowEx @ 0x1C0072880 (xxxCreateWindowEx.c)
 *     ?TrackBackground@@YAHPEAUtagWINDOWPOS@@PEAUtagWND@@111@Z @ 0x1C00A53E8 (-TrackBackground@@YAHPEAUtagWINDOWPOS@@PEAUtagWND@@111@Z.c)
 *     ?CheckTopmost@@YAHPEAUtagWINDOWPOS@@@Z @ 0x1C00A56DC (-CheckTopmost@@YAHPEAUtagWINDOWPOS@@@Z.c)
 *     xxxSetParentWorker @ 0x1C00DD234 (xxxSetParentWorker.c)
 *     ?CheckOnTop@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@I@Z @ 0x1C01D81E4 (-CheckOnTop@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@I@Z.c)
 * Callees:
 *     GetLastTopMostWindow @ 0x1C00A8B9C (GetLastTopMostWindow.c)
 *     ?GetLastNonBottomMostWindow@@YAPEAUtagWND@@PEAU1@H@Z @ 0x1C00A8BEC (-GetLastNonBottomMostWindow@@YAPEAUtagWND@@PEAU1@H@Z.c)
 */

struct tagWND *__fastcall CalcForegroundInsertAfter(__int64 a1)
{
  struct tagWND *LastNonBottomMostWindow; // rax
  struct tagWND *v3; // rdx
  __int64 v4; // rcx
  __int64 v6; // r11
  struct tagWND *v7; // r8
  struct tagWND *v8; // rcx
  __int64 v9; // rax
  __int64 v10; // r8

  if ( (*(_BYTE *)(a1 + 44) & 0x20) != 0 )
    LastNonBottomMostWindow = GetLastNonBottomMostWindow((struct tagWND *)a1, 1);
  else
    LastNonBottomMostWindow = (struct tagWND *)GetLastTopMostWindow(a1);
  v3 = LastNonBottomMostWindow;
  if ( (*(_BYTE *)(a1 + 55) & 0xC0) == 0x40
    || (v4 = *(_QWORD *)(a1 + 16), (*(_DWORD *)(v4 + 440) & 0x20) == 0)
    && (*(_DWORD *)(*(_QWORD *)(v4 + 376) + 12LL) & 0x80100) == 0 )
  {
    if ( gpqForeground )
    {
      v6 = *(_QWORD *)(a1 + 16);
      if ( *(_QWORD *)(v6 + 384) != gpqForeground )
      {
        v7 = LastNonBottomMostWindow ? LastNonBottomMostWindow : *(struct tagWND **)(*(_QWORD *)(a1 + 88) + 96LL);
        v8 = LastNonBottomMostWindow;
        if ( !v7 )
          goto LABEL_22;
        do
        {
          if ( v7 == (struct tagWND *)a1
            || (*((_BYTE *)v7 + 44) & 0x20) != 0
            || *((_QWORD *)v7 + 2) == v6
            && (*((_BYTE *)v7 + 48) & 8) == 0
            && ((*((_BYTE *)v7 + 55) & 0xC0) == 0x40 || (*((_BYTE *)v7 + 55) & 0x10) != 0) )
          {
            break;
          }
          v3 = v7;
          v7 = (struct tagWND *)*((_QWORD *)v7 + 9);
        }
        while ( v7 );
        if ( !v7 || (*((_BYTE *)v7 + 44) & 0x20) != 0 )
        {
LABEL_22:
          v3 = LastNonBottomMostWindow;
          if ( !LastNonBottomMostWindow )
            v8 = *(struct tagWND **)(*(_QWORD *)(a1 + 88) + 96LL);
          v9 = *(_QWORD *)(gpqForeground + 88LL);
          v10 = 0LL;
          if ( v9 )
            v10 = *(_QWORD *)(v9 + 16);
          while ( v8 && (*((_BYTE *)v8 + 44) & 0x20) == 0 )
          {
            if ( *((_QWORD *)v8 + 2) == v10 )
            {
              if ( *((_QWORD *)v8 + 13) )
              {
                v3 = v8;
              }
              else if ( (*((_BYTE *)v8 + 55) & 0x10) != 0 )
              {
                v3 = v8;
              }
            }
            v8 = (struct tagWND *)*((_QWORD *)v8 + 9);
          }
        }
      }
    }
  }
  return v3;
}

/*
 * XREFs of ?TrackBackground@@YAHPEAUtagWINDOWPOS@@PEAUtagWND@@111@Z @ 0x1C0083BD4
 * Callers:
 *     ?TrackZorder@@YAPEAUtagWND@@PEAUtagWINDOWPOS@@PEAU1@1PEAPEAUHWND__@@2@Z @ 0x1C0083B08 (-TrackZorder@@YAPEAUtagWND@@PEAUtagWINDOWPOS@@PEAU1@1PEAPEAUHWND__@@2@Z.c)
 * Callees:
 *     CalcForegroundInsertAfter @ 0x1C008143C (CalcForegroundInsertAfter.c)
 *     GetLastTopMostWindow @ 0x1C0081574 (GetLastTopMostWindow.c)
 *     ?GetRootOwner@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C00F8E0C (-GetRootOwner@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     ?IsLastTopMostWindow@@YAHPEAUtagWND@@@Z @ 0x1C01008D8 (-IsLastTopMostWindow@@YAHPEAUtagWND@@@Z.c)
 */

__int64 __fastcall TrackBackground(
        struct tagWINDOWPOS *a1,
        struct tagWND *a2,
        struct tagWND *a3,
        struct tagWND *a4,
        struct tagWND *a5)
{
  __int64 v5; // rbx
  struct tagWND *v10; // r9
  __int64 *LastTopMostWindow; // r9
  __int64 v12; // r10
  __int64 v13; // rax

  v5 = 0LL;
  if ( !a3
    || *((_QWORD *)a2 + 2) == gptiForeground
    || ((*((unsigned __int8 *)a3 + 48) >> 3) & 1) == ((*((unsigned __int8 *)a3 + 43) >> 2) & 1)
    || (*((_BYTE *)a2 + 48) & 8) != 0 )
  {
    return 0LL;
  }
  v10 = CalcForegroundInsertAfter((__int64)a2);
  if ( v10 )
  {
    if ( !a5 || *(_QWORD *)(*((_QWORD *)a2 + 2) + 392LL) != gpqForeground || !(unsigned int)IsLastTopMostWindow(v10) )
    {
      if ( !(unsigned int)IsLastTopMostWindow(v10) && a4 == GetRootOwner(a2) )
      {
        v13 = *((_QWORD *)a4 + 2);
        if ( *(_QWORD *)(v13 + 1232) )
        {
          if ( *(_QWORD *)(v13 + 392) == *(_QWORD *)v12 && a4 == *(struct tagWND **)(*(_QWORD *)v12 + 80LL) )
            LastTopMostWindow = (__int64 *)GetLastTopMostWindow((__int64)a2);
        }
      }
      if ( LastTopMostWindow )
        v5 = *LastTopMostWindow;
      goto LABEL_11;
    }
    return 0LL;
  }
LABEL_11:
  *((_QWORD *)a1 + 1) = v5;
  return 1LL;
}

/*
 * XREFs of ?TrackZorder@@YAPEAUtagWND@@PEAUtagWINDOWPOS@@PEAU1@1PEAPEAUHWND__@@2@Z @ 0x1C0076750
 * Callers:
 *     ?ZOrderByOwner@@YAPEAUtagSMWP@@PEAU1@@Z @ 0x1C0076330 (-ZOrderByOwner@@YAPEAUtagSMWP@@PEAU1@@Z.c)
 * Callees:
 *     ?TrackBackground@@YAHPEAUtagWINDOWPOS@@PEAUtagWND@@111@Z @ 0x1C007681C (-TrackBackground@@YAHPEAUtagWINDOWPOS@@PEAUtagWND@@111@Z.c)
 *     ?TrackZorderHelper@@YAXPEAUtagWINDOWPOS@@PEAPEAUHWND__@@@Z @ 0x1C00768EC (-TrackZorderHelper@@YAXPEAUtagWINDOWPOS@@PEAPEAUHWND__@@@Z.c)
 */

struct tagWND *__fastcall TrackZorder(
        struct tagWINDOWPOS *a1,
        struct tagWND *a2,
        struct tagWND *a3,
        HWND *a4,
        HWND *a5)
{
  int v7; // r11d
  __int64 v8; // rbp
  __int64 v9; // rsi
  struct tagWND *v10; // rcx
  HWND *v11; // rdx

  v7 = *((_DWORD *)&gSharedInfo + 4);
  v8 = *((_QWORD *)&gSharedInfo + 1);
  v9 = *(_QWORD *)(v7 * (unsigned int)(unsigned __int16)*(_DWORD *)a1 + v8);
  if ( !v9 )
    return 0LL;
  if ( *a5 )
    v10 = *(struct tagWND **)(v7 * (unsigned int)(unsigned __int16)*(_DWORD *)a5 + v8);
  else
    v10 = 0LL;
  if ( TrackBackground(a1, (struct tagWND *)v9, a2, a3, v10) )
  {
    *a5 = *(HWND *)a1;
  }
  else
  {
    v11 = a4;
    if ( ((*(unsigned __int8 *)(v9 + 48) >> 3) & 1) == ((*(unsigned __int8 *)(v9 + 43) >> 2) & 1) )
      v11 = a5;
    TrackZorderHelper(a1, v11);
  }
  return (struct tagWND *)v9;
}

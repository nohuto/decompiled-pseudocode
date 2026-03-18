/*
 * XREFs of ?AddSelfAndOwnees@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@11HI@Z @ 0x1C0074AD4
 * Callers:
 *     ?AddSelfAndOwnees@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@11HI@Z @ 0x1C0074AD4 (-AddSelfAndOwnees@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@11HI@Z.c)
 *     ?ZOrderByOwner2@@YAPEAUtagSMWP@@PEAU1@H@Z @ 0x1C007694C (-ZOrderByOwner2@@YAPEAUtagSMWP@@PEAU1@H@Z.c)
 * Callees:
 *     ?AddSelfAndOwnees@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@11HI@Z @ 0x1C0074AD4 (-AddSelfAndOwnees@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@11HI@Z.c)
 *     NextOwnedWindow @ 0x1C0074CA0 (NextOwnedWindow.c)
 *     _DeferWindowPos @ 0x1C00750A4 (_DeferWindowPos.c)
 *     ?GetRealOwner@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C0079284 (-GetRealOwner@@YAPEAUtagWND@@PEAU1@@Z.c)
 */

struct tagSMWP *__fastcall AddSelfAndOwnees(
        struct tagSMWP *a1,
        struct tagWND *a2,
        struct tagWND *a3,
        struct tagWND *a4,
        int a5,
        unsigned int a6)
{
  struct tagWND *v6; // r9
  struct tagWND *v7; // rbx
  struct tagWND *v8; // rsi
  __int64 OwnedWindow; // rax
  struct tagSMWP *v10; // r10
  struct tagWND *v11; // r11
  __int64 v12; // rax
  __int64 v13; // rdx
  int v14; // eax
  struct tagWND *v16; // rdx
  struct tagWND *RealOwner; // rax
  struct tagSMWP *v18; // rax
  int v19; // [rsp+50h] [rbp-28h]

  v6 = a2;
  v7 = a3;
  if ( a3 )
  {
    do
    {
      RealOwner = GetRealOwner(v7);
      if ( v6 == RealOwner )
        break;
      v7 = RealOwner;
    }
    while ( RealOwner );
  }
  v8 = 0LL;
  v19 = 0;
  while ( 1 )
  {
    OwnedWindow = NextOwnedWindow(v8, v6, *((_QWORD *)v6 + 11));
    v8 = (struct tagWND *)OwnedWindow;
    if ( !OwnedWindow )
      break;
    if ( !v7 )
    {
      v16 = (struct tagWND *)OwnedWindow;
LABEL_11:
      v10 = AddSelfAndOwnees(v10, v16, 0LL, 0LL, a5, a6);
      goto LABEL_12;
    }
    if ( !v19 )
    {
      if ( v11 )
      {
        if ( v11 != (struct tagWND *)1 )
        {
          while ( (struct tagWND *)OwnedWindow != v11 )
          {
            OwnedWindow = *(_QWORD *)(OwnedWindow + 72);
            if ( !OwnedWindow )
              goto LABEL_24;
          }
        }
      }
      else
      {
LABEL_24:
        v10 = AddSelfAndOwnees(v10, v7, a3, v11, a5, a6);
        if ( !v10 )
          return 0LL;
        v19 = 1;
      }
    }
    if ( v8 != v7 )
    {
      v16 = v8;
      goto LABEL_11;
    }
LABEL_12:
    if ( !v10 )
      return 0LL;
    v6 = a2;
  }
  if ( v7 )
  {
    if ( !v19 )
    {
      v18 = AddSelfAndOwnees(v10, v7, a3, v11, a5, a6);
      LODWORD(v10) = (_DWORD)v18;
      if ( !v18 )
        return 0LL;
    }
  }
  v12 = DeferWindowPos((_DWORD)v10, (_DWORD)a2, 0, 0, 0, 0, 0, a6 | 0x13, 0);
  v13 = v12;
  if ( !v12 )
    return 0LL;
  v14 = *(_DWORD *)(v12 + 28) - 1;
  if ( a5 != v14 )
    *(_QWORD *)(*(_QWORD *)(v13 + 40) + 168LL * v14 + 8) = *(_QWORD *)(*(_QWORD *)(v13 + 40) + 168LL * v14 - 168);
  return (struct tagSMWP *)v13;
}

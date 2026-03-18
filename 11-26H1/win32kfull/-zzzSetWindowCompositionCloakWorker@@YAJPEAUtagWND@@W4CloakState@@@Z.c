/*
 * XREFs of ?zzzSetWindowCompositionCloakWorker@@YAJPEAUtagWND@@W4CloakState@@@Z @ 0x14017A348
 * Callers:
 *     ?zzzSetWindowCompositionCloak@@YAJPEAUtagWND@@W4CloakState@@@Z @ 0x14017A2E8 (-zzzSetWindowCompositionCloak@@YAJPEAUtagWND@@W4CloakState@@@Z.c)
 *     ?zzzSetWindowCompositionCloakWorker@@YAJPEAUtagWND@@W4CloakState@@@Z @ 0x14017A348 (-zzzSetWindowCompositionCloakWorker@@YAJPEAUtagWND@@W4CloakState@@@Z.c)
 *     ?zzzUpdateWindowCloak@@YAXPEAUtagWND@@W4CloakState@@1@Z @ 0x14017A5C0 (-zzzUpdateWindowCloak@@YAXPEAUtagWND@@W4CloakState@@1@Z.c)
 * Callees:
 *     NextOwnedWindow @ 0x140141B10 (NextOwnedWindow.c)
 *     ?zzzSetWindowCompositionCloakWorker@@YAJPEAUtagWND@@W4CloakState@@@Z @ 0x14017A348 (-zzzSetWindowCompositionCloakWorker@@YAJPEAUtagWND@@W4CloakState@@@Z.c)
 *     ?IsHost@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x14017A58C (-IsHost@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     ?zzzUpdateWindowCloak@@YAXPEAUtagWND@@W4CloakState@@1@Z @ 0x14017A5C0 (-zzzUpdateWindowCloak@@YAXPEAUtagWND@@W4CloakState@@1@Z.c)
 *     ?GetNextComponentWindow@CoreWindowProp@@SAPEAUtagWND@@PEBU2@0@Z @ 0x1402E15F4 (-GetNextComponentWindow@CoreWindowProp@@SAPEAUtagWND@@PEBU2@0@Z.c)
 */

__int64 __fastcall zzzSetWindowCompositionCloakWorker(const struct tagWND *a1, unsigned int a2)
{
  int v3; // ebp
  __int64 v5; // rdx
  struct tagWND *NextComponentWindow; // rbx
  __int64 v8; // r8
  struct tagWND *v9; // rdx
  _QWORD *i; // rcx
  const struct tagWND *j; // rbx
  const struct tagWND *v12; // rcx
  const struct tagWND *v13; // rax
  bool k; // zf
  const struct tagWND *v15; // rcx
  const struct tagWND *v16; // rax
  bool m; // zf
  _QWORD *OwnedWindow; // rax
  _QWORD *v19; // rsi

  v3 = 0;
  v5 = (*(unsigned __int8 *)(*((_QWORD *)a1 + 5) + 233LL) >> 4) & 2 | 1u;
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 233LL) & 0x40) == 0 )
    v5 = (*(unsigned __int8 *)(*((_QWORD *)a1 + 5) + 233LL) >> 4) & 2;
  if ( a2 != (_DWORD)v5 )
  {
    zzzUpdateWindowCloak(a1, v5, a2);
    if ( !(unsigned int)CoreWindowProp::IsHost(a1) )
      goto LABEL_9;
    NextComponentWindow = CoreWindowProp::GetNextComponentWindow(a1, 0LL);
    if ( !NextComponentWindow )
      goto LABEL_9;
    do
    {
      v8 = *((_QWORD *)NextComponentWindow + 13);
      v9 = NextComponentWindow;
      for ( i = 0LL; ; i = v19 )
      {
        OwnedWindow = NextOwnedWindow(i, v9, v8);
        v19 = OwnedWindow;
        if ( !OwnedWindow )
          break;
        v3 = zzzSetWindowCompositionCloakWorker(OwnedWindow, a2);
        if ( v3 < 0 )
          break;
        v8 = *((_QWORD *)a1 + 13);
        v9 = a1;
      }
      NextComponentWindow = CoreWindowProp::GetNextComponentWindow(a1, NextComponentWindow);
    }
    while ( NextComponentWindow );
    if ( v3 >= 0 )
    {
LABEL_9:
      for ( j = *(const struct tagWND **)(*((_QWORD *)a1 + 13) + 112LL); j; j = (const struct tagWND *)*((_QWORD *)j + 11) )
      {
        v12 = (const struct tagWND *)*((_QWORD *)j + 15);
        v13 = j;
        for ( k = j == v12; !k; k = v12 == *((const struct tagWND **)j + 13) )
        {
          v13 = v12;
          if ( !v12 )
            break;
          v12 = (const struct tagWND *)*((_QWORD *)v12 + 13);
        }
        if ( a1 == v13 )
          break;
      }
LABEL_15:
      if ( j )
      {
        v3 = zzzSetWindowCompositionCloakWorker(j, a2);
        if ( v3 >= 0 )
        {
          while ( 1 )
          {
            j = (const struct tagWND *)*((_QWORD *)j + 11);
            if ( !j )
              break;
            v15 = (const struct tagWND *)*((_QWORD *)j + 15);
            v16 = j;
            for ( m = j == v15; !m; m = v15 == *((const struct tagWND **)j + 13) )
            {
              v16 = v15;
              if ( !v15 )
                break;
              v15 = (const struct tagWND *)*((_QWORD *)v15 + 13);
            }
            if ( a1 == v16 )
              goto LABEL_15;
          }
        }
      }
    }
  }
  return (unsigned int)v3;
}

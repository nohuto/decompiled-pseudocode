/*
 * XREFs of ?SetTopmost@@YAXPEAUtagWND@@HH@Z @ 0x1C0121CAC
 * Callers:
 *     ?SetTopmostEnum@@YAXPEAUtagWND@@HH@Z @ 0x1C0121C7C (-SetTopmostEnum@@YAXPEAUtagWND@@HH@Z.c)
 *     ?SetTopmost@@YAXPEAUtagWND@@HH@Z @ 0x1C0121CAC (-SetTopmost@@YAXPEAUtagWND@@HH@Z.c)
 * Callees:
 *     SetOrClrWF @ 0x1C00964B4 (SetOrClrWF.c)
 *     NextOwnedWindow @ 0x1C00A62A8 (NextOwnedWindow.c)
 *     ?SetTopmost@@YAXPEAUtagWND@@HH@Z @ 0x1C0121CAC (-SetTopmost@@YAXPEAUtagWND@@HH@Z.c)
 */

void __fastcall SetTopmost(struct tagWND *a1, int a2, int a3)
{
  struct tagWND *v6; // rbx
  struct tagWND *OwnedWindow; // rax

  SetOrClrWF(a2 != ((*((unsigned __int8 *)a1 + 48) >> 3) & 1), a1, 0x304u, 1);
  if ( !a3 )
  {
    v6 = 0LL;
    while ( 1 )
    {
      OwnedWindow = (struct tagWND *)NextOwnedWindow(v6, a1, *((_QWORD *)a1 + 11));
      v6 = OwnedWindow;
      if ( !OwnedWindow )
        break;
      SetTopmost(OwnedWindow, a2, 0);
    }
  }
}

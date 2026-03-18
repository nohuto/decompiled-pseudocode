/*
 * XREFs of ?_LogLinkWindow@@YAXW4LogBeforeOrAfter@@PEAUtagWND@@11@Z @ 0x1C00664CC
 * Callers:
 *     UnlinkWindow @ 0x1C0065F2C (UnlinkWindow.c)
 *     LinkWindow @ 0x1C006616C (LinkWindow.c)
 * Callees:
 *     _GetDesktopWindow @ 0x1C00665E0 (_GetDesktopWindow.c)
 *     memset @ 0x1C015D4C0 (memset.c)
 */

int __fastcall _LogLinkWindow(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  _UNKNOWN **DesktopWindow; // rax
  __int64 v8; // r10
  _UNKNOWN **v9; // rdx
  unsigned int v10; // ebx
  unsigned int *v11; // rdi
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  DesktopWindow = &retaddr;
  if ( gpLinkWindowLog )
  {
    if ( a2[11] )
    {
      DesktopWindow = (_UNKNOWN **)GetDesktopWindow(a2);
      if ( v9 == DesktopWindow )
      {
        v10 = ++giLinkWindowLogIndex;
        v11 = (unsigned int *)(v8 + 136LL * (giLinkWindowLogIndex % guiLinkWindowLogSize));
        memset(v11, 0, 0x88uLL);
        *v11 = v10;
        *((_QWORD *)v11 + 1) = a2;
        *((_QWORD *)v11 + 2) = a3;
        *((_QWORD *)v11 + 3) = a4;
        *((_QWORD *)v11 + 4) = a2[10];
        *((_QWORD *)v11 + 5) = a2[9];
        *((_QWORD *)v11 + 10) = gptiCurrent;
        *((_QWORD *)v11 + 8) = a2[13];
        LODWORD(DesktopWindow) = RtlWalkFrameChain((PVOID *)v11 + 11, 6u, 0x100u);
      }
    }
  }
  return (int)DesktopWindow;
}

/*
 * XREFs of ?_LogLinkWindow@@YAXW4LogBeforeOrAfter@@PEAUtagWND@@11@Z @ 0x1C0056840
 * Callers:
 *     UnlinkWindow @ 0x1C0055CCC (UnlinkWindow.c)
 *     LinkWindow @ 0x1C00564E4 (LinkWindow.c)
 * Callees:
 *     _IsTopLevelWindow @ 0x1C0056918 (_IsTopLevelWindow.c)
 *     memset @ 0x1C0152CC0 (memset.c)
 */

int __fastcall _LogLinkWindow(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  _UNKNOWN **v4; // rax
  __int64 v8; // r10
  unsigned int v9; // ebx
  unsigned int *v10; // rdi
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  v4 = &retaddr;
  if ( gpLinkWindowLog )
  {
    LODWORD(v4) = IsTopLevelWindow(a2);
    if ( (_DWORD)v4 )
    {
      v9 = ++giLinkWindowLogIndex;
      v10 = (unsigned int *)(v8 + 136LL * (giLinkWindowLogIndex % guiLinkWindowLogSize));
      memset(v10, 0, 0x88uLL);
      *v10 = v9;
      *((_QWORD *)v10 + 1) = a2;
      *((_QWORD *)v10 + 2) = a3;
      *((_QWORD *)v10 + 3) = a4;
      *((_QWORD *)v10 + 4) = a2[10];
      *((_QWORD *)v10 + 5) = a2[9];
      *((_QWORD *)v10 + 10) = gptiCurrent;
      *((_QWORD *)v10 + 8) = a2[13];
      LODWORD(v4) = RtlWalkFrameChain((PVOID *)v10 + 11, 6u, 0x100u);
    }
  }
  return (int)v4;
}

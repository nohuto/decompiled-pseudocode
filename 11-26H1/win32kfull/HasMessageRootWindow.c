/*
 * XREFs of HasMessageRootWindow @ 0x140269CBC
 * Callers:
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1400470A8 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     xxxCreateWindowEx @ 0x14017B3B8 (xxxCreateWindowEx.c)
 * Callees:
 *     GetMessageWindow @ 0x140046B50 (GetMessageWindow.c)
 *     _GetAncestor @ 0x14013EA2C (_GetAncestor.c)
 */

__int64 __fastcall HasMessageRootWindow(_QWORD *a1)
{
  unsigned int v1; // r11d
  __int64 MessageWindow; // rax
  __int64 v4; // r10

  v1 = 0;
  if ( a1 )
  {
    GetAncestor(a1, 4);
    MessageWindow = GetMessageWindow((__int64)a1);
    if ( v4 == MessageWindow )
      return 1;
  }
  return v1;
}

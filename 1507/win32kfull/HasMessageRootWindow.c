/*
 * XREFs of HasMessageRootWindow @ 0x1C0008CF8
 * Callers:
 *     xxxSetParentWorker @ 0x1C0042BCC (xxxSetParentWorker.c)
 *     xxxCreateWindowEx @ 0x1C005E828 (xxxCreateWindowEx.c)
 * Callees:
 *     GetMessageWindow @ 0x1C005CD50 (GetMessageWindow.c)
 *     _GetAncestor @ 0x1C00E9F5C (_GetAncestor.c)
 */

__int64 __fastcall HasMessageRootWindow(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 MessageWindow; // rax
  __int64 v5; // r11

  v1 = 0;
  if ( a1 )
  {
    GetAncestor(a1, 4LL);
    MessageWindow = GetMessageWindow(a1);
    return v5 == MessageWindow;
  }
  return v1;
}

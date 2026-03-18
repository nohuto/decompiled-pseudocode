/*
 * XREFs of HasMessageRootWindow @ 0x1C000D06C
 * Callers:
 *     xxxCreateWindowEx @ 0x1C0072880 (xxxCreateWindowEx.c)
 *     xxxSetParentWorker @ 0x1C00DD234 (xxxSetParentWorker.c)
 * Callees:
 *     GetMessageWindow @ 0x1C0063580 (GetMessageWindow.c)
 *     _GetAncestor @ 0x1C00987DC (_GetAncestor.c)
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

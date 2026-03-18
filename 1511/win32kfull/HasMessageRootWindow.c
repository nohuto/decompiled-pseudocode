/*
 * XREFs of HasMessageRootWindow @ 0x1C000B940
 * Callers:
 *     xxxCreateWindowEx @ 0x1C004C640 (xxxCreateWindowEx.c)
 *     xxxSetParentWorker @ 0x1C0088E64 (xxxSetParentWorker.c)
 * Callees:
 *     GetMessageWindow @ 0x1C007AA6C (GetMessageWindow.c)
 *     _GetAncestor @ 0x1C00D0504 (_GetAncestor.c)
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

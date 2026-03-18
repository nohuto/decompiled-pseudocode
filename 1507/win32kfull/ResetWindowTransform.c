/*
 * XREFs of ResetWindowTransform @ 0x1C008A308
 * Callers:
 *     xxxSetParentWorker @ 0x1C0042BCC (xxxSetParentWorker.c)
 *     xxxFreeWindow @ 0x1C0088BC8 (xxxFreeWindow.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ResetWindowTransform(__int64 a1)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 272);
  if ( v2 )
  {
    result = Win32FreePool(v2);
    *(_QWORD *)(a1 + 272) = 0LL;
  }
  return result;
}

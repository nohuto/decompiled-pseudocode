/*
 * XREFs of ResetWindowTransform @ 0x1C00DB9A8
 * Callers:
 *     xxxSetParentWorker @ 0x1C00DD234 (xxxSetParentWorker.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ResetWindowTransform(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  __int64 result; // rax

  v4 = *(_QWORD *)(a1 + 272);
  if ( v4 )
  {
    result = Win32FreePool(v4, a2, a3);
    *(_QWORD *)(a1 + 272) = 0LL;
  }
  return result;
}

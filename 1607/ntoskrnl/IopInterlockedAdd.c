/*
 * XREFs of IopInterlockedAdd @ 0x1400AA794
 * Callers:
 *     IopCompleteRequest @ 0x1400543C0 (IopCompleteRequest.c)
 *     IoRemoveIoCompletion @ 0x140069C60 (IoRemoveIoCompletion.c)
 *     IopCancelIrpsInFileObjectList @ 0x1400A0620 (IopCancelIrpsInFileObjectList.c)
 *     IopCheckListForCancelableIrp @ 0x1400A07E8 (IopCheckListForCancelableIrp.c)
 *     IopDropIrp @ 0x1400F56CC (IopDropIrp.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IopInterlockedAdd(volatile signed __int64 *a1, int a2)
{
  unsigned __int64 v2; // rax
  unsigned __int64 v3; // r8
  __int64 v4; // r9

  v2 = *a1;
  do
  {
    v3 = v2;
    v4 = a2 + ((v2 >> 1) & 3);
    v2 = _InterlockedCompareExchange64(a1, v2 & 0xFFFFFFFFFFFFFFF9uLL | (2 * v4), v2);
  }
  while ( v3 != v2 );
  return (unsigned int)v4;
}

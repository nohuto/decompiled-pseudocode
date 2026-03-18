/*
 * XREFs of sub_140125D7C @ 0x140125D7C
 * Callers:
 *     IopCompleteRequest @ 0x14004A190 (IopCompleteRequest.c)
 *     IopCancelIrpsInFileObjectList @ 0x140074834 (IopCancelIrpsInFileObjectList.c)
 *     IopCheckListForCancelableIrp @ 0x140074A34 (IopCheckListForCancelableIrp.c)
 *     IoRemoveIoCompletion @ 0x14009E3A0 (IoRemoveIoCompletion.c)
 *     IopDropIrp @ 0x140112D18 (IopDropIrp.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140125D7C(volatile signed __int64 *a1, int a2)
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

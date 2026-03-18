/*
 * XREFs of CmpStartKcbStack @ 0x1404050C0
 * Callers:
 *     CmpConstructNameFromKeyNodes @ 0x14002D790 (CmpConstructNameFromKeyNodes.c)
 *     CmpPartialPromoteSubkeys @ 0x1401B3204 (CmpPartialPromoteSubkeys.c)
 *     CmpPromoteKey @ 0x1401B3424 (CmpPromoteKey.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x140404FE8 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpIsKeyDeleted @ 0x140405030 (CmpIsKeyDeleted.c)
 *     CmpDoBuildVirtualStack @ 0x140600BE8 (CmpDoBuildVirtualStack.c)
 * Callees:
 *     CmpAllocateTransientPoolWithTag @ 0x140087418 (CmpAllocateTransientPoolWithTag.c)
 *     memset @ 0x1401715C0 (memset.c)
 */

__int64 __fastcall CmpStartKcbStack(__int64 a1, __int16 a2)
{
  PVOID v2; // rsi
  __int64 result; // rax
  SIZE_T v6; // rbp
  PVOID TransientPoolWithTag; // rax

  v2 = 0LL;
  if ( a2 < 2 || a2 == 1 )
    goto LABEL_2;
  v6 = 8LL * (unsigned int)(a2 - 1);
  TransientPoolWithTag = CmpAllocateTransientPoolWithTag(a1, v6, 0x35364D43u);
  v2 = TransientPoolWithTag;
  if ( TransientPoolWithTag )
  {
    memset(TransientPoolWithTag, 0, v6);
LABEL_2:
    *(_WORD *)a1 = a2;
    *(_WORD *)(a1 + 2) = -1;
    result = 0LL;
    *(_QWORD *)(a1 + 24) = v2;
    return result;
  }
  return 3221225626LL;
}

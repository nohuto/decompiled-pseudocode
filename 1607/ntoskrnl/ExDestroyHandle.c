/*
 * XREFs of ExDestroyHandle @ 0x14051C038
 * Callers:
 *     PspJobDelete @ 0x14010CAAC (PspJobDelete.c)
 *     PspProcessDelete @ 0x14045F6F8 (PspProcessDelete.c)
 *     RtlpInsertStringAtom @ 0x1404B913C (RtlpInsertStringAtom.c)
 *     RtlpFreeHandleForAtom @ 0x14051BA24 (RtlpFreeHandleForAtom.c)
 *     AlpcpFreeMessageFunction @ 0x14051BB18 (AlpcpFreeMessageFunction.c)
 *     PspThreadDelete @ 0x14051BBB8 (PspThreadDelete.c)
 * Callees:
 *     ExSweepSingleHandle @ 0x14010D03C (ExSweepSingleHandle.c)
 *     ExpFreeHandleTableEntry @ 0x14051C094 (ExpFreeHandleTableEntry.c)
 *     ExpUpdateDebugInfo @ 0x1406AD94C (ExpUpdateDebugInfo.c)
 */

__int64 __fastcall ExDestroyHandle(__int64 a1, __int64 a2, _QWORD *a3)
{
  unsigned int v6; // ebx

  if ( *(_QWORD *)(a1 + 96) )
    ExpUpdateDebugInfo(a1, KeGetCurrentThread(), a2, 2LL);
  v6 = ExSweepSingleHandle(a1, a3);
  ExpFreeHandleTableEntry(a1, a2, a3);
  return v6;
}

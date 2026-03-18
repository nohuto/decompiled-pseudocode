/*
 * XREFs of ExDestroyHandle @ 0x1404A3C38
 * Callers:
 *     PspJobDelete @ 0x1400888BC (PspJobDelete.c)
 *     PspProcessDelete @ 0x140460828 (PspProcessDelete.c)
 *     RtlpFreeHandleForAtom @ 0x1404A3624 (RtlpFreeHandleForAtom.c)
 *     AlpcpFreeMessageFunction @ 0x1404A3718 (AlpcpFreeMessageFunction.c)
 *     PspThreadDelete @ 0x1404A37B8 (PspThreadDelete.c)
 *     RtlpInsertStringAtom @ 0x1404D5B38 (RtlpInsertStringAtom.c)
 * Callees:
 *     ExSweepSingleHandle @ 0x140088E4C (ExSweepSingleHandle.c)
 *     ExpFreeHandleTableEntry @ 0x1404A3C94 (ExpFreeHandleTableEntry.c)
 *     ExpUpdateDebugInfo @ 0x1406AD814 (ExpUpdateDebugInfo.c)
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

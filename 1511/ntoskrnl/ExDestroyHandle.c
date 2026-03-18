/*
 * XREFs of ExDestroyHandle @ 0x1403F2154
 * Callers:
 *     PspProcessDelete @ 0x1403E3968 (PspProcessDelete.c)
 *     PspThreadDelete @ 0x1403F1F50 (PspThreadDelete.c)
 *     AlpcpFreeMessageFunction @ 0x1403F2E3C (AlpcpFreeMessageFunction.c)
 *     RtlpInsertStringAtom @ 0x14046033C (RtlpInsertStringAtom.c)
 *     RtlpFreeHandleForAtom @ 0x1404603E4 (RtlpFreeHandleForAtom.c)
 * Callees:
 *     ExSweepSingleHandle @ 0x14002DBA0 (ExSweepSingleHandle.c)
 *     ExpFreeHandleTableEntry @ 0x1403F21B0 (ExpFreeHandleTableEntry.c)
 *     ExpUpdateDebugInfo @ 0x14066CC94 (ExpUpdateDebugInfo.c)
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

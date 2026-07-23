/*
 * XREFs of MiUpdatePageFileSectionList @ 0x14008F97C
 * Callers:
 *     MiCreatePrototypePtes @ 0x14008F5E4 (MiCreatePrototypePtes.c)
 *     MiSegmentDelete @ 0x1404A25C4 (MiSegmentDelete.c)
 *     MiCreatePagingFileMap @ 0x1404A2750 (MiCreatePagingFileMap.c)
 * Callees:
 *     RtlAvlInsertNodeEx @ 0x140026F30 (RtlAvlInsertNodeEx.c)
 *     RtlAvlRemoveNode @ 0x140028080 (RtlAvlRemoveNode.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14002E560 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x14002E710 (ExAcquireSpinLockExclusive.c)
 */

__int64 __fastcall MiUpdatePageFileSectionList(__int64 a1, int a2)
{
  KIRQL v4; // al
  bool v5; // dl
  KIRQL v6; // bp
  _QWORD *v7; // r10
  _QWORD *v8; // rax
  __int64 result; // rax

  v4 = ExAcquireSpinLockExclusive(&dword_1403266F0);
  v5 = 0;
  v6 = v4;
  if ( !a2 )
  {
    RtlAvlRemoveNode((unsigned __int64 *)&qword_1403266E8, a1 + 56);
    goto LABEL_10;
  }
  v7 = (_QWORD *)qword_1403266E8;
  if ( !qword_1403266E8 )
    goto LABEL_9;
  while ( *(_QWORD *)(a1 + 8) < *(v7 - 6) )
  {
    v8 = (_QWORD *)*v7;
    if ( !*v7 )
      goto LABEL_9;
LABEL_5:
    v7 = v8;
  }
  v8 = (_QWORD *)v7[1];
  if ( v8 )
    goto LABEL_5;
  v5 = 1;
LABEL_9:
  RtlAvlInsertNodeEx((unsigned __int64 *)&qword_1403266E8, (unsigned __int64)v7, v5, a1 + 56);
LABEL_10:
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_1403266F0);
  result = v6;
  __writecr8(v6);
  return result;
}

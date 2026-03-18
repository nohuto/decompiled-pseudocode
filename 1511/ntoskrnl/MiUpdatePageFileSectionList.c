/*
 * XREFs of MiUpdatePageFileSectionList @ 0x14000C770
 * Callers:
 *     MiCreatePrototypePtes @ 0x14000CC94 (MiCreatePrototypePtes.c)
 *     MiSegmentDelete @ 0x1403C7FD8 (MiSegmentDelete.c)
 *     MiCreatePagingFileMap @ 0x1403C89F8 (MiCreatePagingFileMap.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14000A2E0 (ExAcquireSpinLockExclusive.c)
 *     RtlAvlInsertNodeEx @ 0x14000C920 (RtlAvlInsertNodeEx.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14004CC40 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     RtlAvlRemoveNode @ 0x14006BDC0 (RtlAvlRemoveNode.c)
 */

__int64 __fastcall MiUpdatePageFileSectionList(__int64 a1, int a2)
{
  KIRQL v4; // al
  char v5; // dl
  KIRQL v6; // bp
  _QWORD *v7; // r10
  unsigned __int64 v8; // r8
  _QWORD *v9; // rax
  __int64 result; // rax

  v4 = ExAcquireSpinLockExclusive(&dword_1402FE3E8);
  v5 = 0;
  v6 = v4;
  if ( !a2 )
  {
    RtlAvlRemoveNode(&qword_1402FE3E0, a1 + 56);
    goto LABEL_10;
  }
  v7 = (_QWORD *)qword_1402FE3E0;
  v8 = *(_QWORD *)(a1 + 8);
  if ( !qword_1402FE3E0 )
    goto LABEL_9;
  while ( v8 < *(v7 - 6) )
  {
    v9 = (_QWORD *)*v7;
    if ( !*v7 )
      goto LABEL_9;
LABEL_5:
    v7 = v9;
  }
  v9 = (_QWORD *)v7[1];
  if ( v9 )
    goto LABEL_5;
  v5 = 1;
LABEL_9:
  LOBYTE(v8) = v5;
  RtlAvlInsertNodeEx(&qword_1402FE3E0, v7, v8, a1 + 56);
LABEL_10:
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_1402FE3E8);
  result = v6;
  __writecr8(v6);
  return result;
}

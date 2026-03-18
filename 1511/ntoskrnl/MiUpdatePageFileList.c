/*
 * XREFs of MiUpdatePageFileList @ 0x14013A4F0
 * Callers:
 *     MiIncreaseCommitLimits @ 0x14013A344 (MiIncreaseCommitLimits.c)
 *     MiInsertPageFileInList @ 0x140538300 (MiInsertPageFileInList.c)
 *     MiDeletePagefile @ 0x14062556C (MiDeletePagefile.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14000A2E0 (ExAcquireSpinLockExclusive.c)
 *     RtlAvlInsertNodeEx @ 0x14000C920 (RtlAvlInsertNodeEx.c)
 *     ExReleaseSpinLockExclusive @ 0x14004CC00 (ExReleaseSpinLockExclusive.c)
 *     RtlAvlRemoveNode @ 0x14006BDC0 (RtlAvlRemoveNode.c)
 */

void __fastcall MiUpdatePageFileList(__int64 a1, int a2)
{
  bool v2; // bl
  unsigned __int64 v5; // rbp
  KIRQL v6; // r14
  unsigned __int64 v7; // rcx
  _QWORD *v8; // rdx
  _QWORD *v9; // rax

  v2 = 0;
  if ( !*(_QWORD *)(a1 + 56) )
    return;
  v5 = a1 + 264;
  v6 = ExAcquireSpinLockExclusive(&dword_1402FF1E8);
  if ( !a2 )
  {
    RtlAvlRemoveNode((unsigned __int64 *)&qword_1402FF1E0, v5);
    goto LABEL_5;
  }
  v7 = *(_QWORD *)(a1 + 56);
  *(_WORD *)(a1 + 204) |= 0x100u;
  v8 = (_QWORD *)qword_1402FF1E0;
  if ( !qword_1402FF1E0 )
    goto LABEL_4;
  while ( v7 < *(v8 - 26) )
  {
    v9 = (_QWORD *)*v8;
    if ( !*v8 )
      goto LABEL_4;
LABEL_9:
    v8 = v9;
  }
  v9 = (_QWORD *)v8[1];
  if ( v9 )
    goto LABEL_9;
  v2 = 1;
LABEL_4:
  RtlAvlInsertNodeEx((unsigned __int64 *)&qword_1402FF1E0, (unsigned __int64)v8, v2, v5);
LABEL_5:
  ExReleaseSpinLockExclusive(&dword_1402FF1E8, v6);
}

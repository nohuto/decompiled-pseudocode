/*
 * XREFs of MiUpdatePageFileList @ 0x1401431BC
 * Callers:
 *     MiIncreaseCommitLimits @ 0x140142F68 (MiIncreaseCommitLimits.c)
 *     MiInsertPageFileInList @ 0x1405690A4 (MiInsertPageFileInList.c)
 *     MiDeletePagefile @ 0x14065AEEC (MiDeletePagefile.c)
 * Callees:
 *     RtlAvlInsertNodeEx @ 0x140026F30 (RtlAvlInsertNodeEx.c)
 *     RtlAvlRemoveNode @ 0x140028080 (RtlAvlRemoveNode.c)
 *     ExReleaseSpinLockExclusive @ 0x14002E520 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14002E710 (ExAcquireSpinLockExclusive.c)
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
  v6 = ExAcquireSpinLockExclusive(&dword_140327678);
  if ( !a2 )
  {
    RtlAvlRemoveNode((unsigned __int64 *)&qword_140327670, v5);
    goto LABEL_7;
  }
  v7 = *(_QWORD *)(a1 + 56);
  *(_WORD *)(a1 + 204) |= 0x100u;
  v8 = (_QWORD *)qword_140327670;
  if ( !qword_140327670 )
    goto LABEL_6;
  while ( v7 < *(v8 - 26) )
  {
    v9 = (_QWORD *)*v8;
    if ( !*v8 )
      goto LABEL_6;
LABEL_9:
    v8 = v9;
  }
  v9 = (_QWORD *)v8[1];
  if ( v9 )
    goto LABEL_9;
  v2 = 1;
LABEL_6:
  RtlAvlInsertNodeEx((unsigned __int64 *)&qword_140327670, (unsigned __int64)v8, v2, v5);
LABEL_7:
  ExReleaseSpinLockExclusive(&dword_140327678, v6);
}

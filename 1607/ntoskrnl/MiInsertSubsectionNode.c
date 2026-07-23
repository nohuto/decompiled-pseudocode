/*
 * XREFs of MiInsertSubsectionNode @ 0x1400FB238
 * Callers:
 *     MiAppendSubsectionChain @ 0x1400FAF08 (MiAppendSubsectionChain.c)
 *     MiCreateDataFileMap @ 0x1405056C4 (MiCreateDataFileMap.c)
 * Callees:
 *     RtlAvlInsertNodeEx @ 0x140026F30 (RtlAvlInsertNodeEx.c)
 *     ExReleaseSpinLockExclusive @ 0x14002E520 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14002E710 (ExAcquireSpinLockExclusive.c)
 */

void __fastcall MiInsertSubsectionNode(__int64 a1, unsigned __int64 a2, int a3)
{
  bool v3; // bl
  unsigned __int64 *v4; // rdi
  KIRQL v7; // si
  _QWORD *v8; // rdx
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // r8
  unsigned __int64 v11; // r9
  _QWORD *v12; // rax

  v3 = 0;
  v4 = (unsigned __int64 *)(a1 + 240);
  if ( a3 )
    v7 = 17;
  else
    v7 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72));
  v8 = (_QWORD *)*v4;
  if ( !*v4 )
    goto LABEL_4;
  v9 = *(unsigned int *)(a2 + 36) | ((unsigned __int64)(*(_WORD *)(a2 + 32) & 0xFFC0) << 26);
  while ( 1 )
  {
    v10 = *((unsigned int *)v8 - 5) | ((unsigned __int64)(*(_WORD *)(v8 - 3) & 0xFFC0) << 26);
    v11 = *((unsigned int *)v8 - 4) + v10 - 1;
    if ( (*((_WORD *)v8 - 11) & 0xFFF0) != 0 )
      v11 = *((unsigned int *)v8 - 4) + v10;
    if ( v9 >= v10 || v9 > v11 )
      break;
    v12 = (_QWORD *)*v8;
    if ( !*v8 )
      goto LABEL_4;
LABEL_16:
    v8 = v12;
  }
  v12 = (_QWORD *)v8[1];
  if ( v12 )
    goto LABEL_16;
  v3 = 1;
LABEL_4:
  RtlAvlInsertNodeEx(v4, (unsigned __int64)v8, v3, a2 + 56);
  ++v4[1];
  v4[2] = a2;
  if ( v7 != 17 )
    ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72), v7);
}

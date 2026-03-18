/*
 * XREFs of MiInsertSubsectionNode @ 0x14000C820
 * Callers:
 *     MiAppendSubsectionChain @ 0x14000A4A4 (MiAppendSubsectionChain.c)
 *     MiCreateDataFileMap @ 0x1403C86B8 (MiCreateDataFileMap.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14000A2E0 (ExAcquireSpinLockExclusive.c)
 *     RtlAvlInsertNodeEx @ 0x14000C920 (RtlAvlInsertNodeEx.c)
 *     ExReleaseSpinLockExclusive @ 0x14004CC00 (ExReleaseSpinLockExclusive.c)
 */

void __fastcall MiInsertSubsectionNode(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  char v3; // bl
  __int64 v4; // rdi
  KIRQL v7; // si
  _QWORD *v8; // rdx
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // r9
  _QWORD *v11; // rax

  v3 = 0;
  v4 = a1 + 232;
  if ( (_DWORD)a3 )
    v7 = 17;
  else
    v7 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72));
  v8 = *(_QWORD **)v4;
  if ( !*(_QWORD *)v4 )
    goto LABEL_4;
  v9 = *(unsigned int *)(a2 + 36) | ((unsigned __int64)(*(_WORD *)(a2 + 32) & 0xFFC0) << 26);
  while ( 1 )
  {
    a3 = *((unsigned int *)v8 - 5) | ((unsigned __int64)(*(_WORD *)(v8 - 3) & 0xFFC0) << 26);
    v10 = *((unsigned int *)v8 - 4) + a3 - 1;
    if ( (*((_WORD *)v8 - 11) & 0xFFF0) != 0 )
      v10 = *((unsigned int *)v8 - 4) + a3;
    if ( v9 >= a3 || v9 > v10 )
      break;
    v11 = (_QWORD *)*v8;
    if ( !*v8 )
      goto LABEL_4;
LABEL_16:
    v8 = v11;
  }
  v11 = (_QWORD *)v8[1];
  if ( v11 )
    goto LABEL_16;
  v3 = 1;
LABEL_4:
  LOBYTE(a3) = v3;
  RtlAvlInsertNodeEx(v4, v8, a3, a2 + 56);
  ++*(_QWORD *)(v4 + 8);
  *(_QWORD *)(v4 + 16) = a2;
  if ( v7 != 17 )
    ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72), v7);
}

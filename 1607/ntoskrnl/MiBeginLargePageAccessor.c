/*
 * XREFs of MiBeginLargePageAccessor @ 0x14008ADF8
 * Callers:
 *     MiUnlinkNodeLargePage @ 0x14008A830 (MiUnlinkNodeLargePage.c)
 * Callees:
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140026F70 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     RtlAvlInsertNodeEx @ 0x1400273B0 (RtlAvlInsertNodeEx.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14002E9E0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 */

__int64 __fastcall MiBeginLargePageAccessor(unsigned __int64 a1, __int64 a2)
{
  bool v3; // bl
  struct _KTHREAD *CurrentThread; // rsi
  bool v5; // zf
  _QWORD *v7; // rdx
  _QWORD *v8; // rax

  if ( (*(_BYTE *)(a2 + 34) & 8) != 0 )
    return 0LL;
  *(_QWORD *)(a1 + 24) = a2;
  v3 = 0;
  CurrentThread = KeGetCurrentThread();
  *(_QWORD *)(a1 + 56) = CurrentThread;
  *(_BYTE *)(a2 + 34) |= 8u;
  *(_QWORD *)(a2 + 16) = a1;
  v5 = *(_BYTE *)(a1 + 69) == 1;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_BYTE *)(a1 + 68) = 0;
  if ( !v5 )
    return 1LL;
  ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140326FA0);
  v7 = (_QWORD *)qword_140326FA8;
  if ( !qword_140326FA8 )
    goto LABEL_8;
  while ( (unsigned __int64)CurrentThread < v7[7] )
  {
    v8 = (_QWORD *)*v7;
    if ( !*v7 )
      goto LABEL_8;
LABEL_11:
    v7 = v8;
  }
  v8 = (_QWORD *)v7[1];
  if ( v8 )
    goto LABEL_11;
  v3 = 1;
LABEL_8:
  RtlAvlInsertNodeEx((unsigned __int64 *)&qword_140326FA8, (unsigned __int64)v7, v3, a1);
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140326FA0);
  return 1LL;
}

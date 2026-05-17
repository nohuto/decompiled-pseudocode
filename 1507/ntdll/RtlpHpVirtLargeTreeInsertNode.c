/*
 * XREFs of RtlpHpVirtLargeTreeInsertNode @ 0x1800EB644
 * Callers:
 *     RtlpHpVirtFreeHeap @ 0x1800EAC08 (RtlpHpVirtFreeHeap.c)
 *     RtlpHpVirtLargeTreeInsert @ 0x1800EB5F8 (RtlpHpVirtLargeTreeInsert.c)
 *     RtlpHpVirtReAllocateHeap @ 0x1800EBA84 (RtlpHpVirtReAllocateHeap.c)
 * Callees:
 *     RtlRbInsertNodeEx @ 0x180027A50 (RtlRbInsertNodeEx.c)
 *     RtlAcquireSRWLockExclusive @ 0x18002A460 (RtlAcquireSRWLockExclusive.c)
 */

signed __int64 __fastcall RtlpHpVirtLargeTreeInsertNode(unsigned __int64 a1, char *a2, __int64 a3, __int64 a4)
{
  _QWORD *v5; // rdx
  bool v6; // al
  _QWORD *v7; // rcx

  RtlAcquireSRWLockExclusive(&qword_180144860, a2, a3, a4);
  v5 = (_QWORD *)xmmword_180144868;
  v6 = 0;
  if ( (_QWORD)xmmword_180144868 )
  {
    while ( 1 )
    {
      if ( v5[3] >= *(_QWORD *)(a1 + 24) )
      {
        v7 = (_QWORD *)v5[1];
        if ( !v7 )
        {
          v6 = 1;
          break;
        }
      }
      else
      {
        v7 = (_QWORD *)*v5;
        if ( !*v5 )
          break;
      }
      v5 = v7;
    }
  }
  RtlRbInsertNodeEx((unsigned __int64 *)&xmmword_180144868, (unsigned __int64)v5, v6, a1);
  return RtlReleaseSRWLockExclusive(&qword_180144860);
}

/*
 * XREFs of RtlpHpVirtLargeTreeFind @ 0x1800EB55C
 * Callers:
 *     RtlpHpVirtFindHeapByAlloc @ 0x1800EAB58 (RtlpHpVirtFindHeapByAlloc.c)
 * Callees:
 *     RtlRbRemoveNode @ 0x1800280B0 (RtlRbRemoveNode.c)
 *     RtlAcquireSRWLockExclusive @ 0x18002A460 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockShared @ 0x180030740 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x180030820 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockExclusive @ 0x180033470 (RtlReleaseSRWLockExclusive.c)
 */

unsigned __int64 *__fastcall RtlpHpVirtLargeTreeFind(unsigned __int64 a1, char *a2, __int64 a3, __int64 a4)
{
  int v5; // edi
  unsigned __int64 *v6; // rbx

  v5 = (int)a2;
  if ( (_DWORD)a2 )
    RtlAcquireSRWLockExclusive(&qword_180144860, a2, a3, a4);
  else
    RtlAcquireSRWLockShared(&qword_180144860, a2, a3, a4);
  v6 = (unsigned __int64 *)xmmword_180144868;
  while ( v6 )
  {
    if ( v6[3] == a1 )
    {
      if ( !v5 )
        goto LABEL_15;
      RtlRbRemoveNode((unsigned __int64 *)&xmmword_180144868, v6);
      break;
    }
    if ( v6[3] >= a1 )
      v6 = (unsigned __int64 *)v6[1];
    else
      v6 = (unsigned __int64 *)*v6;
  }
  if ( v5 )
  {
    RtlReleaseSRWLockExclusive(&qword_180144860);
    return v6;
  }
LABEL_15:
  RtlReleaseSRWLockShared(&qword_180144860);
  return v6;
}

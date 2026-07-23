/*
 * XREFs of RtlpHeapTrkFindStack @ 0x1800E1670
 * Callers:
 *     RtlpHeapTrkLeakCallback @ 0x1800E19E0 (RtlpHeapTrkLeakCallback.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180033470 (RtlReleaseSRWLockExclusive.c)
 *     RtlpHeapTrkHash @ 0x1800E1760 (RtlpHeapTrkHash.c)
 */

__int64 __fastcall RtlpHeapTrkFindStack(__int64 a1)
{
  unsigned int v2; // eax
  __int64 v3; // r9
  _QWORD *v5; // rcx
  _QWORD *i; // rax
  __int64 v7; // rbx

  v2 = RtlpHeapTrkHash();
  v3 = v2 & 0xF;
  if ( _interlockedbittestandset64(*(volatile signed __int32 **)(qword_180148698 + 8 * v3), 0LL) )
    return 0LL;
  v5 = (_QWORD *)(16LL * v2 + qword_1801485F0);
  for ( i = (_QWORD *)*v5; ; i = (_QWORD *)*i )
  {
    if ( i == v5 )
    {
      v7 = 0LL;
      goto LABEL_8;
    }
    if ( i[3] == a1 )
      break;
  }
  v7 = i[4];
  i[3] = 0LL;
LABEL_8:
  RtlReleaseSRWLockExclusive(*(PRTL_SRWLOCK *)(qword_180148698 + 8 * v3));
  return v7;
}

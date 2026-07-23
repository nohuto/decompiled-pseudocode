/*
 * XREFs of RtlpHeapTrkFindStack @ 0x1800EFF78
 * Callers:
 *     RtlpHeapTrkLeakCallback @ 0x1800F0000 (RtlpHeapTrkLeakCallback.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x18001C540 (RtlReleaseSRWLockExclusive.c)
 *     RtlpHeapTrkHash @ 0x18008F078 (RtlpHeapTrkHash.c)
 */

__int64 __fastcall RtlpHeapTrkFindStack(__int64 a1)
{
  unsigned int v2; // eax
  __int64 v3; // r9
  _QWORD *v5; // rcx
  _QWORD *i; // rax
  __int64 v7; // rbx

  v2 = RtlpHeapTrkHash(a1);
  v3 = v2 & 0xF;
  if ( _interlockedbittestandset64(*(volatile signed __int32 **)(qword_180153468 + 8 * v3), 0LL) )
    return 0LL;
  v5 = (_QWORD *)(16LL * v2 + qword_1801530F0);
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
  RtlReleaseSRWLockExclusive(*(PRTL_SRWLOCK *)(qword_180153468 + 8 * v3));
  return v7;
}

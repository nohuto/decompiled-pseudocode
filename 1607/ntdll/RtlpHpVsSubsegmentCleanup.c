/*
 * XREFs of RtlpHpVsSubsegmentCleanup @ 0x180052820
 * Callers:
 *     RtlpHpVsChunkSplit @ 0x18001C590 (RtlpHpVsChunkSplit.c)
 *     RtlpHpVsContextFree @ 0x18001CC30 (RtlpHpVsContextFree.c)
 *     RtlpHpSegHeapDestroy @ 0x180052518 (RtlpHpSegHeapDestroy.c)
 * Callees:
 *     <none>
 */

signed __int64 __fastcall RtlpHpVsSubsegmentCleanup(__int64 a1, _QWORD *a2)
{
  __int64 v2; // r8
  _QWORD *v4; // rax
  unsigned __int64 v5; // rcx

  v2 = *a2;
  v4 = (_QWORD *)a2[1];
  if ( *(_QWORD **)(*a2 + 8LL) != a2 || (_QWORD *)*v4 != a2 )
    __fastfail(3u);
  *v4 = v2;
  *(_QWORD *)(v2 + 8) = v4;
  v5 = a2[2] - ((a2[2] >> 1) & 0x5555555555555555LL);
  return _InterlockedExchangeAdd64(
           (volatile signed __int64 *)(a1 + 40),
           -((unsigned int)((0x101010101010101LL
                           * (((v5 & 0x3333333333333333LL)
                             + ((v5 >> 2) & 0x3333333333333333LL)
                             + (((v5 & 0x3333333333333333LL) + ((v5 >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24));
}

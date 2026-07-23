/*
 * XREFs of MiInitializeDecayPfns @ 0x14078E618
 * Callers:
 *     MiInitNucleus @ 0x1407D06B4 (MiInitNucleus.c)
 * Callees:
 *     InitializeSListHead @ 0x140002CB0 (InitializeSListHead.c)
 *     RtlpInterlockedPushEntrySList @ 0x1401673B0 (RtlpInterlockedPushEntrySList.c)
 */

PSLIST_ENTRY MiInitializeDecayPfns()
{
  __int64 v0; // rbx
  __int64 v1; // rdi
  PSLIST_ENTRY result; // rax

  InitializeSListHead(&stru_1403273B0);
  v0 = 48 * qword_1403273A0 - 0x57FFFFE8030LL;
  v1 = 2048LL;
  *(_QWORD *)(v0 + 40) = *(_QWORD *)(v0 + 40) & 0xFFFFFFF000000000uLL | 1;
  do
  {
    result = RtlpInterlockedPushEntrySList(&stru_1403273B0, (PSLIST_ENTRY)v0);
    v0 -= 48LL;
    --v1;
  }
  while ( v1 );
  return result;
}

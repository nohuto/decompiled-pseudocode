/*
 * XREFs of MiInitializeDecayPfns @ 0x14078E618
 * Callers:
 *     MiInitNucleus @ 0x1407D06B4 (MiInitNucleus.c)
 * Callees:
 *     InitializeSListHead @ 0x140002B3C (InitializeSListHead.c)
 *     RtlpInterlockedPushEntrySList @ 0x140166E40 (RtlpInterlockedPushEntrySList.c)
 */

PSLIST_ENTRY MiInitializeDecayPfns()
{
  __int64 v0; // rbx
  __int64 v1; // rdi
  PSLIST_ENTRY result; // rax

  InitializeSListHead(&stru_140327370);
  v0 = 48 * qword_140327360 - 0x57FFFFE8030LL;
  v1 = 2048LL;
  *(_QWORD *)(v0 + 40) = *(_QWORD *)(v0 + 40) & 0xFFFFFFF000000000uLL | 1;
  do
  {
    result = RtlpInterlockedPushEntrySList(&stru_140327370, (PSLIST_ENTRY)v0);
    v0 -= 48LL;
    --v1;
  }
  while ( v1 );
  return result;
}

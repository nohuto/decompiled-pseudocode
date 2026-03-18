/*
 * XREFs of MiInitializeDecayPfns @ 0x140767E90
 * Callers:
 *     MmInitNucleus @ 0x140748C60 (MmInitNucleus.c)
 * Callees:
 *     InitializeSListHead @ 0x1400F8DC8 (InitializeSListHead.c)
 *     RtlpInterlockedPushEntrySList @ 0x14015B9A0 (RtlpInterlockedPushEntrySList.c)
 */

PSLIST_ENTRY MiInitializeDecayPfns()
{
  __int64 v0; // rdi
  __int64 v1; // rbx
  PSLIST_ENTRY result; // rax

  InitializeSListHead(&ListHead);
  v0 = 2048LL;
  v1 = 48 * qword_1402FEF60 - 0x57FFFFE8030LL;
  *(_QWORD *)(v1 + 40) = *(_QWORD *)(v1 + 40) & 0xFFFFFFF000000000uLL | 1;
  do
  {
    result = RtlpInterlockedPushEntrySList(&ListHead, (PSLIST_ENTRY)v1);
    v1 -= 48LL;
    --v0;
  }
  while ( v0 );
  return result;
}

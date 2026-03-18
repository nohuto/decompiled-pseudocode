/*
 * XREFs of ExpIsPoolReadyForWork @ 0x140101A20
 * Callers:
 *     ExTryQueueWorkItem @ 0x140100504 (ExTryQueueWorkItem.c)
 *     ExpQueueWorkItem @ 0x140100684 (ExpQueueWorkItem.c)
 *     ExQueueWorkItem @ 0x140101400 (ExQueueWorkItem.c)
 * Callees:
 *     <none>
 */

bool __fastcall ExpIsPoolReadyForWork(__int64 a1, int a2)
{
  __int64 v2; // r8
  int v3; // edx

  if ( !a1 )
    return 0;
  if ( (*(_DWORD *)(a1 + 1308) & 1) == 0 )
    return 0;
  v2 = *(_QWORD *)(a1 + 8LL * a2 + 256);
  if ( (v2 & 1) != 0 || !v2 )
    return 0;
  v3 = *(_DWORD *)(v2 + 704) & 0x3FFF;
  if ( (*(_DWORD *)(v2 + 704) & 0x4000) != 0 )
    v3 = (*(_DWORD *)(v2 + 704) & 0x3FFF) - 1;
  return v3 >= (2 * *(_DWORD *)(v2 + 708)) >> 1;
}

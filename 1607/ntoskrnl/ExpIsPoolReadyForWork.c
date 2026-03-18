/*
 * XREFs of ExpIsPoolReadyForWork @ 0x14005FE00
 * Callers:
 *     ExpQueueWorkItem @ 0x14005FCC0 (ExpQueueWorkItem.c)
 *     ExTryQueueWorkItem @ 0x1400C30E0 (ExTryQueueWorkItem.c)
 *     ExTryQueueWorkItemFromIo @ 0x14010D6EC (ExTryQueueWorkItemFromIo.c)
 * Callees:
 *     <none>
 */

bool __fastcall ExpIsPoolReadyForWork(__int64 a1, int a2)
{
  __int64 v2; // r8
  int v3; // edx

  if ( !a1 )
    return 0;
  if ( (*(_DWORD *)(a1 + 2092) & 1) == 0 )
    return 0;
  v2 = *(_QWORD *)(a1 + 8LL * a2 + 320);
  if ( (v2 & 1) != 0 || !v2 )
    return 0;
  v3 = *(_DWORD *)(v2 + 704) & 0x3FFF;
  if ( (*(_DWORD *)(v2 + 704) & 0x4000) != 0 )
    v3 = (*(_DWORD *)(v2 + 704) & 0x3FFF) - 1;
  return v3 >= (2 * *(_DWORD *)(v2 + 708)) >> 1;
}

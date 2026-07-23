/*
 * XREFs of MmGetNextNode @ 0x1400BEE04
 * Callers:
 *     ExpQueueWorkItem @ 0x14005F840 (ExpQueueWorkItem.c)
 *     PoAllProcessorsDeepIdle @ 0x1400BED5C (PoAllProcessorsDeepIdle.c)
 *     ExTryQueueWorkItem @ 0x1400C0F70 (ExTryQueueWorkItem.c)
 *     ExTryQueueWorkItemFromIo @ 0x14010DC50 (ExTryQueueWorkItemFromIo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmGetNextNode(int a1, _DWORD *a2)
{
  if ( ++*a2 == (unsigned __int16)KeNumberNodes )
    return 0xFFFFFFFFLL;
  else
    return *((unsigned __int16 *)qword_1403269E8 + *a2 + (unsigned int)(unsigned __int16)KeNumberNodes * a1);
}

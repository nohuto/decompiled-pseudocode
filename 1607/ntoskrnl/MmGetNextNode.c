/*
 * XREFs of MmGetNextNode @ 0x1400C0F74
 * Callers:
 *     ExpQueueWorkItem @ 0x14005FCC0 (ExpQueueWorkItem.c)
 *     PoAllProcessorsDeepIdle @ 0x1400C0ECC (PoAllProcessorsDeepIdle.c)
 *     ExTryQueueWorkItem @ 0x1400C30E0 (ExTryQueueWorkItem.c)
 *     ExTryQueueWorkItemFromIo @ 0x14010D6EC (ExTryQueueWorkItemFromIo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmGetNextNode(int a1, _DWORD *a2)
{
  if ( ++*a2 == (unsigned __int16)KeNumberNodes )
    return 0xFFFFFFFFLL;
  else
    return *((unsigned __int16 *)qword_1403269A8 + *a2 + (unsigned int)(unsigned __int16)KeNumberNodes * a1);
}

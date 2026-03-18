/*
 * XREFs of MmGetNextNode @ 0x140033000
 * Callers:
 *     PoAllProcessorsDeepIdle @ 0x140032F58 (PoAllProcessorsDeepIdle.c)
 *     ExTryQueueWorkItem @ 0x140100504 (ExTryQueueWorkItem.c)
 *     ExpQueueWorkItem @ 0x140100684 (ExpQueueWorkItem.c)
 *     ExQueueWorkItem @ 0x140101400 (ExQueueWorkItem.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmGetNextNode(int a1, _DWORD *a2)
{
  if ( ++*a2 == (unsigned __int16)KeNumberNodes )
    return 0xFFFFFFFFLL;
  else
    return *((unsigned __int16 *)qword_1402FE6B8 + *a2 + (unsigned int)(unsigned __int16)KeNumberNodes * a1);
}

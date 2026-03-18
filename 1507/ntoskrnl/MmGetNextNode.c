/*
 * XREFs of MmGetNextNode @ 0x1400E70A8
 * Callers:
 *     ExpQueueWorkItem @ 0x14000CDF0 (ExpQueueWorkItem.c)
 *     ExQueueWorkItem @ 0x14000D2F0 (ExQueueWorkItem.c)
 *     ExTryQueueWorkItem @ 0x1400292FC (ExTryQueueWorkItem.c)
 *     KiChooseTargetProcessor @ 0x14004D7D0 (KiChooseTargetProcessor.c)
 *     PoAllProcessorsDeepIdle @ 0x1400E701C (PoAllProcessorsDeepIdle.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmGetNextNode(int a1, _DWORD *a2)
{
  if ( ++*a2 == (unsigned __int16)KeNumberNodes )
    return 0xFFFFFFFFLL;
  else
    return *((unsigned __int16 *)qword_14034EB68 + *a2 + (unsigned int)(unsigned __int16)KeNumberNodes * a1);
}

/*
 * XREFs of ?NetDmaIsr@@YAXPEAXT_LARGE_INTEGER@@PEAK@Z @ 0x1C0067D80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall NetDmaIsr(PVOID NetDmaChannelHandle, LARGE_INTEGER DmaDescriptor, PULONG pCpuNumber)
{
  *pCpuNumber = 0;
}

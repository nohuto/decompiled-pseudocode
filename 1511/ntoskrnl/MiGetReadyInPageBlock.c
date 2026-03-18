/*
 * XREFs of MiGetReadyInPageBlock @ 0x140623DE4
 * Callers:
 *     MiSwitchToTransition @ 0x1401D6E6C (MiSwitchToTransition.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x140029A90 (KeDelayExecutionThread.c)
 *     MiGetInPageSupportBlock @ 0x140070DF4 (MiGetInPageSupportBlock.c)
 *     MiInitializeInPageSupport @ 0x140070E90 (MiInitializeInPageSupport.c)
 *     MiLocateVadEvent @ 0x1400B8A24 (MiLocateVadEvent.c)
 *     MiFreeInPageSupportBlock @ 0x1400FDE30 (MiFreeInPageSupportBlock.c)
 */

ULONG_PTR __fastcall MiGetReadyInPageBlock(__int64 a1)
{
  __int64 *VadEvent; // rsi
  ULONG_PTR v2; // rbx
  void *v3; // rdi

  VadEvent = MiLocateVadEvent(a1, 8);
  v2 = VadEvent[2];
  while ( *(_DWORD *)(v2 + 176) != 1 )
  {
    v3 = MiGetInPageSupportBlock(0);
    if ( v3 )
    {
      MiFreeInPageSupportBlock((char *)v2);
      VadEvent[2] = (__int64)v3;
      v2 = (ULONG_PTR)v3;
      break;
    }
    KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&MiShortTime);
  }
  MiInitializeInPageSupport(v2, 0);
  return v2;
}

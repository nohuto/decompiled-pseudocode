/*
 * XREFs of MiGetReadyInPageBlock @ 0x1406A2FF8
 * Callers:
 *     MiSwitchToTransition @ 0x140219964 (MiSwitchToTransition.c)
 * Callees:
 *     MiFreeInPageSupportBlock @ 0x140033DF0 (MiFreeInPageSupportBlock.c)
 *     MiGetInPageSupportBlock @ 0x14005EA80 (MiGetInPageSupportBlock.c)
 *     MiInitializeInPageSupport @ 0x14005EB30 (MiInitializeInPageSupport.c)
 *     KeDelayExecutionThread @ 0x1400E73A0 (KeDelayExecutionThread.c)
 *     MiLocateVadEvent @ 0x140122918 (MiLocateVadEvent.c)
 */

__int64 __fastcall MiGetReadyInPageBlock(__int64 a1)
{
  __int64 *VadEvent; // rsi
  __int64 v2; // rbx
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
      v2 = (__int64)v3;
      break;
    }
    KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&MiShortTime);
  }
  MiInitializeInPageSupport(v2, 0);
  return v2;
}

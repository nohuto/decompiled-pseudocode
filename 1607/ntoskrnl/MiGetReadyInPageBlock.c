/*
 * XREFs of MiGetReadyInPageBlock @ 0x140659D50
 * Callers:
 *     MiSwitchToTransition @ 0x1401E8974 (MiSwitchToTransition.c)
 * Callees:
 *     MiLocateVadEvent @ 0x1400150E4 (MiLocateVadEvent.c)
 *     MiFreeInPageSupportBlock @ 0x1400C4240 (MiFreeInPageSupportBlock.c)
 *     KeDelayExecutionThread @ 0x1400CE420 (KeDelayExecutionThread.c)
 *     MiGetInPageSupportBlock @ 0x1400E53C0 (MiGetInPageSupportBlock.c)
 *     MiInitializeInPageSupport @ 0x1400E5470 (MiInitializeInPageSupport.c)
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

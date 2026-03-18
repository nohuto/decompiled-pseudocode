/*
 * XREFs of ExReturnPoolQuota @ 0x1400E2A64
 * Callers:
 *     IopFreeIrp @ 0x140087090 (IopFreeIrp.c)
 *     IopFreeMiniCompletionPacket @ 0x14042F3B0 (IopFreeMiniCompletionPacket.c)
 * Callees:
 *     MmIsSpecialPoolAddress @ 0x140079508 (MmIsSpecialPoolAddress.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x14007DFD0 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     PsReturnPoolQuota @ 0x1400E2AE4 (PsReturnPoolQuota.c)
 *     ExpGetBilledProcess @ 0x1400E2B14 (ExpGetBilledProcess.c)
 */

void __fastcall ExReturnPoolQuota(unsigned __int64 a1)
{
  char v2; // di
  struct _KPROCESS *BilledProcess; // rsi
  unsigned int v4; // eax
  __int64 v5; // rcx

  if ( !ExpSpecialAllocations || !(unsigned int)MmIsSpecialPoolAddress(a1) )
  {
    v2 = *(_BYTE *)(a1 - 13);
    if ( (v2 & 8) != 0 )
    {
      BilledProcess = (struct _KPROCESS *)ExpGetBilledProcess(a1 - 16);
      if ( BilledProcess )
      {
        v4 = (unsigned __int8)*(_WORD *)(a1 - 14);
        if ( (v2 & 4) != 0 )
        {
          v5 = a1 - 16 - 16LL * (unsigned __int8)*(_WORD *)(a1 - 16);
          LOWORD(v4) = *(_WORD *)(v5 + 2);
          *(_BYTE *)(v5 + 3) &= ~8u;
          v4 = (unsigned __int8)v4;
        }
        *(_BYTE *)(a1 - 13) &= ~8u;
        PsReturnPoolQuota(BilledProcess, (POOL_TYPE)(v2 & 1), 16LL * v4);
        ObDereferenceObjectDeferDeleteWithTag(BilledProcess, *(_DWORD *)(a1 - 12));
      }
    }
  }
}

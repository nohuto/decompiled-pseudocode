/*
 * XREFs of ExReturnPoolQuota @ 0x1400F73A4
 * Callers:
 *     IopFreeIrp @ 0x140055960 (IopFreeIrp.c)
 *     IopFreeMiniCompletionPacket @ 0x1404FEE60 (IopFreeMiniCompletionPacket.c)
 * Callees:
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x1400D1DD0 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     MmIsSpecialPoolAddress @ 0x1400E90BC (MmIsSpecialPoolAddress.c)
 *     PsReturnPoolQuota @ 0x1400F7424 (PsReturnPoolQuota.c)
 *     ExpGetBilledProcess @ 0x1400F7454 (ExpGetBilledProcess.c)
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

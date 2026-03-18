/*
 * XREFs of MiLocateCloneAddress @ 0x1400BDB00
 * Callers:
 *     MiCopyToUserVa @ 0x140014B50 (MiCopyToUserVa.c)
 *     MiTrimThisWsle @ 0x140016960 (MiTrimThisWsle.c)
 *     MiProbeLeafFrame @ 0x14002FDC0 (MiProbeLeafFrame.c)
 *     MiCompleteProtoPteFault @ 0x140039AF0 (MiCompleteProtoPteFault.c)
 *     MiSetProtectionOnSection @ 0x140043BF0 (MiSetProtectionOnSection.c)
 *     MiDecommitPages @ 0x140044D50 (MiDecommitPages.c)
 *     MiDeleteVirtualAddresses @ 0x140045C00 (MiDeleteVirtualAddresses.c)
 *     MiDeletePteRun @ 0x140065140 (MiDeletePteRun.c)
 *     MiComputePageCommitment @ 0x140096300 (MiComputePageCommitment.c)
 *     MiGetPfnProtection @ 0x1400B8AB0 (MiGetPfnProtection.c)
 *     MiActOnPte @ 0x1400BBC88 (MiActOnPte.c)
 *     MiBuildForkPte @ 0x1400BCCA0 (MiBuildForkPte.c)
 *     MiGetPageProtection @ 0x1400BD710 (MiGetPageProtection.c)
 *     MiDeletePteList @ 0x1400DFAC0 (MiDeletePteList.c)
 *     MiProtectPrivateMemory @ 0x1400E1040 (MiProtectPrivateMemory.c)
 *     MiFreeWsleList @ 0x1400E3AD0 (MiFreeWsleList.c)
 *     MiCheckCommitReleaseFromVad @ 0x1401DF4E0 (MiCheckCommitReleaseFromVad.c)
 *     MiSplitReducedCommitClonePage @ 0x1401E2F58 (MiSplitReducedCommitClonePage.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall MiLocateCloneAddress(__int64 a1, unsigned __int64 a2)
{
  _QWORD *result; // rax

  result = *(_QWORD **)(a1 + 912);
  while ( result )
  {
    if ( a2 > result[4] )
    {
      result = (_QWORD *)result[1];
    }
    else
    {
      if ( a2 >= result[3] )
        return result;
      result = (_QWORD *)*result;
    }
  }
  return 0LL;
}

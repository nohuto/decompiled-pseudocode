/*
 * XREFs of MiLocateCloneAddress @ 0x1400BB990
 * Callers:
 *     MiCopyToUserVa @ 0x1400146D0 (MiCopyToUserVa.c)
 *     MiTrimThisWsle @ 0x1400164E0 (MiTrimThisWsle.c)
 *     MiProbeLeafFrame @ 0x14002F940 (MiProbeLeafFrame.c)
 *     MiCompleteProtoPteFault @ 0x140039670 (MiCompleteProtoPteFault.c)
 *     MiSetProtectionOnSection @ 0x140043770 (MiSetProtectionOnSection.c)
 *     MiDecommitPages @ 0x1400448D0 (MiDecommitPages.c)
 *     MiDeleteVirtualAddresses @ 0x140045780 (MiDeleteVirtualAddresses.c)
 *     MiDeletePteRun @ 0x140064CC0 (MiDeletePteRun.c)
 *     MiComputePageCommitment @ 0x140095B00 (MiComputePageCommitment.c)
 *     MiGetPfnProtection @ 0x1400B6940 (MiGetPfnProtection.c)
 *     MiActOnPte @ 0x1400B9B18 (MiActOnPte.c)
 *     MiBuildForkPte @ 0x1400BAB30 (MiBuildForkPte.c)
 *     MiGetPageProtection @ 0x1400BB5A0 (MiGetPageProtection.c)
 *     MiDeletePteList @ 0x1400DD960 (MiDeletePteList.c)
 *     MiProtectPrivateMemory @ 0x1400DEEE0 (MiProtectPrivateMemory.c)
 *     MiFreeWsleList @ 0x1400E1970 (MiFreeWsleList.c)
 *     MiCheckCommitReleaseFromVad @ 0x1401DF30C (MiCheckCommitReleaseFromVad.c)
 *     MiSplitReducedCommitClonePage @ 0x1401E2D84 (MiSplitReducedCommitClonePage.c)
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

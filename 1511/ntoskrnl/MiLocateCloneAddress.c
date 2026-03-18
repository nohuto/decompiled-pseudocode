/*
 * XREFs of MiLocateCloneAddress @ 0x14001EDA8
 * Callers:
 *     MiActOnPte @ 0x14001C9B4 (MiActOnPte.c)
 *     MiBuildForkPte @ 0x14001DDD8 (MiBuildForkPte.c)
 *     MiDeletePteRun @ 0x14004FE20 (MiDeletePteRun.c)
 *     MiDeleteVirtualAddresses @ 0x140057CB0 (MiDeleteVirtualAddresses.c)
 *     MiDecommitPages @ 0x14005ADD0 (MiDecommitPages.c)
 *     MiSetProtectionOnSection @ 0x14005BC70 (MiSetProtectionOnSection.c)
 *     MiGetPageProtection @ 0x14005F320 (MiGetPageProtection.c)
 *     MiDeletePteList @ 0x140060900 (MiDeletePteList.c)
 *     MiProtectPrivateMemory @ 0x1400614B0 (MiProtectPrivateMemory.c)
 *     MiFreeWsleList @ 0x14006C330 (MiFreeWsleList.c)
 *     MiProbeLeafFrame @ 0x1400A7660 (MiProbeLeafFrame.c)
 *     MiCopyToUserVa @ 0x1400B55D0 (MiCopyToUserVa.c)
 *     MiTrimThisWsle @ 0x1400B6290 (MiTrimThisWsle.c)
 *     MiGetPfnProtection @ 0x1400BB6C0 (MiGetPfnProtection.c)
 *     MiComputePageCommitment @ 0x1400D66E0 (MiComputePageCommitment.c)
 *     MiCheckCommitReleaseFromVad @ 0x1401CF434 (MiCheckCommitReleaseFromVad.c)
 *     MiSplitReducedCommitClonePage @ 0x1401D2E94 (MiSplitReducedCommitClonePage.c)
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

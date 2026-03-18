/*
 * XREFs of MiLocateCloneAddress @ 0x140059A90
 * Callers:
 *     MiBuildForkPte @ 0x14000253C (MiBuildForkPte.c)
 *     MiProbeLeafFrame @ 0x140034440 (MiProbeLeafFrame.c)
 *     MiGetPageProtection @ 0x14003BD40 (MiGetPageProtection.c)
 *     MiCopyOnWriteEx @ 0x140058250 (MiCopyOnWriteEx.c)
 *     MiProtectPrivateMemory @ 0x14005DD20 (MiProtectPrivateMemory.c)
 *     MiCopyToUserVa @ 0x140061A10 (MiCopyToUserVa.c)
 *     MiGetPfnProtection @ 0x14007B518 (MiGetPfnProtection.c)
 *     MiActOnPte @ 0x14007FD30 (MiActOnPte.c)
 *     MiTrimThisWsle @ 0x140081700 (MiTrimThisWsle.c)
 *     MiSetProtectionOnSection @ 0x14008FAB0 (MiSetProtectionOnSection.c)
 *     MiDecommitPages @ 0x1400922F0 (MiDecommitPages.c)
 *     MiDeletePteList @ 0x140093740 (MiDeletePteList.c)
 *     MiDeleteVirtualAddresses @ 0x140094110 (MiDeleteVirtualAddresses.c)
 *     MiFreeWsleList @ 0x1400AE6D0 (MiFreeWsleList.c)
 *     MiDeletePteRun @ 0x1400C3A20 (MiDeletePteRun.c)
 *     MiComputePageCommitment @ 0x14010E9C0 (MiComputePageCommitment.c)
 *     MiCheckCommitReleaseFromVad @ 0x14020EB90 (MiCheckCommitReleaseFromVad.c)
 *     MiSplitReducedCommitClonePage @ 0x1402141F4 (MiSplitReducedCommitClonePage.c)
 * Callees:
 *     MiCloneCompare @ 0x140001A80 (MiCloneCompare.c)
 */

_QWORD *__fastcall MiLocateCloneAddress(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rbx
  int v4; // eax
  _BYTE v5[24]; // [rsp+20h] [rbp-58h] BYREF
  __int64 v6; // [rsp+38h] [rbp-40h]
  __int64 v7; // [rsp+40h] [rbp-38h]

  v2 = *(_QWORD **)(a1 + 912);
  if ( !v2 )
    return 0LL;
  v6 = a2;
  v7 = a2;
  while ( 1 )
  {
    v4 = MiCloneCompare((__int64)v5, (__int64)v2);
    if ( v4 >= 0 )
      break;
    v2 = (_QWORD *)*v2;
LABEL_6:
    if ( !v2 )
      return 0LL;
  }
  if ( v4 > 0 )
  {
    v2 = (_QWORD *)v2[1];
    goto LABEL_6;
  }
  return v2;
}

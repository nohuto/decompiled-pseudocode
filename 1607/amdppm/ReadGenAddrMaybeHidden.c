/*
 * XREFs of ReadGenAddrMaybeHidden @ 0x1C0005FB8
 * Callers:
 *     InitAcpiCpc @ 0x1C00164AC (InitAcpiCpc.c)
 *     CpcGuaranteedNotifyWorker @ 0x1C00167DC (CpcGuaranteedNotifyWorker.c)
 *     CpcHighestNotifyWorker @ 0x1C0016938 (CpcHighestNotifyWorker.c)
 *     InitCpcStatesInternal @ 0x1C001914C (InitCpcStatesInternal.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall ReadGenAddrMaybeHidden(__int64 a1, __int64 a2)
{
  if ( *(_BYTE *)(a1 + 66) )
    return ReadGenAddrHidden(*(unsigned int *)(a1 + 68), a2);
  else
    return ReadGenAddr(a2);
}

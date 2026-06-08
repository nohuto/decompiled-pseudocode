/*
 * XREFs of ReadGenAddrMaybeHidden @ 0x1C00045CC
 * Callers:
 *     InitAcpiCpc @ 0x1C0015588 (InitAcpiCpc.c)
 *     CpcGuaranteedNotifyWorker @ 0x1C001C23C (CpcGuaranteedNotifyWorker.c)
 *     CpcHighestNotifyWorker @ 0x1C001C398 (CpcHighestNotifyWorker.c)
 *     InitCpcStatesInternal @ 0x1C001F5A4 (InitCpcStatesInternal.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall ReadGenAddrMaybeHidden(__int64 a1, char *a2)
{
  if ( *(_BYTE *)(a1 + 66) )
    return ReadGenAddrHidden(*(unsigned int *)(a1 + 68), a2);
  else
    return ReadGenAddr((__int64)a2);
}

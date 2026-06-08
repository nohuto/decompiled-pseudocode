/*
 * XREFs of WriteGenAddrMaybeHidden @ 0x1C0005FD0
 * Callers:
 *     InitAcpiCpc @ 0x1C00164AC (InitAcpiCpc.c)
 *     InitCpcStatesInternal @ 0x1C001914C (InitCpcStatesInternal.c)
 * Callees:
 *     <none>
 */

void __fastcall WriteGenAddrMaybeHidden(__int64 a1, _BYTE *a2, unsigned __int64 a3)
{
  if ( *(_BYTE *)(a1 + 66) )
    WriteGenAddrHidden(*(unsigned int *)(a1 + 68), a2, a3);
  else
    WriteGenAddr(a2, a3);
}

/*
 * XREFs of WriteGenAddrMaybeHidden @ 0x1C0004714
 * Callers:
 *     CpcReinitializeHandler @ 0x1C0004920 (CpcReinitializeHandler.c)
 *     CpcSetAutonomousActivityWindow @ 0x1C0004970 (CpcSetAutonomousActivityWindow.c)
 *     CpcSetAutonomousMode @ 0x1C00049B0 (CpcSetAutonomousMode.c)
 *     CpcSetEnergyPerfPreference @ 0x1C00049D0 (CpcSetEnergyPerfPreference.c)
 *     CpcSetTimeWindow @ 0x1C0004A00 (CpcSetTimeWindow.c)
 *     InitAcpiCpc @ 0x1C0015588 (InitAcpiCpc.c)
 *     InitCpcStatesInternal @ 0x1C001F5A4 (InitCpcStatesInternal.c)
 * Callees:
 *     <none>
 */

void __fastcall WriteGenAddrMaybeHidden(__int64 a1, _BYTE *a2, __int64 a3)
{
  if ( *(_BYTE *)(a1 + 66) )
    WriteGenAddrHidden(*(_DWORD *)(a1 + 68), a2, a3);
  else
    WriteGenAddr(a2, a3);
}

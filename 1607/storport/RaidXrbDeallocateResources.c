/*
 * XREFs of RaidXrbDeallocateResources @ 0x1C000356C
 * Callers:
 *     RaidAdapterScsiMiniportIoctlWithAddress @ 0x1C0003028 (RaidAdapterScsiMiniportIoctlWithAddress.c)
 *     RaAdapterStartPowerIo @ 0x1C000AB9C (RaAdapterStartPowerIo.c)
 *     RaidUnitReleaseIrp @ 0x1C000C880 (RaidUnitReleaseIrp.c)
 *     RaUnitScsiGetDumpPointersIoctl @ 0x1C001162C (RaUnitScsiGetDumpPointersIoctl.c)
 *     RaidPnPPassToMiniPort @ 0x1C00166FC (RaidPnPPassToMiniPort.c)
 *     RaUnitScsiFreeDumpPointersIoctl @ 0x1C00184CC (RaUnitScsiFreeDumpPointersIoctl.c)
 *     RaidAdapterSendRPMBCommandSynchronously @ 0x1C0028520 (RaidAdapterSendRPMBCommandSynchronously.c)
 *     RaidAdapterSendSrbIoControlSynchronously @ 0x1C00289EC (RaidAdapterSendSrbIoControlSynchronously.c)
 *     RaidAdapterSendSrbProtocolCommandSynchronously @ 0x1C0028E54 (RaidAdapterSendSrbProtocolCommandSynchronously.c)
 *     RaidUnitCompleteResetRequest @ 0x1C0037150 (RaidUnitCompleteResetRequest.c)
 *     RaWmiPassToMiniPort @ 0x1C005B544 (RaWmiPassToMiniPort.c)
 *     RaUnitStorageDataSetManagementIoctl @ 0x1C005B9CC (RaUnitStorageDataSetManagementIoctl.c)
 *     RaUnitStorageDiagnosticIoctl @ 0x1C005F2E0 (RaUnitStorageDiagnosticIoctl.c)
 * Callees:
 *     RaidDmaPutScatterGatherList @ 0x1C00036BC (RaidDmaPutScatterGatherList.c)
 */

void __fastcall RaidXrbDeallocateResources(__int64 a1, int a2, __int64 a3)
{
  KIRQL v3; // bp
  _BYTE *v6; // rax
  char v7; // di
  bool v8; // di
  struct _MDL *v9; // rcx
  __int64 v10; // rdx
  struct _MDL *v11; // rcx
  struct _MDL *v12; // rcx

  if ( a1 )
  {
    v3 = 0;
    if ( *(_QWORD *)(a1 + 112) )
    {
      v6 = *(_BYTE **)(a1 + 168);
      if ( v6[2] == 40 )
        v7 = v6[24];
      else
        v7 = v6[12];
      v8 = (v7 & 0x40) == 0;
      if ( RaidVerifierEnabled )
      {
        v9 = *(struct _MDL **)(a1 + 120);
        if ( v9 )
        {
          MmProtectMdlSystemAddress(v9, 4u);
          MmUnlockPages(*(PMDL *)(a1 + 120));
          IoFreeMdl(*(PMDL *)(a1 + 120));
          *(_QWORD *)(a1 + 120) = 0LL;
        }
      }
      if ( !a2 )
        v3 = KfRaiseIrql(2u);
      LOBYTE(a3) = v8;
      RaidDmaPutScatterGatherList(*(_QWORD *)(a1 + 216) + 696LL, *(_QWORD *)(a1 + 112), a3);
      v10 = *(_QWORD *)(a1 + 152);
      *(_QWORD *)(a1 + 112) = 0LL;
      *(_QWORD *)(a1 + 144) = 0LL;
      if ( v10 )
      {
        RaidDmaPutScatterGatherList(*(_QWORD *)(a1 + 216) + 696LL, v10, 0LL);
        *(_QWORD *)(a1 + 152) = 0LL;
      }
      if ( !a2 )
        KeLowerIrql(v3);
    }
    v11 = *(struct _MDL **)(a1 + 104);
    if ( v11 && (*(_BYTE *)(a1 + 16) & 1) != 0 )
    {
      IoFreeMdl(v11);
      *(_QWORD *)(a1 + 104) = 0LL;
      *(_BYTE *)(a1 + 16) &= ~1u;
    }
    v12 = *(struct _MDL **)(a1 + 136);
    if ( v12 )
    {
      MmUnlockPages(v12);
      IoFreeMdl(*(PMDL *)(a1 + 136));
      *(_QWORD *)(a1 + 136) = 0LL;
    }
  }
}

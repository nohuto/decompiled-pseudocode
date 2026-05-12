/*
 * XREFs of RaidXrbDeallocateResources @ 0x1C000EC64
 * Callers:
 *     RaAdapterStartPowerIo @ 0x1C0007088 (RaAdapterStartPowerIo.c)
 *     RaUnitScsiGetDumpPointersIoctl @ 0x1C000B640 (RaUnitScsiGetDumpPointersIoctl.c)
 *     RaidAdapterScsiMiniportIoctlWithAddress @ 0x1C000E438 (RaidAdapterScsiMiniportIoctlWithAddress.c)
 *     RaidPnPPassToMiniPort @ 0x1C000E6FC (RaidPnPPassToMiniPort.c)
 *     RaidUnitReleaseIrp @ 0x1C000EBBC (RaidUnitReleaseIrp.c)
 *     RaUnitScsiFreeDumpPointersIoctl @ 0x1C0012530 (RaUnitScsiFreeDumpPointersIoctl.c)
 *     RaidAdapterSendSrbIoControlSynchronously @ 0x1C0022AA0 (RaidAdapterSendSrbIoControlSynchronously.c)
 *     RaidAdapterSendSrbProtocolCommandSynchronously @ 0x1C0022EE8 (RaidAdapterSendSrbProtocolCommandSynchronously.c)
 *     RaidUnitCompleteResetRequest @ 0x1C0032710 (RaidUnitCompleteResetRequest.c)
 *     RaWmiPassToMiniPort @ 0x1C004EBFC (RaWmiPassToMiniPort.c)
 *     RaUnitStorageDataSetManagementIoctl @ 0x1C004F39C (RaUnitStorageDataSetManagementIoctl.c)
 *     RaUnitStorageDiagnosticIoctl @ 0x1C0054040 (RaUnitStorageDiagnosticIoctl.c)
 * Callees:
 *     RaidDmaPutScatterGatherList @ 0x1C000ED50 (RaidDmaPutScatterGatherList.c)
 */

void __fastcall RaidXrbDeallocateResources(__int64 a1, int a2, __int64 a3)
{
  KIRQL v3; // bp
  _BYTE *v6; // rax
  char v7; // di
  bool v8; // di
  __int64 v9; // rdx
  struct _MDL *v10; // rcx
  struct _MDL *v11; // rcx
  struct _MDL *v12; // rcx

  v3 = 0;
  if ( *(_QWORD *)(a1 + 104) )
  {
    v6 = *(_BYTE **)(a1 + 160);
    if ( v6[2] == 40 )
      v7 = v6[24];
    else
      v7 = v6[12];
    v8 = (v7 & 0x40) == 0;
    if ( RaidVerifierEnabled )
    {
      v12 = *(struct _MDL **)(a1 + 112);
      if ( v12 )
      {
        MmProtectMdlSystemAddress(v12, 4u);
        MmUnlockPages(*(PMDL *)(a1 + 112));
        IoFreeMdl(*(PMDL *)(a1 + 112));
        *(_QWORD *)(a1 + 112) = 0LL;
      }
    }
    if ( !a2 )
      v3 = KfRaiseIrql(2u);
    LOBYTE(a3) = v8;
    RaidDmaPutScatterGatherList(*(_QWORD *)(a1 + 208) + 696LL, *(_QWORD *)(a1 + 104), a3);
    v9 = *(_QWORD *)(a1 + 144);
    *(_QWORD *)(a1 + 104) = 0LL;
    *(_QWORD *)(a1 + 136) = 0LL;
    if ( v9 )
    {
      RaidDmaPutScatterGatherList(*(_QWORD *)(a1 + 208) + 696LL, v9, 0LL);
      *(_QWORD *)(a1 + 144) = 0LL;
    }
    if ( !a2 )
      KeLowerIrql(v3);
  }
  v10 = *(struct _MDL **)(a1 + 96);
  if ( v10 && (*(_BYTE *)(a1 + 16) & 1) != 0 )
  {
    IoFreeMdl(v10);
    *(_QWORD *)(a1 + 96) = 0LL;
    *(_BYTE *)(a1 + 16) &= ~1u;
  }
  v11 = *(struct _MDL **)(a1 + 128);
  if ( v11 )
  {
    MmUnlockPages(v11);
    IoFreeMdl(*(PMDL *)(a1 + 128));
    *(_QWORD *)(a1 + 128) = 0LL;
  }
}

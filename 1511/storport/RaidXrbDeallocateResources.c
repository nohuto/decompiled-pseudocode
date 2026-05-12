/*
 * XREFs of RaidXrbDeallocateResources @ 0x1C0010F80
 * Callers:
 *     RaAdapterStartPowerIo @ 0x1C0008DE8 (RaAdapterStartPowerIo.c)
 *     RaUnitScsiGetDumpPointersIoctl @ 0x1C000D8A8 (RaUnitScsiGetDumpPointersIoctl.c)
 *     RaidAdapterScsiMiniportIoctlWithAddress @ 0x1C0010744 (RaidAdapterScsiMiniportIoctlWithAddress.c)
 *     RaidPnPPassToMiniPort @ 0x1C0010A08 (RaidPnPPassToMiniPort.c)
 *     RaidUnitReleaseIrp @ 0x1C0010ED8 (RaidUnitReleaseIrp.c)
 *     RaUnitScsiFreeDumpPointersIoctl @ 0x1C0014630 (RaUnitScsiFreeDumpPointersIoctl.c)
 *     RaidAdapterSendSrbIoControlSynchronously @ 0x1C0024FE0 (RaidAdapterSendSrbIoControlSynchronously.c)
 *     RaidAdapterSendSrbProtocolCommandSynchronously @ 0x1C0025428 (RaidAdapterSendSrbProtocolCommandSynchronously.c)
 *     RaidUnitCompleteResetRequest @ 0x1C0033F70 (RaidUnitCompleteResetRequest.c)
 *     RaWmiPassToMiniPort @ 0x1C00529B0 (RaWmiPassToMiniPort.c)
 *     RaUnitStorageDataSetManagementIoctl @ 0x1C00530FC (RaUnitStorageDataSetManagementIoctl.c)
 *     RaUnitStorageDiagnosticIoctl @ 0x1C0057F80 (RaUnitStorageDiagnosticIoctl.c)
 * Callees:
 *     RaidDmaPutScatterGatherList @ 0x1C001106C (RaidDmaPutScatterGatherList.c)
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
      v12 = *(struct _MDL **)(a1 + 120);
      if ( v12 )
      {
        MmProtectMdlSystemAddress(v12, 4u);
        MmUnlockPages(*(PMDL *)(a1 + 120));
        IoFreeMdl(*(PMDL *)(a1 + 120));
        *(_QWORD *)(a1 + 120) = 0LL;
      }
    }
    if ( !a2 )
      v3 = KfRaiseIrql(2u);
    LOBYTE(a3) = v8;
    RaidDmaPutScatterGatherList(*(_QWORD *)(a1 + 216) + 696LL, *(_QWORD *)(a1 + 112), a3);
    v9 = *(_QWORD *)(a1 + 152);
    *(_QWORD *)(a1 + 112) = 0LL;
    *(_QWORD *)(a1 + 144) = 0LL;
    if ( v9 )
    {
      RaidDmaPutScatterGatherList(*(_QWORD *)(a1 + 216) + 696LL, v9, 0LL);
      *(_QWORD *)(a1 + 152) = 0LL;
    }
    if ( !a2 )
      KeLowerIrql(v3);
  }
  v10 = *(struct _MDL **)(a1 + 104);
  if ( v10 && (*(_BYTE *)(a1 + 16) & 1) != 0 )
  {
    IoFreeMdl(v10);
    *(_QWORD *)(a1 + 104) = 0LL;
    *(_BYTE *)(a1 + 16) &= ~1u;
  }
  v11 = *(struct _MDL **)(a1 + 136);
  if ( v11 )
  {
    MmUnlockPages(v11);
    IoFreeMdl(*(PMDL *)(a1 + 136));
    *(_QWORD *)(a1 + 136) = 0LL;
  }
}

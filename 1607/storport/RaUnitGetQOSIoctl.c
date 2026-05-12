/*
 * XREFs of RaUnitGetQOSIoctl @ 0x1C00353A8
 * Callers:
 *     RaUnitDeviceControlIrp @ 0x1C0001D30 (RaUnitDeviceControlIrp.c)
 * Callees:
 *     memset @ 0x1C001AD80 (memset.c)
 *     WPP_SF_q @ 0x1C002AF28 (WPP_SF_q.c)
 */

__int64 __fastcall RaUnitGetQOSIoctl(__int64 a1, IRP *a2)
{
  _IRP *MasterIrp; // rbx
  unsigned int v5; // r8d
  int v6; // eax
  int v7; // eax

  MasterIrp = a2->AssociatedIrp.MasterIrp;
  if ( a2->Tail.Overlay.CurrentStackLocation->Parameters.Read.Length >= 0x24 )
  {
    memset(MasterIrp, 0, 0x24uLL);
    *(_DWORD *)&MasterIrp->Type = 36;
    *(_DWORD *)(&MasterIrp->Size + 1) = 36;
    LOBYTE(MasterIrp->MdlAddress) = *(_BYTE *)(a1 + 2552);
    LODWORD(MasterIrp->ThreadListEntry.Flink) = *(_DWORD *)(a1 + 2564);
    HIDWORD(MasterIrp->MdlAddress) = *(_DWORD *)(a1 + 2556);
    *(&MasterIrp->Flags + 1) = 1000 * *(_DWORD *)(a1 + 2568);
    v6 = *(_DWORD *)(a1 + 2560);
    if ( v6 == -1 )
      HIDWORD(MasterIrp->AssociatedIrp.SystemBuffer) = -1;
    else
      HIDWORD(MasterIrp->AssociatedIrp.SystemBuffer) = 500 * v6;
    v7 = *(_DWORD *)(a1 + 2576);
    if ( v7 == -1 )
      MasterIrp->Flags = -1;
    else
      MasterIrp->Flags = 500 * v7;
    v5 = 0;
    MasterIrp->AssociatedIrp.IrpCount = 1000 * *(_DWORD *)(a1 + 2572);
    a2->IoStatus.Information = 36LL;
  }
  else
  {
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
    {
      WPP_SF_q(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        0x2Cu,
        (__int64)&WPP_a0aaf6c2955e31bbd69faa467326e0b4_Traceguids,
        a1);
    }
    a2->IoStatus.Information = 0LL;
    v5 = -1073741789;
  }
  return RaidCompleteRequestEx(a2, 0, v5);
}

/*
 * XREFs of PropertySetMixerLevels @ 0x1C001A5C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00072E0 (_guard_dispatch_icall_nop.c)
 *     DeviceRequestPowerUp @ 0x1C0014720 (DeviceRequestPowerUp.c)
 *     QueuePropertyRequest @ 0x1C001B9E0 (QueuePropertyRequest.c)
 */

__int64 __fastcall PropertySetMixerLevels(PIRP Irp, __int64 a2)
{
  unsigned int v4; // edi
  PIRP **FilterFromIrp; // rcx
  __int64 v6; // r9
  __int64 Length; // r8
  __int64 v8; // rsi
  __int64 v9; // rdx

  v4 = -1073741811;
  FilterFromIrp = (PIRP **)KsGetFilterFromIrp(Irp);
  Length = Irp->Tail.Overlay.CurrentStackLocation->Parameters.Read.Length;
  if ( !FilterFromIrp )
    return v4;
  v8 = *((_QWORD *)&(*FilterFromIrp)[9]->Tail.Overlay.DeviceQueueEntry.DeviceListEntry.Blink
       + 19 * *(unsigned int *)(a2 + 24));
  v9 = (unsigned int)(16 * *(_DWORD *)(v8 + 12) * *(_DWORD *)(v8 + 8));
  if ( *((_DWORD *)&FilterFromIrp[2][2][2].Overlay.AllocationSize + 2) == 1 )
  {
    Irp->IoStatus.Information = (unsigned int)v9;
    if ( (_DWORD)Length != (_DWORD)v9 )
      return (unsigned int)-1073741789;
    return v4;
  }
  if ( DeviceRequestPowerUp(FilterFromIrp[2], v9, Length, v6) < 0 )
    return 3221225635LL;
  else
    return QueuePropertyRequest(Irp);
}

/*
 * XREFs of PropertyGetSetMuxSource @ 0x1C001A210
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0007440 (_guard_dispatch_icall_nop.c)
 *     DeviceRequestPowerUp @ 0x1C0014720 (DeviceRequestPowerUp.c)
 *     QueuePropertyRequest @ 0x1C001BA00 (QueuePropertyRequest.c)
 */

__int64 __fastcall PropertyGetSetMuxSource(PIRP Irp, __int64 a2, _DWORD *a3)
{
  unsigned int v6; // r14d
  unsigned int v7; // edi
  PKSFILTER FilterFromIrp; // rdx
  __int64 v9; // rbp
  _DWORD *v11; // rax
  __int64 v12; // rdx
  PKSDEVICE Device; // rcx
  __int64 v14; // r8
  __int64 v15; // r9

  v6 = ((*(_DWORD *)(a2 + 20) & 1) << 7) | 1;
  v7 = -1073741811;
  FilterFromIrp = KsGetFilterFromIrp(Irp);
  if ( !FilterFromIrp )
    return v7;
  v9 = (__int64)FilterFromIrp->Descriptor->NodeDescriptors + 152 * *(unsigned int *)(a2 + 24);
  if ( !v9 )
    return 3221225860LL;
  v11 = *(_DWORD **)(v9 + 128);
  if ( !v11 )
    return 3221225860LL;
  if ( v6 == 129 )
  {
    *a3 = *v11;
LABEL_7:
    v7 = 0;
    goto LABEL_18;
  }
  if ( v11[1] == 1 && *a3 == 1 )
    goto LABEL_7;
  if ( v11[1] < *a3 || !*a3 )
    return v7;
  Device = KsGetDevice(FilterFromIrp);
  if ( *((_DWORD *)Device->Context + 128) == 1 )
  {
    v7 = (*(__int64 (__fastcall **)(PKSDEVICE, __int64, _QWORD, _DWORD *))(v9 + 136))(Device, v9, v6, a3);
    if ( (v7 & 0x80000000) != 0 )
      return v7;
    **(_DWORD **)(v9 + 128) = *a3;
LABEL_18:
    Irp->IoStatus.Information = 4LL;
    return v7;
  }
  if ( DeviceRequestPowerUp((PIRP *)Device, v12, v14, v15) < 0 )
    return 3221225635LL;
  else
    return QueuePropertyRequest(Irp);
}

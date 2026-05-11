/*
 * XREFs of PropertySetFeatureValue @ 0x1C0019400
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0002294 (WPP_RECORDER_SF_d.c)
 *     _guard_dispatch_icall_nop @ 0x1C0007440 (_guard_dispatch_icall_nop.c)
 *     DeviceRequestPowerUp @ 0x1C0014720 (DeviceRequestPowerUp.c)
 *     QueuePropertyRequest @ 0x1C001BA00 (QueuePropertyRequest.c)
 */

__int64 __fastcall PropertySetFeatureValue(PIRP Irp, __int64 a2, __int64 a3)
{
  __int64 *FilterFromIrp; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 *v9; // r14
  int v10; // esi
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r13
  __int64 v12; // rbp
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // r10
  unsigned int v18; // ecx
  int v19; // [rsp+20h] [rbp-48h]
  unsigned int v20; // [rsp+78h] [rbp+10h] BYREF

  FilterFromIrp = (__int64 *)KsGetFilterFromIrp(Irp);
  v9 = FilterFromIrp;
  v10 = -1073741811;
  if ( !FilterFromIrp )
    return (unsigned int)v10;
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  v12 = *(_QWORD *)(*FilterFromIrp + 72) + 152LL * *(unsigned int *)(a2 + 24);
  WPP_RECORDER_SF_d((__int64)WPP_GLOBAL_Control->DeviceExtension, v7, v8, *FilterFromIrp, v19);
  v16 = v9[2];
  if ( *(_DWORD *)(*(_QWORD *)(v16 + 16) + 512LL) == 1 )
  {
    v18 = *(_DWORD *)(a2 + 32);
    if ( v18 < *(_DWORD *)(v12 + 92) )
    {
      v10 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64, unsigned int, int, unsigned int *))(v12 + 136))(
              v16,
              v12,
              CurrentStackLocation->Parameters.Read.Length,
              a3,
              v18,
              1,
              &v20);
      if ( v10 >= 0 )
        Irp->IoStatus.Information = v20;
    }
    return (unsigned int)v10;
  }
  if ( DeviceRequestPowerUp((PIRP *)v9[2], v13, v14, v15) < 0 )
    return 3221225635LL;
  else
    return QueuePropertyRequest(Irp);
}

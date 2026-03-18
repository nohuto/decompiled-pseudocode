/*
 * XREFs of AcpiDeviceResetCompleteResetWorker @ 0x1C0039A10
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0024E60 (_guard_dispatch_icall_nop.c)
 *     AcpiDeviceResetDereference @ 0x1C0039BE0 (AcpiDeviceResetDereference.c)
 *     AcpiResetDeviceAlreadyProcessed @ 0x1C003A0A8 (AcpiResetDeviceAlreadyProcessed.c)
 */

__int64 __fastcall AcpiDeviceResetCompleteResetWorker(volatile signed __int32 *P)
{
  volatile signed __int32 *v1; // rdi
  KIRQL v2; // al
  __int64 v3; // r8
  __int64 v4; // r15
  __int64 v5; // r9
  _QWORD **v6; // rsi
  _QWORD *v7; // r14
  _QWORD *v8; // rbp
  char v9; // bl
  KIRQL v10; // r9
  __int64 v11; // rax
  __int64 v12; // rcx
  PIRP Irp; // rbx
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  _QWORD *v15; // rbx
  _QWORD *v16; // rax
  __int64 v17; // rdx
  void *v18; // rbp
  __int64 v19; // rcx
  char v21; // [rsp+20h] [rbp-58h] BYREF
  __int64 v22; // [rsp+28h] [rbp-50h]
  void (__fastcall *v23)(__int64); // [rsp+38h] [rbp-40h]
  void (__fastcall *v24)(__int64); // [rsp+40h] [rbp-38h]

  v1 = P;
  _InterlockedAdd(P, 1u);
  v2 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerLock);
  v4 = *((_QWORD *)v1 + 9);
  LOBYTE(v5) = v2;
  v6 = (_QWORD **)(v4 + 48);
  v7 = *(_QWORD **)(v4 + 48);
  if ( v7 != (_QWORD *)(v4 + 48) )
  {
    do
    {
      v8 = v7 - 5;
      v7 = (_QWORD *)*v7;
      v9 = AcpiResetDeviceAlreadyProcessed(v4, v8, v3, v5);
      KeReleaseSpinLock(&AcpiPowerLock, v10);
      if ( !v9 && (v11 = v8[4]) != 0 && (v12 = *(_QWORD *)(v11 + 712)) != 0 )
        Irp = IoAllocateIrp(*(_BYTE *)(v12 + 76), 0);
      else
        Irp = 0LL;
      if ( Irp )
      {
        Irp->IoStatus.Information = 0LL;
        CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
        Irp->IoStatus.Status = -1073741637;
        CurrentStackLocation[-1].Parameters.CreatePipe.Parameters = 0LL;
        CurrentStackLocation[-1].Parameters.Read.ByteOffset.QuadPart = (__int64)&v21;
        CurrentStackLocation[-1].Parameters.WMI.ProviderId = (unsigned __int64)&GUID_REENUMERATE_SELF_INTERFACE_STANDARD;
        *(_WORD *)&CurrentStackLocation[-1].MajorFunction = 2075;
        CurrentStackLocation[-1].Parameters.Create.Options = 65576;
        if ( (int)IoSynchronousCallDriver(*(_QWORD *)(v8[4] + 712LL), Irp) >= 0 )
        {
          v24(v22);
          v23(v22);
        }
        IoFreeIrp(Irp);
      }
      LOBYTE(v5) = KeAcquireSpinLockRaiseToDpc(&AcpiPowerLock);
    }
    while ( v7 != v6 );
    v1 = P;
  }
  v15 = *v6;
  while ( v15 != v6 )
  {
    v16 = v15 - 5;
    v15 = (_QWORD *)*v15;
    v17 = v16[4];
    v18 = *(void **)(v17 + 896);
    *(_QWORD *)(v17 + 896) = 0LL;
    KeReleaseSpinLock(&AcpiPowerLock, v5);
    if ( v18 )
      AcpiDeviceResetDereference(v18);
    LOBYTE(v5) = KeAcquireSpinLockRaiseToDpc(&AcpiPowerLock);
  }
  KeReleaseSpinLock(&AcpiPowerLock, v5);
  v19 = *((_QWORD *)v1 + 3);
  if ( v19 )
  {
    *(_DWORD *)(v19 + 48) = *((_DWORD *)v1 + 8);
    IofCompleteRequest(*((PIRP *)v1 + 3), 0);
  }
  *((_QWORD *)v1 + 3) = 0LL;
  return AcpiDeviceResetDereference((PVOID)v1);
}

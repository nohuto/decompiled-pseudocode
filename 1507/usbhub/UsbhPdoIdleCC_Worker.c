/*
 * XREFs of UsbhPdoIdleCC_Worker @ 0x1C0055C10
 * Callers:
 *     <none>
 * Callees:
 *     PdoExt @ 0x1C0013AD0 (PdoExt.c)
 *     Log @ 0x1C0014B50 (Log.c)
 *     FdoExt @ 0x1C0015060 (FdoExt.c)
 *     UsbhUnlatchPdo @ 0x1C0019160 (UsbhUnlatchPdo.c)
 *     _guard_dispatch_icall_nop @ 0x1C0029E70 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_d @ 0x1C00404E8 (WPP_RECORDER_SF_d.c)
 *     UsbhIdleIrp_Event @ 0x1C0055484 (UsbhIdleIrp_Event.c)
 */

void __fastcall UsbhPdoIdleCC_Worker(ULONG_PTR a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  _DWORD *v9; // rax
  __int64 v10; // rbp
  KIRQL v11; // al
  int v12; // ebx
  PIRP v13; // rbx
  __int64 *v14; // r10
  __int64 v15; // r10

  FdoExt(a1, a2, a3, a4);
  v9 = PdoExt(a3, v6, v7, v8);
  v10 = (__int64)v9;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0xCu,
      (__int64)&WPP_1436580ac7c1e6e547d4e2396d01fda1_Traceguids,
      *((unsigned __int16 *)v9 + 710));
  Log(a1, 0x10000, 1768189015, a3, *(unsigned __int16 *)(v10 + 1420));
  v11 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v10 + 2040));
  v12 = *(_DWORD *)(v10 + 1528);
  KeReleaseSpinLock((PKSPIN_LOCK)(v10 + 2040), v11);
  if ( v12 == 1 )
  {
    KeWaitForSingleObject((PVOID)(v10 + 2048), Executive, 0, 0, 0LL);
    v13 = IoCsqRemoveNextIrp((PIO_CSQ)(v10 + 1456), 0LL);
    Log(a1, 16, 1919764785, a3, (__int64)v13);
    if ( v13 )
    {
      UsbhIdleIrp_Event(a1, a3, v13, 2u, 0);
      KeSetEvent((PRKEVENT)(v10 + 2048), 0, 0);
      if ( *(_DWORD *)(v10 + 792) == 1 )
      {
        Log(
          a1,
          16,
          1231249969,
          (__int64)v13->Tail.Overlay.CurrentStackLocation->Parameters.CreatePipe.Parameters,
          (__int64)v13);
        if ( v14 )
        {
          if ( *v14 )
          {
            Log(a1, 16, 1231249970, *v14, v14[1]);
            (*(void (__fastcall **)(_QWORD))v15)(*(_QWORD *)(v15 + 8));
          }
        }
      }
      KeWaitForSingleObject((PVOID)(v10 + 2048), Executive, 0, 0, 0LL);
      UsbhIdleIrp_Event(a1, a3, v13, 4u, *(_DWORD *)(v10 + 1432));
      KeSetEvent((PRKEVENT)(v10 + 2048), 0, 0);
    }
    else
    {
      KeSetEvent((PRKEVENT)(v10 + 2048), 0, 0);
      UsbhIdleIrp_Event(a1, a3, 0LL, 3u, 0);
    }
    UsbhUnlatchPdo(a1, a3, v10, 0x656C6449u);
  }
  else
  {
    UsbhUnlatchPdo(a1, a3, v10, 0x656C6449u);
    Log(a1, 0x10000, 1768189006, a3, *(unsigned __int16 *)(v10 + 1420));
  }
}

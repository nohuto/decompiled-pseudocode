/*
 * XREFs of UsbhFdoPnp @ 0x1C00240B0
 * Callers:
 *     <none>
 * Callees:
 *     FdoExt @ 0x1C0015060 (FdoExt.c)
 *     _guard_dispatch_icall_nop @ 0x1C0029E70 (_guard_dispatch_icall_nop.c)
 *     UsbhTrapFatal_Dbg @ 0x1C003CB70 (UsbhTrapFatal_Dbg.c)
 */

NTSTATUS __fastcall UsbhFdoPnp(__int64 a1, IRP *a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rbx
  _IO_STACK_LOCATION *CurrentStackLocation; // rsi
  int MinorFunction; // ecx
  KIRQL v9; // al
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  PDEVICE_OBJECT *v14; // rax

  if ( !a1 )
    UsbhTrapFatal_Dbg(0LL, 0LL, a3, a4);
  v6 = *(_QWORD *)(a1 + 64);
  if ( !v6 )
    UsbhTrapFatal_Dbg(a1, 0LL, a3, a4);
  if ( *(_DWORD *)v6 != 541218120 )
    UsbhTrapFatal_Dbg(a1, *(_QWORD *)(a1 + 64), a3, a4);
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  MinorFunction = CurrentStackLocation->MinorFunction;
  *(_DWORD *)(v6 + 20) = MinorFunction;
  *(_BYTE *)((((unsigned __int8)_InterlockedExchangeAdd((volatile signed __int32 *)(v6 + 1264), 1u) + 1) & 0xF)
           + v6
           + 1268) = MinorFunction;
  v9 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
  WPP_MAIN_CB.Dpc.DeferredRoutine = (void (__fastcall *)(_KDPC *, void *, void *, void *))&WPP_MAIN_CB.Dpc.DeferredContext;
  if ( *(_DWORD *)(v6 + 1256) && CurrentStackLocation->MinorFunction < 0x20u )
  {
    WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
    KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v9);
    return off_1C005A028[2 * CurrentStackLocation->MinorFunction](a1, a2);
  }
  else
  {
    WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
    KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v9);
    v14 = (PDEVICE_OBJECT *)FdoExt(a1, v11, v12, v13);
    ++a2->CurrentLocation;
    ++a2->Tail.Overlay.CurrentStackLocation;
    return IofCallDriver(v14[151], a2);
  }
}

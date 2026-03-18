/*
 * XREFs of UsbhPostInterrupt @ 0x1C00239F0
 * Callers:
 *     UsbhBusPause_Action @ 0x1C000F090 (UsbhBusPause_Action.c)
 *     UsbhBusResume_Action @ 0x1C000FDA0 (UsbhBusResume_Action.c)
 *     UsbhHubProcessIsr @ 0x1C00127E0 (UsbhHubProcessIsr.c)
 *     UsbhHubResetIrqPipeWorker @ 0x1C0043B30 (UsbhHubResetIrqPipeWorker.c)
 * Callees:
 *     Log @ 0x1C0014B50 (Log.c)
 *     memset @ 0x1C002A1C0 (memset.c)
 *     UsbhTrapFatal_Dbg @ 0x1C003CB70 (UsbhTrapFatal_Dbg.c)
 *     WPP_RECORDER_SF_ @ 0x1C003CDB0 (WPP_RECORDER_SF_.c)
 */

NTSTATUS __fastcall UsbhPostInterrupt(PDEVICE_OBJECT DeviceObject, __int64 a2, __int64 a3, __int64 a4)
{
  void *DeviceExtension; // rdx
  __int64 v6; // rcx
  unsigned __int16 *v7; // rdi
  IRP *v8; // rbp
  unsigned __int64 v9; // r14
  __int16 v10; // r8
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  NTSTATUS result; // eax
  __int64 v13; // r8
  void *v14; // rdx
  __int64 v15; // rcx
  _IO_STACK_LOCATION *v16; // rax

  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      18,
      (__int64)&WPP_0fac597d3f0b5fd77bcb4f18b65857f6_Traceguids);
  if ( (UsbhLogMask & 4) != 0 )
  {
    if ( !DeviceObject )
      goto LABEL_19;
    DeviceExtension = DeviceObject->DeviceExtension;
    if ( DeviceExtension )
    {
      v6 = *((_QWORD *)DeviceExtension + 111)
         + 32LL
         * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)DeviceExtension + 220) & *((_DWORD *)DeviceExtension + 221));
      *(_DWORD *)v6 = 1047622249;
      *(_QWORD *)(v6 + 8) = 0LL;
      *(_QWORD *)(v6 + 16) = 0LL;
      *(_QWORD *)(v6 + 24) = 0LL;
    }
  }
  if ( !DeviceObject )
LABEL_19:
    UsbhTrapFatal_Dbg(DeviceObject, DeviceObject, a3, a4);
  v7 = (unsigned __int16 *)DeviceObject->DeviceExtension;
  if ( !v7 )
    UsbhTrapFatal_Dbg(DeviceObject, 0LL, a3, a4);
  if ( *(_DWORD *)v7 != 541218120 )
    UsbhTrapFatal_Dbg(DeviceObject, DeviceObject->DeviceExtension, a3, a4);
  v8 = (IRP *)*((_QWORD *)v7 + 333);
  v9 = *((_QWORD *)v7 + 334);
  if ( !v9 )
    UsbhTrapFatal_Dbg(DeviceObject, DeviceObject, a3, a4);
  if ( !v8 )
    UsbhTrapFatal_Dbg(DeviceObject, DeviceObject, a3, a4);
  *(_QWORD *)(v9 + 8) = 0LL;
  *(_DWORD *)v9 = 589952;
  *(_QWORD *)(v9 + 24) = *((_QWORD *)v7 + 330);
  *(_DWORD *)(v9 + 32) = 2;
  *(_DWORD *)(v9 + 36) = v7[1316];
  *(_QWORD *)(v9 + 40) = *((_QWORD *)v7 + 335);
  memset(*((void **)v7 + 335), 0, v7[1316]);
  *(_QWORD *)(v9 + 48) = 0LL;
  v10 = *(char *)(*((_QWORD *)v7 + 151) + 76LL);
  IoInitializeIrp(v8, 72 * v10 + 208, v10);
  CurrentStackLocation = v8->Tail.Overlay.CurrentStackLocation;
  CurrentStackLocation[-1].Parameters.WMI.ProviderId = v9;
  CurrentStackLocation[-1].MajorFunction = 15;
  CurrentStackLocation[-1].Parameters.Read.ByteOffset.LowPart = 2228227;
  if ( _InterlockedIncrement((volatile signed __int32 *)v7 + 678) )
  {
    if ( IoSetCompletionRoutineEx(DeviceObject, v8, (PIO_COMPLETION_ROUTINE)UsbhHubIsr, DeviceObject, 1u, 1u, 1u) < 0 )
    {
      v16 = v8->Tail.Overlay.CurrentStackLocation;
      v16[-1].CompletionRoutine = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *))UsbhHubIsr;
      v16[-1].Context = DeviceObject;
      v16[-1].Control = -32;
    }
    result = IofCallDriver(*((PDEVICE_OBJECT *)v7 + 151), v8);
    v13 = result;
    if ( (UsbhLogMask & 4) != 0 )
    {
      v14 = DeviceObject->DeviceExtension;
      if ( v14 )
      {
        result = 1047621993;
        v15 = *((_QWORD *)v14 + 111)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v14 + 220) & *((_DWORD *)v14 + 221));
        *(_DWORD *)v15 = 1047621993;
        *(_QWORD *)(v15 + 8) = 0LL;
        *(_QWORD *)(v15 + 16) = v13;
        *(_QWORD *)(v15 + 24) = 0LL;
      }
    }
  }
  else
  {
    Log((__int64)DeviceObject, 4, 1769042750, 0LL, 0LL);
    _InterlockedDecrement((volatile signed __int32 *)v7 + 678);
    return KeSetEvent((PRKEVENT)v7 + 112, 0, 0);
  }
  return result;
}

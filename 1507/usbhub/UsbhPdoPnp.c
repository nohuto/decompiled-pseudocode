/*
 * XREFs of UsbhPdoPnp @ 0x1C00234F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0029E70 (_guard_dispatch_icall_nop.c)
 *     UsbhTrapFatal_Dbg @ 0x1C003CB70 (UsbhTrapFatal_Dbg.c)
 *     WPP_RECORDER_SF_c @ 0x1C00456D8 (WPP_RECORDER_SF_c.c)
 */

__int64 __fastcall UsbhPdoPnp(struct _DEVICE_OBJECT *a1, IRP *a2, __int64 a3, __int64 a4)
{
  void *DeviceExtension; // rax
  _IO_STACK_LOCATION *CurrentStackLocation; // rdi
  int MinorFunction; // edx
  unsigned __int8 v9; // al
  unsigned int Status; // ebx

  if ( !a1 )
    UsbhTrapFatal_Dbg(0LL, 0LL, a3, a4);
  DeviceExtension = a1->DeviceExtension;
  if ( !DeviceExtension )
    UsbhTrapFatal_Dbg(a1, 0LL, a3, a4);
  if ( *(_DWORD *)DeviceExtension != 1329877064 )
    UsbhTrapFatal_Dbg(a1, a1->DeviceExtension, a3, a4);
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  MinorFunction = CurrentStackLocation->MinorFunction;
  *((_DWORD *)DeviceExtension + 291) = MinorFunction;
  *((_BYTE *)DeviceExtension
  + (((unsigned __int8)_InterlockedExchangeAdd((volatile signed __int32 *)DeviceExtension + 222, 1u) + 1) & 0xF)
  + 892) = MinorFunction;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_c(
      WPP_GLOBAL_Control->DeviceExtension,
      MinorFunction,
      a3,
      15,
      (__int64)&WPP_0699480349a52c2338640249ccf2c1c3_Traceguids,
      CurrentStackLocation->MinorFunction);
  v9 = CurrentStackLocation->MinorFunction;
  if ( v9 >= 0x20u )
  {
    Status = a2->IoStatus.Status;
    IofCompleteRequest(a2, 0);
  }
  else
  {
    return (unsigned int)off_1C0059E28[2 * v9](a1, a2);
  }
  return Status;
}

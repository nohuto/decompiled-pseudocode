/*
 * XREFs of UsbhGenDispatch @ 0x1C00142D0
 * Callers:
 *     <none>
 * Callees:
 *     UsbhTrapFatal_Dbg @ 0x1C0029420 (UsbhTrapFatal_Dbg.c)
 *     WPP_RECORDER_SF_c @ 0x1C0029454 (WPP_RECORDER_SF_c.c)
 *     _guard_dispatch_icall_nop @ 0x1C00295A0 (_guard_dispatch_icall_nop.c)
 *     UsbhTrapBadIrp @ 0x1C003D150 (UsbhTrapBadIrp.c)
 */

__int64 __fastcall UsbhGenDispatch(ULONG_PTR a1, IRP *a2, __int64 a3, __int64 a4)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rbx
  __int64 v6; // rdx
  __int64 (__fastcall *v8)(ULONG_PTR, ULONG_PTR); // rax
  unsigned int Status; // ebx
  int MinorFunction; // ecx
  unsigned __int8 v13; // al

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v6 = *(_QWORD *)(a1 + 64);
  if ( *(_DWORD *)v6 == 1329877064 )
  {
    if ( CurrentStackLocation->MajorFunction > 0x1Bu )
      UsbhTrapBadIrp(a1, (ULONG_PTR)a2);
    v8 = off_1C0059ED8[2 * CurrentStackLocation->MajorFunction];
    if ( (char *)v8 == (char *)&UsbhPdoPnp )
    {
      if ( !v6 )
        UsbhTrapFatal_Dbg(a1, 0LL, a3, a4);
      if ( *(_DWORD *)v6 != 1329877064 )
        UsbhTrapFatal_Dbg(a1, v6, a3, a4);
      MinorFunction = CurrentStackLocation->MinorFunction;
      *(_DWORD *)(v6 + 1164) = MinorFunction;
      *(_BYTE *)((((unsigned __int8)_InterlockedExchangeAdd((volatile signed __int32 *)(v6 + 888), 1u) + 1) & 0xF)
               + v6
               + 892) = MinorFunction;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_c(
          WPP_GLOBAL_Control->DeviceExtension,
          v6,
          a3,
          15,
          (__int64)&WPP_f44c71c208e93d614b6f1b21108c6498_Traceguids,
          CurrentStackLocation->MinorFunction);
      v13 = CurrentStackLocation->MinorFunction;
      if ( v13 >= 0x20u )
      {
        Status = a2->IoStatus.Status;
        IofCompleteRequest(a2, 0);
        return Status;
      }
      v8 = (__int64 (__fastcall *)(ULONG_PTR, ULONG_PTR))off_1C0059A98[2 * v13];
    }
    return (unsigned int)v8(a1, (ULONG_PTR)a2);
  }
  else
  {
    if ( *(_DWORD *)v6 != 541218120 )
    {
      Status = -1073741811;
      a2->IoStatus.Status = -1073741811;
      IofCompleteRequest(a2, 0);
      return Status;
    }
    if ( CurrentStackLocation->MajorFunction > 0x1Bu )
      UsbhTrapBadIrp(a1, (ULONG_PTR)a2);
    return ((unsigned int (__fastcall *)(ULONG_PTR, IRP *))off_1C0059D18[2 * CurrentStackLocation->MajorFunction])(
             a1,
             a2);
  }
}

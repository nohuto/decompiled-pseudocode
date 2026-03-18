/*
 * XREFs of UsbhGenDispatch @ 0x1C0023030
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0029E70 (_guard_dispatch_icall_nop.c)
 *     UsbhTrapBadIrp @ 0x1C003CB00 (UsbhTrapBadIrp.c)
 */

__int64 __fastcall UsbhGenDispatch(ULONG_PTR a1, IRP *a2)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // r8
  int v3; // eax
  unsigned int v5; // ebx

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v3 = **(_DWORD **)(a1 + 64);
  if ( v3 == 1329877064 )
  {
    if ( CurrentStackLocation->MajorFunction > 0x1Bu )
      UsbhTrapBadIrp(a1, (ULONG_PTR)a2);
    return (unsigned int)off_1C005A9D8[2 * CurrentStackLocation->MajorFunction](a1, (ULONG_PTR)a2);
  }
  else
  {
    if ( v3 != 541218120 )
    {
      v5 = -1073741811;
      a2->IoStatus.Status = -1073741811;
      IofCompleteRequest(a2, 0);
      return v5;
    }
    if ( CurrentStackLocation->MajorFunction > 0x1Bu )
      UsbhTrapBadIrp(a1, (ULONG_PTR)a2);
    return ((unsigned int (__fastcall *)(ULONG_PTR, IRP *))off_1C005A818[2 * CurrentStackLocation->MajorFunction])(
             a1,
             a2);
  }
}

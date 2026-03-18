/*
 * XREFs of UsbhPdoPowerWorkerInternal @ 0x1C000C9D8
 * Callers:
 *     UsbhPdoPower @ 0x1C000C830 (UsbhPdoPower.c)
 *     UsbhPdoPowerWorker @ 0x1C00463B0 (UsbhPdoPowerWorker.c)
 * Callees:
 *     PdoExt @ 0x1C000D6E0 (PdoExt.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028E30 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall UsbhPdoPowerWorkerInternal(ULONG_PTR a1, IRP *a2)
{
  __int64 v4; // rax
  _IO_STACK_LOCATION *CurrentStackLocation; // rdx
  __int64 v6; // r10
  char IoControlCode; // r8
  unsigned __int8 MinorFunction; // r9
  __int64 v9; // rax
  unsigned __int8 v10; // al
  unsigned int Status; // edi

  if ( *(_DWORD *)(PdoExt(a1) + 1124) == 6 )
  {
    Status = -1073741130;
    a2->IoStatus.Status = -1073741130;
    goto LABEL_12;
  }
  v4 = PdoExt(a1);
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v6 = v4;
  IoControlCode = -1;
  MinorFunction = CurrentStackLocation->MinorFunction;
  if ( MinorFunction )
  {
    if ( (unsigned __int8)(MinorFunction - 2) <= 1u )
    {
      IoControlCode = CurrentStackLocation->Parameters.DeviceIoControl.IoControlCode;
      if ( CurrentStackLocation->Parameters.Create.Options == 1 )
        IoControlCode |= 0x80u;
    }
  }
  else
  {
    IoControlCode = CurrentStackLocation->Parameters.SetLock.Lock;
  }
  v9 = ((unsigned __int8)_InterlockedExchangeAdd((volatile signed __int32 *)(v4 + 908), 1u) + 1) & 0xF;
  *(_BYTE *)(v9 + v6 + 912) = MinorFunction;
  *(_BYTE *)(v9 + v6 + 928) = IoControlCode;
  *(_DWORD *)(v6 + 1168) = MinorFunction;
  v10 = CurrentStackLocation->MinorFunction;
  if ( v10 > 4u )
  {
    Status = a2->IoStatus.Status;
LABEL_12:
    IofCompleteRequest(a2, 0);
    return Status;
  }
  return (unsigned int)off_1C0059DE8[2 * v10](a1, (ULONG_PTR)a2);
}

/*
 * XREFs of UsbhPdoPowerWorkerInternal @ 0x1C0026090
 * Callers:
 *     UsbhPdoPower @ 0x1C0026060 (UsbhPdoPower.c)
 *     UsbhPdoPowerWorker @ 0x1C0046330 (UsbhPdoPowerWorker.c)
 * Callees:
 *     PdoExt @ 0x1C0013AD0 (PdoExt.c)
 *     _guard_dispatch_icall_nop @ 0x1C0029E70 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall UsbhPdoPowerWorkerInternal(ULONG_PTR a1, IRP *a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  _DWORD *v9; // rax
  _IO_STACK_LOCATION *CurrentStackLocation; // rdx
  _DWORD *v11; // r10
  char IoControlCode; // r8
  unsigned __int8 MinorFunction; // r9
  __int64 v14; // rax
  unsigned __int8 v15; // al
  unsigned int Status; // edi

  if ( PdoExt(a1, (__int64)a2, a3, a4)[281] == 6 )
  {
    Status = -1073741130;
    a2->IoStatus.Status = -1073741130;
    goto LABEL_12;
  }
  v9 = PdoExt(a1, v6, v7, v8);
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v11 = v9;
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
  v14 = ((unsigned __int8)_InterlockedExchangeAdd(v9 + 227, 1u) + 1) & 0xF;
  *((_BYTE *)v11 + v14 + 912) = MinorFunction;
  *((_BYTE *)v11 + v14 + 928) = IoControlCode;
  v11[292] = MinorFunction;
  v15 = CurrentStackLocation->MinorFunction;
  if ( v15 > 4u )
  {
    Status = a2->IoStatus.Status;
LABEL_12:
    IofCompleteRequest(a2, 0);
    return Status;
  }
  return (unsigned int)off_1C005A268[2 * v15](a1, (ULONG_PTR)a2);
}

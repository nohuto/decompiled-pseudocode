/*
 * XREFs of UsbhAcpiEvalAcpiMethodEx @ 0x1C0004D20
 * Callers:
 *     UsbhGetAcpiPortAttributes @ 0x1C0022E20 (UsbhGetAcpiPortAttributes.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0028D40 (__security_check_cookie.c)
 *     memmove @ 0x1C0028E40 (memmove.c)
 *     memset @ 0x1C0029180 (memset.c)
 *     UsbhTrapFatal_Dbg @ 0x1C003CDA0 (UsbhTrapFatal_Dbg.c)
 */

__int64 __fastcall UsbhAcpiEvalAcpiMethodEx(__int64 a1, unsigned __int16 *a2, __int64 a3, _DWORD *a4)
{
  int v5; // r14d
  __int64 v7; // rbx
  __int64 v8; // rdi
  const void *v9; // rdx
  __int64 v10; // rdi
  IRP *v11; // rdi
  NTSTATUS Status; // edi
  struct _KEVENT Event; // [rsp+50h] [rbp-188h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+68h] [rbp-170h] BYREF
  _DWORD InputBuffer[72]; // [rsp+80h] [rbp-158h] BYREF

  v5 = a3;
  if ( !a1 )
    UsbhTrapFatal_Dbg(0LL, 0LL, a3, a4);
  v7 = *(_QWORD *)(a1 + 64);
  if ( !v7 )
    UsbhTrapFatal_Dbg(a1, 0LL, a3, a4);
  if ( *(_DWORD *)v7 != 541218120 )
    UsbhTrapFatal_Dbg(a1, *(_QWORD *)(a1 + 64), a3, a4);
  v8 = *a2;
  if ( (unsigned __int64)((int)v8 + 1 + 5LL) > 0x100 )
    return 3221225485LL;
  memset(InputBuffer, 0, 0x114uLL);
  v9 = (const void *)*((_QWORD *)a2 + 1);
  InputBuffer[0] = 1181312321;
  InputBuffer[65] = 276;
  memmove(&InputBuffer[1], v9, (unsigned int)v8);
  *((_BYTE *)&InputBuffer[1] + v8) = 46;
  v10 = (unsigned int)(v8 + 1);
  *(_DWORD *)((char *)&InputBuffer[1] + v10) = v5;
  *((_BYTE *)&InputBuffer[1] + (unsigned int)(v10 + 4)) = 0;
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  v11 = IoBuildDeviceIoControlRequest(
          0x32C018u,
          *(PDEVICE_OBJECT *)(v7 + 1208),
          InputBuffer,
          0x114u,
          a4,
          0x414u,
          0,
          &Event,
          &IoStatusBlock);
  if ( !v11 )
    return 3221225626LL;
  ObfReferenceObject(*(PVOID *)(v7 + 1208));
  Status = IofCallDriver(*(PDEVICE_OBJECT *)(v7 + 1208), v11);
  if ( Status == 259 )
  {
    Status = KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    if ( !Status )
      Status = IoStatusBlock.Status;
  }
  ObfDereferenceObject(*(PVOID *)(v7 + 1208));
  if ( Status < 0 || *a4 == 1114596673 && a4[2] )
    return (unsigned int)Status;
  else
    return 3222536207LL;
}

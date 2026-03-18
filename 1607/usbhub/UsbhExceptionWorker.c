/*
 * XREFs of UsbhExceptionWorker @ 0x1C004F980
 * Callers:
 *     UsbhException @ 0x1C004F3A0 (UsbhException.c)
 * Callees:
 *     UsbhReferenceListRemove @ 0x1C0009434 (UsbhReferenceListRemove.c)
 *     Log @ 0x1C00159D0 (Log.c)
 *     FdoExt @ 0x1C0015EE0 (FdoExt.c)
 *     _guard_dispatch_icall_nop @ 0x1C00295A0 (_guard_dispatch_icall_nop.c)
 *     UsbhGetExceptionDispatch @ 0x1C004FA68 (UsbhGetExceptionDispatch.c)
 *     UsbhLogException @ 0x1C004FB70 (UsbhLogException.c)
 */

void __fastcall UsbhExceptionWorker(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char *ExceptionDispatch; // r10
  __int64 v7; // rcx
  _DWORD *v8; // rax
  void (__fastcall *v9)(__int64, __int64); // rax
  void *v10; // rsi

  FdoExt(a1, a2, a3, a4);
  Log(a1, 128, 1702385495, 0LL, a3);
  ExceptionDispatch = (char *)UsbhGetExceptionDispatch(a1, *(unsigned int *)(a3 + 16));
  v7 = 0LL;
  v8 = &HubExceptionTable;
  while ( *(_DWORD *)(a3 + 16) != *v8 )
  {
    v7 = (unsigned int)(v7 + 1);
    v8 += 6;
    if ( (unsigned int)v7 >= 0x8E )
      goto LABEL_6;
  }
  ExceptionDispatch = (char *)&HubExceptionTable + 24 * v7;
LABEL_6:
  if ( HIDWORD(WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink) )
    Log(a1, 128, 1768908081, a3, 0LL);
  if ( ExceptionDispatch )
  {
    v9 = (void (__fastcall *)(__int64, __int64))*((_QWORD *)ExceptionDispatch + 2);
    if ( v9 )
      v9(a1, a3);
  }
  v10 = (void *)UsbhLogException(a1, a3);
  UsbhReferenceListRemove(a1, a3);
  if ( v10 )
    ExFreePoolWithTag(v10, 0);
}

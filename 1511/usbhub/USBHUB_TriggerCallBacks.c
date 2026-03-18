/*
 * XREFs of USBHUB_TriggerCallBacks @ 0x1C004AA48
 * Callers:
 *     UsbhPdoInternalDeviceControl @ 0x1C0018D90 (UsbhPdoInternalDeviceControl.c)
 *     UsbhFdoReturnPortStatus @ 0x1C0019330 (UsbhFdoReturnPortStatus.c)
 *     UsbhDecPdoIoCount @ 0x1C001C2C0 (UsbhDecPdoIoCount.c)
 *     UsbhTrapBadIrp @ 0x1C003CD30 (UsbhTrapBadIrp.c)
 *     UsbhTrapFatalTimeout_x9f @ 0x1C003CD68 (UsbhTrapFatalTimeout_x9f.c)
 *     UsbhTrapFatal_Dbg @ 0x1C003CDA0 (UsbhTrapFatal_Dbg.c)
 * Callees:
 *     PdoExt @ 0x1C000D6E0 (PdoExt.c)
 *     FdoExt @ 0x1C00132D0 (FdoExt.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028E30 (_guard_dispatch_icall_nop.c)
 */

__int64 (__fastcall *__fastcall USBHUB_TriggerCallBacks(__int64 a1, __int64 a2, __int64 a3, __int64 a4))(_QWORD)
{
  _DWORD *v4; // rdi
  void *v5; // rbx
  __int64 v6; // rdx
  _DWORD *v7; // rax
  void *v8; // rbx
  __int64 (__fastcall *result)(_QWORD); // rax

  v4 = 0LL;
  v5 = 0LL;
  v6 = **(unsigned int **)(a1 + 64);
  if ( (_DWORD)v6 == 541218120 )
  {
    v5 = (void *)a1;
    goto LABEL_6;
  }
  if ( (_DWORD)v6 == 1329877064 )
  {
    v7 = PdoExt(a1, v6, a3, a4);
    v5 = (void *)*((_QWORD *)v7 + 147);
    if ( v5 )
    {
      a1 = *((_QWORD *)v7 + 147);
LABEL_6:
      v4 = FdoExt(a1, v6, a3, a4);
    }
  }
  ObfReferenceObject(v5);
  v8 = (void *)_InterlockedExchange64(&USBHUB_CurrentFdo, (__int64)v5);
  result = (__int64 (__fastcall *)(_QWORD))*((_QWORD *)v4 + 585);
  if ( result )
    result = (__int64 (__fastcall *)(_QWORD))result(*((_QWORD *)v4 + 582));
  if ( v8 )
    return (__int64 (__fastcall *)(_QWORD))ObfDereferenceObject(v8);
  return result;
}

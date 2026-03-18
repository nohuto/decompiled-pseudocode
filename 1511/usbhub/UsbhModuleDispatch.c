/*
 * XREFs of UsbhModuleDispatch @ 0x1C0025134
 * Callers:
 *     Usbh_FDO_WaitPnpStart @ 0x1C000A030 (Usbh_FDO_WaitPnpStart.c)
 *     Usbh_FDO_WaitPnpStop_CB @ 0x1C0020DE0 (Usbh_FDO_WaitPnpStop_CB.c)
 *     DriverEntry @ 0x1C0025208 (DriverEntry.c)
 *     UsbhDriverUnload @ 0x1C004AFE0 (UsbhDriverUnload.c)
 *     Usbh_FDO_WaitPnpRestart @ 0x1C004BA70 (Usbh_FDO_WaitPnpRestart.c)
 *     Usbh_FDO_WaitPnpStop @ 0x1C004BC00 (Usbh_FDO_WaitPnpStop.c)
 *     Usbh_PnpRemove @ 0x1C004BD60 (Usbh_PnpRemove.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0028E30 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall UsbhModuleDispatch(char a1, __int64 a2, _LIST_ENTRY *a3, int a4, __int64 a5, __int64 a6)
{
  unsigned int v9; // r15d
  unsigned int v10; // ebx
  unsigned int i; // r14d
  int v12; // r8d
  char *v13; // rdx
  __int64 (__fastcall *v14)(_LIST_ENTRY *, __int64, _QWORD); // rax
  __int64 result; // rax
  __int64 v16; // rdx
  _LIST_ENTRY *Flink; // rcx
  void (__fastcall *v18)(_LIST_ENTRY *, __int64, _QWORD); // rax
  void (__fastcall *v19)(_LIST_ENTRY *, char *, _QWORD); // rax
  void (__fastcall *v20)(_LIST_ENTRY *, __int64); // rax
  __int64 (__fastcall *v21)(_LIST_ENTRY *, __int64, _QWORD); // rax

  v9 = 0;
  v10 = a1 == 0 ? 9 : 0;
  for ( i = 0; i < 0xA; ++i )
  {
    v12 = 0;
    v13 = (char *)&HubModule + 56 * v10;
    if ( !v13 )
      goto LABEL_35;
    switch ( a4 )
    {
      case 0:
        v18 = *(void (__fastcall **)(_LIST_ENTRY *, __int64, _QWORD))v13;
        goto LABEL_33;
      case 1:
        v21 = (__int64 (__fastcall *)(_LIST_ENTRY *, __int64, _QWORD))*((_QWORD *)v13 + 1);
        if ( v21 )
          v12 = v21(a3, a6, 0LL);
        result = (unsigned int)v12;
        goto LABEL_36;
      case 2:
        v20 = (void (__fastcall *)(_LIST_ENTRY *, __int64))*((_QWORD *)v13 + 2);
        if ( v20 )
          v20(a3, a6);
        goto LABEL_26;
      case 3:
        v14 = (__int64 (__fastcall *)(_LIST_ENTRY *, __int64, _QWORD))*((_QWORD *)v13 + 3);
        if ( !v14 )
          goto LABEL_8;
        v16 = a5;
        Flink = WPP_MAIN_CB.Queue.ListEntry.Flink;
        goto LABEL_16;
      case 4:
        v19 = (void (__fastcall *)(_LIST_ENTRY *, char *, _QWORD))*((_QWORD *)v13 + 4);
        if ( v19 )
          v19(WPP_MAIN_CB.Queue.ListEntry.Flink, v13, 0LL);
LABEL_26:
        result = 0LL;
        goto LABEL_9;
    }
    if ( a4 != 5 )
    {
      if ( a4 == 6 )
      {
        v18 = (void (__fastcall *)(_LIST_ENTRY *, __int64, _QWORD))*((_QWORD *)v13 + 6);
LABEL_33:
        if ( v18 )
          v18(a3, a6, 0LL);
      }
LABEL_35:
      result = 0LL;
      if ( a4 != 1 )
        goto LABEL_9;
LABEL_36:
      if ( (int)result < 0 )
        v9 = result;
      goto LABEL_9;
    }
    v14 = (__int64 (__fastcall *)(_LIST_ENTRY *, __int64, _QWORD))*((_QWORD *)v13 + 5);
    if ( v14 )
    {
      v16 = a6;
      Flink = a3;
LABEL_16:
      v12 = v14(Flink, v16, 0LL);
    }
LABEL_8:
    result = (unsigned int)v12;
    if ( v12 < 0 )
      break;
LABEL_9:
    if ( a1 )
      ++v10;
    else
      --v10;
  }
  if ( a4 == 1 )
    return v9;
  return result;
}

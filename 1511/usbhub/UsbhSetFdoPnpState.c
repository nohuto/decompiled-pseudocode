/*
 * XREFs of UsbhSetFdoPnpState @ 0x1C000A3F0
 * Callers:
 *     Usbh_FDO_WaitPnpAdd @ 0x1C0009B70 (Usbh_FDO_WaitPnpAdd.c)
 *     Usbh_FDO_WaitPnpStart @ 0x1C000A030 (Usbh_FDO_WaitPnpStart.c)
 *     Usbh_FDO_WaitPnpStop_CB @ 0x1C0020DE0 (Usbh_FDO_WaitPnpStop_CB.c)
 *     Usbh_FDO_WaitPnpRemove @ 0x1C004B9D0 (Usbh_FDO_WaitPnpRemove.c)
 *     Usbh_FDO_WaitPnpRestart @ 0x1C004BA70 (Usbh_FDO_WaitPnpRestart.c)
 *     Usbh_FDO_WaitPnpStop @ 0x1C004BC00 (Usbh_FDO_WaitPnpStop.c)
 *     Usbh_PnpRemove @ 0x1C004BD60 (Usbh_PnpRemove.c)
 * Callees:
 *     UsbhEtwLogHubInformation @ 0x1C000BE7C (UsbhEtwLogHubInformation.c)
 *     FdoExt @ 0x1C00132D0 (FdoExt.c)
 */

__int64 (__fastcall *__fastcall UsbhSetFdoPnpState(__int64 a1, int a2, int a3))()
{
  __int64 v5; // rdi
  __int64 v6; // r9
  __int64 (__fastcall *result)(); // rax
  void *v8; // rdx

  v5 = FdoExt(a1);
  v6 = ((unsigned __int8)*(_DWORD *)(v5 + 24) + 1) & 7;
  *(_DWORD *)(v5 + 24) = v6;
  v6 *= 32LL;
  *(_DWORD *)(v6 + v5 + 28) = a3;
  *(_DWORD *)(v6 + v5 + 32) = *(_DWORD *)(v5 + 1360);
  *(_DWORD *)(v6 + v5 + 36) = a2;
  result = (__int64 (__fastcall *)())*(unsigned int *)(v5 + 1360);
  if ( a2 != (_DWORD)result )
  {
    if ( (_DWORD)result == 5 )
    {
      v8 = &USBHUB_ETW_EVENT_HUB_REMOVE;
    }
    else
    {
      if ( a2 != 5 )
        goto LABEL_4;
      v8 = &USBHUB_ETW_EVENT_HUB_START;
    }
    result = (__int64 (__fastcall *)())UsbhEtwLogHubInformation(v5, v8);
  }
LABEL_4:
  switch ( a2 )
  {
    case 1:
      result = (__int64 (__fastcall *)())Usbh_FDO_WaitPnpAdd;
      break;
    case 2:
      result = (__int64 (__fastcall *)())Usbh_FDO_WaitPnpStart;
      break;
    case 3:
      *(_QWORD *)(v5 + 1368) = 0LL;
      goto LABEL_11;
    case 4:
      result = Usbh_FDO_WaitPnpRemove;
      break;
    case 5:
      result = Usbh_FDO_WaitPnpStop;
      break;
    case 6:
      result = (__int64 (__fastcall *)())Usbh_FDO_WaitPnpStop_CB;
      break;
    case 7:
      result = Usbh_FDO_WaitPnpRestart;
      break;
    default:
      goto LABEL_11;
  }
  *(_QWORD *)(v5 + 1368) = result;
LABEL_11:
  *(_DWORD *)(v5 + 1360) = a2;
  return result;
}

/*
 * XREFs of UsbhSetFdoPnpState @ 0x1C0021CB0
 * Callers:
 *     Usbh_FDO_WaitPnpStop_CB @ 0x1C0021690 (Usbh_FDO_WaitPnpStop_CB.c)
 *     Usbh_FDO_WaitPnpAdd @ 0x1C00217F0 (Usbh_FDO_WaitPnpAdd.c)
 *     Usbh_FDO_WaitPnpStart @ 0x1C00218F0 (Usbh_FDO_WaitPnpStart.c)
 *     Usbh_FDO_WaitPnpRemove @ 0x1C004BA20 (Usbh_FDO_WaitPnpRemove.c)
 *     Usbh_FDO_WaitPnpRestart @ 0x1C004BAC0 (Usbh_FDO_WaitPnpRestart.c)
 *     Usbh_FDO_WaitPnpStop @ 0x1C004BC50 (Usbh_FDO_WaitPnpStop.c)
 *     Usbh_PnpRemove @ 0x1C004BDB0 (Usbh_PnpRemove.c)
 * Callees:
 *     FdoExt @ 0x1C0015060 (FdoExt.c)
 *     UsbhEtwLogHubInformation @ 0x1C0019A0C (UsbhEtwLogHubInformation.c)
 */

__int64 __fastcall UsbhSetFdoPnpState(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // ebx
  int v5; // esi
  _DWORD *v6; // rdi
  __int64 v7; // r9
  __int64 result; // rax

  v4 = a3;
  v5 = a2;
  v6 = FdoExt(a1, a2, a3, a4);
  v7 = ((unsigned __int8)v6[6] + 1) & 7;
  v6[6] = v7;
  v7 *= 32LL;
  *(_DWORD *)((char *)v6 + v7 + 28) = v4;
  *(_DWORD *)((char *)v6 + v7 + 32) = v6[340];
  *(_DWORD *)((char *)v6 + v7 + 36) = v5;
  result = (unsigned int)v6[340];
  if ( v5 != (_DWORD)result && ((_DWORD)result == 5 || v5 == 5) )
    result = UsbhEtwLogHubInformation((__int64)v6);
  switch ( v5 )
  {
    case 1:
      result = (__int64)Usbh_FDO_WaitPnpAdd;
      break;
    case 2:
      result = (__int64)Usbh_FDO_WaitPnpStart;
      break;
    case 3:
      *((_QWORD *)v6 + 171) = 0LL;
      goto LABEL_11;
    case 4:
      result = (__int64)Usbh_FDO_WaitPnpRemove;
      break;
    case 5:
      result = (__int64)Usbh_FDO_WaitPnpStop;
      break;
    case 6:
      result = (__int64)Usbh_FDO_WaitPnpStop_CB;
      break;
    case 7:
      result = (__int64)Usbh_FDO_WaitPnpRestart;
      break;
    default:
      goto LABEL_11;
  }
  *((_QWORD *)v6 + 171) = result;
LABEL_11:
  v6[340] = v5;
  return result;
}

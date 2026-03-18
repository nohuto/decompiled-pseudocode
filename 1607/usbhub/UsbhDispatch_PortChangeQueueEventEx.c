/*
 * XREFs of UsbhDispatch_PortChangeQueueEventEx @ 0x1C0011EB0
 * Callers:
 *     UsbhPCE_QueueDriverReset @ 0x1C0003B50 (UsbhPCE_QueueDriverReset.c)
 *     UsbhPCE_BusReset @ 0x1C0003FE4 (UsbhPCE_BusReset.c)
 *     UsbhPCE_wRun @ 0x1C0004A68 (UsbhPCE_wRun.c)
 *     UsbhWaitEventWithTimeoutEx @ 0x1C000DC70 (UsbhWaitEventWithTimeoutEx.c)
 *     UsbhHubProcessChangeWorker @ 0x1C00100F0 (UsbhHubProcessChangeWorker.c)
 *     UsbhBusPause_Action @ 0x1C00105A0 (UsbhBusPause_Action.c)
 *     UsbhBusResume_Action @ 0x1C0011110 (UsbhBusResume_Action.c)
 *     UsbhDispatch_PortChangeQueueNullEventEx @ 0x1C0011810 (UsbhDispatch_PortChangeQueueNullEventEx.c)
 *     UsbhHubRunPortChangeQueue @ 0x1C0011850 (UsbhHubRunPortChangeQueue.c)
 *     UsbhHubProcessIsr @ 0x1C0013B50 (UsbhHubProcessIsr.c)
 *     UsbhPCE_Suspend @ 0x1C001E798 (UsbhPCE_Suspend.c)
 *     UsbhPCE_psSUSPEND @ 0x1C0026F00 (UsbhPCE_psSUSPEND.c)
 *     UsbhPCE_Enable @ 0x1C00289D8 (UsbhPCE_Enable.c)
 *     UsbhPCE_Resume @ 0x1C0028A84 (UsbhPCE_Resume.c)
 *     UsbhPCE_BusDisconnect @ 0x1C0040F38 (UsbhPCE_BusDisconnect.c)
 *     UsbhPCE_Check @ 0x1C0041004 (UsbhPCE_Check.c)
 *     UsbhPCE_Close @ 0x1C00410BC (UsbhPCE_Close.c)
 *     UsbhPCE_Disable @ 0x1C0041188 (UsbhPCE_Disable.c)
 *     UsbhPCE_HW_Stop @ 0x1C00412C8 (UsbhPCE_HW_Stop.c)
 *     UsbhPCE_QueueChange @ 0x1C00413A0 (UsbhPCE_QueueChange.c)
 *     UsbhPCE_QueueChangeObject @ 0x1C0041478 (UsbhPCE_QueueChangeObject.c)
 *     UsbhPCE_ResumeDone @ 0x1C004155C (UsbhPCE_ResumeDone.c)
 *     UsbhPCE_ResumeTimeout @ 0x1C0041628 (UsbhPCE_ResumeTimeout.c)
 *     UsbhPCE_SD_Resume @ 0x1C00416F4 (UsbhPCE_SD_Resume.c)
 *     UsbhPCE_SoftDisconnect @ 0x1C00417B0 (UsbhPCE_SoftDisconnect.c)
 *     UsbhPCE_wChangeERROR @ 0x1C004189C (UsbhPCE_wChangeERROR.c)
 *     UsbhQueuePauseChange @ 0x1C0041960 (UsbhQueuePauseChange.c)
 *     UsbhQueueSoftConnectChange @ 0x1C0041A50 (UsbhQueueSoftConnectChange.c)
 * Callees:
 *     Usbh_PCE_BusReset_Action @ 0x1C0004090 (Usbh_PCE_BusReset_Action.c)
 *     Usbh_PCE_QueueDriverReset_Action @ 0x1C0004660 (Usbh_PCE_QueueDriverReset_Action.c)
 *     Usbh_PCE_psSUSPEND_Action @ 0x1C000AA48 (Usbh_PCE_psSUSPEND_Action.c)
 *     Usbh_PCE_Suspend_Action @ 0x1C000D4E0 (Usbh_PCE_Suspend_Action.c)
 *     Usbh_PCE_Disable_Action @ 0x1C000D740 (Usbh_PCE_Disable_Action.c)
 *     Usbh_PCE_Resume_Action @ 0x1C000E6F0 (Usbh_PCE_Resume_Action.c)
 *     Usbh_PCE_Enable_Action @ 0x1C000F100 (Usbh_PCE_Enable_Action.c)
 *     Usbh_PCE_QueueChange_Action @ 0x1C000FA60 (Usbh_PCE_QueueChange_Action.c)
 *     Usbh_PCE_wChange_Action @ 0x1C00120F0 (Usbh_PCE_wChange_Action.c)
 *     Usbh_PCE_wRun_Action @ 0x1C00125D0 (Usbh_PCE_wRun_Action.c)
 *     Usbh_PCE_wDone_Action @ 0x1C0012B60 (Usbh_PCE_wDone_Action.c)
 *     Usbh_PCE_psPAUSED_Action @ 0x1C0023330 (Usbh_PCE_psPAUSED_Action.c)
 *     Usbh_PCE_HardwareWake_Action @ 0x1C00244C0 (Usbh_PCE_HardwareWake_Action.c)
 *     WPP_RECORDER_SF_d @ 0x1C0040A3C (WPP_RECORDER_SF_d.c)
 *     Usbh_PCE_BusDisconnect_Action @ 0x1C0041D74 (Usbh_PCE_BusDisconnect_Action.c)
 *     Usbh_PCE_Check_Action @ 0x1C0041F50 (Usbh_PCE_Check_Action.c)
 *     Usbh_PCE_Close_Action @ 0x1C0042064 (Usbh_PCE_Close_Action.c)
 *     Usbh_PCE_HW_Stop_Action @ 0x1C0042268 (Usbh_PCE_HW_Stop_Action.c)
 *     Usbh_PCE_ResumeDone_Action @ 0x1C00424BC (Usbh_PCE_ResumeDone_Action.c)
 *     Usbh_PCE_ResumeTimeout_Action @ 0x1C00425DC (Usbh_PCE_ResumeTimeout_Action.c)
 *     Usbh_PCE_SD_Resume_Action @ 0x1C00427CC (Usbh_PCE_SD_Resume_Action.c)
 *     Usbh_PCE_SoftDisconnect_Action @ 0x1C0042914 (Usbh_PCE_SoftDisconnect_Action.c)
 *     Usbh_PCE_wChangeERROR_Action @ 0x1C0042BC4 (Usbh_PCE_wChangeERROR_Action.c)
 */

int *__fastcall UsbhDispatch_PortChangeQueueEventEx(
        struct _DEVICE_OBJECT *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        unsigned int a6,
        __int64 a7,
        int *a8)
{
  __int64 v9; // rdi
  void *DeviceExtension; // rax
  __int64 v13; // rdx
  __int64 v16; // [rsp+20h] [rbp-18h]

  v9 = (int)a3;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      10,
      (__int64)&WPP_7750967c46a832f629b3446543f02792_Traceguids,
      a3);
  if ( (UsbhLogMask & 0x10) != 0 )
  {
    if ( a1 )
    {
      DeviceExtension = a1->DeviceExtension;
      if ( DeviceExtension )
      {
        v13 = *((_QWORD *)DeviceExtension + 111)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)DeviceExtension + 220) & *((_DWORD *)DeviceExtension + 221));
        *(_DWORD *)v13 = 1346662768;
        *(_QWORD *)(v13 + 8) = 0LL;
        *(_QWORD *)(v13 + 16) = a4;
        *(_QWORD *)(v13 + 24) = v9;
      }
    }
  }
  switch ( (_DWORD)v9 )
  {
    case 0x10:
      return (int *)Usbh_PCE_wChange_Action(a1, a2, a4);
    case 5:
      Usbh_PCE_wRun_Action(a1, a2, a4);
      break;
    case 6:
      Usbh_PCE_wDone_Action(a1, a2, a4);
      break;
    default:
      switch ( (int)v9 )
      {
        case 1:
          Usbh_PCE_Enable_Action((__int64)a1, a2, a3, a4);
          break;
        case 2:
          Usbh_PCE_Disable_Action((__int64)a1, a2, a3, a4);
          break;
        case 3:
          Usbh_PCE_Resume_Action(a1, a2, a4, a4);
          break;
        case 4:
          Usbh_PCE_QueueChange_Action((__int64)a1, a2, a4, a5, a6, a7);
          break;
        case 8:
          Usbh_PCE_SoftDisconnect_Action(a1, a2, a4);
          break;
        case 9:
          Usbh_PCE_BusReset_Action((__int64)a1, a2, a3);
          break;
        case 10:
          Usbh_PCE_Suspend_Action((__int64)a1, a2, a4, a8);
          break;
        case 11:
          Usbh_PCE_BusDisconnect_Action(a1, a2, a4);
          break;
        case 12:
          Usbh_PCE_HardwareWake_Action(a1, a2);
          break;
        case 13:
          Usbh_PCE_SD_Resume_Action(a1, a2, a4);
          break;
        case 14:
          Usbh_PCE_ResumeTimeout_Action(a1, a2);
          break;
        case 15:
          LODWORD(v16) = a6;
          Usbh_PCE_QueueDriverReset_Action((__int64)a1, a2, a4, a5, v16, a7);
          break;
        case 17:
          Usbh_PCE_HW_Stop_Action(a1, a2, a4);
          break;
        case 18:
          Usbh_PCE_psSUSPEND_Action((__int64)a1, a2, a4);
          break;
        case 19:
          Usbh_PCE_psPAUSED_Action(a1, a2, a4);
          break;
        case 20:
          return (int *)Usbh_PCE_Check_Action(a1, a2, a4, a8);
        case 21:
          Usbh_PCE_ResumeDone_Action(a1, a2, a4);
          break;
        case 22:
          Usbh_PCE_Close_Action(a1, a2, a4);
          break;
        case 23:
          Usbh_PCE_wChangeERROR_Action((_DWORD)a1, a2, a4, a5, v16, a7);
          break;
        default:
          return a8;
      }
      break;
  }
  return a8;
}

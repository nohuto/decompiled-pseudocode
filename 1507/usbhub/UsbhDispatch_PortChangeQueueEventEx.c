/*
 * XREFs of UsbhDispatch_PortChangeQueueEventEx @ 0x1C0010B40
 * Callers:
 *     UsbhPCE_QueueDriverReset @ 0x1C0003950 (UsbhPCE_QueueDriverReset.c)
 *     UsbhPCE_BusReset @ 0x1C0003ECC (UsbhPCE_BusReset.c)
 *     UsbhPCE_wRun @ 0x1C0004948 (UsbhPCE_wRun.c)
 *     UsbhPCE_Suspend @ 0x1C000AD20 (UsbhPCE_Suspend.c)
 *     UsbhWaitEventWithTimeoutEx @ 0x1C000C760 (UsbhWaitEventWithTimeoutEx.c)
 *     UsbhHubProcessChangeWorker @ 0x1C000EBE0 (UsbhHubProcessChangeWorker.c)
 *     UsbhBusPause_Action @ 0x1C000F090 (UsbhBusPause_Action.c)
 *     UsbhBusResume_Action @ 0x1C000FDA0 (UsbhBusResume_Action.c)
 *     UsbhDispatch_PortChangeQueueNullEventEx @ 0x1C00104A0 (UsbhDispatch_PortChangeQueueNullEventEx.c)
 *     UsbhHubRunPortChangeQueue @ 0x1C00104E0 (UsbhHubRunPortChangeQueue.c)
 *     UsbhHubProcessIsr @ 0x1C00127E0 (UsbhHubProcessIsr.c)
 *     UsbhPCE_psSUSPEND @ 0x1C0026F60 (UsbhPCE_psSUSPEND.c)
 *     UsbhPCE_Enable @ 0x1C0029358 (UsbhPCE_Enable.c)
 *     UsbhPCE_Resume @ 0x1C0029404 (UsbhPCE_Resume.c)
 *     UsbhPCE_BusDisconnect @ 0x1C00409E4 (UsbhPCE_BusDisconnect.c)
 *     UsbhPCE_Check @ 0x1C0040AB0 (UsbhPCE_Check.c)
 *     UsbhPCE_Close @ 0x1C0040B68 (UsbhPCE_Close.c)
 *     UsbhPCE_Disable @ 0x1C0040C34 (UsbhPCE_Disable.c)
 *     UsbhPCE_HW_Stop @ 0x1C0040D74 (UsbhPCE_HW_Stop.c)
 *     UsbhPCE_QueueChange @ 0x1C0040E4C (UsbhPCE_QueueChange.c)
 *     UsbhPCE_QueueChangeObject @ 0x1C0040F24 (UsbhPCE_QueueChangeObject.c)
 *     UsbhPCE_ResumeDone @ 0x1C0041008 (UsbhPCE_ResumeDone.c)
 *     UsbhPCE_ResumeTimeout @ 0x1C00410D4 (UsbhPCE_ResumeTimeout.c)
 *     UsbhPCE_SD_Resume @ 0x1C00411A0 (UsbhPCE_SD_Resume.c)
 *     UsbhPCE_SoftDisconnect @ 0x1C004125C (UsbhPCE_SoftDisconnect.c)
 *     UsbhPCE_wChangeERROR @ 0x1C0041348 (UsbhPCE_wChangeERROR.c)
 *     UsbhQueuePauseChange @ 0x1C004140C (UsbhQueuePauseChange.c)
 *     UsbhQueueSoftConnectChange @ 0x1C00414FC (UsbhQueueSoftConnectChange.c)
 * Callees:
 *     Usbh_PCE_BusReset_Action @ 0x1C0003F78 (Usbh_PCE_BusReset_Action.c)
 *     Usbh_PCE_QueueDriverReset_Action @ 0x1C0004540 (Usbh_PCE_QueueDriverReset_Action.c)
 *     Usbh_PCE_psSUSPEND_Action @ 0x1C000B334 (Usbh_PCE_psSUSPEND_Action.c)
 *     Usbh_PCE_Suspend_Action @ 0x1C000BF20 (Usbh_PCE_Suspend_Action.c)
 *     Usbh_PCE_Disable_Action @ 0x1C000C180 (Usbh_PCE_Disable_Action.c)
 *     Usbh_PCE_Resume_Action @ 0x1C000D1E0 (Usbh_PCE_Resume_Action.c)
 *     Usbh_PCE_Enable_Action @ 0x1C000DBF0 (Usbh_PCE_Enable_Action.c)
 *     Usbh_PCE_QueueChange_Action @ 0x1C000E550 (Usbh_PCE_QueueChange_Action.c)
 *     Usbh_PCE_wRun_Action @ 0x1C0010D80 (Usbh_PCE_wRun_Action.c)
 *     Usbh_PCE_wChange_Action @ 0x1C0011310 (Usbh_PCE_wChange_Action.c)
 *     Usbh_PCE_wDone_Action @ 0x1C00117F0 (Usbh_PCE_wDone_Action.c)
 *     Usbh_PCE_psPAUSED_Action @ 0x1C0022500 (Usbh_PCE_psPAUSED_Action.c)
 *     Usbh_PCE_HardwareWake_Action @ 0x1C0023C20 (Usbh_PCE_HardwareWake_Action.c)
 *     WPP_RECORDER_SF_d @ 0x1C00404E8 (WPP_RECORDER_SF_d.c)
 *     Usbh_PCE_BusDisconnect_Action @ 0x1C0041820 (Usbh_PCE_BusDisconnect_Action.c)
 *     Usbh_PCE_Check_Action @ 0x1C00419FC (Usbh_PCE_Check_Action.c)
 *     Usbh_PCE_Close_Action @ 0x1C0041B10 (Usbh_PCE_Close_Action.c)
 *     Usbh_PCE_HW_Stop_Action @ 0x1C0041D14 (Usbh_PCE_HW_Stop_Action.c)
 *     Usbh_PCE_ResumeDone_Action @ 0x1C0041F68 (Usbh_PCE_ResumeDone_Action.c)
 *     Usbh_PCE_ResumeTimeout_Action @ 0x1C0042088 (Usbh_PCE_ResumeTimeout_Action.c)
 *     Usbh_PCE_SD_Resume_Action @ 0x1C0042278 (Usbh_PCE_SD_Resume_Action.c)
 *     Usbh_PCE_SoftDisconnect_Action @ 0x1C00423C0 (Usbh_PCE_SoftDisconnect_Action.c)
 *     Usbh_PCE_wChangeERROR_Action @ 0x1C0042670 (Usbh_PCE_wChangeERROR_Action.c)
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
  __int64 v15; // [rsp+20h] [rbp-18h]

  v9 = (int)a3;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      10,
      (__int64)&WPP_7c8008b9a24e5d7244c8b992653290aa_Traceguids,
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
    case 5:
      Usbh_PCE_wRun_Action(a1, a2, a4);
      break;
    case 0x10:
      return (int *)Usbh_PCE_wChange_Action(a1, a2, a4);
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
          LODWORD(v15) = a6;
          Usbh_PCE_QueueDriverReset_Action((__int64)a1, a2, a4, a5, v15, a7);
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
          a8 = (int *)Usbh_PCE_Check_Action(a1, a2, a4, a8);
          break;
        case 21:
          Usbh_PCE_ResumeDone_Action(a1, a2, a4);
          break;
        case 22:
          Usbh_PCE_Close_Action(a1, a2, a4);
          break;
        case 23:
          Usbh_PCE_wChangeERROR_Action((_DWORD)a1, a2, a4, a5, v15, a7);
          break;
        default:
          return a8;
      }
      break;
  }
  return a8;
}

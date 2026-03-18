/*
 * XREFs of UsbhUnlockPcqWithTag @ 0x1C0024080
 * Callers:
 *     Usbh_PCE_BusReset_Action @ 0x1C0003E90 (Usbh_PCE_BusReset_Action.c)
 *     Usbh_PCE_QueueDriverReset_Action @ 0x1C0004460 (Usbh_PCE_QueueDriverReset_Action.c)
 *     Usbh_PCE_Suspend_Action @ 0x1C000F3F8 (Usbh_PCE_Suspend_Action.c)
 *     Usbh_PCE_Disable_Action @ 0x1C0013310 (Usbh_PCE_Disable_Action.c)
 *     Usbh_PCE_Resume_Action @ 0x1C0014370 (Usbh_PCE_Resume_Action.c)
 *     Usbh_PCE_Enable_Action @ 0x1C0014D80 (Usbh_PCE_Enable_Action.c)
 *     Usbh_PCE_wChange_Action @ 0x1C0017330 (Usbh_PCE_wChange_Action.c)
 *     Usbh_PCE_wRun_Action @ 0x1C0017810 (Usbh_PCE_wRun_Action.c)
 *     Usbh_PCE_wDone_Action @ 0x1C0017DA0 (Usbh_PCE_wDone_Action.c)
 *     Usbh_PCE_QueueChange_Action @ 0x1C001AA70 (Usbh_PCE_QueueChange_Action.c)
 *     Usbh_PCE_psSUSPEND_Action @ 0x1C001D074 (Usbh_PCE_psSUSPEND_Action.c)
 *     Usbh_PCE_psPAUSED_Action @ 0x1C0020810 (Usbh_PCE_psPAUSED_Action.c)
 *     Usbh_PCE_HardwareWake_Action @ 0x1C0023B00 (Usbh_PCE_HardwareWake_Action.c)
 *     Usbh_PCE_BusDisconnect_Action @ 0x1C0041A3C (Usbh_PCE_BusDisconnect_Action.c)
 *     Usbh_PCE_Check_Action @ 0x1C0041C18 (Usbh_PCE_Check_Action.c)
 *     Usbh_PCE_Close_Action @ 0x1C0041D2C (Usbh_PCE_Close_Action.c)
 *     Usbh_PCE_HW_Stop_Action @ 0x1C0041F30 (Usbh_PCE_HW_Stop_Action.c)
 *     Usbh_PCE_ResumeDone_Action @ 0x1C0042184 (Usbh_PCE_ResumeDone_Action.c)
 *     Usbh_PCE_ResumeTimeout_Action @ 0x1C00422A4 (Usbh_PCE_ResumeTimeout_Action.c)
 *     Usbh_PCE_SD_Resume_Action @ 0x1C0042494 (Usbh_PCE_SD_Resume_Action.c)
 *     Usbh_PCE_SoftDisconnect_Action @ 0x1C00425DC (Usbh_PCE_SoftDisconnect_Action.c)
 *     Usbh_PCE_wChangeERROR_Action @ 0x1C004288C (Usbh_PCE_wChangeERROR_Action.c)
 * Callees:
 *     <none>
 */

void __fastcall UsbhUnlockPcqWithTag(__int64 a1, __int64 a2, KIRQL a3, int a4)
{
  __int64 v4; // r11
  __int64 v6; // rbx
  __int64 v7; // r8
  __int64 v8; // rcx
  int v9; // ecx
  __int64 v10; // rax

  v4 = *(unsigned __int16 *)(a2 + 4);
  v6 = *(int *)(a2 + 12);
  if ( (UsbhLogMask & 0x10) != 0 )
  {
    if ( a1 )
    {
      v7 = *(_QWORD *)(a1 + 64);
      if ( v7 )
      {
        v8 = *(_QWORD *)(v7 + 888)
           + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v7 + 880)) & *(_DWORD *)(v7 + 884));
        *(_DWORD *)v8 = 757952880;
        *(_QWORD *)(v8 + 8) = 0LL;
        *(_QWORD *)(v8 + 16) = v6;
        *(_QWORD *)(v8 + 24) = v4;
      }
    }
  }
  v9 = *(_DWORD *)(a2 + 12);
  v10 = 32 * (*(unsigned int *)(a2 + 2400) + 43LL);
  *(_DWORD *)(a2 + 448) = 0;
  *(_DWORD *)(v10 + a2 + 8) = v9;
  if ( a4 )
    *(_DWORD *)(v10 + a2 + 12) = a4;
  KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 440), a3);
}

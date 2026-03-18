/*
 * XREFs of UsbhLockPcqWithTag @ 0x1C0024140
 * Callers:
 *     Usbh_PCE_BusReset_Action @ 0x1C0003E90 (Usbh_PCE_BusReset_Action.c)
 *     Usbh_PCE_QueueDriverReset_Action @ 0x1C0004460 (Usbh_PCE_QueueDriverReset_Action.c)
 *     Usbh_PCE_Suspend_Action @ 0x1C000F3F8 (Usbh_PCE_Suspend_Action.c)
 *     Usbh_PCE_psSUSPEND_Action @ 0x1C001D074 (Usbh_PCE_psSUSPEND_Action.c)
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

__int64 __fastcall UsbhLockPcqWithTag(__int64 a1, __int64 a2, int a3, KIRQL *a4, int a5)
{
  __int64 v6; // rbp
  KIRQL v9; // al
  __int64 v10; // r8
  char v11; // al
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r10
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rcx

  v6 = a3;
  v9 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 440));
  v10 = *(unsigned __int16 *)(a2 + 4);
  *a4 = v9;
  *(_DWORD *)(a2 + 448) = 1;
  v11 = UsbhLogMask;
  if ( (UsbhLogMask & 0x10) != 0 )
  {
    if ( a1 )
    {
      v12 = *(_QWORD *)(a1 + 64);
      if ( v12 )
      {
        v13 = *(_QWORD *)(v12 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v12 + 880)) & *(_DWORD *)(v12 + 884));
        *(_DWORD *)v13 = 724267376;
        *(_QWORD *)(v13 + 8) = 0LL;
        *(_QWORD *)(v13 + 16) = v6;
        *(_QWORD *)(v13 + 24) = v10;
        v11 = UsbhLogMask;
      }
    }
  }
  v14 = *(unsigned __int16 *)(a2 + 4);
  v15 = *(int *)(a2 + 12);
  if ( (v11 & 0x10) != 0 )
  {
    if ( a1 )
    {
      v16 = *(_QWORD *)(a1 + 64);
      if ( v16 )
      {
        v17 = *(_QWORD *)(v16 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v16 + 880)) & *(_DWORD *)(v16 + 884));
        *(_DWORD *)v17 = 724267376;
        *(_QWORD *)(v17 + 8) = 0LL;
        *(_QWORD *)(v17 + 16) = v15;
        *(_QWORD *)(v17 + 24) = v14;
      }
    }
  }
  v18 = ((unsigned __int8)*(_DWORD *)(a2 + 2400) + 1) & 0x1F;
  *(_DWORD *)(a2 + 2400) = v18;
  v19 = a2 + 32 * (v18 + 43);
  *(_DWORD *)v19 = v6;
  *(_DWORD *)(v19 + 4) = *(_DWORD *)(a2 + 12);
  *(_DWORD *)(v19 + 12) = a5;
  *(_DWORD *)(v19 + 8) = -1;
  *(_QWORD *)(v19 + 16) = 0LL;
  *(_QWORD *)(v19 + 24) = 0LL;
  return *(unsigned int *)(a2 + 12);
}

/*
 * XREFs of Usbh_PCE_ResumeTimeout_Action @ 0x1C0042088
 * Callers:
 *     UsbhDispatch_PortChangeQueueEventEx @ 0x1C0010B40 (UsbhDispatch_PortChangeQueueEventEx.c)
 * Callees:
 *     UsbhFlushPortChangeQueue @ 0x1C000B3D4 (UsbhFlushPortChangeQueue.c)
 *     Log @ 0x1C0014B50 (Log.c)
 *     FdoExt @ 0x1C0015060 (FdoExt.c)
 *     UsbhLockPcqWithTag @ 0x1C0024260 (UsbhLockPcqWithTag.c)
 *     UsbhiSignalResumeEvent @ 0x1C0024F50 (UsbhiSignalResumeEvent.c)
 */

void __fastcall Usbh_PCE_ResumeTimeout_Action(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rsi
  __int64 v7; // r9
  __int64 v8; // rax
  int v9; // r9d
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rax
  __int64 v15; // [rsp+60h] [rbp+18h] BYREF

  v15 = a3;
  FdoExt(a1, a2, a3, a4);
  v6 = (int)UsbhLockPcqWithTag(a1, a2, 14, (KIRQL *)&v15, 0);
  Log(a1, 512, 825520176, v6, *(unsigned __int16 *)(a2 + 4));
  Log(a1, 512, 825520177, v7, *(unsigned __int16 *)(a2 + 4));
  if ( (_DWORD)v6 == 1 )
  {
    Log(a1, 512, 825520178, *(unsigned int *)(a2 + 400), *(unsigned __int16 *)(a2 + 4));
    if ( *(_DWORD *)(a2 + 400) != 5 )
    {
      Log(a1, 512, 825520179, 0LL, *(unsigned __int16 *)(a2 + 4));
      *(_BYTE *)(a2 + 2838) = 1;
      UsbhFlushPortChangeQueue(a1, a2, v12, v13);
      UsbhiSignalResumeEvent(a1, a2);
    }
    Log(a1, 512, 825520180, 0LL, *(unsigned __int16 *)(a2 + 4));
    v14 = 32LL * *(unsigned int *)(a2 + 2400);
    *(_DWORD *)(a2 + 12) = 1;
    *(_DWORD *)(v14 + a2 + 1384) = 1;
  }
  else
  {
    if ( (int)v6 > 2 && ((int)v6 <= 4 || (_DWORD)v6 == 14) )
    {
      if ( *(_BYTE *)(a2 + 2840) )
      {
        *(_BYTE *)(a2 + 2838) = 1;
        UsbhiSignalResumeEvent(a1, a2);
      }
      Log(a1, 512, 825520181, v6, *(unsigned __int16 *)(a2 + 4));
      *(_BYTE *)(a2 + 2838) = 0;
    }
    else
    {
      Log(a1, 512, 825520182, *(unsigned int *)(a2 + 400), *(unsigned __int16 *)(a2 + 4));
      *(_BYTE *)(a2 + 2838) = 1;
      UsbhFlushPortChangeQueue(a1, a2, v10, v11);
      UsbhiSignalResumeEvent(a1, a2);
    }
    v8 = 32LL * *(unsigned int *)(a2 + 2400);
    *(_DWORD *)(a2 + 12) = v6;
    v9 = 0;
    *(_DWORD *)(v8 + a2 + 1384) = v6;
  }
  UsbhUnlockPcqWithTag(a1, a2, v15, v9);
}

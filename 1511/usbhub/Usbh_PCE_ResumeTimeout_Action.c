/*
 * XREFs of Usbh_PCE_ResumeTimeout_Action @ 0x1C00422A4
 * Callers:
 *     UsbhDispatch_PortChangeQueueEventEx @ 0x1C00170F0 (UsbhDispatch_PortChangeQueueEventEx.c)
 * Callees:
 *     Log @ 0x1C0013250 (Log.c)
 *     FdoExt @ 0x1C00132D0 (FdoExt.c)
 *     UsbhFlushPortChangeQueue @ 0x1C001D114 (UsbhFlushPortChangeQueue.c)
 *     UsbhiSignalResumeEvent @ 0x1C001FC60 (UsbhiSignalResumeEvent.c)
 *     UsbhLockPcqWithTag @ 0x1C0024140 (UsbhLockPcqWithTag.c)
 */

void __fastcall Usbh_PCE_ResumeTimeout_Action(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rsi
  __int64 v7; // r9
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rax
  int v11; // r9d
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rax
  __int64 v21; // [rsp+60h] [rbp+18h] BYREF

  v21 = a3;
  FdoExt(a1, a2, a3, a4);
  v6 = (int)UsbhLockPcqWithTag(a1, a2, 14, (KIRQL *)&v21, 0);
  Log(a1, 512, 825520176, v6, *(unsigned __int16 *)(a2 + 4));
  Log(a1, 512, 825520177, v7, *(unsigned __int16 *)(a2 + 4));
  if ( (_DWORD)v6 == 1 )
  {
    Log(a1, 512, 825520178, *(unsigned int *)(a2 + 400), *(unsigned __int16 *)(a2 + 4));
    if ( *(_DWORD *)(a2 + 400) != 5 )
    {
      Log(a1, 512, 825520179, 0LL, *(unsigned __int16 *)(a2 + 4));
      *(_BYTE *)(a2 + 2838) = 1;
      UsbhFlushPortChangeQueue(a1, a2, v16, v17);
      UsbhiSignalResumeEvent(a1, a2, v18, v19);
    }
    Log(a1, 512, 825520180, 0LL, *(unsigned __int16 *)(a2 + 4));
    v20 = 32LL * *(unsigned int *)(a2 + 2400);
    *(_DWORD *)(a2 + 12) = 1;
    *(_DWORD *)(v20 + a2 + 1384) = 1;
  }
  else
  {
    if ( (int)v6 > 2 && ((int)v6 <= 4 || (_DWORD)v6 == 14) )
    {
      if ( *(_BYTE *)(a2 + 2840) )
      {
        *(_BYTE *)(a2 + 2838) = 1;
        UsbhiSignalResumeEvent(a1, a2, v8, v9);
      }
      Log(a1, 512, 825520181, v6, *(unsigned __int16 *)(a2 + 4));
      *(_BYTE *)(a2 + 2838) = 0;
    }
    else
    {
      Log(a1, 512, 825520182, *(unsigned int *)(a2 + 400), *(unsigned __int16 *)(a2 + 4));
      *(_BYTE *)(a2 + 2838) = 1;
      UsbhFlushPortChangeQueue(a1, a2, v12, v13);
      UsbhiSignalResumeEvent(a1, a2, v14, v15);
    }
    v10 = 32LL * *(unsigned int *)(a2 + 2400);
    *(_DWORD *)(a2 + 12) = v6;
    v11 = 0;
    *(_DWORD *)(v10 + a2 + 1384) = v6;
  }
  UsbhUnlockPcqWithTag(a1, a2, v21, v11);
}

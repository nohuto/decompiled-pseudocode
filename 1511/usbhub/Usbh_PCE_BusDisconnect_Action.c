/*
 * XREFs of Usbh_PCE_BusDisconnect_Action @ 0x1C0041A3C
 * Callers:
 *     UsbhDispatch_PortChangeQueueEventEx @ 0x1C00170F0 (UsbhDispatch_PortChangeQueueEventEx.c)
 * Callees:
 *     UsbhLatchPdo @ 0x1C000C288 (UsbhLatchPdo.c)
 *     PdoExt @ 0x1C000D6E0 (PdoExt.c)
 *     Log @ 0x1C0013250 (Log.c)
 *     FdoExt @ 0x1C00132D0 (FdoExt.c)
 *     UsbhiSignalResumeEvent @ 0x1C001FC60 (UsbhiSignalResumeEvent.c)
 *     UsbhUnlatchPdo @ 0x1C0022600 (UsbhUnlatchPdo.c)
 *     UsbhUnlockPcqWithTag @ 0x1C0024080 (UsbhUnlockPcqWithTag.c)
 *     UsbhLockPcqWithTag @ 0x1C0024140 (UsbhLockPcqWithTag.c)
 *     Usbh_Disconnect_PdoEvent @ 0x1C0044EB4 (Usbh_Disconnect_PdoEvent.c)
 */

void __fastcall Usbh_PCE_BusDisconnect_Action(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v7; // eax
  __int64 v8; // r9
  int v9; // r10d
  int v10; // r11d
  KIRQL v11; // r8
  __int64 v12; // rax
  int v13; // r10d
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rax
  __int64 v17; // rax
  int v18; // r10d
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rbx
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r9
  _DWORD *v27; // rax
  int v28; // [rsp+20h] [rbp-18h]
  KIRQL v29; // [rsp+48h] [rbp+10h] BYREF

  FdoExt(a1, a2, a3, a4);
  v7 = UsbhLockPcqWithTag(a1, a2, 11, &v29, 0);
  Log(a1, 512, 825323568, v7, *(unsigned __int16 *)(a2 + 4));
  if ( v9 == 1 || v9 == 2 || v9 == 6 )
  {
    Log(a1, v10, 825323569, v8, *(unsigned __int16 *)(a2 + 4));
    v17 = 32LL * *(unsigned int *)(a2 + 2400);
    *(_DWORD *)(a2 + 12) = v18;
    *(_DWORD *)(v17 + a2 + 1384) = v18;
  }
  else
  {
    if ( v9 != 7 && v9 != 11 )
    {
      Log(a1, v10, 825323608, v8, *(unsigned __int16 *)(a2 + 4));
      v11 = v29;
      v12 = 32LL * *(unsigned int *)(a2 + 2400);
      *(_DWORD *)(a2 + 12) = v13;
      *(_DWORD *)(v12 + a2 + 1384) = v13;
      UsbhUnlockPcqWithTag(a1, a2, v11, 0);
      return;
    }
    Log(a1, v10, 825323570, v8, *(unsigned __int16 *)(a2 + 4));
    UsbhiSignalResumeEvent(a1, a2, v14, v15);
    v16 = *(unsigned int *)(a2 + 2400);
    *(_DWORD *)(a2 + 400) = 0;
    *(_DWORD *)(a2 + 12) = 1;
    *(_DWORD *)(32 * v16 + a2 + 1384) = 1;
  }
  UsbhUnlockPcqWithTag(a1, a2, v29, 0);
  v19 = UsbhLatchPdo(a1, *(_WORD *)(a2 + 4), 0LL, 0x7250444Fu);
  v23 = v19;
  if ( v19 )
  {
    if ( (PdoExt(v19, v20, v21, v22)[353] & 0x4000000) != 0 )
    {
      v27 = PdoExt(v23, v24, v25, v26);
      KeSetEvent((PRKEVENT)(v27 + 722), 0, 0);
    }
    UsbhUnlatchPdo(a1, v23, 0LL, 0x7250444Fu);
    Usbh_Disconnect_PdoEvent(a1, v23, 24LL, a3, v28);
  }
}

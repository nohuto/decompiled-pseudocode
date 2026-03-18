/*
 * XREFs of Usbh_PCE_BusDisconnect_Action @ 0x1C0041D74
 * Callers:
 *     UsbhDispatch_PortChangeQueueEventEx @ 0x1C0011EB0 (UsbhDispatch_PortChangeQueueEventEx.c)
 * Callees:
 *     Log @ 0x1C00159D0 (Log.c)
 *     FdoExt @ 0x1C0015EE0 (FdoExt.c)
 *     PdoExt @ 0x1C001A040 (PdoExt.c)
 *     UsbhLatchPdo @ 0x1C001B444 (UsbhLatchPdo.c)
 *     UsbhUnlatchPdo @ 0x1C001F8F0 (UsbhUnlatchPdo.c)
 *     UsbhUnlockPcqWithTag @ 0x1C0024950 (UsbhUnlockPcqWithTag.c)
 *     UsbhLockPcqWithTag @ 0x1C0024A00 (UsbhLockPcqWithTag.c)
 *     UsbhiSignalResumeEvent @ 0x1C0025544 (UsbhiSignalResumeEvent.c)
 *     Usbh_Disconnect_PdoEvent @ 0x1C00451F4 (Usbh_Disconnect_PdoEvent.c)
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
  __int64 v14; // rax
  __int64 v15; // rax
  int v16; // r10d
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rbx
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  _DWORD *v25; // rax
  KIRQL v26; // [rsp+48h] [rbp+10h] BYREF

  FdoExt(a1, a2, a3, a4);
  v7 = UsbhLockPcqWithTag(a1, a2, 11, &v26, 0);
  Log(a1, 512, 825323568, v7, *(unsigned __int16 *)(a2 + 4));
  if ( v9 == 1 || v9 == 2 || v9 == 6 )
  {
    Log(a1, v10, 825323569, v8, *(unsigned __int16 *)(a2 + 4));
    v15 = 32LL * *(unsigned int *)(a2 + 2400);
    *(_DWORD *)(a2 + 12) = v16;
    *(_DWORD *)(v15 + a2 + 1384) = v16;
  }
  else
  {
    if ( v9 != 7 && v9 != 11 )
    {
      Log(a1, v10, 825323608, v8, *(unsigned __int16 *)(a2 + 4));
      v11 = v26;
      v12 = 32LL * *(unsigned int *)(a2 + 2400);
      *(_DWORD *)(a2 + 12) = v13;
      *(_DWORD *)(v12 + a2 + 1384) = v13;
      UsbhUnlockPcqWithTag(a1, a2, v11, 0);
      return;
    }
    Log(a1, v10, 825323570, v8, *(unsigned __int16 *)(a2 + 4));
    UsbhiSignalResumeEvent(a1, a2);
    v14 = *(unsigned int *)(a2 + 2400);
    *(_DWORD *)(a2 + 400) = 0;
    *(_DWORD *)(a2 + 12) = 1;
    *(_DWORD *)(32 * v14 + a2 + 1384) = 1;
  }
  UsbhUnlockPcqWithTag(a1, a2, v26, 0);
  v17 = UsbhLatchPdo(a1, *(_WORD *)(a2 + 4), 0LL, 0x7250444Fu);
  v21 = v17;
  if ( v17 )
  {
    if ( (PdoExt(v17, v18, v19, v20)[353] & 0x4000000) != 0 )
    {
      v25 = PdoExt(v21, v22, v23, v24);
      KeSetEvent((PRKEVENT)(v25 + 722), 0, 0);
    }
    UsbhUnlatchPdo(a1, v21, 0LL, 0x7250444Fu);
    Usbh_Disconnect_PdoEvent(a1, v21, 24LL, a3);
  }
}

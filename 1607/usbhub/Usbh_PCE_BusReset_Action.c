/*
 * XREFs of Usbh_PCE_BusReset_Action @ 0x1C0004090
 * Callers:
 *     UsbhDispatch_PortChangeQueueEventEx @ 0x1C0011EB0 (UsbhDispatch_PortChangeQueueEventEx.c)
 * Callees:
 *     UsbhFlushPortChangeQueue @ 0x1C000AAE8 (UsbhFlushPortChangeQueue.c)
 *     Log @ 0x1C00159D0 (Log.c)
 *     FdoExt @ 0x1C0015EE0 (FdoExt.c)
 *     UsbhUnlockPcqWithTag @ 0x1C0024950 (UsbhUnlockPcqWithTag.c)
 *     UsbhLockPcqWithTag @ 0x1C0024A00 (UsbhLockPcqWithTag.c)
 *     UsbhiSignalResumeEvent @ 0x1C0025544 (UsbhiSignalResumeEvent.c)
 *     UsbhLogSignalResumeEvent @ 0x1C0025724 (UsbhLogSignalResumeEvent.c)
 *     UsbhSetPcqEventStatus @ 0x1C00258C0 (UsbhSetPcqEventStatus.c)
 */

void __fastcall Usbh_PCE_BusReset_Action(__int64 a1, __int64 a2, __int64 a3)
{
  int v5; // eax
  int v6; // r9d
  int v7; // r10d
  int v8; // r11d
  __int64 v9; // rax
  __int64 v10; // rcx
  KIRQL v11; // dl
  __int64 v12; // r8
  __int64 v13; // rax
  int v14; // r8d
  __int64 v15; // rax
  int v16; // r10d
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 NewIrql; // [rsp+50h] [rbp+18h] BYREF

  NewIrql = a3;
  FdoExt(a1);
  v5 = UsbhLockPcqWithTag(a1, a2, 9, (unsigned int)&NewIrql, 0);
  Log(a1, 512, 809070640, v5, *(unsigned __int16 *)(a2 + 4));
  if ( v7 == 1 )
  {
    Log(a1, v8, 809070642, v6, *(unsigned __int16 *)(a2 + 4));
    v18 = 32LL * *(unsigned int *)(a2 + 2400);
    *(_DWORD *)(a2 + 12) = 1;
    *(_DWORD *)(v18 + a2 + 1384) = 1;
    UsbhFlushPortChangeQueue(a1, a2);
    goto LABEL_10;
  }
  if ( v7 <= 1 )
    goto LABEL_17;
  if ( v7 <= 4 )
  {
LABEL_15:
    v14 = 809070644;
    goto LABEL_16;
  }
  if ( v7 != 6 )
  {
    if ( v7 == 11 || v7 == 7 )
    {
      Log(a1, v8, 809070641, v6, *(unsigned __int16 *)(a2 + 4));
      UsbhiSignalResumeEvent(a1, a2);
      v13 = *(unsigned int *)(a2 + 2400);
      *(_DWORD *)(a2 + 400) = 0;
      *(_DWORD *)(a2 + 12) = 1;
      *(_DWORD *)(32 * v13 + a2 + 1384) = 1;
LABEL_10:
      LOBYTE(v12) = NewIrql;
      UsbhUnlockPcqWithTag(a1, a2, v12, 0LL);
      return;
    }
    if ( v7 != 14 )
    {
      if ( (unsigned int)(v7 - 15) <= 2 )
      {
        v14 = 809070645;
LABEL_16:
        Log(a1, v8, v14, v6, *(unsigned __int16 *)(a2 + 4));
        v15 = 32LL * *(unsigned int *)(a2 + 2400);
        *(_DWORD *)(a2 + 12) = v16;
        *(_DWORD *)(v15 + a2 + 1384) = v16;
        goto LABEL_10;
      }
LABEL_17:
      Log(a1, v8, 809070680, v6, *(unsigned __int16 *)(a2 + 4));
      v12 = 19LL;
      v17 = 32LL * *(unsigned int *)(a2 + 2400);
      *(_DWORD *)(a2 + 12) = 19;
      *(_DWORD *)(v17 + a2 + 1384) = 19;
      goto LABEL_10;
    }
    goto LABEL_15;
  }
  Log(a1, v8, 809070643, v6, *(unsigned __int16 *)(a2 + 4));
  if ( (unsigned int)UsbhLogSignalResumeEvent(a1, a2) )
    UsbhSetPcqEventStatus(a1, a2, 1LL, 30LL);
  v9 = *(unsigned int *)(a2 + 2400);
  *(_DWORD *)(a2 + 400) = 0;
  *(_DWORD *)(a2 + 12) = 1;
  *(_DWORD *)(32 * v9 + a2 + 1384) = 1;
  Log(a1, 16, 1886465325, *(_DWORD *)(a2 + 12), *(unsigned __int16 *)(a2 + 4));
  v10 = *(unsigned int *)(a2 + 2400);
  *(_DWORD *)(a2 + 448) = 0;
  v11 = NewIrql;
  *(_DWORD *)(32 * v10 + a2 + 1384) = *(_DWORD *)(a2 + 12);
  KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 440), v11);
}

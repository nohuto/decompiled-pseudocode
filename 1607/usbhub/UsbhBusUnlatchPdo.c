/*
 * XREFs of UsbhBusUnlatchPdo @ 0x1C0018C00
 * Callers:
 *     UsbhBusPause_Action @ 0x1C00105A0 (UsbhBusPause_Action.c)
 *     UsbhWaitConnect @ 0x1C0015F20 (UsbhWaitConnect.c)
 *     UsbhReset2Complete @ 0x1C00183B0 (UsbhReset2Complete.c)
 *     Usbh_PCE_psPAUSED_Action @ 0x1C0023330 (Usbh_PCE_psPAUSED_Action.c)
 *     UsbhRequestPortSuspend @ 0x1C0025DD4 (UsbhRequestPortSuspend.c)
 *     UsbhCancelEnumeration @ 0x1C00276A4 (UsbhCancelEnumeration.c)
 *     UsbhPCE_Disable @ 0x1C0041188 (UsbhPCE_Disable.c)
 *     UsbhDropDevice @ 0x1C005077C (UsbhDropDevice.c)
 *     UsbhPortDisconnect @ 0x1C0050ED0 (UsbhPortDisconnect.c)
 *     UsbhSetEnumerationFailed @ 0x1C0051FC0 (UsbhSetEnumerationFailed.c)
 * Callees:
 *     Log @ 0x1C00159D0 (Log.c)
 *     PdoExt @ 0x1C001A040 (PdoExt.c)
 *     UsbhDerefPdo @ 0x1C0026298 (UsbhDerefPdo.c)
 */

void __fastcall UsbhBusUnlatchPdo(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v8; // r9
  __int64 v9; // r9
  __int64 v10; // rsi
  __int64 *v11; // rdi
  __int64 *v12; // r9
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 *v15; // rdx
  __int64 **v16; // rcx
  int v17; // eax
  KIRQL v18; // [rsp+60h] [rbp+28h]

  Log(a1, 1024, 1970032689, a2, a3);
  if ( a5 )
  {
    Log(a1, 1024, 1970032691, v8, a3);
    *(_DWORD *)(a3 + 416) = 0;
    UsbhDerefPdo(a1, a2, 0LL, 1884308559LL);
  }
  else
  {
    v18 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
    WPP_MAIN_CB.Dpc.DeferredRoutine = (void (__fastcall *)(_KDPC *, void *, void *, void *))&WPP_MAIN_CB.Dpc.DeferredContext;
    *(_DWORD *)(a3 + 416) = 0;
    Log(a1, 1024, 1970032690, a2, a3);
    Log(a1, 256, 1685218896, v9, 1884308559LL);
    v10 = PdoExt(a2);
    v11 = (__int64 *)(v10 + 1264);
    v12 = *(__int64 **)(v10 + 1264);
    if ( v12 == (__int64 *)(v10 + 1264) )
    {
LABEL_17:
      v17 = *(_DWORD *)(v10 + 1280);
      if ( v17 )
        *(_DWORD *)(v10 + 1280) = v17 - 1;
    }
    else
    {
      while ( 1 )
      {
        if ( (UsbhLogMask & 0x100) != 0 )
        {
          if ( a1 )
          {
            v13 = *(_QWORD *)(a1 + 64);
            if ( v13 )
            {
              v14 = *(_QWORD *)(v13 + 888)
                  + 32LL
                  * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v13 + 880)) & *(_DWORD *)(v13 + 884));
              *(_DWORD *)v14 = 1064591724;
              *(_QWORD *)(v14 + 8) = 0LL;
              *(_QWORD *)(v14 + 16) = v10;
              *(_QWORD *)(v14 + 24) = 1884308559LL;
            }
          }
        }
        if ( *((_DWORD *)v12 + 4) == 1884308559 && !v12[4] )
          break;
        v12 = (__int64 *)*v12;
        if ( v12 == v11 )
          goto LABEL_17;
      }
      v15 = (__int64 *)*v12;
      v16 = (__int64 **)v12[1];
      if ( *(__int64 **)(*v12 + 8) != v12 || *v16 != v12 )
        __fastfail(3u);
      *v16 = v15;
      v15[1] = (__int64)v16;
      ExFreePoolWithTag(v12 - 1, 0);
    }
    if ( (__int64 *)*v11 == v11 && !*(_DWORD *)(v10 + 1280) )
      KeSetEvent((PRKEVENT)(v10 + 1288), 0, 0);
    WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
    KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v18);
  }
}

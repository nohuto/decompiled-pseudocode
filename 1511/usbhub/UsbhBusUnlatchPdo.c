/*
 * XREFs of UsbhBusUnlatchPdo @ 0x1C0010990
 * Callers:
 *     UsbhReset2Complete @ 0x1C0010B30 (UsbhReset2Complete.c)
 *     UsbhBusPause_Action @ 0x1C00157E0 (UsbhBusPause_Action.c)
 *     UsbhWaitConnect @ 0x1C001A510 (UsbhWaitConnect.c)
 *     UsbhRequestPortSuspend @ 0x1C001CF30 (UsbhRequestPortSuspend.c)
 *     Usbh_PCE_psPAUSED_Action @ 0x1C0020810 (Usbh_PCE_psPAUSED_Action.c)
 *     UsbhCancelEnumeration @ 0x1C0026DB0 (UsbhCancelEnumeration.c)
 *     UsbhPCE_Disable @ 0x1C0040E50 (UsbhPCE_Disable.c)
 *     UsbhDropDevice @ 0x1C00500E8 (UsbhDropDevice.c)
 *     UsbhPortDisconnect @ 0x1C0050830 (UsbhPortDisconnect.c)
 *     UsbhSetEnumerationFailed @ 0x1C0051920 (UsbhSetEnumerationFailed.c)
 * Callees:
 *     PdoExt @ 0x1C000D6E0 (PdoExt.c)
 *     UsbhDerefPdo @ 0x1C000F30C (UsbhDerefPdo.c)
 *     Log @ 0x1C0013250 (Log.c)
 */

void __fastcall UsbhBusUnlatchPdo(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  int v8; // r9d
  int v9; // r9d
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  _DWORD *v13; // rsi
  __int64 *v14; // rdi
  __int64 *v15; // r9
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 *v18; // rdx
  __int64 **v19; // rcx
  int v20; // eax
  KIRQL v21; // [rsp+60h] [rbp+28h]

  Log(a1, 1024, 1970032689, a2, a3);
  if ( a5 )
  {
    Log(a1, 1024, 1970032691, v8, a3);
    *(_DWORD *)(a3 + 416) = 0;
    UsbhDerefPdo(a1, a2, 0LL, 0x7050444Fu);
  }
  else
  {
    v21 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
    WPP_MAIN_CB.Dpc.DeferredRoutine = (void (__fastcall *)(_KDPC *, void *, void *, void *))&WPP_MAIN_CB.Dpc.DeferredContext;
    *(_DWORD *)(a3 + 416) = 0;
    Log(a1, 1024, 1970032690, a2, a3);
    Log(a1, 256, 1685218896, v9, 1884308559LL);
    v13 = PdoExt(a2, v10, v11, v12);
    v14 = (__int64 *)(v13 + 316);
    v15 = (__int64 *)*((_QWORD *)v13 + 158);
    if ( v15 == (__int64 *)(v13 + 316) )
    {
LABEL_17:
      v20 = v13[320];
      if ( v20 )
        v13[320] = v20 - 1;
    }
    else
    {
      while ( 1 )
      {
        if ( (UsbhLogMask & 0x100) != 0 )
        {
          if ( a1 )
          {
            v16 = *(_QWORD *)(a1 + 64);
            if ( v16 )
            {
              v17 = *(_QWORD *)(v16 + 888)
                  + 32LL
                  * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v16 + 880)) & *(_DWORD *)(v16 + 884));
              *(_DWORD *)v17 = 1064591724;
              *(_QWORD *)(v17 + 8) = 0LL;
              *(_QWORD *)(v17 + 16) = v13;
              *(_QWORD *)(v17 + 24) = 1884308559LL;
            }
          }
        }
        if ( *((_DWORD *)v15 + 4) == 1884308559 && !v15[4] )
          break;
        v15 = (__int64 *)*v15;
        if ( v15 == v14 )
          goto LABEL_17;
      }
      v18 = (__int64 *)*v15;
      v19 = (__int64 **)v15[1];
      if ( *(__int64 **)(*v15 + 8) != v15 || *v19 != v15 )
        __fastfail(3u);
      *v19 = v18;
      v18[1] = (__int64)v19;
      ExFreePoolWithTag(v15 - 1, 0);
    }
    if ( (__int64 *)*v14 == v14 && !v13[320] )
      KeSetEvent((PRKEVENT)(v13 + 322), 0, 0);
    WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
    KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v21);
  }
}

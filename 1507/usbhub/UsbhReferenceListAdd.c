/*
 * XREFs of UsbhReferenceListAdd @ 0x1C000A030
 * Callers:
 *     UsbhSetTimer @ 0x1C00093E0 (UsbhSetTimer.c)
 *     UsbhTimerPnpStart @ 0x1C0009D90 (UsbhTimerPnpStart.c)
 *     UsbhGetTopOfBusStack @ 0x1C0009EA0 (UsbhGetTopOfBusStack.c)
 *     UsbhReferenceListOpen @ 0x1C0009F98 (UsbhReferenceListOpen.c)
 *     UsbhSetOutOfBandwidthTimer @ 0x1C003C6A4 (UsbhSetOutOfBandwidthTimer.c)
 *     UsbhSyncSendDeviceIoctl @ 0x1C003C92C (UsbhSyncSendDeviceIoctl.c)
 *     UsbhAutoOvercurrentResetWorker @ 0x1C003DC00 (UsbhAutoOvercurrentResetWorker.c)
 *     UsbhDriverOvercurrentResetWorker @ 0x1C003DD60 (UsbhDriverOvercurrentResetWorker.c)
 *     UsbhResetPortTimerDpc @ 0x1C0044230 (UsbhResetPortTimerDpc.c)
 *     UsbhException @ 0x1C004ECD0 (UsbhException.c)
 * Callees:
 *     memset @ 0x1C002A1C0 (memset.c)
 *     UsbhTrapFatal_Dbg @ 0x1C003CB70 (UsbhTrapFatal_Dbg.c)
 */

__int64 __fastcall UsbhReferenceListAdd(__int64 a1, __int64 a2, int a3)
{
  KIRQL v6; // bp
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rbx
  _DWORD *PoolWithTag; // rax
  _DWORD *v11; // rdi
  char *v12; // rax
  __int64 v13; // rbx
  _QWORD *v14; // rcx

  v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
  WPP_MAIN_CB.Dpc.DeferredRoutine = (void (__fastcall *)(_KDPC *, void *, void *, void *))&WPP_MAIN_CB.Dpc.DeferredContext;
  if ( !a1 )
    UsbhTrapFatal_Dbg(0LL, 0LL, v7, v8);
  v9 = *(_QWORD *)(a1 + 64);
  if ( !v9 )
    UsbhTrapFatal_Dbg(a1, 0LL, v7, v8);
  if ( *(_DWORD *)v9 != 541218120 )
    UsbhTrapFatal_Dbg(a1, *(_QWORD *)(a1 + 64), v7, v8);
  if ( *(_BYTE *)(v9 + 2480) )
  {
    PoolWithTag = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, 0x30uLL, 0x42554855u);
    v11 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 0x30uLL);
      *v11 = 1397515890;
      v12 = (char *)(v11 + 6);
      v11[10] = a3;
      v13 = v9 + 2512;
      *((_QWORD *)v11 + 2) = a2;
      *((_QWORD *)v11 + 1) = a1;
      v14 = *(_QWORD **)(v13 + 8);
      *((_QWORD *)v11 + 3) = v13;
      *((_QWORD *)v11 + 4) = v14;
      if ( *v14 != v13 )
        __fastfail(3u);
      *v14 = v12;
      *(_QWORD *)(v13 + 8) = v12;
    }
    else
    {
      ++*(_DWORD *)(v9 + 2528);
    }
    WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
    KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v6);
    return 0LL;
  }
  else
  {
    WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
    KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v6);
    return 3221225473LL;
  }
}

/*
 * XREFs of UsbhReferenceListAdd @ 0x1C000B670
 * Callers:
 *     UsbhSetTimer @ 0x1C0009CFC (UsbhSetTimer.c)
 *     UsbhGetTopOfBusStack @ 0x1C000AEAC (UsbhGetTopOfBusStack.c)
 *     UsbhReferenceListOpen @ 0x1C000B4C4 (UsbhReferenceListOpen.c)
 *     UsbhTimerPnpStart @ 0x1C000B560 (UsbhTimerPnpStart.c)
 *     UsbhSetOutOfBandwidthTimer @ 0x1C003CCF4 (UsbhSetOutOfBandwidthTimer.c)
 *     UsbhSyncSendDeviceIoctl @ 0x1C003CF7C (UsbhSyncSendDeviceIoctl.c)
 *     UsbhAutoOvercurrentResetWorker @ 0x1C003E150 (UsbhAutoOvercurrentResetWorker.c)
 *     UsbhDriverOvercurrentResetWorker @ 0x1C003E2B0 (UsbhDriverOvercurrentResetWorker.c)
 *     UsbhResetPortTimerDpc @ 0x1C00446A0 (UsbhResetPortTimerDpc.c)
 *     UsbhException @ 0x1C004F3A0 (UsbhException.c)
 * Callees:
 *     UsbhTrapFatal_Dbg @ 0x1C0029420 (UsbhTrapFatal_Dbg.c)
 *     memset @ 0x1C0029900 (memset.c)
 */

__int64 __fastcall UsbhReferenceListAdd(__int64 a1, __int64 a2, int a3)
{
  KIRQL v6; // bp
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rbx
  char *PoolWithTag; // rax
  char *v11; // rdi
  __int64 v12; // rbx
  _QWORD *v13; // rax
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
    PoolWithTag = (char *)ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, 0x30uLL, 0x42554855u);
    v11 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 0x30uLL);
      v12 = v9 + 2512;
      *(_DWORD *)v11 = 1397515890;
      *((_DWORD *)v11 + 10) = a3;
      v13 = v11 + 24;
      *((_QWORD *)v11 + 2) = a2;
      *((_QWORD *)v11 + 1) = a1;
      v14 = *(_QWORD **)(v12 + 8);
      if ( *v14 != v12 )
        __fastfail(3u);
      *v13 = v12;
      *((_QWORD *)v11 + 4) = v14;
      *v14 = v13;
      *(_QWORD *)(v12 + 8) = v13;
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

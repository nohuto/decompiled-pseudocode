/*
 * XREFs of UsbhReleasePowerContext @ 0x1C0023268
 * Callers:
 *     UsbhPdoUnblockPendedD0IrpWI @ 0x1C0001000 (UsbhPdoUnblockPendedD0IrpWI.c)
 *     UsbhFdoDxPoComplete_Action @ 0x1C0001A60 (UsbhFdoDxPoComplete_Action.c)
 *     UsbhFdoD0Worker_Action @ 0x1C0002BA0 (UsbhFdoD0Worker_Action.c)
 *     UsbhPdoSetD0 @ 0x1C0021930 (UsbhPdoSetD0.c)
 *     UsbhSet_D0_wQueued_Action @ 0x1C0024F24 (UsbhSet_D0_wQueued_Action.c)
 *     UsbhFdoPower_PowerFailureEntry @ 0x1C0045ED8 (UsbhFdoPower_PowerFailureEntry.c)
 * Callees:
 *     FdoExt @ 0x1C0015EE0 (FdoExt.c)
 */

void __fastcall UsbhReleasePowerContext(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _DWORD *v5; // rax
  __int64 v6; // rbx
  _DWORD *v7; // rsi
  __int64 v8; // r9
  _QWORD *v9; // r8

  v5 = FdoExt(a1, a2, a3, a4);
  v6 = *(_QWORD *)(a2 + 72);
  v7 = v5;
  *(_BYTE *)(v6 + 132) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
  *(_DWORD *)(v6 + 136) = 1;
  WPP_MAIN_CB.Dpc.DeferredRoutine = (void (__fastcall *)(_KDPC *, void *, void *, void *))&WPP_MAIN_CB.Dpc.DeferredContext;
  if ( *(_BYTE *)(a2 + 136) )
    *((_QWORD *)v7 + 114) = 0LL;
  v8 = *(_QWORD *)(a2 + 8);
  v9 = *(_QWORD **)(a2 + 16);
  if ( *(_QWORD *)(v8 + 8) != a2 + 8 || *v9 != a2 + 8 )
    __fastfail(3u);
  *v9 = v8;
  *(_QWORD *)(v8 + 8) = v9;
  ExFreePoolWithTag((PVOID)a2, 0);
  *(_DWORD *)(v6 + 136) = 0;
  WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, *(_BYTE *)(v6 + 132));
}

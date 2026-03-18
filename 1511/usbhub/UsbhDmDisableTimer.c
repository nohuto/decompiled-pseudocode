/*
 * XREFs of UsbhDmDisableTimer @ 0x1C004589C
 * Callers:
 *     UsbhTimerPnpStop @ 0x1C0045AD0 (UsbhTimerPnpStop.c)
 * Callees:
 *     Log @ 0x1C0013250 (Log.c)
 *     FdoExt @ 0x1C00132D0 (FdoExt.c)
 *     UsbhReferenceListRemove @ 0x1C0024EB0 (UsbhReferenceListRemove.c)
 */

void __fastcall UsbhDmDisableTimer(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _DWORD *v5; // rdi
  KSPIN_LOCK *v6; // rsi
  KIRQL v7; // al
  __int64 v8; // r11
  __int64 v9; // rbp
  __int64 v10; // r9
  KIRQL v11; // r10
  int v12; // r11d
  KIRQL v13; // r10

  v5 = FdoExt(a1, a2, a3, a4);
  v6 = (KSPIN_LOCK *)(v5 + 932);
  v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v5 + 466);
  v8 = (int)v5[934];
  if ( !(_DWORD)v8 )
  {
    KeReleaseSpinLock(v6, v7);
    return;
  }
  v5[934] = 0;
  v9 = v8;
  Log(a1, 0x2000, 1684886627, a1, v8);
  if ( v12 != 1 )
  {
    KeReleaseSpinLock(v6, v11);
    Log(a1, 0x2000, 1681079857, a1, v9);
    goto LABEL_7;
  }
  Log(a1, 0x2000, 1684886573, v10, 1LL);
  KeReleaseSpinLock(v6, v13);
  if ( KeCancelTimer((PKTIMER)(v5 + 962)) )
  {
    Log(a1, 0x2000, 1680948785, a1, 1LL);
    UsbhReferenceListRemove(a1, (__int64)(v5 + 962));
LABEL_7:
    KeSetEvent((PRKEVENT)(v5 + 940), 0, 0);
  }
  Log(a1, 0x2000, 1684887412, a1, v9);
  KeWaitForSingleObject(v5 + 940, Executive, 0, 0, 0LL);
}

/*
 * XREFs of UsbhDecrementHubIsrWorkerReference @ 0x1C00433E0
 * Callers:
 *     UsbhBusPnpStop_Action @ 0x1C003F500 (UsbhBusPnpStop_Action.c)
 * Callees:
 *     Log @ 0x1C00159D0 (Log.c)
 *     FdoExt @ 0x1C0015EE0 (FdoExt.c)
 */

void __fastcall UsbhDecrementHubIsrWorkerReference(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _DWORD *v5; // rax
  __int64 v6; // r11
  int v7; // r10d

  v5 = FdoExt(a1, a2, a3, a4);
  _InterlockedExchangeAdd(v5 + 685, 0xFFFFFFFF);
  Log(a1, 4, 1212764717, a1, (int)v5[685]);
  if ( v7 == 1 )
    KeSetEvent((PRKEVENT)(v6 + 2744), 0, 0);
}

/*
 * XREFs of UsbhCompletePdoIdleIrp @ 0x1C001FE08
 * Callers:
 *     UsbhPdoSetDx @ 0x1C001FC88 (UsbhPdoSetDx.c)
 *     UsbhPdoSetD0 @ 0x1C001FF90 (UsbhPdoSetD0.c)
 *     UsbhPdoRemoveCleanup @ 0x1C00548A8 (UsbhPdoRemoveCleanup.c)
 * Callees:
 *     PdoExt @ 0x1C000D6E0 (PdoExt.c)
 *     Log @ 0x1C0013250 (Log.c)
 *     UsbhSetIdleIrpState @ 0x1C001FED4 (UsbhSetIdleIrpState.c)
 *     UsbhGetIdleIrpState @ 0x1C001FF38 (UsbhGetIdleIrpState.c)
 *     UsbhIdleIrp_Event @ 0x1C00555F4 (UsbhIdleIrp_Event.c)
 */

void __fastcall UsbhCompletePdoIdleIrp(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdi
  _DWORD *v7; // rsi
  struct _KEVENT *v8; // r14
  __int64 v9; // rcx
  int v10; // ecx
  int IdleIrpState; // r9d
  PIRP v12; // rsi
  char v13; // [rsp+20h] [rbp-28h]
  char v14; // [rsp+60h] [rbp+18h] BYREF

  v5 = (int)a3;
  v7 = PdoExt(a2, a2, a3, a4);
  v8 = (struct _KEVENT *)(v7 + 512);
  KeWaitForSingleObject(v7 + 512, Executive, 0, 0, 0LL);
  IdleIrpState = UsbhGetIdleIrpState(v9, a2, &v14);
  v13 = v14;
  if ( IdleIrpState == 2 )
  {
    v7[358] = v5;
    IdleIrpState = 3;
  }
  UsbhSetIdleIrpState(v10, a2, 9, IdleIrpState, v13);
  v12 = IoCsqRemoveNextIrp((PIO_CSQ)(v7 + 364), 0LL);
  KeSetEvent(v8, 0, 0);
  Log(a1, 16, 1668303172, v5, (__int64)v12);
  if ( v12 )
    UsbhIdleIrp_Event(a1, a2, (_DWORD)v12, 5, v5);
}

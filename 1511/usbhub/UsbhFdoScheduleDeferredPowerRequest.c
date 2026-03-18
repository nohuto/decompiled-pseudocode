/*
 * XREFs of UsbhFdoScheduleDeferredPowerRequest @ 0x1C0024888
 * Callers:
 *     UsbhFdoD0PoComplete_Action @ 0x1C0001510 (UsbhFdoD0PoComplete_Action.c)
 *     UsbhSet_D0_wQueued_Action @ 0x1C0024810 (UsbhSet_D0_wQueued_Action.c)
 * Callees:
 *     UsbhPoStartNextPowerIrp_Pdo @ 0x1C000B818 (UsbhPoStartNextPowerIrp_Pdo.c)
 *     Log @ 0x1C0013250 (Log.c)
 *     FdoExt @ 0x1C00132D0 (FdoExt.c)
 *     UsbhQueueWorkItemEx @ 0x1C0024960 (UsbhQueueWorkItemEx.c)
 *     UsbhAllocWorkItem @ 0x1C0024AAC (UsbhAllocWorkItem.c)
 */

__int64 __fastcall UsbhFdoScheduleDeferredPowerRequest(__int64 a1, int a2, __int64 a3, IRP *a4)
{
  __int64 v5; // rbp
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  _DWORD *v12; // rax

  v5 = 0LL;
  Log(a1, 16, 1935962161, (__int64)a4, a3);
  if ( !v11 )
    return UsbhQueueWorkItemEx(a1, 0, a2, a3, 0, 1769428816, v5);
  v12 = FdoExt(a1, v9, v10, v11);
  v5 = UsbhAllocWorkItem(a1, a2, a3, 0, 1769428816, *((_BYTE *)v12 + 5268));
  if ( v5 )
  {
    a4->Tail.Overlay.CurrentStackLocation->Control |= 1u;
    UsbhPoStartNextPowerIrp_Pdo(a1, *(_QWORD *)(a3 + 48), a4, 1810);
    return UsbhQueueWorkItemEx(a1, 0, a2, a3, 0, 1769428816, v5);
  }
  return 3221225626LL;
}

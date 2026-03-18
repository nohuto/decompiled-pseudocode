/*
 * XREFs of UsbhFdoScheduleDeferredPowerRequest @ 0x1C00249A8
 * Callers:
 *     UsbhFdoD0PoComplete_Action @ 0x1C0001510 (UsbhFdoD0PoComplete_Action.c)
 *     UsbhSet_D0_wQueued_Action @ 0x1C0024930 (UsbhSet_D0_wQueued_Action.c)
 * Callees:
 *     Log @ 0x1C0014B50 (Log.c)
 *     FdoExt @ 0x1C0015060 (FdoExt.c)
 *     UsbhQueueWorkItemEx @ 0x1C0024A80 (UsbhQueueWorkItemEx.c)
 *     UsbhAllocWorkItem @ 0x1C0024BCC (UsbhAllocWorkItem.c)
 *     UsbhPoStartNextPowerIrp_Pdo @ 0x1C0024D1C (UsbhPoStartNextPowerIrp_Pdo.c)
 */

__int64 __fastcall UsbhFdoScheduleDeferredPowerRequest(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rbp
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  _DWORD *v12; // rax

  v5 = 0LL;
  Log(a1, 16, 1935962161, a4, a3);
  if ( !v11 )
    return UsbhQueueWorkItemEx(a1, 0, a2, a3, 0, 1769428816, v5);
  v12 = FdoExt(a1, v9, v10, v11);
  v5 = UsbhAllocWorkItem(a1, a2, a3, 0, 1769428816, *((_BYTE *)v12 + 5268));
  if ( v5 )
  {
    *(_BYTE *)(*(_QWORD *)(a4 + 184) + 3LL) |= 1u;
    UsbhPoStartNextPowerIrp_Pdo(a1, *(_QWORD *)(a3 + 48), a4, 1810LL);
    return UsbhQueueWorkItemEx(a1, 0, a2, a3, 0, 1769428816, v5);
  }
  return 3221225626LL;
}

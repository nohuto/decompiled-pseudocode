/*
 * XREFs of UsbhIdleIrp_Event @ 0x1C0055484
 * Callers:
 *     UsbhPdoInternalDeviceControl @ 0x1C0012F60 (UsbhPdoInternalDeviceControl.c)
 *     UsbhCompletePdoIdleIrp @ 0x1C002220C (UsbhCompletePdoIdleIrp.c)
 *     UsbhFdoSubmitPdoIdleNotification @ 0x1C003EE4C (UsbhFdoSubmitPdoIdleNotification.c)
 *     UsbhCompleteCanceledPdoIdleIrp @ 0x1C0054F60 (UsbhCompleteCanceledPdoIdleIrp.c)
 *     UsbhPdoIdleCC_Worker @ 0x1C0055C10 (UsbhPdoIdleCC_Worker.c)
 * Callees:
 *     PdoExt @ 0x1C0013AD0 (PdoExt.c)
 *     Log @ 0x1C0014B50 (Log.c)
 *     UsbhSetIdleIrpState @ 0x1C00222D8 (UsbhSetIdleIrpState.c)
 *     UsbhGetIdleIrpState @ 0x1C002233C (UsbhGetIdleIrpState.c)
 *     UsbhIdleExIrp_IdleReady @ 0x1C0054F8C (UsbhIdleExIrp_IdleReady.c)
 *     UsbhIdleIrp_CB_Canceled @ 0x1C0055100 (UsbhIdleIrp_CB_Canceled.c)
 *     UsbhIdleIrp_CB_Complete @ 0x1C0055200 (UsbhIdleIrp_CB_Complete.c)
 *     UsbhIdleIrp_CB_Pending @ 0x1C005533C (UsbhIdleIrp_CB_Pending.c)
 *     UsbhIdleIrp_NoIrp @ 0x1C0055600 (UsbhIdleIrp_NoIrp.c)
 *     UsbhIdleIrp_WaitWorker @ 0x1C0055A3C (UsbhIdleIrp_WaitWorker.c)
 */

__int64 __fastcall UsbhIdleIrp_Event(ULONG_PTR a1, __int64 a2, IRP *a3, unsigned int a4, int a5)
{
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  _DWORD *v12; // rbx
  __int64 v13; // rcx
  __int64 v14; // r9
  int IdleIrpState; // eax
  unsigned int v16; // r10d
  unsigned int v17; // ebx
  KIRQL v20; // [rsp+68h] [rbp+20h] BYREF

  Log(a1, 0x10000, 1936934230, (int)a4, (__int64)a3);
  v12 = PdoExt(a2, v9, v10, v11);
  IdleIrpState = UsbhGetIdleIrpState(v13, a2, &v20, v14);
  v12[358] = a5;
  Log(a1, 0x10000, 1936934193, a2, IdleIrpState);
  switch ( v16 )
  {
    case 0u:
      return (unsigned int)UsbhIdleIrp_NoIrp(a1, a2, a3, a4, 0, v20);
    case 1u:
      return (unsigned int)UsbhIdleIrp_WaitWorker(a1, a2, (_DWORD)a3, a4, 1, v20);
    case 2u:
      return (unsigned int)UsbhIdleIrp_CB_Pending(a1, a2, a3, a4, 2u, v20);
    case 3u:
      return (unsigned int)UsbhIdleIrp_CB_Canceled(a1, a2, (__int64)a3, a4, 3u, v20);
    case 4u:
      return (unsigned int)UsbhIdleIrp_CB_Complete(a1, a2, (__int64)a3, a4, 4u, v20);
    case 5u:
      return (unsigned int)UsbhIdleExIrp_IdleReady(a1, a2, (__int64)a3, a4, 5u, v20);
  }
  v17 = -1073741823;
  UsbhSetIdleIrpState(v16 - 4, a2, a4, v16, v20);
  return v17;
}

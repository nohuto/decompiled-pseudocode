/*
 * XREFs of UsbhIdleIrp_Event @ 0x1C0055C24
 * Callers:
 *     UsbhPdoInternalDeviceControl @ 0x1C0014400 (UsbhPdoInternalDeviceControl.c)
 *     UsbhCompletePdoIdleIrp @ 0x1C0023040 (UsbhCompletePdoIdleIrp.c)
 *     UsbhFdoSubmitPdoIdleNotification @ 0x1C003F39C (UsbhFdoSubmitPdoIdleNotification.c)
 *     UsbhCompleteCanceledPdoIdleIrp @ 0x1C0055700 (UsbhCompleteCanceledPdoIdleIrp.c)
 *     UsbhPdoIdleCC_Worker @ 0x1C00563B0 (UsbhPdoIdleCC_Worker.c)
 * Callees:
 *     Log @ 0x1C00159D0 (Log.c)
 *     PdoExt @ 0x1C001A040 (PdoExt.c)
 *     UsbhSetIdleIrpState @ 0x1C002310C (UsbhSetIdleIrpState.c)
 *     UsbhGetIdleIrpState @ 0x1C0023170 (UsbhGetIdleIrpState.c)
 *     UsbhIdleExIrp_IdleReady @ 0x1C005572C (UsbhIdleExIrp_IdleReady.c)
 *     UsbhIdleIrp_CB_Canceled @ 0x1C00558A0 (UsbhIdleIrp_CB_Canceled.c)
 *     UsbhIdleIrp_CB_Complete @ 0x1C00559A0 (UsbhIdleIrp_CB_Complete.c)
 *     UsbhIdleIrp_CB_Pending @ 0x1C0055ADC (UsbhIdleIrp_CB_Pending.c)
 *     UsbhIdleIrp_NoIrp @ 0x1C0055DA0 (UsbhIdleIrp_NoIrp.c)
 *     UsbhIdleIrp_WaitWorker @ 0x1C00561DC (UsbhIdleIrp_WaitWorker.c)
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

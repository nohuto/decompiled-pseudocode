/*
 * XREFs of UsbhSetIdleIrpState @ 0x1C00222D8
 * Callers:
 *     UsbhCompletePdoIdleIrp @ 0x1C002220C (UsbhCompletePdoIdleIrp.c)
 *     UsbhIdleExIrp_IdleReady @ 0x1C0054F8C (UsbhIdleExIrp_IdleReady.c)
 *     UsbhIdleIrp_CB_Canceled @ 0x1C0055100 (UsbhIdleIrp_CB_Canceled.c)
 *     UsbhIdleIrp_CB_Complete @ 0x1C0055200 (UsbhIdleIrp_CB_Complete.c)
 *     UsbhIdleIrp_CB_Pending @ 0x1C005533C (UsbhIdleIrp_CB_Pending.c)
 *     UsbhIdleIrp_Event @ 0x1C0055484 (UsbhIdleIrp_Event.c)
 *     UsbhIdleIrp_NoIrp @ 0x1C0055600 (UsbhIdleIrp_NoIrp.c)
 *     UsbhIdleIrp_WaitWorker @ 0x1C0055A3C (UsbhIdleIrp_WaitWorker.c)
 * Callees:
 *     PdoExt @ 0x1C0013AD0 (PdoExt.c)
 */

void __fastcall UsbhSetIdleIrpState(__int64 a1, __int64 a2, __int64 a3, __int64 a4, KIRQL a5)
{
  int v5; // edi
  int v6; // ebx
  KSPIN_LOCK *v7; // rax
  __int64 v8; // rcx

  v5 = a4;
  v6 = a3;
  v7 = (KSPIN_LOCK *)PdoExt(a2, a2, a3, a4);
  v8 = 4LL * *((unsigned int *)v7 + 445);
  LODWORD(v7[v8 + 223]) = v6;
  *((_DWORD *)v7 + 382) = v5;
  LODWORD(v7[v8 + 224]) = v5;
  *((_DWORD *)v7 + 445) = ((unsigned __int8)*((_DWORD *)v7 + 445) + 1) & 7;
  KeReleaseSpinLock(v7 + 255, a5);
}

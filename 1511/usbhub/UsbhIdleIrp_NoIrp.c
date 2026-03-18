/*
 * XREFs of UsbhIdleIrp_NoIrp @ 0x1C0055770
 * Callers:
 *     UsbhIdleIrp_Event @ 0x1C00555F4 (UsbhIdleIrp_Event.c)
 * Callees:
 *     UsbhLatchPdo @ 0x1C000C288 (UsbhLatchPdo.c)
 *     UsbhEtwLogDeviceIrpEvent @ 0x1C000D190 (UsbhEtwLogDeviceIrpEvent.c)
 *     PdoExt @ 0x1C000D6E0 (PdoExt.c)
 *     Log @ 0x1C0013250 (Log.c)
 *     FdoExt @ 0x1C00132D0 (FdoExt.c)
 *     UsbhSetPdoIdleReady @ 0x1C001C3B0 (UsbhSetPdoIdleReady.c)
 *     UsbhSetIdleIrpState @ 0x1C001FED4 (UsbhSetIdleIrpState.c)
 *     UsbhQueueWorkItemWithRetry @ 0x1C0022800 (UsbhQueueWorkItemWithRetry.c)
 *     UsbhTrapFatal_Dbg @ 0x1C003CDA0 (UsbhTrapFatal_Dbg.c)
 *     UsbhIdleIrp_ReleaseIrp @ 0x1C0055AB8 (UsbhIdleIrp_ReleaseIrp.c)
 */

__int64 __fastcall UsbhIdleIrp_NoIrp(ULONG_PTR a1, __int64 a2, IRP *a3, __int64 a4, unsigned int a5, KIRQL a6)
{
  __int64 v7; // rbx
  _DWORD *v10; // r14
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  _DWORD *v14; // r15
  __int64 v15; // rcx
  __int64 v16; // r9
  __int64 v17; // r9
  __int64 v18; // r9
  int v19; // r8d
  __int64 v21; // rcx
  __int64 v22; // rcx

  v7 = (int)a4;
  v10 = PdoExt(a2, a2, (__int64)a3, a4);
  v14 = FdoExt(a1, v11, v12, v13);
  Log(a1, 0x10000, 1936936521, a2, (__int64)a3);
  Log(a1, 0x10000, 1936936498, 0LL, v7);
  if ( (_DWORD)v7 == 1 )
  {
    UsbhEtwLogDeviceIrpEvent((__int64)v10, (__int64)a3, &USBHUB_ETW_EVENT_DEVICE_IDLE_NOTIFICATION_DISPATCH, v16);
    if ( (v10[353] & 2) == 0 && v14[820] != 6 )
    {
      if ( UsbhLatchPdo(a1, *((_WORD *)v10 + 710), (__int64)v10, 0x656C6449u) != a2 )
      {
        if ( !a3 )
          UsbhTrapFatal_Dbg(a1, a1);
        UsbhSetIdleIrpState(v22, a2, 1LL, 0LL, a6);
        Log(a1, 0x10000, 1768180019, a2, (__int64)a3);
        v17 = 3221225486LL;
        return (unsigned int)UsbhIdleIrp_ReleaseIrp(a1, a2, a3, v17);
      }
      UsbhSetIdleIrpState(v22, a2, 1LL, 1LL, a6);
      v10[358] = 0;
      a3->Tail.Overlay.CurrentStackLocation->Control |= 1u;
      Log(*((_QWORD *)v10 + 147), 16, 1768180018, 0LL, (__int64)a3);
      IoCsqInsertIrp((PIO_CSQ)(v10 + 364), a3, 0LL);
      UsbhQueueWorkItemWithRetry(a1, (__int64)(v10 + 384), (__int64)UsbhPdoIdleCC_Worker, 0LL, a2, 0, 0x69505353u);
      return 259;
    }
    UsbhSetIdleIrpState(v21, a2, 1LL, 1LL, a6);
    v19 = 1768180017;
LABEL_26:
    a3->Tail.Overlay.CurrentStackLocation->Control |= 1u;
    Log(*((_QWORD *)v10 + 147), 16, v19, 0LL, (__int64)a3);
    IoCsqInsertIrp((PIO_CSQ)(v10 + 364), a3, 0LL);
    return 259;
  }
  if ( (_DWORD)v7 != 3 )
  {
    if ( (_DWORD)v7 == 5 )
    {
      if ( !a3 )
        UsbhTrapFatal_Dbg(a1, a1);
      UsbhSetIdleIrpState(v15, a2, 5LL, v16, a6);
      v17 = (unsigned int)v10[358];
      return (unsigned int)UsbhIdleIrp_ReleaseIrp(a1, a2, a3, v17);
    }
    if ( (_DWORD)v7 == 6 )
    {
      if ( !a3 )
        UsbhTrapFatal_Dbg(a1, a1);
      UsbhSetIdleIrpState(v15, a2, 6LL, v16, a6);
      v17 = 3221225760LL;
      return (unsigned int)UsbhIdleIrp_ReleaseIrp(a1, a2, a3, v17);
    }
    if ( (_DWORD)v7 != 7 )
    {
      UsbhSetIdleIrpState(v15, a2, (unsigned int)v7, a5, a6);
      v17 = 3221225473LL;
      return (unsigned int)UsbhIdleIrp_ReleaseIrp(a1, a2, a3, v17);
    }
    if ( !a3 )
      UsbhTrapFatal_Dbg(a1, a1);
    UsbhSetIdleIrpState(v15, a2, 7LL, 5LL, a6);
    UsbhSetPdoIdleReady(a1, a2, (__int64)a3, v18);
    v19 = 1768180020;
    goto LABEL_26;
  }
  UsbhSetIdleIrpState(v15, a2, 3LL, v16, a6);
  return 0;
}

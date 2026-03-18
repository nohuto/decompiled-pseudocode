/*
 * XREFs of UsbhCompletePdoWakeIrps @ 0x1C0002C00
 * Callers:
 *     UsbhFdoD0Worker_Action @ 0x1C00029A0 (UsbhFdoD0Worker_Action.c)
 * Callees:
 *     UsbhRefPdo @ 0x1C00095D0 (UsbhRefPdo.c)
 *     UsbhCompletePdoWakeIrp @ 0x1C000A9A0 (UsbhCompletePdoWakeIrp.c)
 *     UsbhGetPortData @ 0x1C000C150 (UsbhGetPortData.c)
 *     PdoExt @ 0x1C000D6E0 (PdoExt.c)
 *     Log @ 0x1C0013250 (Log.c)
 *     FdoExt @ 0x1C00132D0 (FdoExt.c)
 *     UsbhUnlatchPdo @ 0x1C0022600 (UsbhUnlatchPdo.c)
 *     UsbhException @ 0x1C004EC30 (UsbhException.c)
 */

__int64 __fastcall UsbhCompletePdoWakeIrps(__int64 a1)
{
  int v1; // ebp
  unsigned __int16 i; // si
  __int64 v4; // rbx
  KIRQL v5; // r14
  __int64 PortData; // rax
  __int64 v7; // rcx
  __int64 result; // rax
  __int64 v9; // r14
  int v10; // [rsp+48h] [rbp-20h]

  v1 = 0;
  for ( i = 1; i <= *(unsigned __int8 *)(FdoExt(a1) + 2938); ++i )
  {
    v4 = 0LL;
    Log(a1, 256, 1817199695, i, 1885630295LL);
    v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
    WPP_MAIN_CB.Dpc.DeferredRoutine = (void (__fastcall *)(_KDPC *, void *, void *, void *))&WPP_MAIN_CB.Dpc.DeferredContext;
    PortData = UsbhGetPortData(a1, i);
    if ( PortData )
    {
      v4 = *(_QWORD *)(PortData + 392);
      if ( v4 )
        v4 = UsbhRefPdo(v7, *(_QWORD *)(PortData + 392), 0LL, 1885630295LL);
    }
    WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
    KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v5);
    if ( v4 )
    {
      v9 = PdoExt(v4);
      if ( (*(_DWORD *)(v9 + 1412) & 0x2000) != 0
        && (unsigned __int8)UsbhCompletePdoWakeIrp(a1, v4, 0LL)
        && (unsigned int)++v1 > 1 )
      {
        LOBYTE(v10) = 0;
        UsbhException(a1, 0, 97, 0, 0, 0, 0, usbfile_fdopwr_c, 3765, v10);
      }
      *(_DWORD *)(v9 + 1412) &= ~0x2000u;
      UsbhUnlatchPdo(a1, v4, 0LL, 1885630295LL);
    }
  }
  result = FdoExt(a1);
  *(_DWORD *)(result + 2560) &= ~0x4000000u;
  return result;
}

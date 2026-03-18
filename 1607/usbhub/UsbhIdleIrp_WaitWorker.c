/*
 * XREFs of UsbhIdleIrp_WaitWorker @ 0x1C00561DC
 * Callers:
 *     UsbhIdleIrp_Event @ 0x1C0055C24 (UsbhIdleIrp_Event.c)
 * Callees:
 *     Log @ 0x1C00159D0 (Log.c)
 *     PdoExt @ 0x1C001A040 (PdoExt.c)
 *     UsbhSetIdleIrpState @ 0x1C002310C (UsbhSetIdleIrpState.c)
 *     UsbhTrapFatal_Dbg @ 0x1C0029420 (UsbhTrapFatal_Dbg.c)
 *     UsbhIdleIrp_ReleaseIrp @ 0x1C00560E8 (UsbhIdleIrp_ReleaseIrp.c)
 */

__int64 __fastcall UsbhIdleIrp_WaitWorker(
        ULONG_PTR a1,
        ULONG_PTR a2,
        IRP *a3,
        unsigned int a4,
        unsigned int a5,
        KIRQL a6)
{
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  _DWORD *v13; // r14
  __int64 v14; // rcx
  unsigned int v15; // r9d

  Log(a1, 0x10000, 1936938871, a2, (__int64)a3);
  v13 = PdoExt(v12, v10, v11, v12);
  switch ( a4 )
  {
    case 1u:
      if ( !a3 )
        UsbhTrapFatal_Dbg(a1, a1);
      UsbhSetIdleIrpState(a4 - 1, a2, 1LL, 1LL, a6);
      v15 = -2147483631;
      break;
    case 2u:
      UsbhSetIdleIrpState(a4 - 2, a2, 2LL, 2LL, a6);
      return 259LL;
    case 3u:
      UsbhSetIdleIrpState(a4 - 3, a2, 3LL, 0LL, a6);
      return 0LL;
    default:
      v14 = a4 - 5;
      if ( a4 == 5 )
      {
        if ( !a3 )
          UsbhTrapFatal_Dbg(a1, a1);
        UsbhSetIdleIrpState(v14, a2, 5LL, 0LL, a6);
        v15 = v13[358];
      }
      else if ( a4 == 6 )
      {
        if ( !a3 )
          UsbhTrapFatal_Dbg(a1, a1);
        UsbhSetIdleIrpState(v14, a2, 6LL, 0LL, a6);
        v15 = -1073741536;
      }
      else
      {
        if ( !a3 )
          UsbhTrapFatal_Dbg(a1, a1);
        UsbhSetIdleIrpState(v14, a2, a4, a5, a6);
        v15 = -1073741823;
      }
      break;
  }
  return UsbhIdleIrp_ReleaseIrp(a1, a2, a3, v15);
}

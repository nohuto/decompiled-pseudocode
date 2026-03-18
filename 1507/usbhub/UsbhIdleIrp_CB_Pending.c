/*
 * XREFs of UsbhIdleIrp_CB_Pending @ 0x1C005533C
 * Callers:
 *     UsbhIdleIrp_Event @ 0x1C0055484 (UsbhIdleIrp_Event.c)
 * Callees:
 *     PdoExt @ 0x1C0013AD0 (PdoExt.c)
 *     Log @ 0x1C0014B50 (Log.c)
 *     UsbhSetIdleIrpState @ 0x1C00222D8 (UsbhSetIdleIrpState.c)
 *     UsbhTrapFatal_Dbg @ 0x1C003CB70 (UsbhTrapFatal_Dbg.c)
 *     UsbhIdleIrp_ReleaseIrp @ 0x1C0055948 (UsbhIdleIrp_ReleaseIrp.c)
 */

__int64 __fastcall UsbhIdleIrp_CB_Pending(
        ULONG_PTR a1,
        __int64 a2,
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
  __int64 v15; // r9

  Log(a1, 0x10000, 1936938851, a2, (__int64)a3);
  v13 = PdoExt(v12, v10, v11, v12);
  if ( a4 == 1 )
  {
    if ( !a3 )
      UsbhTrapFatal_Dbg(a1, a1);
    UsbhSetIdleIrpState(a4 - 1, a2, 1LL, 2LL, a6);
    v15 = 2147483665LL;
    return UsbhIdleIrp_ReleaseIrp(a1, a2, a3, v15);
  }
  v14 = a4 - 4;
  if ( a4 == 4 )
  {
    if ( !a3 )
      UsbhTrapFatal_Dbg(a1, a1);
    if ( a3->Cancel )
    {
      UsbhSetIdleIrpState(v14, a2, 4LL, 0LL, a6);
      v15 = 3221225760LL;
      return UsbhIdleIrp_ReleaseIrp(a1, a2, a3, v15);
    }
    UsbhSetIdleIrpState(v14, a2, 4LL, 4LL, a6);
    IoCsqInsertIrp((PIO_CSQ)(v13 + 364), a3, 0LL);
    return 259LL;
  }
  if ( a4 == 5 )
  {
    UsbhSetIdleIrpState(v14, a2, 5LL, 3LL, a6);
    return 259LL;
  }
  UsbhSetIdleIrpState(v14, a2, a4, a5, a6);
  v15 = 3221225473LL;
  return UsbhIdleIrp_ReleaseIrp(a1, a2, a3, v15);
}

/*
 * XREFs of UsbhIdleIrp_CB_Complete @ 0x1C0055200
 * Callers:
 *     UsbhIdleIrp_Event @ 0x1C0055484 (UsbhIdleIrp_Event.c)
 * Callees:
 *     PdoExt @ 0x1C0013AD0 (PdoExt.c)
 *     Log @ 0x1C0014B50 (Log.c)
 *     UsbhSetIdleIrpState @ 0x1C00222D8 (UsbhSetIdleIrpState.c)
 *     UsbhTrapFatal_Dbg @ 0x1C003CB70 (UsbhTrapFatal_Dbg.c)
 */

__int64 __fastcall UsbhIdleIrp_CB_Complete(
        ULONG_PTR a1,
        __int64 a2,
        __int64 a3,
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

  Log(a1, 0x10000, 1936938851, a2, a3);
  v13 = PdoExt(v12, v10, v11, v12);
  if ( a4 == 1 )
  {
    if ( !a3 )
      UsbhTrapFatal_Dbg(a1, a1);
    UsbhSetIdleIrpState(a4 - 1, a2, 1LL, 4LL, a6);
    v15 = 2147483665LL;
  }
  else
  {
    v14 = a4 - 5;
    if ( a4 == 5 )
    {
      if ( !a3 )
        UsbhTrapFatal_Dbg(a1, a1);
      UsbhSetIdleIrpState(v14, a2, 5LL, 0LL, a6);
      v15 = (unsigned int)v13[358];
    }
    else if ( a4 == 6 )
    {
      if ( !a3 )
        UsbhTrapFatal_Dbg(a1, a1);
      UsbhSetIdleIrpState(v14, a2, 6LL, 0LL, a6);
      v15 = 3221225760LL;
    }
    else
    {
      UsbhSetIdleIrpState(v14, a2, a4, a5, a6);
      v15 = 3221225473LL;
    }
  }
  return UsbhIdleIrp_ReleaseIrp(a1, a2, a3, v15);
}

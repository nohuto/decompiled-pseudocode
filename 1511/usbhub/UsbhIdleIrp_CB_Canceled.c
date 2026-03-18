/*
 * XREFs of UsbhIdleIrp_CB_Canceled @ 0x1C0055270
 * Callers:
 *     UsbhIdleIrp_Event @ 0x1C00555F4 (UsbhIdleIrp_Event.c)
 * Callees:
 *     PdoExt @ 0x1C000D6E0 (PdoExt.c)
 *     Log @ 0x1C0013250 (Log.c)
 *     UsbhSetIdleIrpState @ 0x1C001FED4 (UsbhSetIdleIrpState.c)
 *     UsbhTrapFatal_Dbg @ 0x1C003CDA0 (UsbhTrapFatal_Dbg.c)
 */

__int64 __fastcall UsbhIdleIrp_CB_Canceled(
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
  v14 = a4 - 1;
  if ( a4 == 1 )
  {
    if ( !a3 )
      UsbhTrapFatal_Dbg(a1, a1);
    UsbhSetIdleIrpState(v14, a2, 1LL, a5, a6);
    v15 = 2147483665LL;
  }
  else if ( a4 == 4 )
  {
    if ( !a3 )
      UsbhTrapFatal_Dbg(a1, a1);
    UsbhSetIdleIrpState(v14, a2, 4LL, 0LL, a6);
    v15 = (unsigned int)v13[358];
  }
  else
  {
    UsbhSetIdleIrpState(v14, a2, a4, a5, a6);
    v15 = 3221225473LL;
  }
  return UsbhIdleIrp_ReleaseIrp(a1, a2, a3, v15);
}

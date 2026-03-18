/*
 * XREFs of UsbhIdleExIrp_IdleReady @ 0x1C005572C
 * Callers:
 *     UsbhIdleIrp_Event @ 0x1C0055C24 (UsbhIdleIrp_Event.c)
 * Callees:
 *     Log @ 0x1C00159D0 (Log.c)
 *     PdoExt @ 0x1C001A040 (PdoExt.c)
 *     UsbhSetIdleIrpState @ 0x1C002310C (UsbhSetIdleIrpState.c)
 *     UsbhTrapFatal_Dbg @ 0x1C0029420 (UsbhTrapFatal_Dbg.c)
 */

__int64 __fastcall UsbhIdleExIrp_IdleReady(
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
  __int64 v13; // rcx
  _DWORD *v14; // r14
  __int64 v15; // r9

  Log(a1, 0x10000, 1936938851, a2, a3);
  v14 = PdoExt(a2, v10, v11, v12);
  switch ( a4 )
  {
    case 1u:
      goto LABEL_10;
    case 5u:
      UsbhSetIdleIrpState(v13, a2, 5LL, 0LL, a6);
      v15 = (unsigned int)v14[358];
      return UsbhIdleIrp_ReleaseIrp(a1, a2, a3, v15);
    case 6u:
      UsbhSetIdleIrpState(v13, a2, 6LL, 0LL, a6);
      v15 = 3221225760LL;
      return UsbhIdleIrp_ReleaseIrp(a1, a2, a3, v15);
    case 7u:
LABEL_10:
      if ( !a3 )
        UsbhTrapFatal_Dbg(a1, a1);
      UsbhSetIdleIrpState(v13, a2, a4, 5LL, a6);
      v15 = 2147483665LL;
      break;
    case 8u:
      UsbhSetIdleIrpState(v13, a2, 8LL, 0LL, a6);
      v15 = 0LL;
      break;
    default:
      UsbhSetIdleIrpState(v13, a2, a4, a5, a6);
      v15 = 3221225473LL;
      break;
  }
  return UsbhIdleIrp_ReleaseIrp(a1, a2, a3, v15);
}

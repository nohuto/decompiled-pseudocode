/*
 * XREFs of PopShutdownSystem @ 0x140403FF4
 * Callers:
 *     PopGracefulShutdown @ 0x140403318 (PopGracefulShutdown.c)
 * Callees:
 *     DbgPrint @ 0x140131E68 (DbgPrint.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     HvlNotifyShutdown @ 0x1401EDE2C (HvlNotifyShutdown.c)
 *     DbgUnLoadImageSymbols @ 0x140246660 (DbgUnLoadImageSymbols.c)
 *     PopInvokeSystemStateHandler @ 0x1403F2FAC (PopInvokeSystemStateHandler.c)
 *     PopNotifyShutdownListener @ 0x140403F14 (PopNotifyShutdownListener.c)
 */

void __fastcall __noreturn PopShutdownSystem(int a1)
{
  int v2; // ebx
  int v3; // ebx

  PopNotifyShutdownListener();
  HvlNotifyShutdown(0);
  DbgUnLoadImageSymbols(0LL, (PVOID)0xFFFFFFFFFFFFFFFFLL, 0LL);
  if ( (PopSimulate & 0x800) != 0 && ((a1 - 4) & 0xFFFFFFFD) == 0 )
    a1 = 5;
  v2 = a1 - 4;
  if ( v2 )
  {
    v3 = v2 - 1;
    if ( !v3 )
    {
      PopInvokeSystemStateHandler(5, 0LL);
      goto LABEL_12;
    }
    if ( v3 != 1 )
LABEL_12:
      HalReturnToFirmware(3LL);
  }
  else if ( PopShutdownPowerOffPolicy )
  {
    qword_14032E4C8 = (__int64)PopShutdownHandler;
  }
  PopInvokeSystemStateHandler(4, 0LL);
  HalReturnToFirmware(1LL);
}

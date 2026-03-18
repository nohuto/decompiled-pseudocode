/*
 * XREFs of ?UmfdCreateRequestContext@@YAPEAXXZ @ 0x1C02D6AC8
 * Callers:
 *     ?UmfdClientSendAndWaitForCompletion@@YAJW4FontDriverType@@PEAVFontDriverDdiRequest@@@Z @ 0x1C02A31F0 (-UmfdClientSendAndWaitForCompletion@@YAJW4FontDriverType@@PEAVFontDriverDdiRequest@@@Z.c)
 *     ?UmfdHostSendCompleteWaitReceive@@YAJW4FontDriverType@@@Z @ 0x1C02A3CF4 (-UmfdHostSendCompleteWaitReceive@@YAJW4FontDriverType@@@Z.c)
 * Callees:
 *     <none>
 */

_QWORD *UmfdCreateRequestContext(void)
{
  _QWORD *result; // rax

  result = EngAllocMem(0, 8u, 0x71724446u);
  if ( result )
    *result = 0LL;
  return result;
}

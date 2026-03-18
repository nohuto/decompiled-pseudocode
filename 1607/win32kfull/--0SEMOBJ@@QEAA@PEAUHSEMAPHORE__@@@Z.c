/*
 * XREFs of ??0SEMOBJ@@QEAA@PEAUHSEMAPHORE__@@@Z @ 0x1C01BF4A8
 * Callers:
 *     ?vMakeInactive@RFONTOBJ@@QEAAXXZ @ 0x1C002B454 (-vMakeInactive@RFONTOBJ@@QEAAXXZ.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C002EAC0 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     GreEnableEUDC @ 0x1C0107E88 (GreEnableEUDC.c)
 *     ?CleanupPvtData@@YAXPEAVPFF@@@Z @ 0x1C02B6050 (-CleanupPvtData@@YAXPEAVPFF@@@Z.c)
 * Callees:
 *     <none>
 */

SEMOBJ *__fastcall SEMOBJ::SEMOBJ(SEMOBJ *this, HSEMAPHORE a2)
{
  *(_QWORD *)this = a2;
  GreAcquireSemaphore(a2);
  return this;
}

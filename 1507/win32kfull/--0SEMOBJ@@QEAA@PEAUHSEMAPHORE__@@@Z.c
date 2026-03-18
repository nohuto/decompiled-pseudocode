/*
 * XREFs of ??0SEMOBJ@@QEAA@PEAUHSEMAPHORE__@@@Z @ 0x1C01C1304
 * Callers:
 *     ?vMakeInactive@RFONTOBJ@@QEAAXXZ @ 0x1C002D2B8 (-vMakeInactive@RFONTOBJ@@QEAAXXZ.c)
 *     ?CleanupPvtData@@YAXPEAVPFF@@@Z @ 0x1C02B3ED0 (-CleanupPvtData@@YAXPEAVPFF@@@Z.c)
 * Callees:
 *     <none>
 */

SEMOBJ *__fastcall SEMOBJ::SEMOBJ(SEMOBJ *this, HSEMAPHORE a2)
{
  *(_QWORD *)this = a2;
  GreAcquireSemaphore(a2);
  return this;
}

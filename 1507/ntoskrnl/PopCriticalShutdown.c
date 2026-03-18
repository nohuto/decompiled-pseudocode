/*
 * XREFs of PopCriticalShutdown @ 0x1406B5F3C
 * Callers:
 *     PopCheckAndHandleThermalConditions @ 0x140170C90 (PopCheckAndHandleThermalConditions.c)
 * Callees:
 *     DbgPrint @ 0x140131E68 (DbgPrint.c)
 *     PopExecutePowerAction @ 0x1405654E8 (PopExecutePowerAction.c)
 */

__int64 PopCriticalShutdown()
{
  __int64 v1; // [rsp+30h] [rbp-38h] BYREF
  int v2; // [rsp+38h] [rbp-30h]
  _QWORD v3[5]; // [rsp+40h] [rbp-28h] BYREF

  if ( (PoDebug & 1) != 0 )
    DbgPrint("PopCriticalShutdown: type %x\n", 1);
  v2 = 0;
  v1 = 0xC000000400000006uLL;
  v3[1] = 0LL;
  v3[2] = 0LL;
  v3[0] = 0x8000000001LL;
  PopCriticalShutdownInProgress = 1;
  return PopExecutePowerAction((__int64)v3, 0, &v1, 5, 1u);
}

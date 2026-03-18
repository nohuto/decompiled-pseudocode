/*
 * XREFs of ApiSetEnterEditionCrit @ 0x1C0076018
 * Callers:
 *     RIMDeviceClassNotify @ 0x1C0075BD0 (RIMDeviceClassNotify.c)
 *     ??0ApiSetEditionCrit@@QEAA@H@Z @ 0x1C0075FF8 (--0ApiSetEditionCrit@@QEAA@H@Z.c)
 * Callees:
 *     IsEnterEditionCritSupported_0 @ 0x1C0002CA0 (IsEnterEditionCritSupported_0.c)
 */

__int64 ApiSetEnterEditionCrit()
{
  if ( (int)IsEnterEditionCritSupported_0() < 0 )
    return 0LL;
  else
    return EnterEditionCrit_0();
}

/*
 * XREFs of HT_DestroyDeviceHalftoneInfo @ 0x14017EC60
 * Callers:
 *     HT_DestroyDeviceHalftoneInfoWrap @ 0x14017EAF0 (HT_DestroyDeviceHalftoneInfoWrap.c)
 *     ?bDisableHalftone@PDEVOBJ@@QEAAHXZ @ 0x14017EB08 (-bDisableHalftone@PDEVOBJ@@QEAAHXZ.c)
 *     ?pDevHTInfo@PDEVOBJ@@QEAAPEAXXZ @ 0x1401829CC (-pDevHTInfo@PDEVOBJ@@QEAAPEAXXZ.c)
 * Callees:
 *     CleanUpDHI @ 0x14017ECC8 (CleanUpDHI.c)
 */

__int64 __fastcall HT_DestroyDeviceHalftoneInfo(_DWORD *a1)
{
  if ( a1 && a1[10] == 1414021956 )
    return CleanUpDHI(a1);
  else
    return 0LL;
}

/*
 * XREFs of HT_DestroyDeviceHalftoneInfo @ 0x1C012B7F8
 * Callers:
 *     ?pDevHTInfo@PDEVOBJ@@QEAAPEAXXZ @ 0x1C0029594 (-pDevHTInfo@PDEVOBJ@@QEAAPEAXXZ.c)
 *     HT_DestroyDeviceHalftoneInfoWrap @ 0x1C012B7F0 (HT_DestroyDeviceHalftoneInfoWrap.c)
 *     PDEVOBJ_bDisableHalftoneWrap @ 0x1C0135C90 (PDEVOBJ_bDisableHalftoneWrap.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HT_DestroyDeviceHalftoneInfo(_DWORD *a1)
{
  if ( a1 && a1[10] == 1414021956 )
    return CleanUpDHI(a1);
  else
    return 0LL;
}

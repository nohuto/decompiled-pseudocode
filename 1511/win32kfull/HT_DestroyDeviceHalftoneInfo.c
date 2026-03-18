/*
 * XREFs of HT_DestroyDeviceHalftoneInfo @ 0x1C010A308
 * Callers:
 *     ?pDevHTInfo@PDEVOBJ@@QEAAPEAXXZ @ 0x1C001BFE0 (-pDevHTInfo@PDEVOBJ@@QEAAPEAXXZ.c)
 *     ?bDisableHalftone@PDEVOBJ@@QEAAHXZ @ 0x1C001CB98 (-bDisableHalftone@PDEVOBJ@@QEAAHXZ.c)
 *     HT_DestroyDeviceHalftoneInfoWrap @ 0x1C010A300 (HT_DestroyDeviceHalftoneInfoWrap.c)
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

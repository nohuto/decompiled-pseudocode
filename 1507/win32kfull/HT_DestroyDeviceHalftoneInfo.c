/*
 * XREFs of HT_DestroyDeviceHalftoneInfo @ 0x1C00FE028
 * Callers:
 *     ?pDevHTInfo@PDEVOBJ@@QEAAPEAXXZ @ 0x1C0030758 (-pDevHTInfo@PDEVOBJ@@QEAAPEAXXZ.c)
 *     HT_DestroyDeviceHalftoneInfoWrap @ 0x1C00FE020 (HT_DestroyDeviceHalftoneInfoWrap.c)
 *     ?bDisableHalftone@PDEVOBJ@@QEAAHXZ @ 0x1C01263CC (-bDisableHalftone@PDEVOBJ@@QEAAHXZ.c)
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

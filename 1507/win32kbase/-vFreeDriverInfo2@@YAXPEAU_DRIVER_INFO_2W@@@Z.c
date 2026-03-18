/*
 * XREFs of ?vFreeDriverInfo2@@YAXPEAU_DRIVER_INFO_2W@@@Z @ 0x1C00B2C60
 * Callers:
 *     NtGdiOpenDCW @ 0x1C0053200 (NtGdiOpenDCW.c)
 * Callees:
 *     FreeThreadBufferWithTag @ 0x1C000B380 (FreeThreadBufferWithTag.c)
 */

void __fastcall vFreeDriverInfo2(struct _DRIVER_INFO_2W *a1)
{
  if ( a1 )
    FreeThreadBufferWithTag((__int64)a1);
}

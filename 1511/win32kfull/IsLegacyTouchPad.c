/*
 * XREFs of IsLegacyTouchPad @ 0x1C0098A64
 * Callers:
 *     CheckPointerDeviceConfiguration @ 0x1C0098070 (CheckPointerDeviceConfiguration.c)
 *     _GetPrecisionTouchPadConfiguration @ 0x1C0098878 (_GetPrecisionTouchPadConfiguration.c)
 *     GetTelemDeviceData @ 0x1C01D1530 (GetTelemDeviceData.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsLegacyTouchPad(__int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 48) )
    return 0LL;
  result = 1LL;
  if ( *(_WORD *)(a1 + 676) != 1 )
    return 0LL;
  return result;
}

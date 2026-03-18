/*
 * XREFs of IsLegacyTouchPad @ 0x1C0039CDC
 * Callers:
 *     _GetPrecisionTouchPadConfiguration @ 0x1C0039AF0 (_GetPrecisionTouchPadConfiguration.c)
 *     CheckPointerDeviceConfiguration @ 0x1C0145214 (CheckPointerDeviceConfiguration.c)
 *     GetTelemDeviceData @ 0x1C01CF8CC (GetTelemDeviceData.c)
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

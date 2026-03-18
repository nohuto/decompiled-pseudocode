/*
 * XREFs of IsLegacyTouchPad @ 0x1C00E4CD0
 * Callers:
 *     _GetPrecisionTouchPadConfiguration @ 0x1C00E4AD0 (_GetPrecisionTouchPadConfiguration.c)
 *     CheckPointerDeviceConfiguration @ 0x1C00E61F0 (CheckPointerDeviceConfiguration.c)
 *     GetTelemDeviceData @ 0x1C01C9258 (GetTelemDeviceData.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsLegacyTouchPad(__int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 48) )
    return 0LL;
  result = 1LL;
  if ( *(_WORD *)(a1 + 740) != 1 )
    return 0LL;
  return result;
}

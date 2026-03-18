/*
 * XREFs of _SetTouchWindowFlags @ 0x1C00FFB48
 * Callers:
 *     NtUserModifyWindowTouchCapability @ 0x1C00FFAC0 (NtUserModifyWindowTouchCapability.c)
 * Callees:
 *     InternalRemoveProp @ 0x1C008748C (InternalRemoveProp.c)
 */

__int64 __fastcall SetTouchWindowFlags(__int64 a1, int a2)
{
  unsigned int v3; // r11d

  if ( a2 )
    return InternalSetProp(a1, (unsigned __int16)gatomTouchFlags, a2, 5);
  InternalRemoveProp(a1, gatomTouchFlags, 1);
  return v3;
}

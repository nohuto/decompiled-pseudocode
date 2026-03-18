/*
 * XREFs of _SetWindowContextHelpId @ 0x1C014D700
 * Callers:
 *     <none>
 * Callees:
 *     InternalRemoveProp @ 0x1C007FC50 (InternalRemoveProp.c)
 */

__int64 __fastcall SetWindowContextHelpId(__int64 a1, int a2)
{
  unsigned int v3; // r11d

  if ( a2 )
    return InternalSetProp(a1, *(unsigned __int16 *)(gpsi + 1360LL), a2, 5);
  InternalRemoveProp(a1, *(_WORD *)(gpsi + 1360LL), 1);
  return v3;
}

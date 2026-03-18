/*
 * XREFs of bInitOneStockFont @ 0x1C0378858
 * Callers:
 *     bInitStockFontsInternal @ 0x1C03783D8 (bInitStockFontsInternal.c)
 * Callees:
 *     ?bQueryValueKey@@YAHPEAGPEAXPEAU_KEY_VALUE_PARTIAL_INFORMATION@@K@Z @ 0x1C013D984 (-bQueryValueKey@@YAHPEAGPEAXPEAU_KEY_VALUE_PARTIAL_INFORMATION@@K@Z.c)
 *     memmove @ 0x1C015D180 (memmove.c)
 *     bInitOneStockFontInternal @ 0x1C0378B8C (bInitOneStockFontInternal.c)
 */

__int64 __fastcall bInitOneStockFont(
        const WCHAR *a1,
        __int64 a2,
        __int64 a3,
        void *a4,
        unsigned int *KeyValueInformation,
        __int64 a6,
        unsigned __int16 *a7,
        void *a8)
{
  unsigned int v8; // ebx

  v8 = 0;
  if ( bQueryValueKey(a1, a4, KeyValueInformation, 0x200u) )
  {
    memmove(a8, KeyValueInformation + 3, KeyValueInformation[2]);
    return (unsigned int)bInitOneStockFontInternal(a7);
  }
  return v8;
}

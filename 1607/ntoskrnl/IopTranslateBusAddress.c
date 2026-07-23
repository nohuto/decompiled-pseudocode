/*
 * XREFs of IopTranslateBusAddress @ 0x1405594A8
 * Callers:
 *     IopGenericTranslateOrdering @ 0x140559420 (IopGenericTranslateOrdering.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IopTranslateBusAddress(
        PHYSICAL_ADDRESS BusAddress,
        char a2,
        LARGE_INTEGER *TranslatedAddress,
        _BYTE *a4)
{
  ULONG v6; // edi
  ULONG AddressSpace; // [rsp+48h] [rbp+10h] BYREF

  if ( ((a2 - 3) & 0xFB) != 0 )
  {
    if ( a2 != 1 )
      return 3221225485LL;
    v6 = 1;
  }
  else
  {
    v6 = 0;
  }
  AddressSpace = v6;
  if ( HalTranslateBusAddress(Isa, 0, BusAddress, &AddressSpace, TranslatedAddress) )
  {
    if ( (AddressSpace & 0xFFFFFFF9) == 0 )
    {
      if ( !v6 && a2 == 7 )
        *a4 = 7;
      else
        *a4 = 3;
      return 0LL;
    }
    if ( ((AddressSpace - 1) & 0xFFFFFFFD) == 0 )
    {
      *a4 = 1;
      return 0LL;
    }
    return 3221225485LL;
  }
  return 3221225473LL;
}

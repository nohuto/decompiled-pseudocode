/*
 * XREFs of ?bQueryValueKey@@YAHPEAGPEAXPEAU_KEY_VALUE_PARTIAL_INFORMATION@@K@Z @ 0x1C00BB29C
 * Callers:
 *     bInitStockFontsInternal @ 0x1C037D158 (bInitStockFontsInternal.c)
 *     bInitOneStockFont @ 0x1C037D6F8 (bInitOneStockFont.c)
 *     hfontInitDefaultGuiFont @ 0x1C037D74C (hfontInitDefaultGuiFont.c)
 *     InitializeDefaultFamilyFonts @ 0x1C037D90C (InitializeDefaultFamilyFonts.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall bQueryValueKey(PCWSTR SourceString, HANDLE KeyHandle, PVOID KeyValueInformation, ULONG Length)
{
  ULONG ResultLength; // [rsp+30h] [rbp-28h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-20h] BYREF

  RtlInitUnicodeString(&DestinationString, SourceString);
  return ZwQueryValueKey(
           KeyHandle,
           &DestinationString,
           KeyValuePartialInformation,
           KeyValueInformation,
           Length,
           &ResultLength) >= 0;
}

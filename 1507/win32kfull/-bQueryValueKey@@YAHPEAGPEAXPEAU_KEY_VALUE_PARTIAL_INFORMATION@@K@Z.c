/*
 * XREFs of ?bQueryValueKey@@YAHPEAGPEAXPEAU_KEY_VALUE_PARTIAL_INFORMATION@@K@Z @ 0x1C013D984
 * Callers:
 *     bInitStockFontsInternal @ 0x1C03783D8 (bInitStockFontsInternal.c)
 *     bInitOneStockFont @ 0x1C0378858 (bInitOneStockFont.c)
 *     hfontInitDefaultGuiFont @ 0x1C03788AC (hfontInitDefaultGuiFont.c)
 *     InitializeDefaultFamilyFonts @ 0x1C0378A6C (InitializeDefaultFamilyFonts.c)
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

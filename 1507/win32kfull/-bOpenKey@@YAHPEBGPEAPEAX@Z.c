/*
 * XREFs of ?bOpenKey@@YAHPEBGPEAPEAX@Z @ 0x1C013DA1C
 * Callers:
 *     ?FinishStockFontInitInternal@@YAXPEBGH@Z @ 0x1C013DA84 (-FinishStockFontInitInternal@@YAXPEBGH@Z.c)
 *     bInitStockFontsInternal @ 0x1C03783D8 (bInitStockFontsInternal.c)
 *     hfontInitDefaultGuiFont @ 0x1C03788AC (hfontInitDefaultGuiFont.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall bOpenKey(PCWSTR SourceString, PHANDLE KeyHandle)
{
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-48h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-38h] BYREF

  RtlInitUnicodeString(&DestinationString, SourceString);
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.RootDirectory = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  return ZwOpenKey(KeyHandle, 0, &ObjectAttributes) >= 0;
}

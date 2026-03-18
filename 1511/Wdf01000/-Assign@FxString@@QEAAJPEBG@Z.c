/*
 * XREFs of ?Assign@FxString@@QEAAJPEBG@Z @ 0x1C00280AC
 * Callers:
 *     imp_WdfRegistryQueryMultiString @ 0x1C0028310 (imp_WdfRegistryQueryMultiString.c)
 *     imp_WdfDriverRetrieveVersionString @ 0x1C0068030 (imp_WdfDriverRetrieveVersionString.c)
 * Callees:
 *     ?Assign@FxString@@QEAAJPEBU_UNICODE_STRING@@@Z @ 0x1C0028010 (-Assign@FxString@@QEAAJPEBU_UNICODE_STRING@@@Z.c)
 */

int __fastcall FxString::Assign(FxString *this, const wchar_t *SourceString)
{
  _UNICODE_STRING string; // [rsp+20h] [rbp-18h] BYREF

  RtlInitUnicodeString(&string, SourceString);
  return FxString::Assign(this, &string);
}

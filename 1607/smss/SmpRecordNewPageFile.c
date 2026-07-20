/*
 * XREFs of SmpRecordNewPageFile @ 0x140009478
 * Callers:
 *     SmpCreatePagingFile @ 0x1400093FC (SmpCreatePagingFile.c)
 * Callees:
 *     SmpFreeSavedRegistryEntry @ 0x140009354 (SmpFreeSavedRegistryEntry.c)
 */

void __fastcall SmpRecordNewPageFile(PCUNICODE_STRING String2)
{
  __int64 v1; // rbx
  _QWORD *v3; // rdi
  LONG v4; // eax

  v1 = SmpExistingPageFilesList;
  while ( (__int64 *)v1 != &SmpExistingPageFilesList )
  {
    v3 = (_QWORD *)v1;
    v4 = RtlCompareUnicodeString((PCUNICODE_STRING)(v1 + 16), String2, 1u);
    v1 = *(_QWORD *)v1;
    if ( !v4 )
      SmpFreeSavedRegistryEntry(v3);
  }
}

/*
 * XREFs of MiLoadUserSymbols @ 0x14054AA4C
 * Callers:
 *     MiMapViewOfImageSection @ 0x1403F5860 (MiMapViewOfImageSection.c)
 * Callees:
 *     DbgUnicodeStringToAnsiString @ 0x1400027D4 (DbgUnicodeStringToAnsiString.c)
 *     MI_REFERENCE_CONTROL_AREA_FILE @ 0x14003ABE0 (MI_REFERENCE_CONTROL_AREA_FILE.c)
 *     MI_DEREFERENCE_CONTROL_AREA_FILE @ 0x14003AD10 (MI_DEREFERENCE_CONTROL_AREA_FILE.c)
 *     DbgLoadUserImageSymbols @ 0x140142398 (DbgLoadUserImageSymbols.c)
 *     RtlFreeAnsiString @ 0x140445624 (RtlFreeAnsiString.c)
 */

void __fastcall MiLoadUserSymbols(__int64 a1, __int64 a2, __int64 a3)
{
  ULONG_PTR v6; // rax
  unsigned __int64 v7; // rsi
  __int64 v8; // rcx
  int v9; // r15d
  int v10; // r12d
  int v11; // ebx
  UNICODE_STRING UnicodeString; // [rsp+30h] [rbp-28h] BYREF

  v6 = MI_REFERENCE_CONTROL_AREA_FILE(a1);
  v7 = v6;
  if ( *(_WORD *)(v6 + 88) )
  {
    v8 = *(_QWORD *)(*(_QWORD *)a1 + 56LL);
    v9 = *(_DWORD *)(v8 + 68);
    v10 = *(_DWORD *)(v8 + 60);
    v11 = DbgUnicodeStringToAnsiString((PANSI_STRING)&UnicodeString, (PCUNICODE_STRING)(v6 + 88));
    MI_DEREFERENCE_CONTROL_AREA_FILE(a1, v7);
    if ( v11 == 1 )
    {
      DbgLoadUserImageSymbols((__int64)&UnicodeString, a2, a3, v9, v10);
      RtlFreeAnsiString(&UnicodeString);
    }
  }
  else
  {
    MI_DEREFERENCE_CONTROL_AREA_FILE(a1, v6);
  }
}

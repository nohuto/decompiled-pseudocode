/*
 * XREFs of ?TryGlyphSetHasSameContent@QueryFontTreeRequest@@CA_NPEAX0I@Z @ 0x1C02D7AB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall QueryFontTreeRequest::TryGlyphSetHasSameContent(char *Source2, char *Source1, unsigned int a3)
{
  __int64 v3; // rbx
  char *v7; // r14
  char *v8; // rsi
  unsigned int i; // ebx
  char *v10; // r13
  char *v11; // r12

  v3 = a3;
  if ( RtlCompareMemory(Source1, Source2, 0x10uLL) != 16 )
    return 0;
  v7 = &Source1[v3];
  v8 = &Source1[16 * *((unsigned int *)Source1 + 3) + 16];
  for ( i = 0; i < *((_DWORD *)Source1 + 3); ++i )
  {
    v10 = &Source1[16 * i];
    v11 = &Source2[16 * i];
    if ( RtlCompareMemory(v10 + 16, v11 + 16, 8uLL) != 8 )
      return 0;
    if ( *((_QWORD *)v10 + 3) - (_QWORD)Source1 != *((_QWORD *)v11 + 3) - (_QWORD)Source2 )
      return 0;
  }
  return RtlCompareMemory(v8, &Source2[16 * *((unsigned int *)Source1 + 3) + 16], v7 - v8) == v7 - v8;
}

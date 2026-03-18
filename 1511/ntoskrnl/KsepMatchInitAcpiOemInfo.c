/*
 * XREFs of KsepMatchInitAcpiOemInfo @ 0x14076CE04
 * Callers:
 *     KsepMatchInitMachineInfo @ 0x14076CABC (KsepMatchInitMachineInfo.c)
 * Callees:
 *     memset @ 0x140166CC0 (memset.c)
 *     KsepStringAnsiToUnicode @ 0x140544F54 (KsepStringAnsiToUnicode.c)
 */

__int64 __fastcall KsepMatchInitAcpiOemInfo(__int64 a1)
{
  NTSTATUS v2; // edi
  __int64 Table; // rax
  __int64 v4; // rbx

  v2 = -1073741275;
  memset(&qword_14031BB30, 0, 0x38uLL);
  dword_14031BB5C = -1;
  dword_14031BB60 = -1;
  memset(&qword_14031BAF8, 0, 0x38uLL);
  dword_14031BB24 = -1;
  Table = HalAcpiGetTableEx(a1, 1346584902LL, 0LL, 0LL);
  v4 = Table;
  if ( Table )
  {
    v2 = KsepStringAnsiToUnicode(word_14031BAB0, 0xEu, (char *)(Table + 10), 6u);
    if ( v2 >= 0 )
    {
      v2 = KsepStringAnsiToUnicode(word_14031B870, 0x12u, (char *)(v4 + 16), 8u);
      if ( v2 >= 0 )
      {
        v2 = KsepStringAnsiToUnicode(word_14031BAA0, 0xAu, (char *)(v4 + 28), 4u);
        if ( v2 >= 0 )
        {
          qword_14031BB30 = (__int64)word_14031BAB0;
          qword_14031BB38 = (__int64)word_14031BAA0;
          dword_14031BB5C = *(unsigned __int8 *)(v4 + 8);
          dword_14031BB60 = *(_DWORD *)(v4 + 32);
          qword_14031BAF8 = (__int64)word_14031BAB0;
          qword_14031BB00 = (__int64)word_14031B870;
          dword_14031BB24 = *(_DWORD *)(v4 + 24);
        }
      }
    }
  }
  return (unsigned int)v2;
}

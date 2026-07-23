/*
 * XREFs of KsepMatchInitAcpiOemInfo @ 0x1407B7A14
 * Callers:
 *     KsepMatchInitMachineInfo @ 0x1407B76CC (KsepMatchInitMachineInfo.c)
 * Callees:
 *     memset @ 0x140171AC0 (memset.c)
 *     KsepStringAnsiToUnicode @ 0x140579544 (KsepStringAnsiToUnicode.c)
 */

__int64 __fastcall KsepMatchInitAcpiOemInfo(__int64 a1)
{
  NTSTATUS v2; // edi
  __int64 Table; // rax
  __int64 v4; // rbx

  v2 = -1073741275;
  memset(&qword_140341160, 0, 0x38uLL);
  dword_14034118C = -1;
  dword_140341190 = -1;
  memset(&qword_1403413B0, 0, 0x38uLL);
  dword_1403413DC = -1;
  Table = HalAcpiGetTableEx(a1, 1346584902LL, 0LL, 0LL);
  v4 = Table;
  if ( Table )
  {
    v2 = KsepStringAnsiToUnicode(word_140341420, 0xEu, (char *)(Table + 10), 6u);
    if ( v2 >= 0 )
    {
      v2 = KsepStringAnsiToUnicode(word_140341148, 0x12u, (char *)(v4 + 16), 8u);
      if ( v2 >= 0 )
      {
        v2 = KsepStringAnsiToUnicode(word_140341138, 0xAu, (char *)(v4 + 28), 4u);
        if ( v2 >= 0 )
        {
          qword_140341160 = (__int64)word_140341420;
          qword_140341168 = (__int64)word_140341138;
          dword_14034118C = *(unsigned __int8 *)(v4 + 8);
          dword_140341190 = *(_DWORD *)(v4 + 32);
          qword_1403413B0 = (__int64)word_140341420;
          qword_1403413B8 = (__int64)word_140341148;
          dword_1403413DC = *(_DWORD *)(v4 + 24);
        }
      }
    }
  }
  return (unsigned int)v2;
}

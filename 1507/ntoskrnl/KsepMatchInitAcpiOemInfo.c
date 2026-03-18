/*
 * XREFs of KsepMatchInitAcpiOemInfo @ 0x1407E1FE4
 * Callers:
 *     KsepMatchInitMachineInfo @ 0x1407E1C9C (KsepMatchInitMachineInfo.c)
 * Callees:
 *     memset @ 0x140195A80 (memset.c)
 *     KsepStringAnsiToUnicode @ 0x1405BBAFC (KsepStringAnsiToUnicode.c)
 */

__int64 __fastcall KsepMatchInitAcpiOemInfo(__int64 a1)
{
  NTSTATUS v2; // edi
  __int64 Table; // rax
  __int64 v4; // rbx

  v2 = -1073741275;
  memset(&qword_14036BE30, 0, 0x38uLL);
  dword_14036BE5C = -1;
  dword_14036BE60 = -1;
  memset(&qword_14036BDF8, 0, 0x38uLL);
  dword_14036BE24 = -1;
  Table = HalAcpiGetTableEx(a1, 1346584902LL, 0LL, 0LL);
  v4 = Table;
  if ( Table )
  {
    v2 = KsepStringAnsiToUnicode(word_14036BDB0, 0xEu, (char *)(Table + 10), 6u);
    if ( v2 >= 0 )
    {
      v2 = KsepStringAnsiToUnicode(word_14036BB70, 0x12u, (char *)(v4 + 16), 8u);
      if ( v2 >= 0 )
      {
        v2 = KsepStringAnsiToUnicode(word_14036BDA0, 0xAu, (char *)(v4 + 28), 4u);
        if ( v2 >= 0 )
        {
          qword_14036BE30 = (__int64)word_14036BDB0;
          qword_14036BE38 = (__int64)word_14036BDA0;
          dword_14036BE5C = *(unsigned __int8 *)(v4 + 8);
          dword_14036BE60 = *(_DWORD *)(v4 + 32);
          qword_14036BDF8 = (__int64)word_14036BDB0;
          qword_14036BE00 = (__int64)word_14036BB70;
          dword_14036BE24 = *(_DWORD *)(v4 + 24);
        }
      }
    }
  }
  return (unsigned int)v2;
}

/*
 * XREFs of RtlpDidUnicodeToOemWork @ 0x1404A8028
 * Callers:
 *     RtlUpcaseUnicodeStringToOemString @ 0x1404A7C18 (RtlUpcaseUnicodeStringToOemString.c)
 *     RtlUnicodeStringToCountedOemString @ 0x1404A7D00 (RtlUnicodeStringToCountedOemString.c)
 *     RtlUpcaseUnicodeStringToCountedOemString @ 0x1404A7F54 (RtlUpcaseUnicodeStringToCountedOemString.c)
 * Callees:
 *     <none>
 */

char __fastcall RtlpDidUnicodeToOemWork(unsigned __int16 *a1, __int64 a2)
{
  char v2; // r9
  unsigned int v3; // r8d
  unsigned int v5; // edi
  unsigned int v6; // r10d
  unsigned int v7; // r11d
  __int64 v8; // r15
  unsigned int i; // ebx
  __int64 v10; // rcx
  __int64 v11; // rax
  bool v12; // zf

  v2 = 1;
  if ( (_BYTE)NlsMbOemCodePageTag )
  {
    v5 = *a1;
    v6 = 0;
    v7 = 0;
    if ( !*a1 )
      return v2;
    v8 = *((_QWORD *)a1 + 1);
    for ( i = 1; ; ++i )
    {
      v10 = *(unsigned __int8 *)(v6 + v8);
      if ( NlsOemLeadByteInfoTable[v10] && i < v5 )
      {
        v11 = i;
        ++v6;
        ++i;
        v12 = ((char)v10 << 8) + *(unsigned __int8 *)(v11 + v8) == OemDefaultChar;
      }
      else
      {
        v12 = (char)v10 == (unsigned __int8)OemDefaultChar;
      }
      if ( v12 && *(_WORD *)(*(_QWORD *)(a2 + 8) + 2LL * v7) != OemTransUniDefaultChar )
        break;
      ++v6;
      ++v7;
      if ( v6 >= v5 )
        return v2;
    }
    return 0;
  }
  v3 = 0;
  if ( *a1 )
  {
    while ( *(char *)(v3 + *((_QWORD *)a1 + 1)) != (unsigned __int8)OemDefaultChar
         || *(_WORD *)(*(_QWORD *)(a2 + 8) + 2LL * v3) == OemTransUniDefaultChar )
    {
      if ( ++v3 >= *a1 )
        return v2;
    }
    return 0;
  }
  return v2;
}

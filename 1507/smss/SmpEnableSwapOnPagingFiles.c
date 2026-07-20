/*
 * XREFs of SmpEnableSwapOnPagingFiles @ 0x14000AB6C
 * Callers:
 *     SmpCreatePagingFiles @ 0x14000AF10 (SmpCreatePagingFiles.c)
 * Callees:
 *     SmpCreatePagingFile @ 0x14000AA84 (SmpCreatePagingFile.c)
 */

void __fastcall SmpEnableSwapOnPagingFiles(__int64 **a1, __int16 a2)
{
  __int64 *i; // rbx
  ULONG v5; // ebp

  for ( i = *a1; i != (__int64 *)a1; i = (__int64 *)*i )
  {
    if ( (*((_BYTE *)i + 92) & 1) != 0 && (a2 == 63 || *(_WORD *)(i[3] + 8) == a2) )
    {
      v5 = *((_DWORD *)i + 22) | 0x20000000;
      if ( (int)SmpCreatePagingFile(
                  (UNICODE_STRING *)i + 1,
                  (union _LARGE_INTEGER)i[9],
                  (union _LARGE_INTEGER)i[10],
                  v5) >= 0 )
        *((_DWORD *)i + 22) = v5;
    }
  }
}

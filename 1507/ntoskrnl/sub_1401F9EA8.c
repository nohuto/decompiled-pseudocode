/*
 * XREFs of sub_1401F9EA8 @ 0x1401F9EA8
 * Callers:
 *     RtlStringCchCopyExW @ 0x140019AA0 (RtlStringCchCopyExW.c)
 *     RtlStringCchPrintfExW @ 0x140019C20 (RtlStringCchPrintfExW.c)
 *     RtlStringCchCatExW @ 0x14015DC20 (RtlStringCchCatExW.c)
 * Callees:
 *     memset @ 0x140195A80 (memset.c)
 */

__int64 __fastcall sub_1401F9EA8(_WORD *a1, size_t a2, __int64 a3, _QWORD *a4, size_t *a5, __int16 a6)
{
  size_t v7; // rdi
  _WORD *v10; // rdx
  _WORD *v11; // rax

  v7 = a2 >> 1;
  if ( a2 >> 1 && (a6 & 0x1000) != 0 )
  {
    v10 = &a1[a3];
    *a4 = v10;
    *a5 = v7 - a3;
    *v10 = 0;
  }
  if ( (a6 & 0x400) != 0 )
  {
    memset(a1, (unsigned __int8)a6, a2);
    if ( (_BYTE)a6 )
    {
      if ( !v7 )
        return 0LL;
      *a5 = 1LL;
      v11 = &a1[v7 - 1];
      *a4 = v11;
      *v11 = 0;
    }
    else
    {
      *a4 = a1;
      *a5 = v7;
    }
  }
  if ( v7 && (a6 & 0x800) != 0 )
  {
    *a4 = a1;
    *a5 = v7;
    *a1 = 0;
  }
  return 0LL;
}

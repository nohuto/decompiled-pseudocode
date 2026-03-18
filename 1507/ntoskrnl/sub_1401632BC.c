/*
 * XREFs of sub_1401632BC @ 0x1401632BC
 * Callers:
 *     RtlStringCbPrintfA @ 0x14016326C (RtlStringCbPrintfA.c)
 *     RtlStringCbPrintfExA @ 0x1401DC21C (RtlStringCbPrintfExA.c)
 * Callees:
 *     _vsnprintf @ 0x140171B2C (_vsnprintf.c)
 */

__int64 __fastcall sub_1401632BC(char *a1, __int64 a2, unsigned __int64 *a3, const char *a4, va_list Args)
{
  unsigned __int64 v5; // rbx
  unsigned int v8; // ebp
  int v9; // eax

  v5 = a2 - 1;
  v8 = 0;
  v9 = vsnprintf(a1, a2 - 1, a4, Args);
  if ( v9 < 0 || v9 > v5 )
  {
    a1[v5] = 0;
    v8 = -2147483643;
  }
  else if ( v9 == v5 )
  {
    a1[v5] = 0;
  }
  else
  {
    v5 = v9;
  }
  if ( a3 )
    *a3 = v5;
  return v8;
}

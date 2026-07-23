/*
 * XREFs of RtlStringCbPrintfA @ 0x180082D34
 * Callers:
 *     RtlpVerCompare @ 0x18002B6B8 (RtlpVerCompare.c)
 * Callees:
 *     _vsnprintf @ 0x180098180 (_vsnprintf.c)
 */

__int64 RtlStringCbPrintfA(char *Buffer, __int64 a2, const char *a3, ...)
{
  int v3; // edi
  unsigned __int64 v5; // rbx
  int v6; // eax
  va_list ArgList; // [rsp+58h] [rbp+20h] BYREF

  va_start(ArgList, a3);
  v3 = 0;
  if ( (unsigned __int64)(a2 - 1) > 0x7FFFFFFE )
    v3 = -1073741811;
  if ( v3 < 0 )
  {
    if ( a2 )
      *Buffer = 0;
  }
  else
  {
    v5 = a2 - 1;
    v3 = 0;
    v6 = vsnprintf(Buffer, a2 - 1, a3, ArgList);
    if ( v6 < 0 || v6 > v5 )
    {
      Buffer[v5] = 0;
      return (unsigned int)-2147483643;
    }
    else if ( v6 == v5 )
    {
      Buffer[v5] = 0;
    }
  }
  return (unsigned int)v3;
}

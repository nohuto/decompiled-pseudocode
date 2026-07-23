/*
 * XREFs of ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x180102D38
 * Callers:
 *     ResCGetIndexedName @ 0x180095790 (ResCGetIndexedName.c)
 *     ResCRequestInitMutex @ 0x1801032B4 (ResCRequestInitMutex.c)
 *     ResCGetHighestCacheIndex @ 0x180104DDC (ResCGetHighestCacheIndex.c)
 *     ResCGetName @ 0x180105058 (ResCGetName.c)
 *     ResCGetSubIndexedName @ 0x18010543C (ResCGetSubIndexedName.c)
 * Callees:
 *     _vsnwprintf_s @ 0x1800A1440 (_vsnwprintf_s.c)
 */

__int64 StringCchPrintfW(wchar_t *Buffer, size_t a2, const unsigned __int16 *a3, ...)
{
  int v4; // edi
  unsigned __int64 v5; // rbx
  int v6; // eax
  va_list va; // [rsp+78h] [rbp+20h] BYREF

  va_start(va, a3);
  v4 = 0;
  if ( a2 - 1 > 0x7FFFFFFE )
    v4 = -2147024809;
  if ( v4 < 0 )
  {
    if ( a2 )
      *Buffer = 0;
  }
  else
  {
    v5 = a2 - 1;
    v4 = 0;
    v6 = vsnwprintf_s(Buffer, a2, a2 - 1, a3, va);
    if ( v6 < 0 || v6 > v5 )
    {
      Buffer[v5] = 0;
      return (unsigned int)-2147024774;
    }
    else if ( v6 == v5 )
    {
      Buffer[v5] = 0;
    }
  }
  return (unsigned int)v4;
}

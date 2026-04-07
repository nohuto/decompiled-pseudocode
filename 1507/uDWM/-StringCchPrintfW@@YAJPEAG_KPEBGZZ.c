/*
 * XREFs of ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x180079FF8
 * Callers:
 *     ?OpenComposedEvent@@YAJIKPEAPEAX@Z @ 0x180042AD4 (-OpenComposedEvent@@YAJIKPEAPEAX@Z.c)
 *     ?QueryFeatureOverride@@YAHIPEAW4reg_FeatureEnabledState@@@Z @ 0x1800791BC (-QueryFeatureOverride@@YAHIPEAW4reg_FeatureEnabledState@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 StringCchPrintfW(wchar_t *Buffer, __int64 a2, const unsigned __int16 *a3, ...)
{
  int v4; // edi
  unsigned __int64 v5; // rbx
  int v6; // eax
  va_list Args; // [rsp+68h] [rbp+20h] BYREF

  va_start(Args, a3);
  v4 = 0;
  if ( (unsigned __int64)(a2 - 1) > 0x7FFFFFFE )
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
    v6 = _vsnwprintf(Buffer, a2 - 1, a3, Args);
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

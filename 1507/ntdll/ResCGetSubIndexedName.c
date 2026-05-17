/*
 * XREFs of ResCGetSubIndexedName @ 0x1800FB67C
 * Callers:
 *     ResCRuntimeGetSegmentDataEx @ 0x1800F7750 (ResCRuntimeGetSegmentDataEx.c)
 * Callees:
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1800F8A8C (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ResCGetIndexedName @ 0x1800FAE54 (ResCGetIndexedName.c)
 *     ResCGetName @ 0x1800FB298 (ResCGetName.c)
 */

__int64 __fastcall ResCGetSubIndexedName(__int64 a1, __int64 a2, int a3, int a4, wchar_t *Buffer)
{
  unsigned int v5; // ebx
  int v7; // eax

  v5 = 0;
  if ( !Buffer )
    return 0LL;
  if ( a3 >= 0 )
  {
    if ( a4 >= 0 )
    {
      v7 = StringCchPrintfW(Buffer, 0x103uLL, L"%s\\%s%04d\\%s%d%s", a1, L"rc", a3, L"Segment", a4, L".cmf");
      Buffer[259] = 0;
      LOBYTE(v5) = v7 >= 0;
      return v5;
    }
    else
    {
      return ResCGetIndexedName(a1, 261LL, a3, Buffer);
    }
  }
  else
  {
    if ( a4 >= 0 )
      return 0LL;
    return ResCGetName(a1, 261, Buffer);
  }
}

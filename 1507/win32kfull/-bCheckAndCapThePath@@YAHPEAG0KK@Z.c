/*
 * XREFs of ?bCheckAndCapThePath@@YAHPEAG0KK@Z @ 0x1C02A6050
 * Callers:
 *     NtGdiAddFontResourceW @ 0x1C013E030 (NtGdiAddFontResourceW.c)
 *     NtGdiGetFontResourceInfoInternalW @ 0x1C02A7100 (NtGdiGetFontResourceInfoInternalW.c)
 *     NtGdiRemoveFontResourceW @ 0x1C02A8110 (NtGdiRemoveFontResourceW.c)
 * Callees:
 *     cCapString @ 0x1C0033368 (cCapString.c)
 */

__int64 __fastcall bCheckAndCapThePath(unsigned __int16 *a1, unsigned __int16 *a2, unsigned int a3, int a4)
{
  unsigned int v5; // ebx
  __int64 v6; // r14
  unsigned __int16 *v8; // rdi
  int v9; // esi
  __int64 v10; // rax

  v5 = 1;
  v6 = a3;
  v8 = a1;
  v9 = 1;
  v10 = a3;
  if ( v10 * 2 && ((unsigned __int64)&a2[v10] > W32UserProbeAddress || &a2[v10] < a2) )
    *W32UserProbeAddress = 0;
  if ( a2[a3 - 1] )
    return 0;
  cCapString(a1, a2, a3);
  if ( a3 )
  {
    do
    {
      if ( *v8 == 124 )
      {
        *v8 = 0;
        ++v9;
      }
      ++v8;
      --v6;
    }
    while ( v6 );
  }
  if ( a4 != v9 )
    return 0;
  return v5;
}

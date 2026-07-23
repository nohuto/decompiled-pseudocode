/*
 * XREFs of AdtpGetCategoryAndSubCategoryId @ 0x14056B578
 * Callers:
 *     AdtpWriteToEtwEx @ 0x1402379CC (AdtpWriteToEtwEx.c)
 *     AdtpWriteToEtw @ 0x14056B25C (AdtpWriteToEtw.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AdtpGetCategoryAndSubCategoryId(int a1, unsigned int *a2, _DWORD *a3)
{
  unsigned int v3; // r11d
  unsigned int v4; // ecx
  unsigned int v6; // edx
  unsigned __int16 *i; // r10
  unsigned int v8; // eax

  v3 = 0;
  v4 = a1 - 100;
  if ( v4 > 0x3B || !a2 && !a3 )
    return 3221225485LL;
  v6 = 0;
  for ( i = AdtpPerCategoryCount; ; ++i )
  {
    v8 = v3 + *i;
    if ( v8 > v4 )
      break;
    ++v6;
    v3 = v8;
    if ( v6 >= 9 )
      return 3221225473LL;
  }
  if ( a2 )
    *a2 = v6;
  if ( a3 )
    *a3 = v4 - v3;
  return 0LL;
}

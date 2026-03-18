/*
 * XREFs of HvpResetPageProtection @ 0x140492D40
 * Callers:
 *     HvResetDirtyData @ 0x1403D0520 (HvResetDirtyData.c)
 * Callees:
 *     HvpSetRangeProtection @ 0x1403F7AD4 (HvpSetRangeProtection.c)
 */

char __fastcall HvpResetPageProtection(ULONG_PTR BugCheckParameter2)
{
  unsigned int v1; // edi
  unsigned int v2; // esi
  unsigned int i; // ebx
  unsigned int j; // edx
  char result; // al

  v1 = *(_DWORD *)(BugCheckParameter2 + 72);
  v2 = 0;
  if ( v1 )
  {
    do
    {
      for ( i = v2; i < v1; ++i )
      {
        if ( _bittest64(*(const signed __int64 **)(BugCheckParameter2 + 80), i) == 1 )
          break;
      }
      for ( j = i; i < v1; ++i )
      {
        if ( !_bittest64(*(const signed __int64 **)(BugCheckParameter2 + 80), i) )
          break;
      }
      v2 = i;
      result = HvpSetRangeProtection(BugCheckParameter2, j << 9, (i - j) << 9, 2u);
    }
    while ( i < v1 );
  }
  return result;
}

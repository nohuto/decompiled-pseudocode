/*
 * XREFs of HvpResetPageProtection @ 0x14049C320
 * Callers:
 *     HvResetDirtyData @ 0x1404809E4 (HvResetDirtyData.c)
 * Callees:
 *     HvpSetRangeProtection @ 0x1404F6D94 (HvpSetRangeProtection.c)
 */

__int64 __fastcall HvpResetPageProtection(ULONG_PTR BugCheckParameter2)
{
  unsigned int v1; // edi
  unsigned int v2; // esi
  unsigned int i; // ebx
  __int64 result; // rax

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
      for ( ; i < v1; ++i )
      {
        if ( !_bittest64(*(const signed __int64 **)(BugCheckParameter2 + 80), i) )
          break;
      }
      v2 = i;
      result = HvpSetRangeProtection(BugCheckParameter2);
    }
    while ( i < v1 );
  }
  return result;
}

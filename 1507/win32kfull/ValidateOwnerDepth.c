/*
 * XREFs of ValidateOwnerDepth @ 0x1C00F285C
 * Callers:
 *     xxxCreateWindowEx @ 0x1C005E828 (xxxCreateWindowEx.c)
 *     xxxSetWindowData @ 0x1C0067F10 (xxxSetWindowData.c)
 * Callees:
 *     <none>
 */

bool __fastcall ValidateOwnerDepth(__int64 a1, __int64 a2)
{
  bool result; // al
  unsigned int v3; // r8d

  result = 0;
  v3 = 1;
  while ( a2 )
  {
    if ( a2 == a1 )
      return result;
    a2 = *(_QWORD *)(a2 + 104);
    ++v3;
  }
  return v3 <= gNestedWindowLimit;
}

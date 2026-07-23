/*
 * XREFs of ResCGetHighestConsecutiveCacheIndex @ 0x1800FA688
 * Callers:
 *     ResCKeGetCacheIndices @ 0x1800F70EC (ResCKeGetCacheIndices.c)
 * Callees:
 *     ResCGetIndexedName @ 0x180093F38 (ResCGetIndexedName.c)
 *     __security_check_cookie @ 0x180095840 (__security_check_cookie.c)
 *     _ResGetFileAttributesW @ 0x1800FA0C8 (_ResGetFileAttributesW.c)
 *     ResCGetName @ 0x1800FA76C (ResCGetName.c)
 */

__int64 __fastcall ResCGetHighestConsecutiveCacheIndex(__int64 a1, int a2)
{
  unsigned int v2; // edi
  int v4; // esi
  int v5; // ebx
  wchar_t v7[264]; // [rsp+30h] [rbp-448h] BYREF
  WCHAR v8[264]; // [rsp+240h] [rbp-238h] BYREF

  v2 = -1;
  v4 = 1;
  if ( a2 >= 0 )
    v5 = a2 + 1;
  else
    v5 = 0;
  if ( a1 )
  {
    if ( v5 > 9999 )
    {
      v4 = 0;
      v5 = 0;
    }
    while ( (unsigned int)ResCGetIndexedName(a1, 257LL, v5, v7)
         && (unsigned int)ResGetFileAttributesW(v7) != -1
         && (unsigned int)ResCGetName(v7, 260LL, v8)
         && (unsigned int)ResGetFileAttributesW(v8) != -1 )
    {
      v2 = v5++;
      if ( v5 > 9999 )
      {
        if ( v4 )
        {
          v4 = 0;
          v5 = 0;
        }
        if ( v5 > 9999 )
          break;
      }
    }
  }
  return v2;
}

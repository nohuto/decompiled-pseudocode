/*
 * XREFs of IsTrustletCreateAttributeWellFormed @ 0x14020F50C
 * Callers:
 *     PspBuildCreateProcessContext @ 0x1404588B8 (PspBuildCreateProcessContext.c)
 * Callees:
 *     <none>
 */

bool __fastcall IsTrustletCreateAttributeWellFormed(_QWORD *a1, unsigned __int64 a2)
{
  __int64 v3; // r8
  unsigned int v4; // r9d
  unsigned int v5; // edx
  int v6; // eax

  if ( a2 == 8 )
    return *a1 != 0LL;
  if ( (a2 & 7) != 0 || a2 <= 0x18 || a2 > 0x88 || !*a1 )
    return 0;
  v3 = 0LL;
  v4 = (unsigned int)(a2 - 8) >> 3;
  v5 = 0;
  if ( v4 )
  {
    while ( 1 )
    {
      v6 = HIDWORD(a1[v3 + 1]);
      if ( (_BYTE)v6 || (v6 & 0xFFFFFF00) != 0 || (a1[v3 + 1] & 0xF0000000LL) != 0 )
        break;
      ++v5;
      v3 = (unsigned int)BYTE1(a1[v3 + 1]) + (_DWORD)v3 + 1;
      if ( (unsigned int)v3 >= v4 )
      {
        if ( v5 > 4 )
          return 0;
        return (_DWORD)v3 == v4;
      }
    }
    return 0;
  }
  return (_DWORD)v3 == v4;
}

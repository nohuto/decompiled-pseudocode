/*
 * XREFs of SmSanitizeString @ 0x14021FBE4
 * Callers:
 *     SmKmVolumeQueryUniqueId @ 0x140699BC0 (SmKmVolumeQueryUniqueId.c)
 * Callees:
 *     isprint @ 0x14014E264 (isprint.c)
 */

int __fastcall SmSanitizeString(unsigned __int16 *a1, unsigned int a2)
{
  _UNKNOWN **v2; // rax
  unsigned __int16 *v3; // rdi
  unsigned __int64 v4; // rbp
  unsigned __int16 *v5; // rdx
  unsigned __int64 v6; // rsi
  unsigned __int16 v7; // bx
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  v2 = &retaddr;
  v3 = a1;
  v4 = 0LL;
  v5 = &a1[((unsigned __int64)a2 >> 1) - 1];
  v6 = (unsigned __int64)((char *)v5 - (char *)a1 + 1) >> 1;
  if ( a1 > v5 )
    v6 = 0LL;
  if ( v6 )
  {
    do
    {
      v7 = *v3;
      if ( *v3 )
      {
        if ( v7 > 0xFFu || (LODWORD(v2) = isprint(v7), !(_DWORD)v2) )
        {
          LODWORD(v2) = 87 * (v7 / 0x57u);
          v7 = v7 % 0x57u + 36;
        }
        if ( v7 == 92 )
          v7 = 95;
        *v3 = v7;
      }
      else
      {
        LODWORD(v2) = 126;
        *v3 = 126;
      }
      ++v3;
      ++v4;
    }
    while ( v4 < v6 );
  }
  *v3 = 0;
  return (int)v2;
}

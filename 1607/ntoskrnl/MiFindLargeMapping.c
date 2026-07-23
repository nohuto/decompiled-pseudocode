/*
 * XREFs of MiFindLargeMapping @ 0x1401ECAA0
 * Callers:
 *     MiProtectPool @ 0x1400E8270 (MiProtectPool.c)
 * Callees:
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

__int64 __fastcall MiFindLargeMapping(unsigned __int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rcx
  unsigned __int64 v3; // rdx
  unsigned int v4; // r8d
  unsigned __int64 *v5; // r9
  char *v6; // rdx
  char *i; // rcx
  char v9; // [rsp+8h] [rbp-40h] BYREF
  char v10; // [rsp+38h] [rbp-10h] BYREF

  v2 = ((a1 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
  v3 = ((a2 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
  v4 = 3;
  v5 = (unsigned __int64 *)&v10;
  do
  {
    v5 -= 2;
    *(v5 - 1) = v2;
    *v5 = v3;
    v2 = ((v2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v3 = ((v3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    --v4;
  }
  while ( v4 );
  v6 = &v9;
  while ( 2 )
  {
    for ( i = (char *)*((_QWORD *)v6 - 1); (unsigned __int64)i <= *(_QWORD *)v6; i += 8 )
    {
      if ( *i < 0 )
        return 1LL;
    }
    ++v4;
    v6 += 16;
    if ( v4 < 3 )
      continue;
    break;
  }
  return 0LL;
}

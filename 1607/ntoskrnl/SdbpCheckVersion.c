/*
 * XREFs of SdbpCheckVersion @ 0x1406C507C
 * Callers:
 *     SdbpMatchOsVersion @ 0x140573E2C (SdbpMatchOsVersion.c)
 *     SdbpCheckPackageAttributes @ 0x1406C2FFC (SdbpCheckPackageAttributes.c)
 *     SdbpCheckAttribute @ 0x1406C4E30 (SdbpCheckAttribute.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SdbpCheckVersion(unsigned __int64 a1, unsigned __int64 a2)
{
  int v3; // ecx

  v3 = 48;
  while ( (unsigned __int16)(a1 >> v3) == (unsigned __int16)(a2 >> v3) || (unsigned __int16)(a1 >> v3) == 0xFFFF )
  {
    v3 -= 16;
    if ( v3 < 0 )
      return 1LL;
  }
  return 0LL;
}

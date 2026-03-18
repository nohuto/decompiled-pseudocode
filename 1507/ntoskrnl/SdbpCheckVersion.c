/*
 * XREFs of SdbpCheckVersion @ 0x140704DF8
 * Callers:
 *     SdbpMatchOsVersion @ 0x1405AB6C4 (SdbpMatchOsVersion.c)
 *     SdbpCheckPackageAttributes @ 0x1407031D8 (SdbpCheckPackageAttributes.c)
 *     SdbpCheckAttribute @ 0x140704BAC (SdbpCheckAttribute.c)
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

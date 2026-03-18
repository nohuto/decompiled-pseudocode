/*
 * XREFs of _PnpMultiSzGetLen @ 0x1404D55C8
 * Callers:
 *     _CmGetDeviceMappedPropertyFromComposite @ 0x1404CE780 (_CmGetDeviceMappedPropertyFromComposite.c)
 *     _CmGetDeviceMappedPropertyFromRegProp @ 0x1404FB708 (_CmGetDeviceMappedPropertyFromRegProp.c)
 *     _CmGetDeviceSiblings @ 0x1406DD82C (_CmGetDeviceSiblings.c)
 *     _PnpMultiSzDeleteString @ 0x1406E0030 (_PnpMultiSzDeleteString.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PnpMultiSzGetLen(_WORD *a1)
{
  unsigned int v1; // edx
  _WORD *i; // rax
  __int64 v3; // r8

  v1 = 0;
  if ( a1 )
  {
    for ( i = a1; *i; i += v3 + 1 )
    {
      v3 = -1LL;
      do
        ++v3;
      while ( i[v3] );
    }
    return (unsigned int)(i - a1) + 1;
  }
  return v1;
}

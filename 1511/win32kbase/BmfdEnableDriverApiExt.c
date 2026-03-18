/*
 * XREFs of BmfdEnableDriverApiExt @ 0x1C007F420
 * Callers:
 *     <none>
 * Callees:
 *     IsBmfdEnableDriverSupported_0 @ 0x1C0001938 (IsBmfdEnableDriverSupported_0.c)
 *     BmfdEnableDriver_0 @ 0x1C0001940 (BmfdEnableDriver_0.c)
 */

__int64 BmfdEnableDriverApiExt()
{
  int v0; // eax
  unsigned int v1; // r9d

  v0 = IsBmfdEnableDriverSupported_0();
  v1 = 0;
  if ( v0 >= 0 )
    return (unsigned int)BmfdEnableDriver_0();
  return v1;
}

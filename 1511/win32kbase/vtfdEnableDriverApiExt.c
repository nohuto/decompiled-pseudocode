/*
 * XREFs of vtfdEnableDriverApiExt @ 0x1C007F380
 * Callers:
 *     <none>
 * Callees:
 *     IsvtfdEnableDriverSupported_0 @ 0x1C0001958 (IsvtfdEnableDriverSupported_0.c)
 *     vtfdEnableDriver_0 @ 0x1C0001960 (vtfdEnableDriver_0.c)
 */

__int64 vtfdEnableDriverApiExt()
{
  int v0; // eax
  unsigned int v1; // r9d

  v0 = IsvtfdEnableDriverSupported_0();
  v1 = 0;
  if ( v0 >= 0 )
    return (unsigned int)vtfdEnableDriver_0();
  return v1;
}

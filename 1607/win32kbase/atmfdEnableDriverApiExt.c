/*
 * XREFs of atmfdEnableDriverApiExt @ 0x1C006CDC0
 * Callers:
 *     <none>
 * Callees:
 *     IsatmfdEnableDriverSupported_0 @ 0x1C0001968 (IsatmfdEnableDriverSupported_0.c)
 *     atmfdEnableDriver_0 @ 0x1C0001970 (atmfdEnableDriver_0.c)
 */

__int64 atmfdEnableDriverApiExt()
{
  int v0; // eax
  unsigned int v1; // r9d

  v0 = IsatmfdEnableDriverSupported_0();
  v1 = 0;
  if ( v0 >= 0 )
    return (unsigned int)atmfdEnableDriver_0();
  return v1;
}

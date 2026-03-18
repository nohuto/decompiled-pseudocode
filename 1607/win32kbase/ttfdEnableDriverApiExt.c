/*
 * XREFs of ttfdEnableDriverApiExt @ 0x1C006CD20
 * Callers:
 *     <none>
 * Callees:
 *     IsttfdEnableDriverSupported_0 @ 0x1C0001948 (IsttfdEnableDriverSupported_0.c)
 *     ttfdEnableDriver_0 @ 0x1C0001950 (ttfdEnableDriver_0.c)
 */

__int64 ttfdEnableDriverApiExt()
{
  int v0; // eax
  unsigned int v1; // r9d

  v0 = IsttfdEnableDriverSupported_0();
  v1 = 0;
  if ( v0 >= 0 )
    return (unsigned int)ttfdEnableDriver_0();
  return v1;
}

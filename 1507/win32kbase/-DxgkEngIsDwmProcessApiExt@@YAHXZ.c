/*
 * XREFs of ?DxgkEngIsDwmProcessApiExt@@YAHXZ @ 0x1C000D350
 * Callers:
 *     <none>
 * Callees:
 *     IsDxgkEngIsDwmProcessSupported_0 @ 0x1C00015B8 (IsDxgkEngIsDwmProcessSupported_0.c)
 *     DxgkEngIsDwmProcess_0 @ 0x1C00015C0 (DxgkEngIsDwmProcess_0.c)
 */

__int64 DxgkEngIsDwmProcessApiExt(void)
{
  int IsDwmProcessSupported_0; // eax
  unsigned int v1; // ecx

  IsDwmProcessSupported_0 = IsDxgkEngIsDwmProcessSupported_0();
  v1 = 0;
  if ( IsDwmProcessSupported_0 >= 0 )
    return (unsigned int)DxgkEngIsDwmProcess_0();
  return v1;
}

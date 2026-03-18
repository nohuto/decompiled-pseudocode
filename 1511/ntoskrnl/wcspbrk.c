/*
 * XREFs of wcspbrk @ 0x140146488
 * Callers:
 *     RtlpMuiRegLoadLicInformation @ 0x14013AD00 (RtlpMuiRegLoadLicInformation.c)
 *     IoRegisterDeviceInterface @ 0x14050927C (IoRegisterDeviceInterface.c)
 *     PoThermalCounterSetCallback @ 0x140637DBC (PoThermalCounterSetCallback.c)
 * Callees:
 *     <none>
 */

wchar_t *__cdecl wcspbrk(const wchar_t *Str, const wchar_t *Control)
{
  wchar_t v2; // ax
  wchar_t v4; // r10
  const wchar_t *v5; // r8
  wchar_t v6; // dx

  v2 = *Str;
  if ( !*Str )
    return 0LL;
  v4 = *Control;
  while ( 1 )
  {
    v5 = Control;
    if ( v4 )
      break;
LABEL_7:
    v2 = *++Str;
    if ( !*Str )
      return 0LL;
  }
  v6 = v4;
  while ( v6 != v2 )
  {
    v6 = *++v5;
    if ( !*v5 )
      goto LABEL_7;
  }
  return (wchar_t *)Str;
}

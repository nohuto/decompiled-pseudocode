/*
 * XREFs of ?SetRemarshalingFlags@CCompiledEffectTemplateMarshaler@DirectComposition@@UEAA_NXZ @ 0x1C00DAE70
 * Callers:
 *     <none>
 * Callees:
 *     ?SetRemarshalingFlags@CNotificationResourceMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C00D86E4 (-SetRemarshalingFlags@CNotificationResourceMarshaler@DirectComposition@@MEAA_NXZ.c)
 */

char __fastcall DirectComposition::CCompiledEffectTemplateMarshaler::SetRemarshalingFlags(
        DirectComposition::CCompiledEffectTemplateMarshaler *this)
{
  DirectComposition::CNotificationResourceMarshaler::SetRemarshalingFlags(this);
  *((_DWORD *)this + 4) &= ~0x80u;
  return 1;
}

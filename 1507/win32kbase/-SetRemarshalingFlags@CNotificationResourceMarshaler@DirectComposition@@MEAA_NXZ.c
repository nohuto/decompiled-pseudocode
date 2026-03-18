/*
 * XREFs of ?SetRemarshalingFlags@CNotificationResourceMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C00D6778
 * Callers:
 *     ?SetRemarshalingFlags@CBaseExpressionMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C00D7270 (-SetRemarshalingFlags@CBaseExpressionMarshaler@DirectComposition@@MEAA_NXZ.c)
 *     ?SetRemarshalingFlags@CCompiledEffectTemplateMarshaler@DirectComposition@@UEAA_NXZ @ 0x1C00D87B0 (-SetRemarshalingFlags@CCompiledEffectTemplateMarshaler@DirectComposition@@UEAA_NXZ.c)
 *     ?SetRemarshalingFlags@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C00D9F04 (-SetRemarshalingFlags@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CNotificationResourceMarshaler::SetRemarshalingFlags(
        DirectComposition::CNotificationResourceMarshaler *this)
{
  if ( *((_DWORD *)this + 10) )
    *((_DWORD *)this + 4) |= 0x40u;
  return (*((unsigned __int8 *)this + 16) >> 6) & 1;
}

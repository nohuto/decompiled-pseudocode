/*
 * XREFs of ?SetRemarshalingFlags@CNotificationResourceMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C00E66C4
 * Callers:
 *     ?SetRemarshalingFlags@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C00E670C (-SetRemarshalingFlags@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NXZ.c)
 *     ?SetRemarshalingFlags@CBaseExpressionMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C00E6E30 (-SetRemarshalingFlags@CBaseExpressionMarshaler@DirectComposition@@MEAA_NXZ.c)
 *     ?SetRemarshalingFlags@CCompiledEffectTemplateMarshaler@DirectComposition@@UEAA_NXZ @ 0x1C00E7DD0 (-SetRemarshalingFlags@CCompiledEffectTemplateMarshaler@DirectComposition@@UEAA_NXZ.c)
 *     ?SetRemarshalingFlags@CInteractionTrackerMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C00E9700 (-SetRemarshalingFlags@CInteractionTrackerMarshaler@DirectComposition@@MEAA_NXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CNotificationResourceMarshaler::SetRemarshalingFlags(
        DirectComposition::CNotificationResourceMarshaler *this)
{
  if ( *((_DWORD *)this + 10) )
    *((_DWORD *)this + 4) |= 0x20u;
  return (*((unsigned __int8 *)this + 16) >> 5) & 1;
}

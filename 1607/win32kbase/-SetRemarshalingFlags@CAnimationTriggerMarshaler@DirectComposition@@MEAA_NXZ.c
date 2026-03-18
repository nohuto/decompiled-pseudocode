/*
 * XREFs of ?SetRemarshalingFlags@CAnimationTriggerMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C00EDF20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CAnimationTriggerMarshaler::SetRemarshalingFlags(
        DirectComposition::CAnimationTriggerMarshaler *this)
{
  return (*((unsigned __int8 *)this + 16) >> 5) & 1;
}

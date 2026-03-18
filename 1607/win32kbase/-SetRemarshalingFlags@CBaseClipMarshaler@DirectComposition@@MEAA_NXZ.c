/*
 * XREFs of ?SetRemarshalingFlags@CBaseClipMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C00EA410
 * Callers:
 *     ?SetRemarshalingFlags@CRectangleClipMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C00EF840 (-SetRemarshalingFlags@CRectangleClipMarshaler@DirectComposition@@MEAA_NXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CBaseClipMarshaler::SetRemarshalingFlags(
        DirectComposition::CBaseClipMarshaler *this)
{
  if ( *((_QWORD *)this + 7) )
    *((_DWORD *)this + 4) |= 0x80u;
  return *((unsigned __int8 *)this + 16) >> 7;
}

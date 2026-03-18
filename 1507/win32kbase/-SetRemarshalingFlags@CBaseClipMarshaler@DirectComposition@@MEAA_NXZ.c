/*
 * XREFs of ?SetRemarshalingFlags@CBaseClipMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C00D8DD0
 * Callers:
 *     ?SetRemarshalingFlags@CRectangleClipMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C00DB600 (-SetRemarshalingFlags@CRectangleClipMarshaler@DirectComposition@@MEAA_NXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CBaseClipMarshaler::SetRemarshalingFlags(
        DirectComposition::CBaseClipMarshaler *this)
{
  float *v1; // rax

  v1 = (float *)*((_QWORD *)this + 5);
  if ( v1 && (*v1 != 1.0 || v1[1] != 0.0 || v1[2] != 0.0 || v1[3] != 1.0 || v1[4] != 0.0 || v1[5] != 0.0) )
    *((_DWORD *)this + 4) |= 0x40u;
  return (*((unsigned __int8 *)this + 16) >> 6) & 1;
}

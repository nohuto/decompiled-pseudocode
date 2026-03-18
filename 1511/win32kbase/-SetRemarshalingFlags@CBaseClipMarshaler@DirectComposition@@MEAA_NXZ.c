/*
 * XREFs of ?SetRemarshalingFlags@CBaseClipMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C00DB350
 * Callers:
 *     ?SetRemarshalingFlags@CRectangleClipMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C00DDA50 (-SetRemarshalingFlags@CRectangleClipMarshaler@DirectComposition@@MEAA_NXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CBaseClipMarshaler::SetRemarshalingFlags(
        DirectComposition::CBaseClipMarshaler *this)
{
  float *v1; // rax

  v1 = (float *)*((_QWORD *)this + 7);
  if ( v1 && (*v1 != 1.0 || v1[1] != 0.0 || v1[2] != 0.0 || v1[3] != 1.0 || v1[4] != 0.0 || v1[5] != 0.0) )
    *((_DWORD *)this + 4) |= 0x100u;
  return (*((_DWORD *)this + 4) >> 8) & 1;
}

/*
 * XREFs of ?SetRemarshalingFlags@CInteractionMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C00E76A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall DirectComposition::CInteractionMarshaler::SetRemarshalingFlags(
        DirectComposition::CInteractionMarshaler *this)
{
  char v1; // al
  bool result; // al

  *((_DWORD *)this + 4) &= 0xFFFFFEDF;
  if ( *((_QWORD *)this + 23) )
    *((_DWORD *)this + 4) |= 0x40u;
  v1 = *((_BYTE *)this + 240);
  if ( (v1 & 0x1F) != 0 )
    *((_DWORD *)this + 4) |= 0x200u;
  if ( *((_QWORD *)this + 29) )
    *((_DWORD *)this + 4) |= 0x400u;
  if ( (v1 & 0x60) != 0x60 )
    *((_DWORD *)this + 4) |= 0x800u;
  *((_DWORD *)this + 13) |= 0xFu;
  result = 1;
  *((_DWORD *)this + 18) = 0;
  *((_DWORD *)this + 24) = 0;
  *((_DWORD *)this + 31) |= 0xFu;
  *((_DWORD *)this + 36) = 0;
  *((_DWORD *)this + 42) = 0;
  return result;
}

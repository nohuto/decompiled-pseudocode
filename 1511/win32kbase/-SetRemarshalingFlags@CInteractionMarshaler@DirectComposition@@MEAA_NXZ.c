/*
 * XREFs of ?SetRemarshalingFlags@CInteractionMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C00DA6E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall DirectComposition::CInteractionMarshaler::SetRemarshalingFlags(
        DirectComposition::CInteractionMarshaler *this)
{
  bool result; // al

  *((_DWORD *)this + 4) &= 0xFFFFFDBF;
  if ( *((_QWORD *)this + 23) )
    *((_DWORD *)this + 4) |= 0x80u;
  if ( (*((_BYTE *)this + 216) & 0xF) != 0 )
    *((_DWORD *)this + 4) |= 0x400u;
  *((_DWORD *)this + 13) |= 0xFu;
  result = 1;
  *((_DWORD *)this + 18) = 0;
  *((_DWORD *)this + 24) = 0;
  *((_DWORD *)this + 31) |= 0xFu;
  *((_DWORD *)this + 36) = 0;
  *((_DWORD *)this + 42) = 0;
  return result;
}

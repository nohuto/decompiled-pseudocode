/*
 * XREFs of ?SetRemarshalingFlags@CAnalogTargetMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C00DBAB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall DirectComposition::CAnalogTargetMarshaler::SetRemarshalingFlags(
        DirectComposition::CAnalogTargetMarshaler *this)
{
  *((_DWORD *)this + 4) |= 0x40u;
  if ( *((_QWORD *)this + 8) )
    *((_DWORD *)this + 4) |= 0x80u;
  if ( *((_QWORD *)this + 9) )
    *((_DWORD *)this + 4) |= 0x100u;
  return (*((_DWORD *)this + 4) & 0x180) != 0;
}

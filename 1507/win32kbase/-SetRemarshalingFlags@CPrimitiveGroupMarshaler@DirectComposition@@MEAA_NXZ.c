/*
 * XREFs of ?SetRemarshalingFlags@CPrimitiveGroupMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C00D6100
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall DirectComposition::CPrimitiveGroupMarshaler::SetRemarshalingFlags(
        DirectComposition::CPrimitiveGroupMarshaler *this)
{
  unsigned int v1; // edx
  bool v2; // zf
  _BOOL8 result; // rax

  v1 = *((_DWORD *)this + 4) & 0xFFFFFFBF;
  *((_DWORD *)this + 44) = 0;
  *((_DWORD *)this + 23) = 0;
  v2 = *((_QWORD *)this + 7) == 0LL;
  *((_DWORD *)this + 27) = 0;
  result = !v2;
  *((_DWORD *)this + 4) = v1 | 0x200;
  return result;
}

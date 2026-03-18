/*
 * XREFs of SepMatchPackage @ 0x1400E65D8
 * Callers:
 *     SepMaximumAccessCheck @ 0x14008A7E0 (SepMaximumAccessCheck.c)
 *     SepNormalAccessCheck @ 0x14008C110 (SepNormalAccessCheck.c)
 *     SepMaximumAccessCheckEx @ 0x14012BB10 (SepMaximumAccessCheckEx.c)
 *     SepNormalAccessCheckEx @ 0x140135D0C (SepNormalAccessCheckEx.c)
 * Callees:
 *     RtlEqualSid @ 0x14009DE80 (RtlEqualSid.c)
 */

BOOLEAN __fastcall SepMatchPackage(__int64 a1, int a2, __int64 a3, int a4, _BYTE *a5, _DWORD *a6, _BYTE *a7)
{
  int v9; // ebx
  BOOLEAN result; // al

  if ( *(_DWORD *)(a3 + 8) == 2 && *(_BYTE *)(a3 + 1) == 2 && *(_DWORD *)(a3 + 12) == 1 )
  {
    v9 = a4 & a2;
LABEL_5:
    *a6 |= v9;
    result = (unsigned __int8)a5;
    *a5 = 1;
    return result;
  }
  result = (unsigned __int8)a7;
  *a7 = 1;
  if ( (*(_DWORD *)(a1 + 200) & 0x4000) != 0 )
  {
    result = RtlEqualSid(*(PSID *)(a1 + 784), (PSID)a3);
    if ( result )
    {
      v9 = a4 & a2;
      goto LABEL_5;
    }
  }
  return result;
}

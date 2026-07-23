/*
 * XREFs of SepSecureBootGetPolicyDefaultValue @ 0x140694370
 * Callers:
 *     SepSecureBootUpdateBcdDataForRule @ 0x1406944E0 (SepSecureBootUpdateBcdDataForRule.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SepSecureBootGetPolicyDefaultValue(_WORD *a1, __int64 a2, _QWORD *a3, _DWORD *a4)
{
  unsigned int v4; // edx

  v4 = 0;
  if ( (*a1 & 0x1F) != 0 )
  {
    switch ( *a1 & 0x1F )
    {
      case 1:
        *a4 = 1;
        *a3 = a1 + 1;
        break;
      case 5:
      case 6:
      case 7:
        *a4 = 8;
        *a3 = a1 + 1;
        break;
      case 8:
        return (unsigned int)-1073741275;
      default:
        return (unsigned int)-1069350909;
    }
  }
  else
  {
    *a3 = a1 + 2;
    *a4 = (unsigned __int16)a1[1];
  }
  return v4;
}

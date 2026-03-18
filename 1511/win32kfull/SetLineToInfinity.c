/*
 * XREFs of SetLineToInfinity @ 0x1C00B2690
 * Callers:
 *     Misoriented @ 0x1C00B1E70 (Misoriented.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SetLineToInfinity(__int16 a1, __int64 a2, _DWORD *a3, _DWORD *a4)
{
  __int64 result; // rax

  switch ( a1 )
  {
    case 0:
      a3[1] = HIDWORD(a2);
      *a3 = a2 + 1;
      *a4 = -32768;
LABEL_7:
      result = (unsigned int)(a3[1] - 1);
      a4[1] = result;
      return result;
    case 1:
      a3[1] = HIDWORD(a2);
      *a3 = a2 - 1;
      *a4 = 0x7FFF;
      goto LABEL_7;
    case 2:
      *a3 = a2;
      a3[1] = HIDWORD(a2) + 1;
      result = (unsigned int)(a2 - 1);
      *a4 = result;
      a4[1] = -32768;
      break;
    case 3:
      *a3 = a2;
      a3[1] = HIDWORD(a2) - 1;
      result = (unsigned int)(a2 - 1);
      *a4 = result;
      a4[1] = 0x7FFF;
      break;
  }
  return result;
}

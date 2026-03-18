/*
 * XREFs of EditionGetKeyStateUpdateParamsForRawInput @ 0x1401BA780
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandleNoSecure @ 0x14004C2D0 (HMValidateHandleNoSecure.c)
 */

__int64 __fastcall EditionGetKeyStateUpdateParamsForRawInput(__int64 a1, __int64 a2, _BYTE *a3, _DWORD *a4, int *a5)
{
  __int64 result; // rax
  __int64 v8; // rdx
  __int16 v9; // cx

  result = *(unsigned int *)(a1 + 1360);
  if ( (result & 0x200000) != 0 && !*(_QWORD *)(a2 + 32) )
  {
    result = HMValidateHandleNoSecure(*(_QWORD *)(a2 + 40), 18);
    v8 = result;
    if ( result )
    {
      if ( *(_DWORD *)(result + 56) == 1 )
      {
        *a3 = *(_BYTE *)(result + 86);
        *a4 = (*(_WORD *)(result + 82) & 1) == 0;
        v9 = *(_WORD *)(result + 82);
        result = (__int64)a5;
        *a5 = v9 & 6;
        if ( *a3 == 16 )
        {
          result = 65529LL;
          *(_WORD *)(v8 + 82) &= 0xFFF9u;
        }
      }
    }
  }
  return result;
}

/*
 * XREFs of RtlGetIntegerAtom @ 0x180068190
 * Callers:
 *     RtlAddAtomToAtomTableEx @ 0x180067D0C (RtlAddAtomToAtomTableEx.c)
 *     RtlLookupAtomInAtomTable @ 0x180067F20 (RtlLookupAtomInAtomTable.c)
 * Callees:
 *     RtlUnicodeStringToInteger @ 0x18006AEB0 (RtlUnicodeStringToInteger.c)
 */

char __fastcall RtlGetIntegerAtom(unsigned __int64 a1, _WORD *a2)
{
  __int16 *v4; // rcx
  __int16 *v5; // rdx
  __int16 i; // ax
  _WORD v7[4]; // [rsp+20h] [rbp-18h] BYREF
  __int16 *v8; // [rsp+28h] [rbp-10h]
  int v9; // [rsp+40h] [rbp+8h] BYREF

  if ( (a1 & 0xFFFFFFFFFFFF0000uLL) == 0 )
  {
    if ( (unsigned __int16)a1 < 0xC000u )
    {
      if ( !(_WORD)a1 )
        LOWORD(a1) = -16384;
      if ( a2 )
        *a2 = a1;
      return 1;
    }
    return 0;
  }
  if ( *(_WORD *)a1 != 35 )
    return 0;
  v4 = (__int16 *)(a1 + 2);
  v5 = v4;
  for ( i = *v4; i; i = *v5 )
  {
    if ( (unsigned __int16)(i - 48) > 9u )
      return 0;
    ++v5;
  }
  v8 = v4;
  v7[0] = (_WORD)v5 - (_WORD)v4;
  v7[1] = (_WORD)v5 - (_WORD)v4;
  v9 = 0;
  if ( (int)RtlUnicodeStringToInteger(v7, 10LL, &v9) < 0 )
    return 0;
  if ( a2 )
  {
    if ( (unsigned int)(v9 - 1) > 0xBFFF )
      *a2 = -16384;
    else
      *a2 = v9;
  }
  return 1;
}

/*
 * XREFs of ConvertToDDBHandle @ 0x1C00493F0
 * Callers:
 *     ValidateArgTypes @ 0x1C0011BC0 (ValidateArgTypes.c)
 * Callees:
 *     FreeDataBuffs @ 0x1C000F3B0 (FreeDataBuffs.c)
 *     memset @ 0x1C00251C0 (memset.c)
 */

__int64 __fastcall ConvertToDDBHandle(__int64 a1, __int64 a2)
{
  unsigned int v4; // ebx
  bool v5; // zf
  __int128 v6; // xmm1
  __int64 v7; // xmm0_8
  _OWORD v9[3]; // [rsp+20h] [rbp-38h] BYREF

  v4 = 0;
  memset(v9, 0, 0x28uLL);
  v5 = *(_WORD *)(a1 + 2) == 1;
  WORD1(v9[0]) = 15;
  if ( v5 )
  {
    if ( *(_QWORD *)(a1 + 16) )
      *(_QWORD *)&v9[1] = *(_QWORD *)(a1 + 16);
    else
      v4 = -1072431089;
    FreeDataBuffs(a2, 1u);
    v6 = v9[1];
    *(_OWORD *)a2 = v9[0];
    v7 = *(_QWORD *)&v9[2];
    *(_OWORD *)(a2 + 16) = v6;
    *(_QWORD *)(a2 + 32) = v7;
  }
  else
  {
    return (unsigned int)-1072431095;
  }
  return v4;
}

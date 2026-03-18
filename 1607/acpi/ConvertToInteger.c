/*
 * XREFs of ConvertToInteger @ 0x1C0027AE4
 * Callers:
 *     ValidateArgTypes @ 0x1C00182D0 (ValidateArgTypes.c)
 *     ToInteger @ 0x1C0027A70 (ToInteger.c)
 *     Concat @ 0x1C005E940 (Concat.c)
 * Callees:
 *     FreeDataBuffs @ 0x1C001B580 (FreeDataBuffs.c)
 *     _strtoui64_0 @ 0x1C002BC6E (_strtoui64_0.c)
 *     memmove @ 0x1C002BE80 (memmove.c)
 *     memset @ 0x1C002C1C0 (memset.c)
 */

__int64 __fastcall ConvertToInteger(__int64 a1, __int64 a2)
{
  unsigned int v4; // edi
  int v5; // r8d
  int v6; // r8d
  unsigned __int64 v7; // rax
  __int128 v8; // xmm1
  __int64 v9; // xmm0_8
  int v11; // r8d
  int v12; // r8d
  unsigned int v13; // eax
  _OWORD v14[3]; // [rsp+20h] [rbp-38h] BYREF

  v4 = 0;
  memset(v14, 0, 0x28uLL);
  v5 = *(unsigned __int16 *)(a1 + 2);
  WORD1(v14[0]) = 1;
  v6 = v5 - 1;
  if ( v6 )
  {
    v11 = v6 - 1;
    if ( !v11 )
    {
      v7 = strtoui64_0(*(const char **)(a1 + 32), 0LL, 0);
      goto LABEL_3;
    }
    v12 = v11 - 1;
    if ( !v12 )
    {
      v13 = 8;
      if ( *(_DWORD *)(a1 + 24) <= 8u )
        v13 = *(_DWORD *)(a1 + 24);
      memmove(&v14[1], *(const void **)(a1 + 32), v13);
      goto LABEL_4;
    }
    if ( v12 != 12 )
      return (unsigned int)-1072431095;
  }
  v7 = *(_QWORD *)(a1 + 16);
LABEL_3:
  *(_QWORD *)&v14[1] = v7;
LABEL_4:
  FreeDataBuffs(a2, 1u);
  v8 = v14[1];
  *(_OWORD *)a2 = v14[0];
  v9 = *(_QWORD *)&v14[2];
  *(_OWORD *)(a2 + 16) = v8;
  *(_QWORD *)(a2 + 32) = v9;
  return v4;
}

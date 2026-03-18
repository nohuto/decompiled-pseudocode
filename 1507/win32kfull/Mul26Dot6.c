/*
 * XREFs of Mul26Dot6 @ 0x1C00C0A54
 * Callers:
 *     itrp_ISECT @ 0x1C00BFF40 (itrp_ISECT.c)
 *     itrp_MUL @ 0x1C00C09D0 (itrp_MUL.c)
 *     EmboldPoint @ 0x1C02D8DDC (EmboldPoint.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Mul26Dot6(int a1, int a2)
{
  int v2; // ebx
  unsigned int v3; // r8d
  __int64 result; // rax
  int v5; // r9d
  unsigned int v6; // eax
  unsigned int v7; // edx
  int v8; // r11d
  unsigned int v9; // r8d

  v2 = 0;
  v3 = a1;
  if ( a1 <= 46340 && a2 <= 46340 && a1 >= -46340 && a2 >= -46340 )
    return (unsigned int)((a2 * a1 + 32) >> 6);
  if ( a1 < 0 )
  {
    v3 = -a1;
    v2 = 1;
  }
  if ( a2 < 0 )
  {
    a2 = -a2;
    v2 ^= 1u;
  }
  v5 = (unsigned __int16)a2;
  v6 = HIWORD(a2);
  v7 = HIWORD(v3);
  v8 = v5 * (unsigned __int16)v3;
  v9 = HIWORD(v3) * v5 + v6 * (unsigned __int16)v3;
  result = (((v9 << 16) + 32 + v8) >> 6) | ((v7 * v6 + HIWORD(v9) + ((v9 << 16) + 32 + v8 < (v9 << 16) + 32)) << 26);
  if ( v2 )
    return (unsigned int)-(int)result;
  return result;
}

/*
 * XREFs of BgpGxBlendColor @ 0x1401281E8
 * Callers:
 *     RaspAntiAlias @ 0x140128070 (RaspAntiAlias.c)
 *     BgpGxBlendRectangle @ 0x14072AD60 (BgpGxBlendRectangle.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall BgpGxBlendColor(int a1, int a2, unsigned __int8 a3)
{
  int v3; // r10d
  unsigned int v5; // [rsp+28h] [rbp+18h]

  v3 = 255 - a3;
  HIWORD(v5) = (unsigned __int8)(v3 * BYTE2(a1) / 255 - a3 * BYTE2(a2));
  BYTE1(v5) = -(char)((-1 - a3) * BYTE1(a1)) - a3 * BYTE1(a2);
  LOBYTE(v5) = a3 * (unsigned __int8)a2 / 255 + v3 * (unsigned __int8)a1 / 255;
  return v5;
}

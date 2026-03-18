/*
 * XREFs of ?vSqrt@EFLOAT@@QEAAXXZ @ 0x1C0014FF4
 * Callers:
 *     ?eqLength@EFLOAT@@QEAA?AV1@AEBVPOINTFL@@@Z @ 0x1C00150B0 (-eqLength@EFLOAT@@QEAA-AV1@AEBVPOINTFL@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall EFLOAT::vSqrt(EFLOAT *this)
{
  int v1; // eax
  unsigned int v2; // edx
  int v3; // r9d
  unsigned int v4; // r9d
  unsigned int v5; // edx
  unsigned int v6; // r10d
  int v7; // r8d
  __int64 v8; // r11
  int v9; // eax
  int v10; // r10d
  unsigned int v11; // eax

  v1 = *(_DWORD *)this >> 23;
  v2 = (unsigned __int8)v1 + 127;
  v3 = *(_DWORD *)this & 0x7FFFFF | 0x800000;
  if ( (((_BYTE)v1 + 127) & 1) != 0 )
  {
    v4 = v3 << 8;
    v2 = (unsigned __int8)v1 + 126;
  }
  else
  {
    v4 = v3 << 7;
  }
  v5 = v2 >> 1;
  v6 = 0;
  v7 = 0;
  v8 = 24LL;
  do
  {
    v9 = 4 * v6;
    v7 *= 2;
    v10 = (unsigned __int64)v4 >> 30;
    v4 *= 4;
    v6 = v9 | v10;
    v11 = 2 * v7 + 1;
    if ( v11 <= v6 )
    {
      v6 -= v11;
      ++v7;
    }
    --v8;
  }
  while ( v8 );
  *(_DWORD *)this = (v5 << 23) | v7 & 0x7FFFFF;
}

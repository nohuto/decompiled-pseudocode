/*
 * XREFs of GreGetDeviceGammaRampInternal @ 0x1C00E42C4
 * Callers:
 *     GreGetDeviceGammaRamp @ 0x1C00E4224 (GreGetDeviceGammaRamp.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GreGetDeviceGammaRampInternal(__int64 a1, _OWORD *a2)
{
  unsigned int v2; // r8d
  _OWORD *v3; // rax
  _WORD *v4; // rcx
  __int16 v5; // ax
  __int64 v7; // rcx
  __int128 v8; // xmm1

  v2 = 0;
  if ( a1 && (*(_DWORD *)(a1 + 56) & 1) != 0 && (unsigned int)(*(_DWORD *)(a1 + 2132) - 3) <= 3 )
  {
    v3 = *(_OWORD **)(a1 + 1728);
    if ( v3 )
    {
      v7 = 12LL;
      do
      {
        *a2 = *v3;
        a2[1] = v3[1];
        a2[2] = v3[2];
        a2[3] = v3[3];
        a2[4] = v3[4];
        a2[5] = v3[5];
        a2[6] = v3[6];
        a2 += 8;
        v8 = v3[7];
        v3 += 8;
        *(a2 - 1) = v8;
        --v7;
      }
      while ( v7 );
    }
    else
    {
      v4 = a2 + 32;
      do
      {
        v5 = v2++;
        v5 <<= 8;
        v4[256] = v5;
        *v4 = v5;
        *(v4 - 256) = v5;
        ++v4;
      }
      while ( v2 < 0x100 );
    }
    return 1;
  }
  return v2;
}

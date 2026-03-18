/*
 * XREFs of scl_ComputeScaling @ 0x1C001B89C
 * Callers:
 *     scl_InitializeScaling @ 0x1C001B5AC (scl_InitializeScaling.c)
 *     scl_InitializeChildScaling @ 0x1C0152AA0 (scl_InitializeChildScaling.c)
 * Callees:
 *     mth_CountLowZeros @ 0x1C001B944 (mth_CountLowZeros.c)
 *     CompDiv @ 0x1C00F85F4 (CompDiv.c)
 */

__int64 __fastcall scl_ComputeScaling(_DWORD *a1, unsigned int a2, int a3)
{
  int v4; // eax
  int v5; // r10d
  int v6; // r11d
  unsigned int v7; // r10d
  int v8; // r11d
  int v9; // eax

  v4 = mth_CountLowZeros(a3 | a2) - 1;
  if ( v4 > 0 )
  {
    v6 >>= v4;
    v5 >>= v4;
  }
  if ( v6 >= 0x2000000 )
    v5 >>= 6;
  else
    v6 <<= 6;
  *a1 = CompDiv((unsigned int)v5, (__int64)v6 << 16);
  if ( v8 > 0x7FFF )
    return 3LL;
  if ( ((v7 - 1) & v7) != 0 || !v7 )
    v9 = -1;
  else
    v9 = mth_CountLowZeros(v7);
  a1[2] = v8;
  a1[1] = v7;
  if ( v9 < 0 )
    return 2LL;
  a1[3] = v9;
  return 1LL;
}

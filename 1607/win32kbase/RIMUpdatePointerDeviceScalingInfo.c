/*
 * XREFs of RIMUpdatePointerDeviceScalingInfo @ 0x1C000855C
 * Callers:
 *     RIMComputeVirtualDesktopPhysicalSize @ 0x1C0005CF4 (RIMComputeVirtualDesktopPhysicalSize.c)
 *     rimSetPointerDeviceDisplayConfig @ 0x1C00083A8 (rimSetPointerDeviceDisplayConfig.c)
 * Callees:
 *     rimConvertCoordinatesWithRounding @ 0x1C00D4454 (rimConvertCoordinatesWithRounding.c)
 */

__int64 __fastcall RIMUpdatePointerDeviceScalingInfo(
        __int64 a1,
        unsigned int *a2,
        __int64 a3,
        _DWORD *a4,
        __int64 a5,
        __int64 a6,
        _DWORD *a7,
        int *a8,
        __int64 a9)
{
  int v9; // r12d
  unsigned int v11; // r15d
  unsigned int v12; // r8d
  unsigned int v13; // edi
  unsigned int v14; // esi
  unsigned int v15; // r10d
  unsigned int v16; // ebp
  unsigned int v17; // r11d
  int v18; // eax
  int v19; // r8d
  int v20; // eax
  int v21; // ecx
  int v22; // edx
  int v23; // ecx
  __int64 result; // rax
  int v25; // eax

  v9 = *(_DWORD *)(a3 + 40);
  v11 = *(_DWORD *)(a3 + 44);
  if ( a4 )
    v12 = a4[4];
  else
    v12 = *a2;
  if ( a4 )
    v13 = a4[5];
  else
    v13 = a2[1];
  *a8 = v9;
  a8[1] = v11;
  if ( a4 )
  {
    v14 = a4[6];
    v15 = a4[8] - v14;
    v16 = a4[7];
    v17 = a4[9] - v16;
  }
  else
  {
    v14 = 0;
    v15 = v12;
    v16 = 0;
    v17 = v13;
  }
  v18 = *(_DWORD *)(a5 + 24);
  if ( v18 == 4 )
  {
    if ( (v9 << 14) / v11 < (v12 << 14) / v13 )
      v25 = (v9 << 14) / v12;
    else
      v25 = (v11 << 14) / v13;
    v15 = (v25 * v15) >> 14;
    v17 = (v25 * v17) >> 14;
    v14 = (v25 * v14) >> 14;
    v16 = (v25 * v16) >> 14;
    a8[3] = (v13 * v25) >> 14;
    a8[2] = (v12 * v25) >> 14;
  }
  else if ( v18 == 2 )
  {
    a8[2] = v12;
    a8[3] = v13;
  }
  else
  {
    a8[2] = v9;
    a8[3] = v11;
    v19 = (v9 << 14) / v12;
    v20 = (v11 << 14) / v13;
    v15 = (v19 * v15) >> 14;
    v17 = (v20 * v17) >> 14;
    v14 = (v19 * v14) >> 14;
    v16 = (v20 * v16) >> 14;
  }
  if ( a7 )
  {
    a8[4] = (a7[2] - *a7) * (abs32(v9 - a8[2]) + 2 * v14) / (2 * v9);
    a8[5] = (a7[3] - a7[1]) * (abs32(v11 - a8[3]) + 2 * v16) / (2 * v11);
  }
  a8[2] = v15;
  a8[3] = v17;
  if ( ((*(_DWORD *)(a5 + 20) - 2) & 0xFFFFFFFD) == 0 )
  {
    *a8 = v9 ^ v11;
    a8[1] ^= v9 ^ v11;
    *a8 ^= a8[1];
    a8[2] ^= v17;
    a8[3] ^= a8[2];
    a8[2] ^= a8[3];
    a8[4] ^= a8[5];
    a8[5] ^= a8[4];
    a8[4] ^= a8[5];
  }
  v21 = a8[2];
  if ( *a8 == v21 )
    *(_DWORD *)(a9 + 8) = *(_DWORD *)(a1 + 8);
  else
    rimConvertCoordinatesWithRounding(0, *a8, 0, *(_DWORD *)(a1 + 8), v21, a9 + 8);
  v22 = a8[1];
  v23 = a8[3];
  if ( v22 != v23 )
    return rimConvertCoordinatesWithRounding(0, v22, 0, *(_DWORD *)(a1 + 12), v23, a9 + 12);
  result = *(unsigned int *)(a1 + 12);
  *(_DWORD *)(a9 + 12) = result;
  return result;
}

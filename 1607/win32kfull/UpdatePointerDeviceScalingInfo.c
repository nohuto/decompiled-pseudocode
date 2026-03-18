/*
 * XREFs of UpdatePointerDeviceScalingInfo @ 0x1C01C8398
 * Callers:
 *     ?SetPointerDeviceDisplayConfig@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@HPEAUtagDISPLAY_PATH_INFO@@PEAUtagQDC_DATA@@@Z @ 0x1C01C629C (-SetPointerDeviceDisplayConfig@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@HPEAUtagDISPLAY_PATH_INFO@@PE.c)
 *     ComputeVirtualDesktopPhysicalSize @ 0x1C01D5FB0 (ComputeVirtualDesktopPhysicalSize.c)
 * Callees:
 *     ?ConvertCoordinatesWithRounding@@YAHJJJJJPEAJ@Z @ 0x1C01C29C8 (-ConvertCoordinatesWithRounding@@YAHJJJJJPEAJ@Z.c)
 */

__int64 __fastcall UpdatePointerDeviceScalingInfo(
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
  int v19; // eax
  int v20; // r8d
  int v21; // eax
  int v22; // ecx
  int v23; // edx
  int v24; // ecx
  __int64 result; // rax

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
      v19 = (v9 << 14) / v12;
    else
      v19 = (v11 << 14) / v13;
    v15 = (v19 * v15) >> 14;
    v17 = (v19 * v17) >> 14;
    v14 = (v19 * v14) >> 14;
    v16 = (v19 * v16) >> 14;
    a8[3] = (v13 * v19) >> 14;
    a8[2] = (v12 * v19) >> 14;
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
    v20 = (v9 << 14) / v12;
    v21 = (v11 << 14) / v13;
    v15 = (v20 * v15) >> 14;
    v17 = (v21 * v17) >> 14;
    v14 = (v20 * v14) >> 14;
    v16 = (v21 * v16) >> 14;
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
  v22 = a8[2];
  if ( *a8 == v22 )
    *(_DWORD *)(a9 + 8) = *(_DWORD *)(a1 + 8);
  else
    ConvertCoordinatesWithRounding(0, *a8, 0, *(_DWORD *)(a1 + 8), v22, (LONG *)(a9 + 8));
  v23 = a8[1];
  v24 = a8[3];
  if ( v23 != v24 )
    return ConvertCoordinatesWithRounding(0, v23, 0, *(_DWORD *)(a1 + 12), v24, (LONG *)(a9 + 12));
  result = *(unsigned int *)(a1 + 12);
  *(_DWORD *)(a9 + 12) = result;
  return result;
}

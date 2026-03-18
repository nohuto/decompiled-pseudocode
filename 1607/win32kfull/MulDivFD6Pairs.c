/*
 * XREFs of MulDivFD6Pairs @ 0x1C00F6104
 * Callers:
 *     HT_CreateDeviceHalftoneInfo @ 0x1C00F4C14 (HT_CreateDeviceHalftoneInfo.c)
 *     ComputeColorSpaceXForm @ 0x1C00F5218 (ComputeColorSpaceXForm.c)
 *     ComputeBGRMappingTable @ 0x1C024B268 (ComputeBGRMappingTable.c)
 * Callees:
 *     U64DivU32RoundUp @ 0x1C00F5F28 (U64DivU32RoundUp.c)
 */

__int64 __fastcall MulDivFD6Pairs(int *a1)
{
  int v1; // r14d
  int *v2; // rbx
  signed int v3; // r11d
  unsigned int v4; // r10d
  signed int v5; // r9d
  int v6; // ebp
  int v7; // esi
  BOOL v8; // r15d
  int v9; // eax
  int v10; // esi
  unsigned int v11; // r8d
  unsigned int v12; // edx
  int v13; // ebp
  unsigned int v14; // edi
  unsigned int v15; // eax
  unsigned int v16; // ecx
  int v17; // edi
  BOOL v18; // ebx
  unsigned int v19; // edx
  unsigned int v21; // r10d

  v1 = *(unsigned __int16 *)a1;
  v2 = a1;
  if ( !*(_WORD *)a1 )
    return 0LL;
  v3 = 0;
  if ( (*((_BYTE *)a1 + 2) & 1) != 0 )
  {
    v3 = a1[1];
    if ( v3 == 1000000 )
      v3 = 0;
  }
  v4 = 0;
  v5 = 0;
  do
  {
    v2 += 2;
    --v1;
    v6 = *v2;
    v7 = v2[1];
    if ( *v2 <= 0 )
    {
      v6 = -v6;
      v8 = 1;
      if ( !v6 )
        continue;
    }
    else
    {
      v8 = 0;
    }
    if ( v7 <= 0 )
    {
      v7 = -v7;
      if ( !v7 )
        continue;
      v8 = !v8;
    }
    v9 = (unsigned __int16)v7;
    v10 = v7 >> 16;
    v11 = v9 * (unsigned __int16)v6;
    v12 = (unsigned __int16)v6 * v10;
    v13 = v6 >> 16;
    v14 = (unsigned int)(v9 * v13) >> 16;
    v15 = (unsigned __int16)(v9 * v13) + HIWORD(v11) + (unsigned __int16)v12;
    v16 = (unsigned __int16)v11 | (v15 << 16);
    v17 = HIWORD(v15) + v13 * v10 + HIWORD(v12) + v14;
    if ( v8 )
    {
      v17 = ~v17;
      v16 = -v16;
      if ( !v16 )
        ++v17;
    }
    v4 += v16;
    if ( v4 < v16 )
      ++v5;
    v5 += v17;
  }
  while ( v1 );
  if ( v5 < 0 )
  {
    v18 = 1;
    v5 = ~v5;
    v4 = -v4;
    if ( !v4 )
      ++v5;
  }
  else
  {
    v18 = 0;
  }
  if ( v3 )
  {
    if ( v3 < 0 )
    {
      v3 = -v3;
      v18 = !v18;
    }
    v19 = U64DivU32RoundUp(v5, v4, v3);
  }
  else
  {
    v21 = v4 + 500000;
    if ( v21 < 0x7A120 )
      ++v5;
    v19 = ((((v5 << 12) | (v21 >> 20)) / 0xF424) << 16) | (((unsigned __int16)(v21 >> 4) | ((((v5 << 12) | (v21 >> 20))
                                                                                           + 3036
                                                                                           * (((v5 << 12) | (v21 >> 20))
                                                                                            / 0xF424)) << 16))
                                                         / 0xF424);
  }
  if ( v18 )
    return -v19;
  return v19;
}

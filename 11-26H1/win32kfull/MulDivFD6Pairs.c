/*
 * XREFs of MulDivFD6Pairs @ 0x140147938
 * Callers:
 *     ComputeColorSpaceXForm @ 0x14014758C (ComputeColorSpaceXForm.c)
 *     HT_CreateDeviceHalftoneInfo @ 0x14017F0FC (HT_CreateDeviceHalftoneInfo.c)
 *     ComputeBGRMappingTable @ 0x140304568 (ComputeBGRMappingTable.c)
 * Callees:
 *     U64DivU32RoundUp @ 0x140146DC0 (U64DivU32RoundUp.c)
 */

__int64 __fastcall MulDivFD6Pairs(unsigned __int16 *a1)
{
  int v1; // r15d
  BOOL v2; // edi
  signed int v3; // ebx
  unsigned int v4; // esi
  int *v5; // r12
  signed int v6; // r9d
  int v7; // r14d
  int v8; // r11d
  signed int v9; // r13d
  int v10; // ebp
  int v11; // eax
  int v12; // r11d
  unsigned int v13; // r8d
  unsigned int v14; // r9d
  int v15; // r14d
  unsigned int v16; // r10d
  unsigned int v17; // eax
  int v18; // r11d
  unsigned int v19; // ecx
  signed int v20; // r9d
  unsigned int v21; // edx
  __int64 result; // rax
  signed int v23; // ecx

  v1 = *a1;
  if ( !*a1 )
    return 0LL;
  v2 = 1;
  v3 = 0;
  if ( (a1[1] & 1) != 0 )
  {
    v3 = *((_DWORD *)a1 + 1);
    if ( v3 == 1000000 )
      v3 = 0;
  }
  v4 = 0;
  v5 = (int *)(a1 + 2);
  v6 = 0;
  do
  {
    v7 = v5[1];
    v5 += 2;
    v8 = *v5;
    --v1;
    v9 = v6;
    if ( v7 <= 0 )
    {
      v7 = -v7;
      v10 = 1;
      if ( !v7 )
        continue;
    }
    else
    {
      v10 = 0;
    }
    if ( v8 <= 0 )
    {
      v8 = -v8;
      if ( !v8 )
        continue;
      v10 ^= 1u;
    }
    v11 = (unsigned __int16)v8;
    v12 = v8 >> 16;
    v13 = (unsigned __int16)v7 * v12;
    v14 = (unsigned __int16)v7 * v11;
    v15 = v7 >> 16;
    v16 = (unsigned int)(v11 * v15) >> 16;
    v17 = HIWORD(v14) + (unsigned __int16)(v11 * v15) + (unsigned __int16)v13;
    v18 = HIWORD(v17) + v16 + HIWORD(v13) + v15 * v12;
    v19 = (v17 << 16) | (unsigned __int16)v14;
    if ( v10 )
    {
      v19 = -v19;
      v18 = ~v18;
      if ( !v19 )
        ++v18;
    }
    v4 += v19;
    v20 = v9 + 1;
    if ( v4 >= v19 )
      v20 = v9;
    v6 = v18 + v20;
  }
  while ( v1 );
  if ( v6 < 0 )
  {
    v4 = -v4;
    v6 = ~v6;
    if ( !v4 )
      ++v6;
  }
  else
  {
    v2 = 0;
  }
  if ( v3 )
  {
    if ( v3 < 0 )
    {
      v3 = -v3;
      v2 = !v2;
    }
    v21 = U64DivU32RoundUp(v6, v4, v3);
  }
  else
  {
    v23 = v6 + 1;
    if ( v4 < 0xFFF85EE0 )
      v23 = v6;
    v21 = (((((v4 + 500000) >> 20) | (v23 << 12)) / 0xF424) << 16) | (((unsigned __int16)((v4 + 500000) >> 4) | (((((v4 + 500000) >> 20) | (v23 << 12)) + 3036 * ((((v4 + 500000) >> 20) | (v23 << 12)) / 0xF424)) << 16))
                                                                    / 0xF424);
  }
  result = -v21;
  if ( !v2 )
    return v21;
  return result;
}

/*
 * XREFs of RIMComputeHighMetricValue @ 0x1C0074FCC
 * Callers:
 *     RIMCreatePointerDeviceInfo @ 0x1C0073F6C (RIMCreatePointerDeviceInfo.c)
 *     RIMPopulatePointerDevice @ 0x1C00C304C (RIMPopulatePointerDevice.c)
 *     RIMIDESetPTPPhysicalSize @ 0x1C00C6A70 (RIMIDESetPTPPhysicalSize.c)
 * Callees:
 *     RIMComputePower @ 0x1C0075070 (RIMComputePower.c)
 */

__int64 __fastcall RIMComputeHighMetricValue(__int64 a1)
{
  char v1; // dl
  unsigned int v3; // r10d
  unsigned __int16 v4; // bx
  unsigned int v5; // ecx
  unsigned __int16 *v6; // rax
  __int64 v7; // rax
  int v8; // edx
  unsigned int v9; // eax
  __int64 v10; // r11
  __int16 v11; // r9

  v1 = *(_BYTE *)(a1 + 32) & 0xF;
  v3 = 0;
  v4 = 1000;
  v5 = 0;
  v6 = word_1C00EA650;
  do
  {
    if ( *(_BYTE *)v6 == v1 )
      break;
    ++v5;
    v6 += 2;
  }
  while ( v5 < 0xB );
  v7 = *(_DWORD *)(a1 + 36) & 0xF;
  if ( (unsigned int)v7 < 5 )
  {
    v8 = dword_1C00EA680[v7];
    if ( (unsigned int)(v8 - 1) <= 1 )
    {
      if ( v8 == 1 )
        v4 = 2540;
      if ( v5 < 0xB )
      {
        v9 = RIMComputePower(word_1C00EA650[2 * v5 + 1]);
        if ( v11 >= 0 )
        {
          return v9 * v4 * (*(_DWORD *)(v10 + 52) - *(_DWORD *)(v10 + 48));
        }
        else if ( v9 )
        {
          return (*(_DWORD *)(v10 + 52) - *(_DWORD *)(v10 + 48)) * (unsigned int)v4 / v9;
        }
      }
    }
  }
  return v3;
}

/*
 * XREFs of RIMComputeSpecificHighMetricValue @ 0x1C007C4F8
 * Callers:
 *     RIMCreatePointerDeviceInfo @ 0x1C0008C38 (RIMCreatePointerDeviceInfo.c)
 *     RIMPopulatePointerDevice @ 0x1C00D278C (RIMPopulatePointerDevice.c)
 *     RIMIDESetPTPPhysicalSize @ 0x1C00D7068 (RIMIDESetPTPPhysicalSize.c)
 *     RIMExtractCustomPTPSetting @ 0x1C00E2064 (RIMExtractCustomPTPSetting.c)
 * Callees:
 *     RIMComputePower @ 0x1C007C5BC (RIMComputePower.c)
 */

__int64 __fastcall RIMComputeSpecificHighMetricValue(int a1, __int64 a2)
{
  unsigned int v3; // ecx
  unsigned __int16 v4; // bx
  unsigned int v5; // r10d
  unsigned __int16 *v6; // rax
  __int64 v7; // rax
  int v8; // edx
  unsigned int v9; // eax
  int v10; // r11d
  __int16 v11; // r9
  bool v13; // di

  v3 = 0;
  v4 = 1000;
  v5 = 0;
  v13 = a1 < 0;
  v6 = word_1C0102390;
  do
  {
    if ( *(_BYTE *)v6 == (*(_BYTE *)(a2 + 32) & 0xF) )
      break;
    ++v3;
    v6 += 2;
  }
  while ( v3 < 0xB );
  v7 = *(_DWORD *)(a2 + 36) & 0xF;
  if ( (unsigned int)v7 < 5 )
  {
    v8 = dword_1C01023C0[v7];
    if ( (unsigned int)(v8 - 1) <= 1 )
    {
      if ( v8 == 1 )
        v4 = 2540;
      if ( v3 < 0xB )
      {
        v9 = RIMComputePower(word_1C0102390[2 * v3 + 1]);
        if ( v11 >= 0 )
        {
          v5 = v10 * v9 * v4;
        }
        else if ( v9 )
        {
          v5 = v10 * (unsigned int)v4 / v9;
        }
      }
    }
  }
  if ( v13 )
    return -v5;
  return v5;
}

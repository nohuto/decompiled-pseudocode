/*
 * XREFs of ?EDID_V1_PopulateSupportedMonitorSourceModesFromEstablishedTimingsBlock@@YAJPEBT_EDID_V1_ESTABLISHED_TIMING@@GG_KW4__WMI_MONITOR_CAPABILITY_ORIGIN_TYPE@@PEAU_VideoModeDescriptor@@@Z @ 0x1C000F944
 * Callers:
 *     EDIDV1_ObtainSupportedMonitorSourceModes @ 0x1C000EBBC (EDIDV1_ObtainSupportedMonitorSourceModes.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EDID_V1_PopulateSupportedMonitorSourceModesFromEstablishedTimingsBlock(
        unsigned __int8 *a1,
        __int16 a2,
        __int16 a3,
        unsigned __int64 a4,
        char a5,
        __int64 a6)
{
  unsigned __int16 v7; // r11
  unsigned __int16 v8; // bx
  unsigned int v9; // r10d
  __int64 v10; // rdx
  __int64 v11; // rcx

  v7 = 0;
  v8 = 0;
  v9 = (a1[2] >> 7) | (2 * (a1[1] | (*a1 << 8)));
  if ( !v9 )
    return 0LL;
  do
  {
    if ( v7 >= a4 )
      break;
    if ( (v9 & 1) != 0 )
    {
      v10 = 56LL * v7;
      v11 = 56LL * v8;
      ++v7;
      *(_OWORD *)(v10 + a6) = *(_OWORD *)((char *)&unk_1C002F7B0 + v11);
      *(_OWORD *)(v10 + a6 + 16) = *(_OWORD *)((char *)&unk_1C002F7B0 + v11 + 16);
      *(_OWORD *)(v10 + a6 + 32) = *(_OWORD *)((char *)&unk_1C002F7B0 + v11 + 32);
      *(_QWORD *)(v10 + a6 + 48) = *(_QWORD *)((char *)&unk_1C002F7B0 + v11 + 48);
      *(_WORD *)(v10 + a6 + 36) = a2;
      *(_WORD *)(v10 + a6 + 38) = a3;
      *(_BYTE *)(v10 + a6 + 53) = a5;
    }
    ++v8;
    v9 >>= 1;
  }
  while ( v9 );
  if ( v9 && v7 == a4 )
    return 2147483653LL;
  else
    return 0LL;
}

/*
 * XREFs of Controller_PopulateDeviceFlags @ 0x1C004B06C
 * Callers:
 *     Controller_Create @ 0x1C004AA30 (Controller_Create.c)
 * Callees:
 *     Controller_PopulateDeviceFlagsFromKse @ 0x1C00076D0 (Controller_PopulateDeviceFlagsFromKse.c)
 *     WPP_RECORDER_SF_dx @ 0x1C0020750 (WPP_RECORDER_SF_dx.c)
 *     Controller_PopulateDeviceFlagsFromRegistry @ 0x1C004B1A8 (Controller_PopulateDeviceFlagsFromRegistry.c)
 *     Controller_PopulateRegistryOverrideForSetMultiTTBitFlag @ 0x1C004DCC4 (Controller_PopulateRegistryOverrideForSetMultiTTBitFlag.c)
 */

__int16 __fastcall Controller_PopulateDeviceFlags(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rdi
  __int64 v5; // r8
  unsigned int i; // esi
  __int16 v7; // cx
  __int16 v8; // ax
  __int64 v9; // rax
  __int16 result; // ax
  int v11; // [rsp+20h] [rbp-28h]

  v3 = a1 + 232;
  *(_QWORD *)(a1 + 232) = 0LL;
  *(_QWORD *)(a1 + 240) = 0LL;
  *(_QWORD *)(a1 + 232) |= 4uLL;
  Controller_PopulateDeviceFlagsFromKse(a1, a2, a3);
  Controller_PopulateDeviceFlagsFromRegistry(a1, 2LL);
  Controller_PopulateDeviceFlagsFromRegistry(a1, 1LL);
  Controller_PopulateRegistryOverrideForSetMultiTTBitFlag(a1);
  for ( i = 0; i < 2; ++i )
  {
    WPP_RECORDER_SF_dx(*(_QWORD *)(a1 + 64), 4u, v5, 0xA4u, v11);
    v3 += 8LL;
  }
  *(_QWORD *)(a1 + 248) = 0LL;
  v7 = *(_WORD *)(a1 + 152);
  if ( v7 == 7027 )
  {
    v8 = *(_WORD *)(a1 + 156);
    if ( v8 == 4105 )
    {
      *(_QWORD *)(a1 + 248) = 2LL;
    }
    else if ( v8 == 4352 )
    {
      v9 = *(_QWORD *)(a1 + 248);
      if ( *(_BYTE *)(a1 + 160) == 16 )
        v9 = 1LL;
      *(_QWORD *)(a1 + 248) = v9;
    }
  }
  if ( v7 == 7023 && *(_WORD *)(a1 + 156) == 28707 )
    *(_QWORD *)(a1 + 248) |= 0xCuLL;
  result = 6945;
  if ( v7 == 6945 )
  {
    result = *(_WORD *)(a1 + 156) - 4160;
    if ( (unsigned __int16)result <= 2u )
      *(_QWORD *)(a1 + 248) |= 0x10uLL;
  }
  return result;
}

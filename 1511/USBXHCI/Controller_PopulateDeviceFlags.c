/*
 * XREFs of Controller_PopulateDeviceFlags @ 0x1C004BC9C
 * Callers:
 *     Controller_Create @ 0x1C004BE90 (Controller_Create.c)
 * Callees:
 *     Controller_PopulateDeviceFlagsFromKse @ 0x1C0008A30 (Controller_PopulateDeviceFlagsFromKse.c)
 *     WPP_RECORDER_SF_x @ 0x1C0008F9C (WPP_RECORDER_SF_x.c)
 *     Controller_PopulateDeviceFlagsFromRegistry @ 0x1C004BD50 (Controller_PopulateDeviceFlagsFromRegistry.c)
 */

__int16 __fastcall Controller_PopulateDeviceFlags(__int64 a1, __int64 a2, __int64 a3)
{
  __int16 v4; // cx
  __int16 result; // ax
  __int16 v6; // ax
  __int64 v7; // rax

  *(_QWORD *)(a1 + 232) = 4LL;
  Controller_PopulateDeviceFlagsFromKse(a1, a2, a3);
  Controller_PopulateDeviceFlagsFromRegistry(a1, 2LL);
  Controller_PopulateDeviceFlagsFromRegistry(a1, 1LL);
  WPP_RECORDER_SF_x(
    *(_QWORD *)(a1 + 64),
    4u,
    3u,
    0xA1u,
    (__int64)&WPP_a6e1c58309a3d9966a339d413262311d_Traceguids,
    *(_QWORD *)(a1 + 232));
  v4 = *(_WORD *)(a1 + 152);
  *(_QWORD *)(a1 + 240) = 0LL;
  if ( v4 == 7027 )
  {
    v6 = *(_WORD *)(a1 + 156);
    if ( v6 == 4105 )
    {
      *(_QWORD *)(a1 + 240) = 2LL;
    }
    else if ( v6 == 4352 )
    {
      v7 = *(_QWORD *)(a1 + 240);
      if ( *(_BYTE *)(a1 + 160) == 16 )
        v7 = 1LL;
      *(_QWORD *)(a1 + 240) = v7;
    }
  }
  if ( v4 == 7023 && *(_WORD *)(a1 + 156) == 28707 )
    *(_QWORD *)(a1 + 240) |= 0xCuLL;
  result = 6945;
  if ( v4 == 6945 )
  {
    result = *(_WORD *)(a1 + 156) - 4160;
    if ( (unsigned __int16)result <= 2u )
      *(_QWORD *)(a1 + 240) |= 0x10uLL;
  }
  return result;
}

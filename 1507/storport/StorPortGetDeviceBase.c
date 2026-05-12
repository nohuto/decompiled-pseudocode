/*
 * XREFs of StorPortGetDeviceBase @ 0x1C00084C0
 * Callers:
 *     StorPortGetDeviceBaseVrfy @ 0x1C00561A0 (StorPortGetDeviceBaseVrfy.c)
 * Callees:
 *     RaidAllocateAddressMapping @ 0x1C0008570 (RaidAllocateAddressMapping.c)
 *     RaidTranslateResourceListAddress @ 0x1C0008600 (RaidTranslateResourceListAddress.c)
 *     WPP_SF_xs @ 0x1C002A498 (WPP_SF_xs.c)
 */

__int64 __fastcall StorPortGetDeviceBase(__int64 a1, int a2, int a3, int a4, unsigned int a5, char a6)
{
  __int64 v8; // rsi
  int v9; // r8d
  __int64 v10; // rax
  __int64 v11; // rbx
  const char *v13; // rax
  __int64 v14; // [rsp+60h] [rbp+8h]

  v8 = **(_QWORD **)(a1 - 16);
  if ( (int)RaidTranslateResourceListAddress((int)v8 + 280, a2, a3, a4, a5) < 0 )
  {
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
    {
      v13 = "Io";
      if ( !a6 )
        v13 = "Memory";
      WPP_SF_xs(WPP_GLOBAL_Control->AttachedDevice, (unsigned int)"Memory", v9, a4, (__int64)v13);
    }
  }
  else
  {
    if ( a6 )
      return v14;
    v10 = MmMapIoSpaceEx(v14, a5, 516LL);
    v11 = v10;
    if ( !v10 || (int)RaidAllocateAddressMapping((int)v8 + 760, a4, v10, a5, a3, *(_QWORD *)(v8 + 8)) >= 0 )
      return v11;
  }
  return 0LL;
}

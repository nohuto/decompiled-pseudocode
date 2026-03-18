/*
 * XREFs of RIMAddInputOfType @ 0x1C00C1DA0
 * Callers:
 *     <none>
 * Callees:
 *     RIMDiscoverDevicesOfInputType @ 0x1C00072B4 (RIMDiscoverDevicesOfInputType.c)
 *     RawInputManagerObjectResolveHandle @ 0x1C00115F0 (RawInputManagerObjectResolveHandle.c)
 *     WPP_RECORDER_SF_D @ 0x1C004695C (WPP_RECORDER_SF_D.c)
 *     RIMUnlockExclusive @ 0x1C0046AD0 (RIMUnlockExclusive.c)
 *     RIMLockExclusive @ 0x1C0046AF0 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_ @ 0x1C0046B20 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall RIMAddInputOfType(void *a1, int a2)
{
  int v4; // esi
  PDRIVER_OBJECT *v5; // rbx
  int v6; // eax
  unsigned __int16 v7; // r9
  int v9; // [rsp+28h] [rbp-20h]
  PVOID Object; // [rsp+60h] [rbp+18h] BYREF

  WPP_RECORDER_SF_(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    4u,
    0x19u,
    (__int64)&WPP_b7afe0d2946a99936bddfefe20d700ac_Traceguids);
  v4 = RawInputManagerObjectResolveHandle(a1, 3u, 1, &Object);
  if ( v4 >= 0 )
  {
    v5 = (PDRIVER_OBJECT *)Object;
    RIMLockExclusive((__int64)Object + 96);
    if ( *((_BYTE *)v5 + 73) || *((_BYTE *)v5 + 74) )
    {
      v4 = -1073741637;
      v7 = 28;
    }
    else if ( a2 && ((a2 - 1) & a2) == 0 || (a2 & 0x1C) != 0 )
    {
      v6 = *((_DWORD *)v5 + 19);
      if ( (v6 & a2) == 0 )
      {
        *((_DWORD *)v5 + 19) = a2 | v6;
        RIMDiscoverDevicesOfInputType(v5);
LABEL_13:
        RIMUnlockExclusive((__int64)(v5 + 12));
        ObfDereferenceObject(v5);
        goto LABEL_14;
      }
      v4 = -1073741637;
      v7 = 26;
    }
    else
    {
      v4 = -1073741811;
      v7 = 27;
    }
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      3u,
      3u,
      v7,
      (__int64)&WPP_b7afe0d2946a99936bddfefe20d700ac_Traceguids);
    goto LABEL_13;
  }
LABEL_14:
  v9 = v4;
  WPP_RECORDER_SF_D(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    4u,
    0x1Du,
    (__int64)&WPP_b7afe0d2946a99936bddfefe20d700ac_Traceguids,
    v9);
  return (unsigned int)v4;
}

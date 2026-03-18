/*
 * XREFs of RIMRefreshDeviceAttributes @ 0x1C0087980
 * Callers:
 *     <none>
 * Callees:
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1C0010E70 (RawInputManagerDeviceObjectResolveHandle.c)
 *     RawInputManagerObjectResolveHandle @ 0x1C00115F0 (RawInputManagerObjectResolveHandle.c)
 *     WPP_RECORDER_SF_D @ 0x1C004695C (WPP_RECORDER_SF_D.c)
 *     RIMUnlockExclusive @ 0x1C0046AD0 (RIMUnlockExclusive.c)
 *     RIMLockExclusive @ 0x1C0046AF0 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_ @ 0x1C0046B20 (WPP_RECORDER_SF_.c)
 *     RIMQueryDev @ 0x1C007CA1C (RIMQueryDev.c)
 */

__int64 __fastcall RIMRefreshDeviceAttributes(void *a1, void *a2)
{
  int v4; // eax
  char *v5; // rbx
  int v6; // edi
  _BYTE *v7; // rsi
  PVOID v8; // rbp
  int v10; // [rsp+28h] [rbp-30h]
  PVOID Object; // [rsp+70h] [rbp+18h] BYREF

  WPP_RECORDER_SF_(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    4u,
    0x63u,
    (__int64)&WPP_b7afe0d2946a99936bddfefe20d700ac_Traceguids);
  v4 = RawInputManagerObjectResolveHandle(a1, 3u, 1, &Object);
  v5 = 0LL;
  v6 = v4;
  if ( v4 >= 0 )
  {
    v7 = Object;
    RIMLockExclusive((__int64)Object + 96);
    RIMLockExclusive((__int64)(v7 + 744));
    if ( v7[73] || v7[74] )
    {
      v6 = -1073741637;
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        3u,
        0x64u,
        (__int64)&WPP_b7afe0d2946a99936bddfefe20d700ac_Traceguids);
    }
    else
    {
      v6 = RawInputManagerDeviceObjectResolveHandle(a2, 3u, 1, &Object);
      if ( v6 >= 0 )
      {
        v8 = Object;
        if ( Object )
          v5 = (char *)Object + 64;
        if ( v5[48] == 2 )
          v6 = -1073741811;
        else
          v6 = RIMQueryDev((__int64)v7, (__int64)v5);
        ObfDereferenceObject(v8);
      }
    }
    RIMUnlockExclusive((__int64)(v7 + 744));
    RIMUnlockExclusive((__int64)(v7 + 96));
    ObfDereferenceObject(v7);
  }
  v10 = v6;
  WPP_RECORDER_SF_D(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    4u,
    0x65u,
    (__int64)&WPP_b7afe0d2946a99936bddfefe20d700ac_Traceguids,
    v10);
  return (unsigned int)v6;
}

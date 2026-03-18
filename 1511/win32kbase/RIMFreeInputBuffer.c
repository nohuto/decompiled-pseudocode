/*
 * XREFs of RIMFreeInputBuffer @ 0x1C00C2080
 * Callers:
 *     <none>
 * Callees:
 *     RawInputManagerObjectResolveHandle @ 0x1C00115F0 (RawInputManagerObjectResolveHandle.c)
 *     WPP_RECORDER_SF_D @ 0x1C004695C (WPP_RECORDER_SF_D.c)
 *     RIMUnlockExclusive @ 0x1C0046AD0 (RIMUnlockExclusive.c)
 *     RIMLockExclusive @ 0x1C0046AF0 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_ @ 0x1C0046B20 (WPP_RECORDER_SF_.c)
 *     RIMFreeUserMem @ 0x1C00C3BF0 (RIMFreeUserMem.c)
 */

__int64 __fastcall RIMFreeInputBuffer(void *a1, __int64 a2)
{
  int v4; // ebp
  _BYTE *v5; // rdi
  int v7; // [rsp+28h] [rbp-20h]
  PVOID Object; // [rsp+60h] [rbp+18h] BYREF

  WPP_RECORDER_SF_(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    4u,
    0x53u,
    (__int64)&WPP_b7afe0d2946a99936bddfefe20d700ac_Traceguids);
  v4 = RawInputManagerObjectResolveHandle(a1, 3u, 1, &Object);
  if ( v4 >= 0 )
  {
    v5 = Object;
    RIMLockExclusive((__int64)Object + 96);
    if ( v5[73] || v5[74] )
    {
      v4 = -1073741637;
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        3u,
        0x54u,
        (__int64)&WPP_b7afe0d2946a99936bddfefe20d700ac_Traceguids);
    }
    else
    {
      RIMLockExclusive((__int64)(v5 + 744));
      RIMFreeUserMem(v5, a2);
      RIMUnlockExclusive((__int64)(v5 + 744));
    }
    RIMUnlockExclusive((__int64)(v5 + 96));
    ObfDereferenceObject(v5);
  }
  v7 = v4;
  return WPP_RECORDER_SF_D(
           (__int64)WPP_GLOBAL_Control->DeviceExtension,
           3u,
           4u,
           0x55u,
           (__int64)&WPP_b7afe0d2946a99936bddfefe20d700ac_Traceguids,
           v7);
}
